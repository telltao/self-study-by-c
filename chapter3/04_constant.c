#include <stdio.h>
#include <limits.h>
#include <wchar.h>

//定义一个宏
#define COLOR_RED 0xFF0000
/**
 * 常量
 * @return
 */
int main() {

  const int red = 0xFF0000;

  printf("red:%d\n", red);

  // red是个伪变量 我们可以获取到内存地址吧它改掉 某些版本可以改
  int memoryRed = &red;
  memoryRed = 0;
  printf(" red :%d\n", red);

  printf(" *p_k_red :%d\n", memoryRed);
  // macro  宏 源文件预处理后
  printf(" COLOR_RED :%d\n", COLOR_RED);

// 取消定义宏
#undef COLOR_RED
// 报错
//printf("COLOR_RED: %d\n",COLOR_RED);


  return 0;
}
