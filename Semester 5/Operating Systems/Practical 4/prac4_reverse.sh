echo "Enter a number"
read n
tempo=0
rev=0

while [ $n -gt 0 ]
do
    tempo=$(( $n % 10 ))
    rev=$(( $rev * 10 + $tempo ))
    n=$(( $n / 10 ))
done

echo "Reverse number of entered digit is $rev"



# ------ IO -------
/*'
Enter a number
127895
Reverse number of entered digit is 598721'
*/
