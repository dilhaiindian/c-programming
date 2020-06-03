#include<stdio.h>
#include<stdlib.h>

size_t maxSeq(int * array, size_t n){
  if(n == 1){
    return 0;
  }
  int max = 1;
  int initial = 1;
  for(int i=1; i<n; i++){
    if(array[i]>array[i-1]){
      initial += 1;
    }
    else{
      initial = 1;
    }
    if(initial > max){
      max = initial;
    }
  }
  return max;
}
