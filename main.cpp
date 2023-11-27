#include <iostream>
#include <cmath>
using namespace std;

double inp2(double number){
  cout << "Enter the second number for your calculation\n"; //print
  cin >> number[1]; //input for number1
  return number[1];
}

double add(double number, double ans){ //defines function add as string containing listed varaibles
  ans = number[0] + number[1]; //add number and number2
  cout << number[0] << "+" << number[1] << "=" << ans << "\n"; //print
}

double subtract(double number, double ans){ //defines function subtract as string containing listed varaibles
  ans = number[0] - number[1]; //subtract number and number2
  cout << number[0] << "-" << number[1] << "=" << ans << "\n"; //print
}

double multiply(double number, double ans){ //defines function multiply as string containing listed varaibles
  ans = number[0] * number[1]; //multiply number and number2
  cout << number[0] << "x" << number[1] << "=" << ans << "\n"; //print
}

double divide(double number, double ans){ //defines function divide as string containing listed varaibles
  ans = number[0] / number[1]; //divide number and number2
  cout << number[0] << "÷" << number[1] << "=" << ans << "\n"; //print
}

double areac(double number, double ans){
  ans = M_PI * number[0] * number[0];
  cout << "The area of the circle is " << ans << "\n";
}

double circo(double number, double ans){
  ans = M_PI * number[0];
  cout << "The circomference of the circle is " << ans << "\n";
}

double modec(string mode, double number, double ans){
  cout << "What formula would you like to use?\n";
  cout << "1. πr^2\n";
  cout << "2. πd\n";
  cin >> mode;
  if (mode == "1" || mode == "πr^2"){
    cout << "What is the radius of the circle?\n";
    cin >> number[0];
    areac(number[0], ans);
  }
  else if (mode == "2" || mode == "πd"){
    cout << "What is the diameter of the circle?\n";
    cin >> number[0];
    circo(number[0], ans);
  }
  else{
    cout << "Error: Invalid input.";
  }
}

double quad(double number, double ans, double ans2){
  cout << "What is the value of a?\n";
    cin >> number[0];
    cout << "What is the value of b?\n";
    cin >> number[1];
    cout << "What is the value of c?\n";
    cin >> number[2];
    ans = (number[1] * -1) + sqrt(pow(number[1], 2) - 4 * number[0] * number[2]);
    ans = ans / 2 * number[0];
    ans2 = (number[1] * -1) - sqrt(pow(number[1], 2) - 4 * number[0] * number[2]);
    ans2 = ans2 / 2 * number[0];
    if (ans == ans2){
      cout << "-1 = " << ans << "\n";
    }
    else{
      cout << "The two values for -1 are " << ans2 << " and " << ans << "\n";
    }
}

double sine(double number, double ans){
  cout << "What value of sin would you like to find?\n";
  cin >> number[0];
  ans = sin(number[0]);
  cout << "sin(" << number[0] << ") = " << ans << "\n";
}

double cosine(double number, double ans){
  cout << "What value of cosine would you like to find?\n";
  cin >> number[0];
  ans = cos(number[0]);
  cout << "cos(" << number[0] << ") = " << ans << "\n";
}

double tangent(double number, double ans){
  cout << "What value of tan would you like to find?\n";
  cin >> number[0];
  ans = tan(number[0]);
  cout << "tan(" << number[0] << ") = " << ans << "\n";
}

double soh(double number, double ans){
  cout << "What is the size of the angle? [if you do not have a value input '-1']\n";
  cin >> number[0];
  cout << "What is the length of the opposite side? [if you do not have a value input '-1']\n";
  cin >> number[1];
  cout << "What is the length of the hypotenuse? [if you do not have a value input '-1']\n";
  cin >> number[2];
  if (number[0] == -1){
    ans = asin(number[1] / number[2]);
    cout << "The size of the angle is " << ans << "º/n";
  }
  else if (number[1] == -1){
    ans = sin(number[0]) * number[2];
    cout << "The length of the opposite side is " << ans << "º\n";
  }
  else if (number[2] == -1){
    ans = number[1] / sin(number[0]);
    cout << "The length of the hypotenuse is " << ans << "º\n";
  }
  else{
    cout << "Error: Invalid input\n";
  }
}

double cah(double number,double ans){
  cout << "What is the size of the angle? [if you do not have a value input '-1']\n";
  cin >> number[0];
  cout << "What is the length of the adjacent side? [if you do not have a value input '-1']\n";
  cin >> number[1];
  cout << "What is the length of the hypotenuse? [if you do not have a value input '-1']\n";
  cin >> number[2];
  if (number[0] == -1){
    ans = asin(number[1] / number[2]);
    cout << "The size of the angle is " << ans << "º/n";
  }
  else if (number[1] == -1){
    ans = sin(number[0]) * number[2];
    cout << "The length of the adjacent side is " << ans << char(248) << "\n";
  }
  else if (number[2] == -1){
    ans = number[1] / sin(number[0]);
    cout << "The length of the hypotenuse is " << ans << "º\n";
  }
  else{
    cout << "Error: Invalid input\n";
  }
}

double toa(double number, double ans){
  cout << "What is the size of the angle? [if you do not have a value input '-1']\n";
  cin >> number[0];
  cout << "What is the length of the opposite side? [if you do not have a value input '-1']\n";
  cin >> number[1];
  cout << "What is the length of the adjacent side? [if you do not have a value input '-1']\n";
  cin >> number[2];
  if (number[0] == -1){
    ans = asin(number[1] / number[2]);
    cout << "The size of the angle is " << ans << "º/n";
  }
  else if (number[1] == -1){
    ans = sin(number[0]) * number[2];
    cout << "The length of the adjacent side is " << ans << "º\n";
  }
  else if (number[2] == -1){
    ans = number[1] / sin(number[0]);
    cout << "The length of the hypotenuse is " << ans << "º\n";
  }
  else{
    cout << "Error: Invalid input\n";
  }
}

double sct(string mode, double number, double ans){
  cout << "Which trig function would you like to use?\n";
  cout << "1. sine\n";
  cout << "2. cosine\n";
  cout << "3. tangent\n";
  cin >> mode;
  if (mode == "1" || mode == "sin"){
    soh(number, ans);
  }
  else if (mode == "2" || mode == "cos" || mode == "cosine"){
    cah(number, ans);
  }
  else if (mode == "3" || mode == "tan" || mode == "tangent"){
    toa(number, ans);
  }
  else{
    cout << "Error: Invalid input\n";
  }
}

string basic(double number, string calc, double ans){
  cout << "Enter the first number for your calculation\n"; //print
  cin >> number[0]; //input for number
  cout << "Would you like to add, subtract, multiply or divide?\n"; //print
  cin >> calc; //input for calc

  if (calc == "add" || calc == "plus" || calc == "+"){ //if calc is add
    number[1] = inp2(number[1]);
    add(number, ans);
  }
  else if (calc == "subtract" || calc == "minus" || calc == "-"){ //if calc is subtract
    number[1] = inp2(number[1]);
    subtract(number, ans);
  }
  else if (calc == "multiply" || calc == "times" || calc == "x"){ //if calc is multiply
    number[1] = inp2(number[1]);
    multiply(number, ans);
  }
  else if (calc == "divide" || calc == "/" || calc == "÷"){ //if calc is divide
    number[1] = inp2(number[1]);
    divide(number, ans);
  }
  else if (calc == "powers" || calc == "power" || calc == "use powers" || calc == "^"){
    cout << "What would you like to do " << number[0] << " to the power of?\n"; //print
    cin >> number[1]; //input for number2
    ans = pow(number[0], number[1]);
    cout << number[0] << " to the power of " << number[1] << " = " << ans << "\n"; //print
  }
  else{
    cout << "Error: Invalid input\n"; //print
  }
}

string port(string calc, double number, double ans){
  cout << "Would you like to use powers or roots?\n";
  cin >> calc;
  if (calc == "powers" || calc == "power" || calc == "use powers" || calc == "^"){
    cout << "Enter the first number for your calculation\n"; //print
    cin >> number[0]; //input for number
    cout << "What would you like to do " << number[0] << " to the power of?\n"; //print
    cin >> number[1]; //input for number2
    ans = pow(number[0], number[1]);
    cout << number[0] << " to the power of " << number[1] << " = " << ans << "\n"; //print
    }
  else if (calc == "roots" || calc == "root"){
    cout << "What number do you want to find the square root of?\n";
    cin >> number[0];
    ans = sqrt(number[0]);
    cout << "The square root of " << number[0] << " is " << ans << "\n";
  }
  else{
    cout << "Error: Invalid input.\n";
  }
}

string func(string mode, double number, double ans, double ans2){
  cout << "What type of formula do you want to use?\n";
  cout << "1. Circles\n";
  cout << "2. Algebra\n";
  cin >> mode;
  if (mode == "circles" || mode == "1"){
    modec(mode, number, ans);
  }
  else if (mode == "algebra" || mode == "2"){
    cout << "What formula would you like to use?\n";
    cout << "1. The Quadratic formula\n";
    cin >> mode;
  }
    if (mode == "1"){
      quad(number, ans, ans2);
    }
  else{
    cout << "Error: Invalid input\n";
  }
}

string trig(string mode, double number, double ans){
  cout << "Which trig function would you like to use?\n";
  cout << "1. sine\n";
  cout << "2. cosine\n";
  cout << "3. tangent\n";
  cout << "4. SOH CAH TOA\n";
  cout << "5. trig equations\n";
  cin >> mode;
  if (mode == "1" || mode == "sin"){
    sine(number, ans);
  }
  else if (mode == "2" || mode == "cos" || mode == "cosine"){
    cosine(number, ans);
  }
  else if (mode == "3" || mode == "tan" || mode == "tangent"){
    tangent(number, ans);
  }
  else if (mode == "4"){
    sct(mode, number, ans);
  }
  else if (mode == "5"){
    cout << "This bit hasn't been coded yet :(\n";
  }
  else{
    cout << "Error: Invalid input\n";
  }
}

int main() {
  double number[3]
  double ans; //declares ans as a real
  string calc; //declares calc as a string
  double count = 0; //declares count as a real
  string mode;
  double ans2;

  cout << "Welcome to the best C++ calculator, designed for efficiency and simplicity.\n"; //prints welcome message
  cout << "What mode do you want to use?\n";
  cout << "1. Basic maths (+,-,-1,÷)\n";
  cout << "2. Powers & roots\n";
  cout << "3. Formulas\n";
  cout << "4. Triganometry\n";
  cin >> mode;
  if (mode == "1" || mode == "basic maths\n"){
    basic(number, calc, ans);
  }
  else if (mode == "2"){
    port(calc, number, ans);
  }
  else if (mode == "3" || mode == "formulas"){
    func(mode, number, ans, ans2);
  }
  else if (mode == "4" || mode == "triganometry" || mode == "trig"){
    trig(mode, number, ans);
  }
  else{
    cout << "Error: Invalid input\n";
  }
  cout << "Thank you for using the best C++ calculator, designed for efficiency and simplicity.\n"; //print
  return 0;
}