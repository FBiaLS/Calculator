#include <iostream>
#include <cctype>

std::string add(double number, double number2, double ans){ //defines function add as string containing listed varaibles
  ans = number + number2; //add number and number2
  std::cout << number << "+" << number2 << "=" << ans << "\n"; //print
}

std::string subtract(double number, double number2, double ans){ //defines function subtract as string containing listed varaibles
  ans = number - number2; //subtract number and number2
  std::cout << number << "-" << number2 << "=" << ans << "\n"; //print
}

std::string multiply(double number, double number2, double ans){ //defines function multiply as string containing listed varaibles
  ans = number * number2; //multiply number and number2
  std::cout << number << "x" << number2 << "=" << ans << "\n"; //print
}

std::string divide(double number, double number2, double ans){ //defines function divide as string containing listed varaibles
  ans = number / number2; //divide number and number2
  std::cout << number << "÷" << number2 << "=" << ans << "\n"; //print
}

int main() {
  double number = 10; //declares number as ten stored as real
  double number2; //declares number2 as a real
  double ans; //declares ans as a real
  std::string calc; //declares calc as a string
  double count = 0; //declares count as a real

  std::cout << "Welcome to the best C++ calculator, designed for efficiency and simplicity.\n"; //prints welcome message
  std::cout << "Enter the first number for your calculation\n"; //print
  std::cin >> number; //input for number
  std::cout << "Would you like to add, subtract, multiply, divide or use powers?\n"; //print
  std::cin >> calc; //input for calc
  if (calc != "powers" || calc != "power" || calc != "use powers" || calc != "^"){
    std::cout << "Enter the second number for your calculation\n"; //print
    std::cin >> number2; //input for number2
  }

  if (calc == "add" || calc == "plus" || calc == "+"){ //if calc is add
    add(number, number2, ans);
    return 0;
  }
  else if (calc == "subtract" || calc == "minus" || calc == "-"){ //if calc is subtract
    subtract(number, number2, ans);
  }
  else if (calc == "multiply" || calc == "times" || calc == "x"){ //if calc is multiply
    multiply(number, number2, ans);
  }
  else if (calc == "divide" || calc == "/" || calc == "÷"){ //if calc is divide
    divide(number, number2, ans);
  }
  else if (calc == "powers" || calc == "power" || calc == "use powers" || calc == "^"){
    std::cout << "What would you like to do " << number << " to the power of?\n"; //print
    std::cin >> number2; //input for number2
    while (count <= number2){
      ans = number * number; //multiply number by itself
      count = count + 1; //add 1 to count
    }
    std::cout << number << " to the power of " << number2 << " = " << ans << "\n"; //print
  }
  else{
    std::cout << "Error: Invalid Input\n"; //print
  }
  std::cout << "Thank you for using the best C++ calculator, designed for efficiency and simplicity.\n"; //print

  return 0;
}