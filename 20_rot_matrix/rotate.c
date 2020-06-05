#include<stdio.h>
#include<stdlib.h>

void rotate(char matrix[10][10]){
for (int i = 0; i < 10 ; i++)   {
  for (int j = i; j < 10; j++){
    char temp =matrix[i][j];
    matrix[i][j]=matrix[j][i];
    matrix[j][i]=temp;
  }
 }
 return;
}

