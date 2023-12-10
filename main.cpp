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

double areac(double number, double ans){
  ans = M_PI * number * number;
  cout << "The area of the circle is " << ans << "\n";
}

double circo(double number, double ans){
  ans = M_PI * number;
  cout << "The circomference of the circle is " << ans << "\n";
}

double modec(string mode, double number, double ans){
  cout << "What formula would you like to use?\n";
  cout << "1. πr^2\n";
  cout << "2. πd\n";
  cin >> mode;
  if (mode == "1" || mode == "πr^2"){
    cout << "What is the radius of the circle?\n";
    cin >> number;
    areac(number, ans);
  }
  else if (mode == "2" || mode == "πd"){
    cout << "What is the diameter of the circle?\n";
    cin >> number;
    circo(number, ans);
  }
  else{
    cout << "Error: Invalid input.";
  }
}

double quad(double number, double number2, double number3, double ans, double ans2){
  cout << "What is the value of a?\n";
    cin >> number;
    cout << "What is the value of b?\n";
    cin >> number2;
    cout << "What is the value of c?\n";
    cin >> number3;
    ans = (number2 * -1) + sqrt(pow(number2, 2) - 4 * number * number3);
    ans = ans / 2 * number;
    ans2 = (number2 * -1) - sqrt(pow(number2, 2) - 4 * number * number3);
    ans2 = ans2 / 2 * number;
    if (ans == ans2){
      cout << "-1 = " << ans << "\n";
    }
    else{
      cout << "The two values for -1 are " << ans2 << " and " << ans << "\n";
    }
}

double sine(double number, double ans){
  cout << "What value of sin would you like to find?\n";
  cin >> number;
  ans = sin(number);
  cout << "sin(" << number << ") = " << ans << "\n";
}

double cosine(double number, double ans){
  cout << "What value of cosine would you like to find?\n";
  cin >> number;
  ans = cos(number);
  cout << "cos(" << number << ") = " << ans << "\n";
}

double tangent(double number, double ans){
  cout << "What value of tan would you like to find?\n";
  cin >> number;
  ans = tan(number);
  cout << "tan(" << number << ") = " << ans << "\n";
}

double srulea(double number, double number2, double number3, double ans){
  cout << "What is the length of the side opposite of the angle you want to find\n"; //a
  cin >> number;
  cout << "What is the length of the other side?\n"; //b
  cin >> number2;
  cout << "What is the size of the angle?\n"; //sinb
  cin >> number3;
  ans = sin(number3) / number2;
  ans = ans * number;
  cout << "The angle is " << ans << "º\n";
}

double srules(double number, double number2, double number3, double ans){
  cout << "What is the size of the angle opposite of the side you want to find\n"; //sina
  cin >> number;
  cout << "What is the size of the other angle?\n"; //sinb
  cin >> number2;
  cout << "What is the length of the side?\n"; //b
  cin >> number3;
  ans = number3 / number2;
  ans = ans * number;
  cout << "The lenght of the side is " << ans << "\n";
}

double crulea(double number, double number2, double number3, double ans, double ans2, double ans3){
  cout << "What is the length of the side opposite the angle you want to find?\n";
  cin >> number;
  cout << "What are the lengths of the other two sides\n";
  cin >> number2;
  cin >> number3;
  ans = 2 * number2 * number3; //2bc
  ans2 = pow(number2, 2) + pow(number3, 2); //b2+c2
  ans3 = pow(number, 2) - ans2;
  ans2 = ans3 / ans;
  cout << "The angle is " << ans2 << "º\n";
}

double crules(double number, double number2, double number3, double ans, double ans2){
  cout << "What is the size of angle opposite the side you want to find?\n";
  cin >> number;
  cout << "What are the lengths of the other two sides\n";
  cin >> number2;
  cin >> number3;
  ans = 2 * number2 * number3 * cos(number);
  ans2 = pow(number2, 2) + pow(number3, 2) - ans;
  ans = sqrt(ans2);
  cout << "The length of the side is " << ans << "\n";
}

double srule(string mode, double number, double number2, double number3, double ans, double ans2){
  cout << "Are you trying to find an angle or a side length\n";
  cout << "1. Angle\n";
  cout << "2. Side\n";
  cin >> mode;
  if (mode == "1" || mode == "angle"){
    srulea(number, number2, number3, ans, ans2);
  }
  else if (mode == "2" || mode == "side"){
    srules(number, number2, number3, ans, ans2);
  }
  else{
    cout << "Error: Invalid input\n";
  }
}

double crule(string mode, double number, double number2, double number3, double ans, double ans2, double ans3){
  cout << "Are you trying to find an angle or a side length\n";
  cout << "1. Angle\n";
  cout << "2. Side\n";
  cin >> mode;
  if (mode == "1" || mode == "angle"){
    crulea(number, number2, number3, ans, ans2, ans3);
  }
  else if (mode == "2" || mode == "side"){
    crules(number, number2, number3, ans, ans2);
  }
  else{
    cout << "Error: Invalid input\n";
  }
}

double soh(double number, double number2, double number3, double ans){
  cout << "What is the size of the angle? [if you do not have a value input '-1']\n";
  cin >> number;
  cout << "What is the length of the opposite side? [if you do not have a value input '-1']\n";
  cin >> number2;
  cout << "What is the length of the hypotenuse? [if you do not have a value input '-1']\n";
  cin >> number3;
  if (number == -1){
    ans = asin(number2 / number3);
    cout << "The size of the angle is " << ans << "º/n";
  }
  else if (number2 == -1){
    ans = sin(number) * number3;
    cout << "The length of the opposite side is " << ans << "º\n";
  }
  else if (number3 == -1){
    ans = number2 / sin(number);
    cout << "The length of the hypotenuse is " << ans << "º\n";
  }
  else{
    cout << "Error: Invalid input\n";
  }
}

double cah(double number, double number2, double number3, double ans){
  cout << "What is the size of the angle? [if you do not have a value input '-1']\n";
  cin >> number;
  cout << "What is the length of the adjacent side? [if you do not have a value input '-1']\n";
  cin >> number2;
  cout << "What is the length of the hypotenuse? [if you do not have a value input '-1']\n";
  cin >> number3;
  if (number == -1){
    ans = asin(number2 / number3);
    cout << "The size of the angle is " << ans << "º/n";
  }
  else if (number2 == -1){
    ans = sin(number) * number3;
    cout << "The length of the adjacent side is " << ans << char(248) << "\n";
  }
  else if (number3 == -1){
    ans = number2 / sin(number);
    cout << "The length of the hypotenuse is " << ans << "º\n";
  }
  else{
    cout << "Error: Invalid input\n";
  }
}

double toa(double number, double number2, double number3, double ans){
  cout << "What is the size of the angle? [if you do not have a value input '-1']\n";
  cin >> number;
  cout << "What is the length of the opposite side? [if you do not have a value input '-1']\n";
  cin >> number2;
  cout << "What is the length of the adjacent side? [if you do not have a value input '-1']\n";
  cin >> number3;
  if (number == -1){
    ans = asin(number2 / number3);
    cout << "The size of the angle is " << ans << "º/n";
  }
  else if (number2 == -1){
    ans = sin(number) * number3;
    cout << "The length of the adjacent side is " << ans << "º\n";
  }
  else if (number3 == -1){
    ans = number2 / sin(number);
    cout << "The length of the hypotenuse is " << ans << "º\n";
  }
  else{
    cout << "Error: Invalid input\n";
  }
}

double sct(string mode, double number, double number2, double number3, double ans){
  cout << "Which trig function would you like to use?\n";
  cout << "1. sine\n";
  cout << "2. cosine\n";
  cout << "3. tangent\n";
  cin >> mode;
  if (mode == "1" || mode == "sin"){
    soh(number, number2, number3, ans);
  }
  else if (mode == "2" || mode == "cos" || mode == "cosine"){
    cah(number, number2, number3, ans);
  }
  else if (mode == "3" || mode == "tan" || mode == "tangent"){
    toa(number, number2, number3, ans);
  }
  else{
    cout << "Error: Invalid input\n";
  }
}

double tequ(string mode, double number, double number2, double number3, double ans, double ans2, double ans3){
  cout << "What equation would you like to use?\n";
  cout << "1. Sine rule\n";
  cout << "2. Cosine rule\n";
  cin >> mode;
  if (mode == "1" || mode == "sine rule" || mode == "sine"){
    srule(mode, number, number2, number3, ans);
  }
  else if (mode == "2" || mode == "cosine rule" || mode == "cosine"){
    crule(mode, number, number2, number3, ans, ans2, ans3);
  }
  else{
    cout << "Error: Invalid input\n";
  }
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
  cout << "Would you like to use powers or roots?\n";
  cin >> calc;
  if (calc == "powers" || calc == "power" || calc == "use powers" || calc == "^"){
    cout << "Enter the first number for your calculation\n"; //print
    cin >> number; //input for number
    cout << "What would you like to do " << number << " to the power of?\n"; //print
    cin >> number2; //input for number2
    ans = pow(number, number2);
    cout << number << " to the power of " << number2 << " = " << ans << "\n"; //print
    }
  else if (calc == "roots" || calc == "root"){
    cout << "What number do you want to find the square root of?\n";
    cin >> number;
    ans = sqrt(number);
    cout << "The square root of " << number << " is " << ans << "\n";
  }
  else{
    cout << "Error: Invalid input.\n";
  }
}

string func(string mode, double number, double number2, double number3, double ans, double ans2){
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
      quad(number, number2, number3, ans, ans2);
    }
  else{
    cout << "Error: Invalid input\n";
  }
}

string trig(string mode, double number, double number2, double number3, double ans){
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
    sct(mode, number, number2, number3, ans);
  }
  else if (mode == "5"){
    tequ(mode);
  }
  else{
    cout << "Error: Invalid input\n";
  }
}

string sequ(string mode){
  cout << "Would you like to find the nth term of a sequence or have one genarated?\n";
  cout << "1. Find nth term\n";
  cout << "2. Generate sequence\n";
  cin >> mode;
  if (mode == "1"){
    //placehlder
  }
  else if (mode == "2"){
    //placeholder
  }
  else{
    cout << "Error: Invalid input\n";
  }
}

int main() {
  double number; //declares number as ten stored as real
  double number2; //declares number2 as a real
  double number3;
  double ans; //declares ans as a real
  double ans2;
  double ans3;
  string calc; //declares calc as a string
  double count = 0; //declares count as a real
  string mode;

  cout << "Welcome to the best C++ calculator, designed for efficiency and simplicity.\n"; //prints welcome message
  cout << "What mode do you want to use?\n";
  cout << "1. Basic maths (+,-,x,÷)\n";
  cout << "2. Powers & roots\n";
  cout << "3. Formulas\n";
  cout << "4. Triganometry\n";
  cout << "5. Sequences\n";
  cin >> mode;
  if (mode == "1" || mode == "basic maths\n"){
    basic(number, calc, number2, ans);
  }
  else if (mode == "2"){
    port(calc, number, number2, ans);
  }
  else if (mode == "3" || mode == "formulas"){
    func(mode, number, number2, number3, ans, ans2);
  }
  else if (mode == "4" || mode == "triganometry" || mode == "trig"){
    trig(mode, number, number2, number3, ans);
  }
  else if (mode == "3" || mode == "sequences"){
    sequ(mode);
  }
  else{
    cout << "Error: Invalid input\n";
  }
  cout << "Thank you for using the best C++ calculator, designed for efficiency and simplicity.\n"; //print
  return 0;
}