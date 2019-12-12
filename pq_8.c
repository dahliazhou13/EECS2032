#include <stdio.h>
main(){
    FILE *info;
    info = fopen("grade.txt","r");
    if(fopen == NULL){
        printf("File could not be opened");
    }
    char firstname[20];
    char lastname[20];
    char email[20];
    int i;

    for(i =0; i<20; i++){
        if((firstname[i]=fgetc(info))==','){
            firstname[i] = '\0';
            break;
        }
    }
    printf("%s\n",firstname);
    fgetc(info);
    for(i =0; i<20; i++){
        if((lastname[i]=fgetc(info))==','){
            lastname[i] = '\0';
            break;
        }
    }
    printf("%s\n",lastname);
    fgetc(info);
    for(i =0; i<20; i++){
        if((email[i]=fgetc(info))==','){
            email[i] = '\0';
            break;
        }
    }
    char grades1[4];
    int grade1;
    printf("%s\n",email);
    for(i =0; i<3; i++){
        if((grades1[i]=fgetc(info))==','){
              break;
        }
    }
    if(i==2){
        grade1=(grades1[1]-'0');
    }
    else if(i==3){
        grade1=(grades1[1]-'0')*10+(grades1[2];
    }
    else{
	grade1=100;
    }
    printf("%d",i);
    printf("%d",grade1);
}
