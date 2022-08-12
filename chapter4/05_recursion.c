#include <stdio.h>
#include <stdarg.h>
/**
 * 阶乘 规则  f(n) = nf(n-1) 初值 f(n) = 1
 * @return
 */
unsigned int Fatorial(unsigned int n) {
  // 如果为0 中断
  if (n == 0) {
    return 1; // f(n) = 1
  }
  return n * Fatorial(n - 1); // f(n) = nf(n-1)

}

/**
 * 斐波那契数列-递归 规则: f(n) = f(n-1) + f(n-2) 初值 f(0) = 0,f(1) = 1
 *
 * @return
 */
unsigned int Fibonacci(unsigned int n) {
  if (n == 0 || n == 1) {
    return n; //  f(0) = 0,f(1) = 1
  }
  return Fibonacci(n - 1) + Fibonacci(n - 2); // f(n) = f(n-1) + f(n-2)
}
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

int main() {
  printf("3!:%d\n", Fatorial(3));
  printf("5!:%d\n", Fatorial(5));
  printf("10!:%d\n", Fatorial(10));
  printf("----------\n");
  printf("FactorialByIteration 3 !:%d\n", FactorialByIteration(3));
  printf("FactorialByIteration 5 !:%d\n", FactorialByIteration(5));
  printf("FactorialByIteration 10!:%d\n", FactorialByIteration(10));



  return 0;
}