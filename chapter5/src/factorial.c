//
// Created by 刘小涛 on 2022/8/16.
// 创建 source c文件 可以认为是实现类
#include "../include/factorial.h"

/**
 * 斐波那契数列-迭代器方式
 * @param n
 * @return
 */
unsigned int FactorialByIteration(unsigned int n) {
  unsigned int result = 1;
  for (unsigned int i = n; i > 0; --i) {
    result *=i;
  }
  return result;
}


