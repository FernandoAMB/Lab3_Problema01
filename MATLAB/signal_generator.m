clear
close
clc

file = fopen('sinal.txt', 'a+');

sinal = (sin([0:0.05:51.15]) + sin(0:0.5:511.5) + cos(0:0.7:716.1))/3;
plot(sinal);
figure();
freqz(sinal);
figure();
sinalFP = fi(sinal);
plot(sinalFP);
figure();
freqz((sinalFP.data));

for i = 1:length(sinalFP.int)
    fprintf(file, "%d ", sinalFP.int(i));
end
fclose(file);