testfile=$1

if [[ -z $testfile ]]; then
   testfile=mytest.c
fi

make
./csem-solution/csem.exe < tests/$testfile &> out/${testfile%.c}.u.out
./csem < tests/$testfile


