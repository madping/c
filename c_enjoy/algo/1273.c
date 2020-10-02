/*
자연수 N이 주어지면 N의 약수를 오름차순으로 모두 출력하시오.
자연수 N이 입력된다.( 1 <= N <= 10,000 )
N의 약수를 오름차순으로 출력한다.
*/

#include <stdio.h>
int main(){
  
  int i,j,k,h;
  int cnt=0;

  scanf("%d",&k);

  for(i=1;i<=10000;i++){
     if(k%i==0){  
      printf("%d ",i);       
     }
  }

  
  return 0;
    
}
