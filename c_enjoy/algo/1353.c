/*
n이 입력되면 다음과 같은 삼각형을 출력하시오.

예)

n 이 5 이면

*
**
***
****
*****
*/


#include <stdio.h>

int main(){
    int i,j,n;
    scanf("%d",&n);

    for(i=0;i<n;i++){

        for(j=1;j<i+1;j++){
          printf("*");
      }
       printf("*\n");

    }
    return 0;
}