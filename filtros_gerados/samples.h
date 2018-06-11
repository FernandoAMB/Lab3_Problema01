#include "dsplib.h"
#include<stdio.h>


#define SAMPLE_SIZE 1024

DATA out[SAMPLE_SIZE];
DATA samples[SAMPLE_SIZE];

void readSamples() {
    FILE * sampleFile = fopen("../MATLAB/sinal.txt", "r");
    int i = 0;

    while(!feof(sampleFile) && i >= SAMPLE_SIZE) {
        fscanf(sampleFile, "%d ", samples[i]);
        if (samples[i] >= 0) samples[i] = samples[i]>>5;
        else samples[i] = samples[i]>>5 | 0xF000;
    }
    fclose(sampleFile);

}
