//1부터 n까지의 수 중 짝수의 합을 구하시오.

#include <stdio.h>

int main(){
    
    int i,n;
    int sum=0;

    scanf("%d", &n);

    for(i=1;i<=n;i++){
        if(i%2==0){
            sum+=i;
        }
    }
      printf("%d", sum);
    
    return 0;
}