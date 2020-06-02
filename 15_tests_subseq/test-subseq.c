#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int * array, size_t n);

int main(){
  int array1[] = {1, 2, 3, 4};
  int array2[] = {-1, -3, 2, 6, 8};
  int array3[] = {7};
  int array4[] = {-1, 0, 3, 6, 10, 9, 4, 1, 4, 2};
  int array5[] = {-1};

  if (maxSeq(NULL, 0)){
    printf("Test Failed: No array input");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array1, 0)){
    printf("Test Failed: 1, 2, 3, 4");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array1, 4) != 3){
    printf("Test Failed: 1, 2, 3, 4");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array2, 5) != 4){
    printf("Test Failed: -1, -3, 2, 6, 8");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array3, 1) != 1){
    printf("Test Failed: 7");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array4, 10) != 5){
    printf("Test Failed: -1, 0, 3, 6, 10, 9, 4, 1, 4, 2");
    exit(EXIT_FAILURE);
  }
  if (maxSeq(array5, 1) != 1){
    printf("Test Failed: -1");
    exit(EXIT_FAILURE);
  }
  return EXIT_SUCCESS;
}
