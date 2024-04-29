#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    //start of single line print
    for(int i=1; i<=n; i++){
        //start for single star print
        for(int j=1; j<=i; j++){
            printf("*");
        }
        //end of single star print
        // k++;
        printf("\n");
    }
    //end for single line print
    return 0;
}