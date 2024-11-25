#include <iostream>
using namespace std;

// Function Declaration
void Swap(int *x, int *y);

int main(){
  int a = 10;
  int b = 20;

// Values Before Swap
  cout << "The value before swap  a: " << a << endl;
  cout << "The value before swap  b: " << b << endl;
  // calling th function of invoking
  Swap(&a, &b);
  cout << "The value of a after swap: " << a << endl;
  cout << "The value of b after swap: " << b << endl;

  return 0;
}

void Swap(int *x, int *y){
  int temp;
  temp = *x; // Svale the value of X
  *x = *y; // y into x 
  *y = temp; // put y into x
  return;
}