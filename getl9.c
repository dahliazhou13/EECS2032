#include <stdlib.h>
#include <stdio.h>
main(){
    struct nameinfo{
        char name[50];
        int integer;
        float fnum;
    } *check;
    FILE *fptr;
    check = (struct nameinfo *)malloc(sizeof(struct nameinfo));
    fptr = fopen("names.bin","r+");
    if(fptr==NULL){
        printf("Problem opening file");
    }
    check=(struct nameinfo *)malloc(sizeof(struct nameinfo));
    fread(check,sizeof(struct nameinfo),1,fptr);
    printf("%f",check->fnum);
    free(check);
}