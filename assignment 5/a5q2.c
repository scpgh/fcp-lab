//....................Question-2.................//

#include <stdio.h>

int main() {

  char op;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%0.2lf",first + second);
      break;
    case '-':
      printf("%0.2lf", first - second);
      break;
    case '*':
      printf("%0.2lf ",first * second);
      break;
    case '/':
      printf("%0.2lf",first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
