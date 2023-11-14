#include <iostream>
#include <cmath>
using namespace std;

double inp2(double number2){
  cout << "Enter the second number for your calculation\n"; //print
  cin >> number2; //input for number2
  return number2;
}

double add(double number, double number2, double ans){ //defines function add as string containing listed varaibles
  ans = number + number2; //add number and number2
  cout << number << "+" << number2 << "=" << ans << "\n"; //print
}

double subtract(double number, double number2, double ans){ //defines function subtract as string containing listed varaibles
  ans = number - number2; //subtract number and number2
  cout << number << "-" << number2 << "=" << ans << "\n"; //print
}

double multiply(double number, double number2, double ans){ //defines function multiply as string containing listed varaibles
  ans = number * number2; //multiply number and number2
  cout << number << "x" << number2 << "=" << ans << "\n"; //print
}

double divide(double number, double number2, double ans){ //defines function divide as string containing listed varaibles
  ans = number / number2; //divide number and number2
  cout << number << "÷" << number2 << "=" << ans << "\n"; //print
}

string basic(double number, string calc, double number2, double ans){
  cout << "Enter the first number for your calculation\n"; //print
  cin >> number; //input for number
  cout << "Would you like to add, subtract, multiply or divide?\n"; //print
  cin >> calc; //input for calc

  if (calc == "add" || calc == "plus" || calc == "+"){ //if calc is add
    number2 = inp2(number2);
    add(number, number2, ans);
  }
  else if (calc == "subtract" || calc == "minus" || calc == "-"){ //if calc is subtract
    number2 = number2 = inp2(number2);
    subtract(number, number2, ans);
  }
  else if (calc == "multiply" || calc == "times" || calc == "x"){ //if calc is multiply
    number2 = inp2(number2);
    multiply(number, number2, ans);
  }
  else if (calc == "divide" || calc == "/" || calc == "÷"){ //if calc is divide
    number2 = inp2(number2);
    divide(number, number2, ans);
  }
  else if (calc == "powers" || calc == "power" || calc == "use powers" || calc == "^"){
    cout << "What would you like to do " << number << " to the power of?\n"; //print
    cin >> number2; //input for number2
    ans = pow(number, number2);
    cout << number << " to the power of " << number2 << " = " << ans << "\n"; //print
  }
  else{
    cout << "Error: Invalid input\n"; //print
  }
}

string port(string calc, double number, double number2, double ans){
cout << "Enter the first number for your calculation\n"; //print
  cin >> number; //input for number
if (calc == "powers" || calc == "power" || calc == "use powers" || calc == "^"){
  cout << "What would you like to do " << number << " to the power of?\n"; //print
  cin >> number2; //input for number2
  ans = pow(number, number2);
  cout << number << " to the power of " << number2 << " = " << ans << "\n"; //print
  }
else{
  cout << "Error: Invalid input.\n";
}
}

int main() {
  double number = 10; //declares number as ten stored as real
  double number2; //declares number2 as a real
  double ans; //declares ans as a real
  string calc; //declares calc as a string
  double count = 0; //declares count as a real
  string mode;

  cout << "Welcome to the best C++ calculator, designed for efficiency and simplicity.\n"; //prints welcome message
  cout << "What mode do you want to use?";
  cout << "1. Basic maths (+,-,x,÷)\n";
  cout << "2. Powers & roots\n";
  cin >> mode;
  if (mode == "1" || mode == "basic maths\n"){
    basic(number, calc, number2, ans);
  }
  else if (mode == "2"){
    port(calc, number, number2, ans);
  }
  else{
    cout << "Error: Invalid input\n";
  }

  cout << "Thank you for using the best C++ calculator, designed for efficiency and simplicity.\n"; //print

  return 0;
}