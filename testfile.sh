testfile=$1

if [[ -z $testfile ]]; then
   testfile=mytest.c
fi
make
clear
./csem-solution/csem.exe < tests/$testfile &> tests/${testfile%.c}.u.out
./csem < tests/$testfile &> tests/${testfile%.c}.c.out
diffout=$(diff tests/${testfile%.c}.u.out tests/${testfile%.c}.c.out)
if [[ -z "$diffout" ]]; then
  printf "matched\n"
else
  printf "$diffout\n\n"
  ./csem < tests/$testfile  
fi


