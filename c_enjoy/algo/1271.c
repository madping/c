/*
입력의 개수 n이 입력되고 n개의  데이터가 입력된다.

이 n개의 데이터 중 최대값을 출력한다

첫째줄에 정수의 개수 N이 주어진다. (n<=1000)

둘째줄에 N개의 정수가 공백으로 분리되어 주어진다.  

( 0 <= 각각의 데이터 <=1000000 )

N개의 정수 중 최대값을 찾아 출력한다.
*/


#include <stdio.h>

int main(){
    int a,i;
    int m=0,n=0;
   
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&n);
        if(m<n){
            m=n;
        }
    
    }printf("%d",m);

    return 0;
}