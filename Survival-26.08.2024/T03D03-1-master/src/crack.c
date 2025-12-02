#include <math.h>
#include <stdio.h>

int main(void) {
  double a = 0, b = 0;
  char end_char;
  int read_count;

  read_count = scanf("%lf %lf%c", &a, &b, &end_char);

  if (read_count != 3) {
    printf("n/a\n");
    return 0;
  } else if (end_char != '\n' && end_char != EOF) {
    printf("n/a\n");
    return 0;
  } else if (a * a + b * b <= 25.0) {
    printf("GOTCHA\n");
    return 0;
  } else {
    printf("MISS\n");
    return 0;
  }
  return 0;
}