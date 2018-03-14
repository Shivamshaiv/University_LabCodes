
funcprot(0);
function ask(g,f)

[%nargout,%nargin] = argn(0)

if (f<1) then
  error("Frequency must be bigger than 1");
end;

t = 0:(2*%pi)/99:2*%pi;
cp = [];sp = [];
mod = [];mod1 = [];bit = [];

for n = 1:max(size((g)))
  if g(n)==0 then
    die = 0*ones(1,100);
    se = zeros(1,100);
  else g(n)==1;
   die = 1*ones(1,100);
   se = ones(1,100);
  end;
  c = sin((f)*t);
  cp = [cp,die];
  mod = [mod,c];
  bit = [bit,se];
end;

ask = cp .*mod;
subplot(2,1,1);plot(bit,"LineWidth",1.5);set(gca(),"grid",[1,1]);
title("Binary Signal");
set(gca(),"data_bounds",matrix([0,100*max(size((g))),-2.5,2.5],2,-1));

subplot(2,1,2);plot(ask,"LineWidth",1.5);set(gca(),"grid",[1,1]);
title("ASK modulation");
set(gca(),"data_bounds",matrix([0,100*max(size((g))),-2.5,2.5],2,-1));
endfunction


ask([1,0,1,1,0,0,1,0,1,0,1,1,0,0,1,0,0,1],2);
