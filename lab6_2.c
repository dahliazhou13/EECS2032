#include <stdio.h>
main(){
    FILE *fp;
    fp = fopen("lab62.txt","r");
    if(fp == NULL){
        printf("Error opening the file, try again");
    }
    FILE *outp;
    outp = fopen("lab62enc.txt","w+");
    if(outp == NULL){
        printf("Error opening the file, try again");
    }
    printf("Please enter the key :");
    char key[5];
    fgets(key,6,stdin);
    int i;
    for(i=0;i<5;i++){
        if(key[i] == '\n'){
            key[i] = 'a';
            for(i;i<5;i++){
                key[i] = 'a';
            }
            break;
        }
    }
    char out;
    char in;
    i=0;
while((in=fgetc(fp))!=EOF){
        out = in ^ key[i%5];
        fputc(out,outp);
	i++;
    }
}
