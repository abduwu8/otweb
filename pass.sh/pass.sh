echo Set the password first
read passw
i=0
while [ $i -lt 3]
do
echo "Please enter the password"
read p
if [ $p = $passw]
then 
echo Correct Password
i=3
else
echo Wrong Password
i= `expr  $i + l`
fi
done
