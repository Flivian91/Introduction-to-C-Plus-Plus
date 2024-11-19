#include <iostream>
using namespace std;

int main(){
  int modeNum;
  float temp, convertedTemp;
  char tempCode;
  // Selection 
  cout << "Select Mode of conversion(type Number)\n";
  cout << "1.Celsius To Fehrenhit\n";
  cout << "2.Fahrenheit To Celsius\n";
  cin >> modeNum;
  // Enter temparature
  cout << "Enter Temparature:";
  cin >> temp;

  // Conditions for calculations
  if(modeNum == 1){
    // Conversion from Celsius to Fahrenheit
    tempCode = 'F';
    convertedTemp = (temp * 9/5) + 32;
    cout << "The temparature = "<< convertedTemp << " "<< tempCode << "\n";
  }else if (modeNum == 2)
  {
    // Converstion from Fahrenheit to Celsius
    tempCode = 'C';
    convertedTemp = (temp - 32) * 5/9;
    cout << "The temparature = "<< convertedTemp << " " << tempCode << "\n";
  }else{
    // Error for wrong selection
    cout << "You entered Wrong Selection mode\n";
  }
  return 0;
  
}
