#include <stdio.h>
/**
 * 编码风格更改
 * 1 设置-> Editor -> Code Style C/C++ Set from 使用google的代码风格
 * 为什么? 因为C语言没有java那样的包空间结构(命名空间的概念),命令可能会与系统自带的函数或者第三方插件冲突
 * @return
 */
int main() {
  int sum = 0;
  int i = 0;
  while (i < 10) {
    sum += 1;
    i++;
  }
  printf("%d\n", sum);
  return 0;
}
