#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        //loop for space print
        for(int k=1; k<=n-i; k++){
            printf(" ");
        }
        //loop for star print
        for(int j=1; j<=(i*2-1); j++){
            printf("*");
        }
        //print newline
        printf("\n");
    }
    return 0;
}