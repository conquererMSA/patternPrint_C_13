#include<stdio.h>
int main(){
    int n,st,sp;
    scanf("%d",&n);
    st=1;
    sp=n-1;
    for(int i=1; i<=2*n-1; i++){
        //print space
        for(int j=1; j<=sp; j++){
            printf(" ");
        }
        //print start
        for(int j=1; j<=st; j++){
            printf("*");
        }
        if(i<=n-1){
            st+=2;
            sp--;
        }
        else{
            st-=2;
            sp++;
        }
        printf("\n");
    }
    return 0;
}