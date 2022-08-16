// <> 会直接跳过本地路径
#include <stdio.h>
// 在这里引入头文件,方便下面直接调用 这里的双引号 会先在本地路径下搜索,随后在框架中搜索
//#include "include/factorial.h"
#include <factorial.h>
/**
 *  自定义头文件
 * @return
 */
int main() {
  printf("3 ! = %d\n",FactorialByIteration(3));
  return 0;
}
