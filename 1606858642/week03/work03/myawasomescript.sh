teks=`cat $1`
echo "$teks"
len=`expr length $teks`
echo "$len"
stringA=`expr substr $teks 5 4`
echo "$stringA"
stringB=`expr "$teks" : '.*\(.....\)'`
echo "$stringB"
jmlCC=`grep -o cc $1 | wc -w`
echo "$jmlCC"
jmlZZ=`grep -o ZZ $1 | wc -w`
echo "$jmlZZ"
a=10
b=2
echo `expr $a + $b`
echo `expr $a - $b`
c=`expr $a \* $b`
echo "$c"
echo `expr $a / $b`
echo `expr $a - 5`
k=0
while ((k<10))
do
echo "$teks"|rev
((k++))
done
