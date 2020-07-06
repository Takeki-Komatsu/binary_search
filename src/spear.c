#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub, sum;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb=1;
  ub=100000;
  while(ub-lb>0){
    int mid =(ub-lb)/2;
    sum=0;
    for(i=0;i<n;i++){
      sum=sum+(A[i]+mid-1)/mid;
    }
    if(sum>=k)ub=mid;
    else lb=mid;
  }
  printf("%d\n",ub);


  return 0;
}
