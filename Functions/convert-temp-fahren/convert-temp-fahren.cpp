// Write a program the converts Temparature between Celsius to Fahrenhert
#include <iostream>
using namespace std;

// Function Declaration
// 01. Celsius to Fahrenhert;
double ConvertTemparature(double temp, int num);

int main(){
  double convertedTemp;
  int selectMode;
  double temp;

  cout << "====Temp Conversion System====" << endl;
  // User Select Mode of conversion
  cout << "Select Mode of Conversion Below."<< endl;
  cout << "1. Celsius To Fahrenhert"<< endl;
  cout << "2. Fahrenhert To Celsius"<< endl;
  cin >> selectMode;

  // Take Temparature form User
  cout << "Enter Temparature: " << endl;
  cin >> temp;

  // Function invoking or calling the function
  convertedTemp = ConvertTemparature(temp, selectMode);

  if(selectMode == 1){
    cout << "Converted Temp is: " << convertedTemp << "F";
  }else {
    cout << "Converted Temp is: " << convertedTemp << "C";
  }
  if(convertedTemp == -1){
    cout << "Invalid User input";
  }
  return 0;
}

double ConvertTemparature(double temp, int num){
  double results;

  if(num == 1){
    results = (temp * 9/5) + 32;
  }else if (num == 2){
    results = (temp - 32) * 5/9;
  }else{
    results = -1;
  }
  return results;
  
}