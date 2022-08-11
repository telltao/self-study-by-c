#include <stdio.h>
#include <limits.h>
#include <wchar.h>
/**
 * 双精度字符double 和浮点型 float 不能用浮点型来描述钱
 * @return
 */
int main() {
  // -10^-37 ~ 10^37
  float a_float = 3.14f;
  printf("size of float: %d\n",sizeof(a_float));
  double a_double = 3.14;
  printf("size of double: %d\n",sizeof(a_double));

  float lat = 39.90815f;
  //lat06:39908149
  int lat06 = (int)(lat * 1e6);
  // 0
  printf("减去后的值为:%d\n",39.908156f - lat);
  printf("lat06:%d\n",lat06);

  return 0;
}
