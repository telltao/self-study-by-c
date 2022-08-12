#include <stdio.h>
#include <stdarg.h>
/**
 * 创建一个汉诺塔原理来模拟递归
 * 设有三根柱子 柱子上有三块圆,第一块小号,第二块中号,第三块大号 堆放顺序为 小号,中号,大号
 * 将该圆移动到最后一根柱子上,且始终保持最大的始终在下面
 * @return
 */
/**
 *
 * @param n 盘子的数量
 * @param src 原始地址
 * @param dest 目标地址
 * @param tmp 临时存放位置
 */
void Move(int n, char src, char dest, char tmp) {
  if (n == 0) {
    return;
  } else if (n == 1) {
    printf("%c --> %c\n", src, dest);
  } else {
    // n-1 src移动到tmp 临时是 dest
    Move(n - 1, src, tmp, dest);
    // 吧最下面的大的 移动到目标位置上 从 src-> dest
    Move(1, src, dest, tmp);
    // 吧 n-1移动到目标上 并吧 src清空 就完成了移动
    Move(n - 1, tmp, dest, src);
  }

}

int main() {
  Move(3, 'A', 'B', 'C');
  return 0;
}