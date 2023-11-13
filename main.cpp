#include <iostream>
using namespace std;

string add(double number, double number2, double ans){ //defines function add as string containing listed varaibles
  ans = number + number2; //add number and number2
  cout << number << "+" << number2 << "=" << ans << "\n"; //print
}

string subtract(double number, double number2, double ans){ //defines function subtract as string containing listed varaibles
  ans = number - number2; //subtract number and number2
  cout << number << "-" << number2 << "=" << ans << "\n"; //print
}

string multiply(double number, double number2, double ans){ //defines function multiply as string containing listed varaibles
  ans = number * number2; //multiply number and number2
  cout << number << "x" << number2 << "=" << ans << "\n"; //print
}

string divide(double number, double number2, double ans){ //defines function divide as string containing listed varaibles
  ans = number / number2; //divide number and number2
  cout << number << "÷" << number2 << "=" << ans << "\n"; //print
}

int main() {
  double number = 10; //declares number as ten stored as real
  double number2; //declares number2 as a real
  double ans; //declares ans as a real
  string calc; //declares calc as a string
  double count = 0; //declares count as a real

  cout << "Welcome to the best C++ calculator, designed for efficiency and simplicity.\n"; //prints welcome message
  cout << "Enter the first number for your calculation\n"; //print
  cin >> number; //input for number
  cout << "Would you like to add, subtract, multiply, divide or use powers?\n"; //print
  cin >> calc; //input for calc
  if (calc == "powers" || calc == "power" || calc == "use powers" || calc == "^"){
    cout << "\n"
  else if (calc == "add" || calc == "plus" || calc == "+" || calc == "subtract" || calc == "minus" || calc == "-" || calc == "multiply" || calc == "times" || calc == "x" || calc == "divide" || calc == "/" || calc == "÷"){
    cout << "Enter the second number for your calculation\n"; //print
    cin >> number2; //input for number2
  }
  else {
    cout << "Error. Inalid input.\n"
  }
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
    cout << "What would you like to do " << number << " to the power of?\n"; //print
    cin >> number2; //input for number2
    while (count <= number2){
      ans = number * number; //multiply number by itself
      count = count + 1; //add 1 to count
    }
    cout << number << " to the power of " << number2 << " = " << ans << "\n"; //print
  }
  else{
    cout << "Error: Invalid Input\n"; //print
  }
  cout << "Thank you for using the best C++ calculator, designed for efficiency and simplicity.\n"; //print

  return 0;
}