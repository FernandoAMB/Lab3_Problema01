file = fopen('sinal.txt', 'w');

sinal = (sin([0:0.05:51.15]) + sin(0:0.5:511.5) + cos(0:0.7:716.1) + cos(0:2:2046) + cos(0:7:7161) + cos(0:50:50*1023))/6;
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