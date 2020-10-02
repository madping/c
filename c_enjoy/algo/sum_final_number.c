//1, 2, 3, 4, 5 ... 를 순서대로 계속 더해 
//합을 만들어가다가,입력된 정수와 같거나 커졌을 때, 마지막에 더한 정수를 출력한다. 
#include <stdio.h>

int main(){

    int sum=0;
    int i,n;

    scanf("%d", &n);
    
    for(i=0;i<=n;i++){
       
       sum+=i;

       if(n<=sum){
           printf("%d", i);
           break;
       }
    }
       
                  
    return 0;
}

