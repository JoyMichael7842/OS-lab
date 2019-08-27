echo "enter number"
read number
if [ $number -lt 0 ]
then
echo "negative"
elif [ $number -gt 0 ]
then
echo "positive"
else
echo "zero"
fi
