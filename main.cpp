#include <iostream>

int main() {

  int number1;
  int number2;
  std::string op;
  double result;

  std::cout << "This is a simple calculator. You will enter 2 numbers and a Operator" << std::endl;
  
  std::cout << "Enter first number" << std::endl;
  std::cin >> number1;

  std::cout << "Enter operator" << std::endl;
  std::cin >> op;

  std::cout << "Enter second number" << std::endl;
  std::cin >> number2;
  
  if(op == "+") {
    result = number1 + (double)number2;
  } else if(op == "/") {
    result = number1 / (double)number2;
  } else if(op == "*" || op == "x") {
    result = number1 * (double)number2;
  } else if(op == "-") {
    result = number1 - (double)number2;
  }

  std::cout << number1 << " " << op << " " << number2 << " = " << result << std::endl;

  return 0;  
}