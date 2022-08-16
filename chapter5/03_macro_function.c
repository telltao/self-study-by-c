#include <stdio.h>
/**
 *  自定义宏函数 宏的函数中的参数不可以进行计算 例如  MAX(1++, 3) 会错误调用两次
 * @return
 */

#define  MAX(a, b) (a) > (b) ? (a) : (b)

// 判断当前函数是否是合法的16进制函数
#define IS_HEX_CHARACTER(ch) \
((ch) >= '0' && (ch) <='9') || \
((ch) >= 'A' && (ch) <='F') || \
((ch) >= 'a' && (ch) <='f')

/**
 * 定义一个函数 得到两个数的最大值
 * @param a
 * @param b
 * @return
 */
int Max(int a, int b) {
  return a > b ? a : b;
}
int main() {
  int max = MAX(1, 3);
  int max2 = MAX(1, MAX(3, 4));
  // 这里使用的是函数 函数会先把 b进行计算 而宏 则会吧参数进行替换
  int max3 = Max(1, Max(3, 4));
  printf(" max,max2 %d %d\n", max, max2);
  printf(" max2 %d\n", max2);
  printf(" max3 %d\n", max3);

  printf("hex numb %d\n",IS_HEX_CHARACTER('A'));

  return 0;
}
