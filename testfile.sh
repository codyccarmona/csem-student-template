testfile=$1

if [[ -z $testfile ]]; then
   testfile=mytest.c
fi

make
$(./csem-solution/csem.exe < tests/$testfile &> out/${testfile%.c}.u)
$(./csem < tests/$testfile &> out/${testfile%.c}.coo)
diffout=$(diff out/${testfile%.c}.u out/${testfile%.c}.coo)

if [[ -z "$diffout" ]]; then
   echo "matched"
else
   echo "$diffout"
   ./csem < tests/$testfile
   
fi


