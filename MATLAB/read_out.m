file = fopen("saida.txt", "r");
filtradoDSP = fscanf(file, "%d ");
fclose(file);

freqz(double(filtradoDSP)/2^15);