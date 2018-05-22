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


DATA out[FILTER_SIZE + 511];
DATA readFromFile[512];

/**
 * main.c
 */
int main(void)
{
    size_t valid;
    FILE * file1 = fopen("C:\\Users\\aluno\\Desktop\\workspace\\lab3_1\\teste.txt", "r");
    FILE * fileOut = fopen("C:\\Users\\aluno\\Desktop\\workspace\\lab3_1\\saida.txt", "w");
    valid = fread(readFromFile, 2, 512, file1);
    if (!valid) {
        printf("Erro!!!\n");
        return 0;
    }
    filter(readFromFile, 512, out);

    valid = fwrite(out, 2, 523, fileOut);

    if (!valid) {
        printf("Erro de escrita!");
    }


	return 0;
}
