/*
어떤 수가 입력되면 그 수가 소수인지 판단하시오.
2이상의 자연수가 입력으로 주어진다.
입력으로 주어진 수가 소수이면 "prime"을 출력, 
소수가 아니면 "not prime"을 출력한다.
*/

#include <stdio.h>

int main(){
    int i,n;
    scanf("%d",&n);
    
    for(i=2;i<n;i++){
       if(n%i==0){ 
         printf("not prime"); 
         return 0;
       }    
    
    }printf("prime");
    return 0;
}
