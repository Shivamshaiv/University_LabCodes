a=[1,0,1,0,1,1,1];

subplot(211)
for i=1:(length(a)-1)
    plot2d2([i,i+1],[a(i),a(i+1)]);
end
c=1:length(a);
for i=1:(length(c)-1)
    if (bitxor(a(i),a(i+1))==0) then
        c(i)=1;
    else
        c(i)=0;
    end
end
for i=1:(length(a)-1)
    a(i)=c(i);
end
subplot(212)
for i=1:(length(a)-1)
    if a(i)==1 then
        plot2d2([i,i+(0.5)],[a(i),-1]);
        if a(i+1)==0 then
            plot2d2([i+(0.5),i+1],[-1,-1]);
        else
            plot2d2([i+(0.5),i+1],[-1,a(i+1)]);
        end
        
    else
        plot2d2([i,i+(0.5)],[-1,1]);
        if a(i+1)==0 then
            plot2d2([i+(0.5),i+1],[1,-1]);
        else
            plot2d2([i+(0.5),i+1],[1,1]);
        end
          
    end
end
b=get("current_axes")
b.x_location="middle"
//plot2d2([0,1],[1,0]);
//plot2d2([1,2],[1,0]);