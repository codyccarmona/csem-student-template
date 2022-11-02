testfile=$1

if [[ -z "$testfile" ]]; then
  testfile="mytest.c"
fi

make
clear

./csem-solution/csem.exe < tests/$testfile &> out/${testfile%.c}/u.out

./csem < tests/$testfile &> out/${testfile%.c}/c.out

#diff out/${1%.c}/u.out out/${1%.c}/c.out

./csem < tests/$testfile