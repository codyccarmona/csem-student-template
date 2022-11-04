testfile=$1

if [[ -z $testfile ]]; then
   testfile=mytest.c
fi

make
./csem-solution/csem.exe < tests/$testfile &> out/${testfile%.c}.u.out
./csem < tests/$testfile &> out/${testfile%.c}.c.out
diffout=$(diff out/${testfile%.c}.u.out out/${testfile%.c}.c.out)

if [[ -z "$diffout" ]]; then
   echo "matched"
else
   echo "$diffout"
   ./csem < tests/$testfile
   
fi


