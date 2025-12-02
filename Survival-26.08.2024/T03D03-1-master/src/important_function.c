#include <math.h>
#include <stdio.h>

double result(double x);

int main(void) {
  double x = 0;
  char end_char;
  int read_count;

  read_count = scanf("%lf%c", &x, &end_char);

  if (read_count != 2) {
    printf("n/a\n");
    return 0;
  } else if (end_char != '\n' && end_char != EOF) {
    printf("n/a\n");
    return 0;
  } else {
    printf("%.1lf", result(x));
  }
  return 0;
}

double result(double x) { return (0.4 * x - 2070.8); }