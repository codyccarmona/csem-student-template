testfile=$1

if [[ -z $testfile ]]; then
   testfile=mytest.c
fi

make
$(./csem-solution/csem.exe < tests/$testfile &> out/${testfile%.c}.u.out)
$(./csem < tests/$testfile &> out/${testfile%.c}.c.out)
diffout=$(diff out/${testfile%.c}.c.out out/${testfile%.c}.u.out)

if [[ -z "$diffout" ]]; then
   echo "matched"
else
   ./csem < tests/$testfile
fi


