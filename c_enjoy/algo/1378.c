#include <stdio.h>

int main(){

    int i,n;
    int k,sum=0;

    scanf("%d",&n);
    for(i=1;i<=n;i++){
        
    k=((i*(i+1))/2);
    sum+=k;
    }
    printf("%d\n",sum);  
    
    return 0;

}

/*


  An -> 1 3 6 10 15 21 28 36 45 55 66 78 91

  Bn -> 2 3 4 5 6 7 8 9 10 11 12 13 => 2+(n-1)1 => n+1

 계차수열
*/