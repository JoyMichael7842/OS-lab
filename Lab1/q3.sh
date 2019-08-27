echo "enter number"
read number
n=1
y=`expr $number`
while [ $n -lt $y ]
do
number=`expr $number \* $n`
n=`expr $n + 1`
done
echo $number
