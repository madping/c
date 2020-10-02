#include <stdio.h>
int main(){

    int a,b,i,j;
    int cnt=0;
   
    scanf("%d%d",&a,&b);
     
       // if(a==b){
       //    for(i=1;i<=9;i++){
       //     printf("%d*%d=%d\n",a,i,a*i);
       //    }
       // }else{
           for(i=a;i<=b;i++){  
              for(j=1;j<=9;j++){
               printf("%d*%d=%d\n",i,j,i*j);
              }
           }
      //  }  
     return 0;
}