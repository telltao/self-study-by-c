#include <stdio.h>
#include <limits.h>
#include <wchar.h>
/**
 * 字符集 本次主要字符相关的 窄字符和宽字符等
 * @return
 */
int main() {
  // 字符集 ASCII

  char a = 'a'; // 97
  char char_1 = '1';// 49
  char char_0 = '0';// 48

  char i = 0; // \0, NULL

  // 字面量 literal
  // \n : newline
  // \b : backspace
  // \r : return
  // \t : table
  // \' : table
  // \" : " 字符串字面量

  char char_1_escape_oct = '\61';
  char char_1_escape_hex = '\x31';
  char newline = '\n';

  printf("char: %d\n",a);
  printf("char1: %d\n",char_1);
  printf("char 'i' : %d\n",i);

  printf("char 1: %c\n",char_1);
  printf("char 1: %c\n",char_1_escape_oct);
  printf("char 1: %c\n",char_1_escape_hex);

  //Unicode CJK Code point
  wchar_t zhong = L'中';
  printf("中:%d\n",zhong);
  wchar_t zhong_hex = L'\u4E2D';
  printf("中:%d\n",zhong_hex);

  // 字符串
  char *string = "中";

  return 0;
}
