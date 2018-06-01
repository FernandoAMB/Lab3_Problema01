#include <stdio.h>
#include <stdlib.h>
#include "tistdtypes.h"
#include <math.h>
#include "dsplib.h"
#include "ezdsp5502.h"

#define LOWPASSFIR "lowPassFir.h"
#define HIGHPASSFIR "highPassFir.h"
#define LOWPASSIIR "lowPassIir.h"
#define BANDPASSIIR "bandPassIir.h"

#include LOWPASSFIR

#include "samples.h"



/**
 * main.c
 */
int main(void)
{
    FILE * fileOut = fopen("D:\\ferna\\Projetos\\lab3\\Lab3_Problema1\\Lab3_Problema01\\saida.txt", "w");
    int i;
    printf("funfa\n");
    filter(samples, SAMPLE_SIZE, out);
    printf("funfa\n");

    for(i=0; i<FILTER_SIZE + SAMPLE_SIZE - 1; i++){
            fprintf(fileOut, "%d, ", out[i]);
    }
    printf("funfa\n");


    printf("Completado!\n");
    fclose(fileOut);

	return 0;
}
