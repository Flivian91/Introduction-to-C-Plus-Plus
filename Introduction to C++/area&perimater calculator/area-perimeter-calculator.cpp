#include <iostream>
using namespace std;

int main(){
  // varibles
  float length, width, area, perimeter;
  int modeNum;

  // Allow the user to select mode
  cout << "Select Mode (Area, Perimeter or Both)\n";
  cout << "1.Area\n";
  cout << "2.Perimeter\n";
  cout << "3.Both\n";
  cin >> modeNum;
  // Enter length
  cout << "Enter Length of Rectangle:\n";
  cin >> length;

  // Enter width
  cout << "Enter the width of Rectangle:\n";
  cin >> width;

  // Conditions
  if (modeNum == 1)
  {
    // Area calculation
    area = length * width;
    cout << "Area of Rectangle = "<< area << "\n";
  }else if(modeNum == 2){
    // Perimeter calculation
    perimeter = 2 * (length + width);
    cout << "Perimeter of Rectangle = "<< perimeter , "\n";
  }else if (modeNum == 3)
  {
    /* Calculation of both area and perimeter */
    area = length * width;
    perimeter = 2 * (length + width);

    // Area and Perimeter Diplay
    cout << "Area of Rectangle = "<< area << "\n";
    cout << "Perimeter of Rectangle = "<< perimeter << "\n";

  }else {
    // Error concerning mode selection
    cout << "Please enter valid Selection Mode\n";
  }
  return 0;
}