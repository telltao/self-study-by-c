#include <stdio.h>
#include "io_utils.h"
#define  ARRAY_SIZE  10
int main() {
  int array[ARRAY_SIZE];
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    array[i] = i;
    PRINT_INT(array[i]);
  }
  // int 数组
  int array_2[ARRAY_SIZE] = {0,1,2,3,4,5,6,7,8,9};
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    PRINT_INT(array_2[i]);
  }

  double  double_array[5] = {0,1,2,3,4};
  for (int i = 0; i <5; ++i) {
    PRINT_DOUBLE(double_array[i]);
  }
  // 给 char赋值 从第二个元素开始赋值
  char char_array[5] = {[2] = 'a','b','c'};
  for (int i = 0; i <5; ++i) {
    PRINT_CHAR(char_array[i]);

  }
  return 0;
}
