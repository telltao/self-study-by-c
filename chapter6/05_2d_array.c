#include <stdio.h>
#include <ctype.h>

#include "io_utils.h"
#define  LENGTH  10

void SumIntArrays(int rows,int columns,int array[][columns],int result[]) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
      result[i] += array[i][j];
    }
  }
}

int main() {
  // 创建一个二维数组
  int vehicle_limits[5][2] = {
      {0,5},
      {1,6},
      {2,7},
      {3,8},
      {4,9}
  };
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 2; ++j) {
      vehicle_limits[i][j] = i+j;

    }
  }
  int score[5][4] = {
      {200,300,400,500},
      {1200,1300,1400,1500},
      {2200,2300,2400,2500},
      {3200,3300,3400,3500},
      {4200,4300,4400,4500}
  };
  int result[5] = {0};
  SumIntArrays(5,4,score,result);
  PRINT_INT_ARRAY(result,5);

  return 0;
}
