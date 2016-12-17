#include <stdio.h>

void sort1(void);

/* テスト用のデータ */
int numbers[9] = {1,4,5,6,8,9,3,7,2};

/* テストデータ配列の長さ
 * マクロにしたほうがいいかな
 */
int length = 9;

int main(void) {
  sort1();
  for (size_t i = 0; i < length; i++) {
    printf("%d%s", numbers[i], " ");
  }
  printf("%s\n", "\nDone!!");
  return 0;
}

void sort1(void){
  int keep,s;
  for (size_t i = length; i > 0; i--) {
    s = length;
    while (s >= 1) {
      if(numbers[s] > numbers[s-1]) s--;
      else {
        keep = numbers[s];
        numbers[s] = numbers[s-1];
        numbers[--s] = keep;
      }
    }
  }
}
