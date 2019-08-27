echo "enter n"
read n
x=1
while [ $n -gt 0 ]
do
echo $x
x=`expr $x + 2`
n=`expr $n - 1`
done
