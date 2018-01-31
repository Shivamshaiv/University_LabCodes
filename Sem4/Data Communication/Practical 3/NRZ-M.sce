function y=neg(x)
    if(x==1)
        y=0
    else
        y=1
    end 
endfunction

t = -1:0.01:1;
x = 2* sin (( %pi /2) * t) ;
dig= [0 ,1 ,0 ,0 ,0 ,0 ,1 ,1,1,1 ,0 ,0 ,0 ,0 ,1 ,1 ,0 ,1 ,0 ,1]
dig3=1:length(dig)
for n=dig3
    dig3(n)=dig(1)
end
temp=0;
for p = 2:(length(dig)-1)
    if(dig(p)==0)
        dig3(p)=dig3(p-1)
    else
        dig3(p)=neg(dig3(p-1))
    end 
end
//
disp(dig)
disp(dig3)
 figure
b=gca() ;
b.data_bounds = [1,1;21 ,2];
subplot(211)
plot2d2([1:length(dig)],dig,2)
title ("Input Data")
subplot(212)
b=gca() ;
b.data_bounds = [1,1;21 ,2];
plot2d2([1:length(dig3)],dig3,2)
title ("NRZ-I" )