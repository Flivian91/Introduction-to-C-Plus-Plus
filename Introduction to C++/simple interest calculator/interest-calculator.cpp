#include <iostream>
using namespace std;

int main(){
  // variables
  float principal, rate, time, interest;

  // Enter principal
  cout << "Enter Principal:\n";
  cin >> principal;
  // Enter rate
  cout << "Enter Rate (range 0-100):\n";
  cin >> rate;

  // Enter Time 
  cout << "Enter Time in (year)\n";
  cin >> time;

  interest = (principal * rate * time) / 100;
  cout << "Interest = "<< interest << "\n";
  return 0;
}