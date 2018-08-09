echo "Enter the n till which you want Fibonnaci_n"
read maxi
fib=1
pfib=0
temp=0
i=0
while [ $maxi -gt $i ]
do
    echo "$i th Fibonnaci Number is : $pfib"
    temp=$fib
    fib=$(( $fib + $pfib ))
    pfib=$temp
    i=$(( $i+1 ))
done

% ------ IO -------
/*'
Enter the n till which you want Fibonnaci_n
8
0 th Fibonnaci Number is : 0
1 th Fibonnaci Number is : 1
2 th Fibonnaci Number is : 1
3 th Fibonnaci Number is : 2
4 th Fibonnaci Number is : 3
5 th Fibonnaci Number is : 5
6 th Fibonnaci Number is : 8
7 th Fibonnaci Number is : 13
8 th Fibonnaci Number is : 21'
*/
