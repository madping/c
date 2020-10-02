/*
수의 개수 n이 주어지고, 

그 다음 줄에 무작위로 n개의 자연수가 입력된다.

그 n개의 수 중에서 짝수의 개수를 출력하시오.

n은 자연수, 

그 다음 줄에 n개의 자연수들이 입력으로 들어온다.

n개의 자연수들 중 짝수의 개수를 출력한다.

*/


#include <stdio.h>
int main(){
    int i,a,b,n;
    int cnt=0;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a%2==0){
           cnt++;
        } 
    } 
    printf("%d\n",cnt);
    
    return 0;
}