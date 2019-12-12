#include <stdio.h>
main(){
    char name[60];

    fgets(name,51,stdin);
    printf("%s",name);
    char first[20];
    char ml[20];
    char last[20];
    int i,j;
    for(i=0;i<sizeof(name);i++){
        if(name[i]==' '){
            break;
        }
    }
    //i is the position where the first name ends
    for(j=0;j<i;j++){
        first[j] = name[j];
    }
    printf("%s",first);
}