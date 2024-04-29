// // method 1:
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     //start of single line print
//     for(int i=1; i<=n; i++){
//         //start for single star print
//         for(int j=1; j<=i; j++){
//             printf("*");
//         }
//         //end of single star print
//         printf("\n");
//     }
//     //end for single line print
//     return 0;
// }

// // method 2:
#include<stdio.h>
int main(){
    int n,k=1;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            printf("*");
            //protita star e j er man 1 kore barbe
        }
        k++;
        printf("\n")
        //protitaline e k er man 1 kore barbe
    }
    return 0;
}