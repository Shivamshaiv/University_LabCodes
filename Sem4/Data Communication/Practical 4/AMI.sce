a=[1,0,1,1,1,0,0,1,1,0,1,0];

subplot(211)
for i=1:(length(a)-1)
    plot2d2([i,i+1],[a(i),a(i+1)]);
end
subplot(212)
cnt=1;
for i=1:(length(a)-1)
    if a(i)==0 then
        if a(i+1)==1 & modulo(cnt,2)==0 then
            plot2d2([i,i+1],[a(i),-1]);
        elseif a(i+1)==1 & modulo(cnt,2)==1 then
            plot2d2([i,i+1],[0,1])
        else
            plot2d2([i,i+1],[0,0]);
        end
        
    else
        cnt=cnt+1;
        if modulo(cnt,2)==0 then
            if a(i+1)==0 then
                plot2d2([i,i+1],[1,0]);
            else
                plot2d2([i,i+1],[1,-1]);
            end     
        else
            if a(i+1)==0 then
                plot2d2([i,i+1],[-1,0]);
            else
                plot2d2([i,i+1],[-1,1]);
            end
            
        end
        
    end
    
    
end
b=get("current_axes")
b.x_location="middle"
//plot2d2([0,1],[1,0]);
//plot2d2([1,2],[1,0]);