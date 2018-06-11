file = fopen("saida.txt", "r");
filtradoDSP = fscanf(file, "%d ");


freqz(double(filtradoDSP)/(2^15));