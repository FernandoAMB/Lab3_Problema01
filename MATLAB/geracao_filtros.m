clear
close all
clc

fpb_fir = fir1(15, 0.4);
[fpb_iir_n, fpb_iir_d] = butter(15, 0.4);
[fpf_iir_n, fpf_iir_d] = butter(15, [0.3, 0.7]);
fpa_fir = fpb_fir.*(-1).^([0:length(fpb_fir)-1]); %deslocando o FPB por pi na frequencia.


