/*
길이 n이 입력되면 길이가 n인 사각형을 출력하시오.

단, 사각형은 * 모양으로 채운다.
사각형의 길이 n이 입력된다.
가로 세로 길이 n인 사각형을 출력한다.

*/


#include <stdio.h>

int main(){
   int i,j,n;
   scanf("%d",&n);
   for(i=0;i<n;i++){
       for(j=1;j<n;j++){
           printf("*");
       }
     printf("*\n");
   }
    return 0;
}