#include<stdio.h>

int main(){
    for(int i=6 ; i>=0 ; i--){
        for(int j=i ; j>0 ; j--){
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n\n");
    for(int i = 0 ; i<=9 ; i++){
        for(int j=0 ; j<= i ;j++){
            printf(" ");
        }
        for(int j = 9-i+1;j>=1;j--){
            printf("%d",i);
        }
        printf("\n");
    }
}
