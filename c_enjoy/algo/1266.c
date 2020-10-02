/*
수의 개수  n이 주어지고, 

그 다음 줄에 무작위로 n개의 정수가 입력된다.

n개의 수의 합을 출력하시오.

n은 자연수, 그 다음 줄에 n개의 정수들이 

입력으로 들어온다. (n<=1,000, 각 수는 0~100)
*/

#include <stdio.h>

int main(){

    int i,n,a;
    int sum=0;

    scanf("%d",&n);

    if(n<=1000){
        for(i=1;i<=n;i++){
          if(a<=100){
            scanf("%d",&a);
            sum+=a;
          }
        } 
        printf("%d", sum);
    }
    return 0;
}