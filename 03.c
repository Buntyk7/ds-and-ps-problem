#include<stdio.h>

int main(){
    char  ch='A';
    for (int i=0;i<3;i++){
        for (int j=0;j<=i;j++){
            printf("%c",ch+i);
        }
        printf("\n");
    }
    return 0;
}