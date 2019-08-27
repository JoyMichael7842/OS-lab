echo "enter string"
read string
for i in $(seq 0 ${#string});
do
revstr=${string:$i:1}$revstr
done
echo $revstr