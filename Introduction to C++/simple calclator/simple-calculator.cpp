/*Create a simple calculator that performs basic arithmetic operations*/
#include <iostream>

using namespace std;
int main(){
  //Variable declarations
  float numberOne,numberTwo,total;
  int num;
 

  cout << "Enter first Number:\n";
  cin >> numberOne;
  cout << "Enter second number:\n";
  cin >> numberTwo;
  cout << "Select Operator to be used by Number\n";
  cout << "1.Addition\n";
  cout << "2.Subtraction\n";
  cout << "3.Multiplication\n";
  cout << "4.Division\n";
  cin >> num;

  if (num == 1)
  {
    total = numberOne + numberTwo;
  }else if (num == 2)
  {
    total = numberOne - numberTwo;
  }else if (num == 3)
  {
    total = numberOne * numberTwo;
  }else if (num == 4)
  {
    if (numberTwo != 0){
      total = numberOne/numberTwo;
    }else{
      cout << "Number connot be divided by 0\n";
      return 0;
    }
    
  }else{
    cout << "\nInvalid Operator selection\n";
    return 0;
  }

  cout << "\nOutput is:" << total; 
  return 0;
}