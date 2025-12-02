#include <stdio.h>

int sum(int a, int b);
int dif(int a, int b);
int mul(int a, int b);
int div(int a, int b);

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
    printf("%d %d %d", sum(a, b), dif(a, b), mul(a, b));
    if (b != 0) {
      printf(" %d\n", div(a, b));
      return 0;
    } else {
      printf(" n/a\n");
      return 0;
    }
  }
  return 0;
}

int sum(int a, int b) { return (a + b); }
int dif(int a, int b) { return (a - b); }
int mul(int a, int b) { return (a * b); }
int div(int a, int b) { return (a / b); }