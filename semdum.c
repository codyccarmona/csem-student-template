# include <stdio.h>
# include "cc.h"
# include "semutil.h"
# include "sem.h"
# include "sym.h"

#define MAXLINES 80
#define DEBUG 0

static char quadbuf[4096];                    

extern int  formalnum;                          /* number of formal arguments */
extern char formaltypes[MAXLINES];              /* types of formal arguments  */
extern char formalnames[MAXLINES][MAXLINES];    /* names of formal arguments  */
extern int  localnum;                           /* number of local variables  */
extern char localtypes[MAXLINES];               /* types of local variables   */
extern char localnames[MAXLINES][MAXLINES];     /* names of local variables   */
extern int  localwidths[MAXLINES];              /* widths of local variables  */

int labelnum = 0;
int branchnum = 0;
int branches[MAXLINES];

int currbranch(){
   return branchnum;
}

int nextbranch(){
   branchnum++;
   return branchnum;
}

void called(char *f){
   if(DEBUG == 0)
      return;

   printf("\n==%s called==\n", f);
}

/*
 * backpatch - backpatch list of quadruples starting at p with k
 */
void backpatch(struct sem_rec *p, int k)
{
   called("backpatch");
   printf("B%d=L%d\n", p->s_place, k);
}

/*
 * bgnstmt - encountered the beginning of a statement
 */
void bgnstmt()
{
   called("bgnstmt");

   extern int lineno;
   static int lastline = 0;

   char c = getchar();
   ungetc(c, stdin);

   if(lineno != lastline){
      if(c == '\n')
         lastline = lineno + 1;
      else
         lastline = lineno;
      printf("bgnstmt %d\n", lastline);
   }
   else if(c == '\n'){
      printf("bgnstmt %d\n", ++lastline);
   }

   
}

/*
 * call - procedure invocation
 */
struct sem_rec *call(char *f, struct sem_rec *args)
{
   called("call");
   int argcount = 0, buflen = 0, globnum = nexttemp(), callnum = nexttemp(), mode = 0;
   char type;
   struct id_entry *p;

   for(struct sem_rec *r = args; r; r = r->back.s_link){
      argcount++;
      type = tsize(r->s_mode) == 8 ? 'f' : 'i';
      printf("arg%c t%d\n", type, r->s_place);
      buflen += sprintf(quadbuf + buflen, " t%d", r->s_place);
   }

   
   if((p = lookup(f, 0)) == NULL){
      mode = T_INT;
   }
   else{
      mode = p->i_type;
   }

   type = mode == T_DOUBLE ? 'f' : 'i';

   printf("t%d := global %s\n", globnum, f);

   if(argcount == 0)
      printf("t%d := f%c t%d %d\n", callnum, type, globnum, argcount);
   else
      printf("t%d := f%c t%d %d%s\n", callnum, type, globnum, argcount, quadbuf);
      
   return (node(callnum, mode, 0, 0));
}

/*
 * ccand - logical and
 */
struct sem_rec *ccand(struct sem_rec *e1, int m, struct sem_rec *e2)
{
   fprintf(stderr, "sem: ccand not implemented\n");
   return ((struct sem_rec *) NULL);
}

/*
 * ccexpr - convert arithmetic expression to logical expression
 */
struct sem_rec *ccexpr(struct sem_rec *e)
{
   called("ccexpr");
   return (rel("!=", e, (con("0"))));
}

/*
 * ccnot - logical not
 */
struct sem_rec *ccnot(struct sem_rec *e)
{
   fprintf(stderr, "sem: ccnot not implemented\n");
   return ((struct sem_rec *) NULL);
}

/*
 * ccor - logical or
 */
struct sem_rec *ccor(struct sem_rec *e1, int m, struct sem_rec *e2)
{
   fprintf(stderr, "sem: ccor not implemented\n");
   return ((struct sem_rec *) NULL);
}

/*
 * con - constant reference in an expression
 */
struct sem_rec *con(char *x)
{  
   called("con");
   printf("t%d := %s\n", nexttemp(), x);
   return (node(currtemp(), T_INT, NULL, NULL));
}

/*
 * dobreak - break statement
 */
void dobreak()
{
   fprintf(stderr, "sem: dobreak not implemented\n");
}

/*
 * docontinue - continue statement
 */
void docontinue()
{
   fprintf(stderr, "sem: docontinue not implemented\n");
}

/*
 * dodo - do statement
 */
void dodo(int m1, int m2, struct sem_rec *e, int m3)
{
   fprintf(stderr, "sem: dodo not implemented\n");
}

/*
 * dofor - for statement
 */
void dofor(int m1, struct sem_rec *e2, int m2, struct sem_rec *n1,
           int m3, struct sem_rec *n2, int m4)
{
   called("dofor");
   backpatch(e2, m3);
   backpatch(e2->s_false, m4);
   backpatch(n1, m1);
   backpatch(n2, m2);
}

/*
 * dogoto - goto statement
 */
void dogoto(char *id)
{
   fprintf(stderr, "sem: dogoto not implemented\n");
}

/*
 * doif - one-arm if statement
 */
void doif(struct sem_rec *e, int m1, int m2)
{  
   called("doif");

   while(e){
      if(e->s_mode != T_LBL){
         e = e->back.s_link;
         continue;
      }
      backpatch(e, m1);
      backpatch(e->s_false, m2);
      e = e->back.s_link;
   }
}

/*
 * doifelse - if then else statement
 */
void doifelse(struct sem_rec *e, int m1, struct sem_rec *n,
                         int m2, int m3)
{
   called("doifelse");

   backpatch(e, m1);
   backpatch(e->s_false, m2);
   backpatch(n, m3);
}

/*
 * doret - return statement
 */
void doret(struct sem_rec *e)
{
   char type = tsize(e->s_mode) == 4 ? 'i' : 'f';
   printf("ret%c t%d\n", type, e->s_place);   
}

/*
 * dowhile - while statement
 */
void dowhile(int m1, struct sem_rec *e, int m2, struct sem_rec *n,
             int m3)
{
   called("dowhile");

   backpatch(e, m2);
   backpatch(e->s_false, m3);
   backpatch(n, m1);
}

/*
 * endloopscope - end the scope for a loop
 */
void endloopscope(int m)
{
   fprintf(stderr, "sem: endloopscope not implemented\n");
}

/*
 * exprs - form a list of expressions
 */
struct sem_rec *exprs(struct sem_rec *l, struct sem_rec *e)
{
   called("exprs");
   return (merge(l, e));
}

/*
 * fhead - beginning of function body
 */
void fhead(struct id_entry *p)
{
   printf("func %s %d\n", p->i_name, p->i_type);
   
   for(int i = 0; i < formalnum; i++){
      int type = formaltypes[i] == 'i' ? T_INT : T_DOUBLE;
      int width = type == T_INT ? 4 : 8;
      printf("formal %s %d %d\n", formalnames[i], type, width);
   }

   for(int i = 0; i < localnum; i++){
      int type = localtypes[i] == 'i' ? T_INT : T_DOUBLE;
      if(localwidths[i] > 1){
         type |= T_ARRAY;
      }
      int width = type == (type & T_INT) ? 4 * localwidths[i] : 8 * localwidths[i];
      printf("localloc %s %d %d\n", localnames[i], type, width);
   }
}

/*
 * fname - function declaration
 */
struct id_entry *fname(int t, char *id)
{
   called("fname");

   struct id_entry *p;

   if((p = lookup(id, 0)) == NULL){
      p = install(id, 0);
   }
   else if(p->i_defined){
      yyerror("procedure is previously defined");
   }
   else if(p->i_type != t){
      yyerror("procedure type does not match");
   }

   p->i_type = t;
   p->i_scope = GLOBAL;
   p->i_defined = 1;
   localnum = formalnum = 0;
   enterblock();
   return p;
}

/*
 * ftail - end of function body
 */
void ftail()
{
   fprintf(stdout, "fend\n");
   leaveblock();
}

/*
 * id - variable reference
 */
struct sem_rec *id(char *x)
{
   called("id");

   struct id_entry *p;
   int quadnum = nexttemp();

   if((p = lookup(x, 0)) == NULL){
      yyerror("undeclared identifier");
      p = install(x, -1);
      p->i_type = T_INT;
   }
   if(p->i_scope == GLOBAL){
      printf("t%d := global %s\n", quadnum, x);
   }
   else if(p->i_scope == PARAM){
      printf("t%d := param %s %d\n", quadnum, x, p->i_offset);
   }
   else if(p->i_scope == LOCAL){
      printf("t%d := local %s %d\n", quadnum, x, p->i_offset);
   }
   return (node(quadnum, p->i_type|T_ADDR, NULL, NULL));
}

/*
 * sindex - subscript
 */
struct sem_rec *sindex(struct sem_rec *x, struct sem_rec *i)
{
   called("sindex");

   char type;

   if(i->s_mode != T_INT)
      i = op1("cv", i);

   type = tsize(x->s_mode) == 8 ? 'f' : 'i';

   printf("t%d := t%d []%c t%d\n", nexttemp(), x->s_place, type, i->s_place);

   return ((node(currtemp(), x->s_mode, 0, 0)));
}

/*
 * labeldcl - process a label declaration
 */
void labeldcl(char *id)
{
   /* you may assume the maximum number of C label declarations is 50 */
   fprintf(stderr, "sem: labeldcl not implemented\n");
}

/*
 * m - generate label and return next temporary number
 */
int m()
{
   static int lastline = 0;
   extern int lineno;
   
   printf("label L%d\n", ++labelnum);
   return labelnum;

   char c = getchar();
   ungetc(c, stdin);

   if(lastline != lineno){
      printf("label L%d\n", ++labelnum);
      lastline = lineno;
   }
   else if(c == '\n'){
      printf("label L%d\n", ++labelnum);
   }

   return labelnum;
}

/*
 * n - generate goto and return backpatch pointer
 */
struct sem_rec *n()
{
   printf("br B%d\n", nextbranch());
   return (node(currbranch(), T_LBL, NULL, NULL));
}

/*
 * op1 - unary operators
 */
struct sem_rec *op1(char *op, struct sem_rec *y)
{   
   called("op1");

   if(*op == '@'){
      y->s_mode &= ~T_ADDR;
   }
   
   if(op == "cv"){
      if(tsize(y->s_mode) == 0){
         y->s_mode &= ~T_ARRAY;
         y->s_mode = (y->s_mode == T_DOUBLE) ? T_INT : T_DOUBLE;
         y->s_mode |= T_ARRAY;
      }
      else{
         y->s_mode = (y->s_mode == T_DOUBLE) ? T_INT : T_DOUBLE;
      }
   }
   
   char type = y->s_mode == T_DOUBLE ? 'f' : 'i';
   printf("t%d := %s%c t%d\n", nexttemp(), op, type, y->s_place);

   return (node(currtemp(), y->s_mode, 0, 0));
}

/*
 * op2 - arithmetic operators
 */
struct sem_rec *op2(char *op, struct sem_rec *x, struct sem_rec *y)
{   
   called("op2");

   char type;

   if(x->s_mode == T_DOUBLE && y->s_mode != T_DOUBLE){
      y = op1("cv", y);
   }
   if(y->s_mode == T_DOUBLE && x->s_mode != T_DOUBLE){
      x = op1("cv", x);
   }
   
   type = (x->s_mode == T_DOUBLE) ? 'f' : 'i';

   printf("t%d := t%d %s%c t%d\n", nexttemp(), x->s_place, op, type, y->s_place);

   return (node(currtemp(), x->s_mode, 0, 0));
}

/*
 * opb - bitwise operators
 */
struct sem_rec *opb(char *op, struct sem_rec *x, struct sem_rec *y)
{
   fprintf(stderr, "sem: opb not implemented\n");
   return ((struct sem_rec *) NULL);
}

/*
 * rel - relational operators
 */
struct sem_rec *rel(char *op, struct sem_rec *x, struct sem_rec *y)
{
   called("rel");

   int btnum = nextbranch(), brnum = nextbranch();
   struct sem_rec *r = node(btnum, T_LBL, NULL, (node(brnum, T_LBL, NULL, NULL)));

   y = op2(op, x, y);
   
   r = merge(r, y->back.s_link);

   printf("bt t%d B%d\n", y->s_place, r->s_place);
   printf("br B%d\n", r->s_false->s_place); 
   
   return r;
}

/*
 * set - assignment operators
 */
struct sem_rec *set(char *op, struct sem_rec *x, struct sem_rec *y)
{
   called("set");

   char type;
   int tempsetnum = x->s_place;
   int mode = x->s_mode;

   if(*op == '\000'){
      if(tsize(mode) == 0)
         mode &= ~T_ADDR;

      if(tsize(mode) == 0)
         mode &= ~T_ARRAY;
      
      if( mode != y->s_mode){
         y = op1("cv", y);
      }
   }
   else{
      x = op1("@", x);
      mode = x->s_mode;
      y = op2(op, x, y);

      if(y->s_mode != mode)
         y = op1("cv", y);
   }

   type = tsize(mode) == 8 ? 'f' : 'i';
   
   printf("t%d := t%d =%c t%d\n", nexttemp(), tempsetnum, type, y->s_place);
   
   return (node(currtemp(), mode, 0, 0));
}

/*
 * startloopscope - start the scope for a loop
 */
void startloopscope()
{
   called("startloopscope");
   /* you may assume the maximum number of loops in a loop nest is 50 */
   //fprintf(stderr, "sem: startloopscope not implemented\n");
   enterblock();
}

/*
 * string - generate code for a string
 */
struct sem_rec *string(char *s)
{
   called("string");
   printf("t%d := %s\n", nexttemp(), s);
   return (node(currtemp(), T_STR|T_ADDR, NULL, NULL));
}
