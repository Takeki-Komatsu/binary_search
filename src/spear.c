#include <stdio.h>

int n;
int k;
int A[100000];

int p (int m){
  int a, b;
  b=0;
  for(a=0; a<n;a++){
    b=b+(A[a])/(m);
  }
  return b<k;
}

int max(){
  int c,max;
  max=A[0];
  for(c=1;c<n;c++){
    if (A[c]>max){
      max=A[c];
    }
  }
  return max;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb=0;
  ub=max()+1;
  while (ub-lb>1){
    int mid = (lb+ub)/2;
    if(p(mid)){
      ub=mid;
    }
    else{
      lb=mid;
    }
  }
  printf("%d\n",lb);
  return 0;
}
