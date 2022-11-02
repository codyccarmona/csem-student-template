

make

 
for f in tests/*.c; do
    [ -f "$f" ] || continue
    file=${f##*/}
    file=${file%.c}
    #echo ${file}
    #mkdir out/$file
    $(./csem-solution/csem.exe < $f &> out/$file/u.out)
    $(./csem-solution/cgen.exe < out/$file/u.out &> out/$file/u.lli)
    $(./csem < $f &> out/$file/c.out)
    $(./csem-solution/cgen.exe < out/$file/c.out &> out/$file/c.lli)
    diff out/$file/u.out out/$file/c.out > out/$file/out.diff
    diff out/$file/u.lli out/$file/c.lli > out/$file/lli.diff
done
