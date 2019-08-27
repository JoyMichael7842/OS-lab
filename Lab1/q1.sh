echo "enter number"
read number
if [ `expr $number % 2` -eq 0 ]
then
echo "even"
else
echo "odd"
fi
