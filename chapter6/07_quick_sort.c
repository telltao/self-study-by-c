#include <stdio.h>
#include "io_utils.h"
#include <stdlib.h>
#include <time.h>

#define PLAYER_COUNT 50
/**
 * 交换元素
 * @param array
 * @param first
 * @param second
 */
void SwapElements(int array[], int first, int second) {
  int temp = array[first];
  array[first] = array[second];
  array[second] = temp;
}
/**
 * 将数组打乱顺序
 * @param array
 * @param length
 */
void ShuffleArray(int array[], int length) {
  srand(time(NULL));
  for (int i = length - 1; i > 0; --i) {
    int random_number = rand() % i;
    SwapElements(array, i, random_number);
  }
}


/**
 *分割数组
 * @param array
 * @param low
 * @param hight
 * @return
 */
int Partition(int array[], int low, int hight) {
  int pivot = array[hight];
  int partition = low;
  for (int i = low; i < hight; ++i) {
    if (array[i] < pivot) {
      SwapElements(array, i, partition++);
    }
  }
  SwapElements(array, partition, hight);
  return partition;
}
/**
 * 快速排序
 * @param array
 * @param low
 * @param hight
 */
void QuickSort(int array[], int low, int hight) {
  if (low > hight) return;
  int partition = Partition(array, low, hight);
  QuickSort(array, low, partition - 1);
  QuickSort(array, partition + 1, hight);

}

int main() {
  int players [PLAYER_COUNT];

  for (int i = 0; i < 50; ++i) {
    players[i] =i;
  }
  PRINT_INT_ARRAY(players,PLAYER_COUNT);
  ShuffleArray(players,PLAYER_COUNT);
  PRINT_INT_ARRAY(players,PLAYER_COUNT);
  QuickSort(players,0,PLAYER_COUNT-1);
  PRINT_INT_ARRAY(players,PLAYER_COUNT);
  return 0;
}
