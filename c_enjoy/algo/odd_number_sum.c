//어떤 수 a, b가 주어진다.

//a와 b의 관계는 a <= b 이다.

//a에서 b까지의 수 중 3의 배수만 더하여 출력하시오.

#include <stdio.h>

int main(){
    
    int i,a,b;
    int sum=0;

    scanf("%d %d",&a,&b);

    if(a<=b){
        for(i=a;i<=b;i++){
            if(i%3==0){
                 sum+=i;
            }
        }
        printf("%d",sum);
    }
    else{
        printf("b가 a보다 큰 수여야 합니다");
    }    
    return 0;
}