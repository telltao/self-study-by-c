#include <stdio.h>
#include <ctype.h>

#include "io_utils.h"
#define  ARRAY_SIZE  10

int main() {
  char string[] = "Hello World";
  for (int i = 0; i < 11; ++i) {
    PRINT_CHAR(string[i]);
  }
  PRINTLNF("%s",string);

  char string_zh[] = "你好,中国";
  // 宽字符
  wchar_t ws [] = L"你好,中国";
  return 0;
}
