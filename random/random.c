#include <stdlib.h>
#include <stdio.h>
/* nけたの乱数 */
unsigned long xor128(int);
unsigned long pow1(int,int);

/* seed */
int seed[4] = {12345678,4185243,776511,45411};
int x,y,z,w;

int main(void) {
  printf("%lu\n", pow1(10,3));
  for (size_t i = 0; i < 1000; i++) {
    printf("%lu%s", xor128(3), ",");
  }
  printf("\n%s\n", "Done!!");
  return 0;
}
unsigned long xor128(int a){
    static unsigned long x=123456789,y=362436069,z=521288629,w=88675123;
    unsigned long t;
    t=(x^(x<<11));x=y;y=z;z=w;
    return(( w=(w^(w>>19))^(t^(t>>8)) ) % pow1(10, a));
}

unsigned long pow1(int a, int b){
  unsigned long t = 1;
  for (size_t i = 0; i < b; i++) {
    t *= a;
  }
  return t;
}
