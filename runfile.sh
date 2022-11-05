

make
 
for f in tests/*.c; do
    [ -f "$f" ] || continue
    file=${f##*/}
    $(./csem-solution/csem.exe < $f &> out/${file%.c}.u)
    #$(./csem-solution/cgen.exe < out/$file/u.out &> out/$file/u.lli)
    $(./csem < $f &> out/${file%.c}.coo)
    #$(./csem-solution/cgen.exe < out/$file/c.out &> out/$file/c.lli)
    #diff out/$file/u.out out/$file/c.out > out/$file/out.diff
    #diff out/$file/u.lli out/$file/c.lli > out/$file/lli.diff
    
    diffout=$(diff out/${file%.c}.u out/${file%.c}.coo)

    if [ -z "$diffout" ]
    then
    rm out/${file%.c}.u
    rm out/${file%.c}.coo
    continue
    else
    printf "$file\n"
    printf "$diffout" > out/${file%.c}.diff
    fi
done
