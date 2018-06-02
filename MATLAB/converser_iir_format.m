% 
% for i = 1:5:length(SOSnew)
%     SOSnew(i+3:i+4) = SOSnew(i+3:i+4)*2;
% end


SOSFI = fi(SOSnew);
file = fopen("fpbiir.txt", 'w');
for i = 1:length(SOSFI)
    fprintf(file, "%d , ", SOSFI.int(i));
end
fclose(file);