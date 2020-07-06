#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub,sum;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb=0;
  ub=n*A[n-1];
  sum=0;
  for(i = 0; i < n; i++){
    sum=sum+A[i];
  }
  while (ub-lb>0){
    int mid = (lb+ub)/2;
    if((sum+n*(mid-1))/mid<=k){
      ub=mid;
    }
    else{
      lb=mid;
    }
  }
  printf("%d\n",ub);



  return 0;
}
