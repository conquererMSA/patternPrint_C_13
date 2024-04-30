//half diamond
// #include<stdio.h>
// int main(){
//     int n,st=1;
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//        for(int j=1; j<=n-i; j++){
//         printf(" ");
//        }
//        for(int j=1; j<=st; j++){
//         printf("*");
//        }
//        st+=2;
//        printf("\n");
//     }
//     return 0;
// }
/*
for input 5

    *
   ***
  *****
 *******
*********

*/

//reverse half diamond
// #include<stdio.h>
// int main(){
//     int n, st, sp=0;
//     scanf("%d",&n);
//     st=2*n-1; //initial value of star
//     for(int i=1; i<=n; i++){
//        //print space
//        for(int j=1; j<=sp; j++){
//         printf(" ");
//        }
//        sp++;
//        //print star;
//        for(int j=1; j<=st; j++){
//         printf("*");
//        }
//        st-=2;
//        printf("\n");
//     }
//     return 0;
// }
/*
for input 5

*********
 *******
  *****
   ***
    *

*/

//fullDiamond shape
#include<stdio.h>
int main(){
    int n, st, sp;
    scanf("%d",&n);
    sp=n-1;//initial value for space
    st=1; //initial value of star
    for(int i=1; i<=2*n-1; i++){
       //print space
      for(int j=1; j<=sp; j++){
        printf(" ");
      }
      //print star
      for(int j=1; j<=st; j++){
        printf("*");
      }
      if(i<=n-1){
        sp--;
        st+=2;
      }else{
        sp++;
        st-=2;
      }
       printf("\n");
    }
    return 0;
}