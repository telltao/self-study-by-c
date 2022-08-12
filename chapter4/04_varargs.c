#include <stdio.h>
#include <stdarg.h>
/**
 * 一个边长参数 随后将传递的参数输出
 * @param arg_count
 * @param ...
 */
void HandleVarargs(int arg_count,...)  {
  // 定长参数 用于获取我们边长的参数
  va_list  args;

  va_start(args,arg_count);
  for (int i = 0; i < arg_count; ++i) {
    // 取出对应的参数,(va_list,type)
    int arg = va_arg(args,int);
    // 输入i 和相应的值
    printf("%d,%d\n",i,arg);

  }
}
int main() {
  printf("Hello World\n");
  HandleVarargs(4,1,2,3,4,5,6,7,8);

  return 0;
}