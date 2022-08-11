#include <stdio.h>
#include <stdlib.h>
int main() {

  // 1. random number
  // [0, 0x7fff]
  int magic_number = rand();
  // 2. loop
  while (1) {
    int user_input;
    puts("Please input a number:");
    scanf("%d", &user_input);
    if (user_input > magic_number) {
      printf("Your number is bigger!");
    } else if (user_input < magic_number) {
      printf("Your number is smaller!");
    } else {
      printf("Yes! You got it!");
      break;
    }
  }


}
