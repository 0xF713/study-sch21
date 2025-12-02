#include <stdio.h>

int max(int a, int b);

int main(void) {
  int a = 0, b = 0;
  char end_char;
  int read_count;

  read_count = scanf("%d %d%c", &a, &b, &end_char);

  if (read_count != 3) {
    printf("n/a\n");
    return 0;
  } else if (end_char != '\n' && end_char != EOF) {
    printf("n/a\n");
    return 0;
  } else {
    printf("%d\n", max(a, b));
  }

  return 0;
}

int max(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}