#include <stdio.h>

int n;
int k;
int A[100000];

int p (int m){
  int a, b;
  for(a=0; a<n;a++){
    b=b+(A[a]+m-1)/m;
  }
  return b<k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb=0;
  ub=A[n-1];
  while (ub-lb>0){
    int mid = (lb+ub)/2;
    if(p(mid)){
      ub=mid;
    }
    else{
      lb=mid;
    }
  }
  printf("%d\n",ub);
  return 0;
}
