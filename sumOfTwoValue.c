#include<stdio.h>
int main(){
    int n,sum;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&sum);
    int isEqual=0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; i<n; i++){
         if(arr[i]+arr[j]==sum){
            isEqual=1;
         }
        }
    }
    if(isEqual){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}