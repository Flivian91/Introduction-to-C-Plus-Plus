// The program finds the max num number on tow number passes inside the function
#include <iostream>
using namespace std;

// FUnction declaration
int Max(int num1, int num2);

int main(){
  int a = 100;
  int b = 200;
  int res;
  // Invoking the function or calling the function
  res = Max(a, b);
  cout << "The maximum value: " << res;
  return 0;
}

int Max(int num1, int num2){
  // Local Variables
  int results;

  if(num1 > num2){
    results = num1;
  }else{
    results = num2;
  }
  return results;
}