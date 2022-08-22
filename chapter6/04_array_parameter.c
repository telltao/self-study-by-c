#include <stdio.h>
#include <ctype.h>

#include "io_utils.h"
#define  LENGTH  10

int SumArray(int arrays[], int length) {
  int sum = 0;
  for (int i = 0; i < length; ++i) {
      sum += arrays[i];
  }
  return sum;
}

int main() {

  int arrays[5] = {1,2,3,4,5};
  PRINT_INT(SumArray(arrays,5));


  return 0;
}
