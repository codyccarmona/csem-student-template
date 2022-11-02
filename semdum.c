# include <stdio.h>
# include "cc.h"
# include "semutil.h"
# include "sem.h"
# include "sym.h"

#define MAXLINES 80

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

int currbranch(){
   return branchnum;
}

int nextbranch(){
   branchnum++;
   return branchnum;
}

/*
 * backpatch - backpatch list of quadruples starting at p with k
 */
void backpatch(struct sem_rec *p, int k)
{
   fprintf(stderr, "sem: backpatch not implemented\n");
}

/*
 * bgnstmt - encountered the beginning of a statement
 */
void bgnstmt()
{
   //fprintf(stderr, "sem: bgnstmt not implemented\n");
   extern int lineno;
   printf("bgnstmt %d\n", lineno);
}

/*
 * call - procedure invocation
 */
struct sem_rec *call(char *f, struct sem_rec *args)
{
   int argcount = 0, buflen = 0, globnum = nexttemp(), callnum = nexttemp();

   for(struct sem_rec *r = args; r; r = r->back.s_link){
      argcount++;
      char type = tsize(r->s_mode) == 8 ? 'f' : 'i';
      printf("arg%c t%d\n", type, r->s_place);
      buflen += sprintf(quadbuf + buflen, " t%d", r->s_place);
   }

   // assign func scope/name to temp (t2 := global function_name)
   printf("t%d := global %s\n", globnum, f);
   if(argcount == 0)
      printf("t%d := fi t%d %d\n", callnum, globnum, argcount);
   else
      printf("t%d := fi t%d %d%s\n", callnum, globnum, argcount, quadbuf);
   //fprintf(stderr, "sem: call not implemented\n");
   //return ((struct sem_rec *) NULL);
   return (node(callnum, T_INT, NULL, NULL));
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
   //struct sem_rec *r =
   return (rel("!=", e, (con("0"))));
   //fprintf(stderr, "sem: ccexpr not implemented\n");
   //return ((struct sem_rec *) NULL);
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
   //fprintf(stderr, "sem: con not implemented\n");
   //return ((struct sem_rec *) NULL);
   struct id_entry *p;

   if((p = lookup(x, 0)) == NULL){
      p = install(x, 0);
      p->i_type = T_INT;
      p->i_scope = GLOBAL;
      p->i_defined = 1;
      p->i_width = 4;
   }

   printf("t%d := %s\n", nexttemp(), x);
   return (node((currtemp()), p->i_type, NULL, NULL));
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
   fprintf(stderr, "sem: dofor not implemented\n");
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
   for(struct sem_rec *r = e; r; r = r->back.s_true){
      printf("B%d=L%d\n", r->s_place, m1);
   }
   for(struct sem_rec *r = e; r; r = r->s_false){
      printf("B%d=L%d\n", r->s_place, m1);
   }
   
   //fprintf(stderr, "sem: doif not implemented\n");
}

/*
 * doifelse - if then else statement
 */
void doifelse(struct sem_rec *e, int m1, struct sem_rec *n,
                         int m2, int m3)
{
   printf("B%d=L%d\n", e->back.s_true->s_place, m1);
   printf("B%d=L%d\n", e->s_false->s_place, m2);
   printf("B%d=L%d\n", n->s_place, m3);
   //fprintf(stderr, "sem: doifelse not implemented\n");
}

/*
 * doret - return statement
 */
void doret(struct sem_rec *e)
{
   //fprintf(stderr, "sem: doret not implemented\n");
   char type = tsize(e->s_mode) == 4 ? 'i' : 'f';
   printf("ret%c t%d\n", type, e->s_place);   
}

/*
 * dowhile - while statement
 */
void dowhile(int m1, struct sem_rec *e, int m2, struct sem_rec *n,
             int m3)
{
   fprintf(stderr, "sem: dowhile not implemented\n");
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
   return (merge(l, e));
   //fprintf(stderr, "sem: exprs not implemented\n");
   //return ((struct sem_rec *) NULL);
}

/*
 * fhead - beginning of function body
 */
void fhead(struct id_entry *p)
{
   //fprintf(stderr, "sem: fhead not implemented\n");
   int type, width;
   printf("func %s %d\n", p->i_name, p->i_type);
   
   for(int i = 0; i < formalnum; i++){
      type = formaltypes[i] == 'i' ? T_INT : T_DOUBLE;
      width = type == T_INT ? 4 : 8;
      printf("formal %s %d %d\n", formalnames[i], type, width);
   }

   for(int i = 0; i < localnum; i++){
      type = localtypes[i] == 'i' ? T_INT : T_DOUBLE;
      if(localwidths[i] > 1){
         type |= T_ARRAY;
      }
      width = type == (type & T_INT) ? 4 * localwidths[i] : 8 * localwidths[i];
      printf("localloc %s %d %d\n", localnames[i], type, width);
   }
}

/*
 * fname - function declaration
 */
struct id_entry *fname(int t, char *id)
{
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
   //fprintf(stderr, "sem: ftail not implemented\n");
   fprintf(stdout, "fend\n");
   leaveblock();
}

/*
 * id - variable reference
 */
struct sem_rec *id(char *x)
{
   //fprintf(stderr, "sem: id not implemented\n");
   //return ((struct sem_rec *) NULL);
   struct id_entry *p;

   if((p = lookup(x, 0)) == NULL){
      yyerror("undeclared identifier");
      p = install(x, -1);
      p->i_type = T_INT;
   }
   if(p->i_scope == GLOBAL){
      printf("t%d := global %s\n", nexttemp(), x);
   }
   else if(p->i_scope == PARAM){
      printf("t%d := param %s %d\n", nexttemp(), x, p->i_offset);
   }
   else if(p->i_scope == LOCAL){
      printf("t%d := local %s %d\n", nexttemp(), x, p->i_offset);
   }
   return (node((currtemp()), p->i_type|T_ADDR, NULL, NULL));
}

/*
 * sindex - subscript
 */
struct sem_rec *sindex(struct sem_rec *x, struct sem_rec *i)
{
   if(i->s_mode != T_INT)
      i = op1("cv", i);
   char type = tsize(i->s_mode) == 8 ? 'f' : 'i';;
   printf("t%d := t%d []%c t%d\n", nexttemp(), x->s_place, type, i->s_place);
   return (node((currtemp()), x->s_mode, NULL, NULL));
   //fprintf(stderr, "sem: sindex not implemented\n");
   //return ((struct sem_rec *) NULL);
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
   //fprintf(stderr, "sem: m not implemented\n");
   //return (0);
   printf("label L%d\n", ++labelnum);
   return labelnum;
}

/*
 * n - generate goto and return backpatch pointer
 */
struct sem_rec *n()
{
   struct sem_rec *r = node(nextbranch(), T_LBL, NULL, NULL);
   printf("br B%d\n", r->s_place);
   return r;
   //fprintf(stderr, "sem: n not implemented\n");
   //return ((struct sem_rec *) NULL);
}

/*
 * op1 - unary operators
 */
struct sem_rec *op1(char *op, struct sem_rec *y)
{
   char type;
   int mode = y->s_mode, quadnum = nexttemp();

   if(*op == '@'){
      mode &= ~T_ADDR;
   }
   if(op == "cv"){
      type = tsize(mode) == 8 ? 'i' : 'f';
   }
   else{
      type = tsize(mode) == 8 ? 'f' : 'i';
   }

   printf("t%d := %s%c t%d\n", quadnum, op, type, y->s_place);
   return (node(quadnum, y->s_mode, NULL, NULL));
}

/*
 * op2 - arithmetic operators
 */
struct sem_rec *op2(char *op, struct sem_rec *x, struct sem_rec *y)
{
   char type = 'i';
   
   if(x->s_mode == T_DOUBLE || y->s_mode == T_DOUBLE){
      type = 'f';
      if(x->s_mode != T_DOUBLE){
         x = op1("cv", x);
      }
      if(y->s_mode != T_DOUBLE){
         y = op1("cv", y);
      }
   }

   printf("t%d := t%d %s%c t%d\n", (nexttemp()), x->s_place, op, type, y->s_place);
   return (node((currtemp()), x->s_mode, NULL, NULL));
   //fprintf(stderr, "sem: op2 not implemented\n");
   //return ((struct sem_rec *) NULL);
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
   struct sem_rec *r = op2(op, x, y);
   r->back.s_link = node(nextbranch(), T_LBL, NULL, NULL);
   r->s_false = node(nextbranch(), T_LBL, NULL, NULL);
   printf("bt t%d B%d\n", r->s_place, r->back.s_link->s_place);
   printf("br B%d\n", r->s_false->s_place);
   return r;
   //fprintf(stderr, "sem: rel not implemented\n");
   //return ((struct sem_rec *) NULL);
}

/*
 * set - assignment operators
 */
struct sem_rec *set(char *op, struct sem_rec *x, struct sem_rec *y)
{
   struct sem_rec *r;
   char type = tsize(x->s_mode & ~T_ADDR) == 4 ? 'i' : 'f';

   if(*op == '\000'){
      if( (x->s_mode & ~T_ADDR) != y->s_mode){
         y = op1("cv", y);
      }
      r = y;
   }
   else{
      r = op2(op, (op1("@", x)), y);
      if(r->s_mode != (x->s_mode & ~T_ADDR)){
         r = op1("cv", r);
      }
   }
   printf("t%d := t%d =%c t%d\n", nexttemp(), x->s_place, type, r->s_place);
   return (node(currtemp(), x->s_mode, NULL, NULL));
}

/*
 * startloopscope - start the scope for a loop
 */
void startloopscope()
{
   /* you may assume the maximum number of loops in a loop nest is 50 */
   fprintf(stderr, "sem: startloopscope not implemented\n");
}

/*
 * string - generate code for a string
 */
struct sem_rec *string(char *s)
{
   //fprintf(stderr, "sem: string not implemented\n");
   //return ((struct sem_rec *) NULL);
   printf("t%d := %s\n", nexttemp(), s);
   return (node(currtemp(), T_STR|T_ADDR, NULL, NULL));
}
