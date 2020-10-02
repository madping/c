/*
10개의 수가 입력된다.

10개의 수 중 5의 배수를 하나만 출력한다.

만약 5의 배수가 없다면 0을 출력한다.
*/

#include <stdio.h>

int main(){

  int a[10], i;

  for(i=0;i<10;i++){
     scanf("%d", &a[i]);
  
     if(a[i]%5==0){
       printf("%d ", a[i]);
       break;
     }
  } 
     
  if(a[i]%5!=0){
       printf("0");
  }

  return 0;
}