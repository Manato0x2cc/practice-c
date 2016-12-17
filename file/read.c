#include <stdio.h>

void read(FILE*);

int main(void) {
  /* FILEの構造体ポインタ */
  FILE *file;

  /* ファイル名を格納する文字列 */
  char filename[20];

  printf("%s\n", "Started read.c");

  printf("%s\n", "Enter file name");

  /* ファイル名を入力 */
  scanf("%s[^\n]", filename);

  /* rは読み込み専用 */
  file = fopen(filename, "r");

  /* NULLだったら終了 */
  if (file == NULL) {
    printf("%s%s\n", "Couldn't read file", filename);
    return 0;
  }

  read(file);
  return 0;
}

void read(FILE *file) {
  char* read[255];
  /* 読み込み */
	while (fgets(*read, 255, file) != NULL) {
	  printf("%s\n", *read);
	}

	/* ファイルを閉じる */
	fclose(file);
}
