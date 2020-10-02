#include <stdio.h>
#include <time.h>

int main(){
  time_t start,end;
  double result;

  int i,j,k,h;

  start=clock();
  scanf("%d%d",&k,&h);

  printf("%d %d\n",k,h);

  
  end=clock();
  result=(double)(end-start)/CLOCKS_PER_SEC;
  printf("%f",result);
  return 0;
    
}
