f=2000
A=4
t=[0:0.01:%pi*f]
y=A*sin(t);
t_plot=[0:50:%pi*f]
y_plot=A*sin(t_plot)
subplot(311)
plot(t_plot,y_plot);
iarray=[];
rarray=[];
barray=[];
subplot(312)
for i=1:10000:length(t)
    iarray=[iarray;i];
    plot2d2([t(i),t(i)],[0,y(i)]);
end

for j=1:10000:length(t)
    rarray=[rarray;round(y(j))+4];
end

for k=1:length(iarray)
    temp=dec2bin(rarray(k))
    barray=[barray;strtod(part(temp, 1))]
    barray=[barray;strtod(part(temp, 2))]
    barray=[barray;strtod(part(temp, 3))]
end

a=barray;
subplot(313)
for i=1:(length(a)-1)
    if a(i)==1 then
        plot2d2([i,i+(0.5)],[a(i),0]);
        if a(i+1)==0 then
            plot2d2([i+(0.5),i+1],[0,-1]);
        else
            plot2d2([i+(0.5),i+1],[0,a(i+1)]);
        end
        
    else
        plot2d2([i,i+(0.5)],[-1,0]);
        if a(i+1)==0 then
            plot2d2([i+(0.5),i+1],[0,-1]);
        else
            plot2d2([i+(0.5),i+1],[0,a(i+1)]);
        end
          
    end
end