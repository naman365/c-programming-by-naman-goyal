# include <iostream>
using namespace std;
int main(){

  char op;
  float num1, num2;

  cout <<"Enter any of the one sign for calculation out of the following  : -, +, *, /: ";
  cin >>op;

  cout << "Enter the two values : ";
  cin >> num1 >> num2;

  if(op=='+'){
      cout << num1 << " + " << num2 << " = " << num1 + num2;
  }
   else if(op=='-'){
      cout << num1 << " - " << num2 << " = " << num1 - num2;
   }
   else if(op=='*'){
          cout << num1 << " * " << num2 << " = " << num1 * num2;
   }
  else if(op=='/'){
          cout << num1 << " / " << num2 << " = " << num1 / num2;
  }

  return 0;
}
