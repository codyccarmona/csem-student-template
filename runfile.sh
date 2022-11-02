

make
 
for f in tests/*.c; do
    [ -f "$f" ] || continue
    file=${f##*/}
    $(./csem-solution/csem.exe < $f &> tests/${file%.c}.u.out)
    #$(./csem-solution/cgen.exe < out/$file/u.out &> out/$file/u.lli)
    $(./csem < $f &> tests/${file%.c}.c.out)
    #$(./csem-solution/cgen.exe < out/$file/c.out &> out/$file/c.lli)
    #diff out/$file/u.out out/$file/c.out > out/$file/out.diff
    #diff out/$file/u.lli out/$file/c.lli > out/$file/lli.diff
    
    diffout=$(diff tests/${file%.c}.u.out tests/${file%.c}.c.out)

    if [ -z "$diffout" ]
    then
    rm tests/${file%.c}.u.out
    rm tests/${file%.c}.c.out
    continue
    else
    printf "$file\n"
    printf "$diffout" > out/${file%.c}.diff
    fi
done
