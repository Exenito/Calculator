# include <stdio.h>
// This is a simple calculator.
int main() {
  float num1; // declare variables
  float num2;
  char oper;

 printf("This is a calculator. Please enter a number: "); // input user 1st number
scanf("%f", &num1);

printf("Now enter the second number: "); // input user 2nd number
scanf("%f", &num2);

printf("Enter the arithmetic operator you would like to use: "); // input user operator  
scanf(" %c", &oper);

if (oper == '+') { // if addition
    printf("%.2f + %.2f = %.2f ", num1, num2, num1 + num2);
}
else if (oper == '-') { // if subtraction
    printf("%.2f - %.2f = %.2f ", num1, num2, num1 - num2);
}
else if (oper == '*') { // if multiplication
    printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
}
else if (oper == '/') { // if division
    printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
}
else { // if not operator
    printf("Not an arithmetic operator!");
}

    return 0;
}