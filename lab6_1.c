#include <stdio.h>
main(){
    FILE *fp;
    fp=fopen("lab61.txt","r+");
    if(fp == NULL){
        printf("error, try again");
    }
    FILE *outp;
    outp = fopen("lab61out.txt","w");
    char record[100];
    char c = 16;
    int i;
    while(fgets(record,sizeof(record),fp)){
        for(i = 0; i<sizeof(record); i++){
            if(record[i] == '\n'){
                record[i] = '\0';
            }
        }
        fputs(record,outp);
        fputc(c,outp);
    }

}