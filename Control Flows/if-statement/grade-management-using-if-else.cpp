/*Using if statements Implement grading system
*Output Should Look Like
*Total Marks-700
*Percentage- 80%
*Overrall Grade- A
*Remarks- Excellent
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  // Variable declarations
  int eng, kisw, math, chem, bio, phy, cre, agr;
  double total, percentage;
  char grade;
  string remark;

  // User input on the subjects
  // eng
  cout << "Input English Grade: \n";
  cin >> eng;
  // Kisw
  cout << "Input Kiswahili Grade: \n";
  cin >> kisw;
  // Maths
  cout << "Input mathematics Grade: \n";
  cin >> math;
  // Chem
  cout << "Input Chemistry Grade: \n";
  cin >> chem;
  // bio
  cout << "Input Biology Grade: \n";
  cin >> bio;
  // Phy
  cout << "Input Physics Grade: \n";
  cin >> phy;
  // CRE
  cout << "Input CRE Grade: \n";
  cin >> cre;
  // Agr
  cout << "Input Agriculture Grade: \n";
  cin >> agr;

  // Calculation of the toatal grade
  total = (eng + kisw + math + chem + bio + phy + cre + agr);
  // Calculation of the Percentage
  percentage = round((total/800 )* 100);

  cout << "===========Results Analysis============== \n";

  if (percentage >= 70)
  {
    grade = 'A';
    remark = "Excellent 🎊🎊";
  }else if (percentage >=60 && percentage <= 69)
  {
    grade = 'B';
    remark = "Very Good 👋👋";
  }else if (percentage >=50 && percentage <= 59)
  {
    grade = 'C';
    remark = "Good 👋";
  }else if (percentage >=40 && percentage <= 49)
  {
    grade = 'D';
    remark = "Fair 😪";
  }else if (percentage < 40)
  {
    grade = 'E';
    remark = "Fail ☠️☠️";
  }else
  {
    cout << "Invalid Inputs😪\n";
  }

  // Display the results
  cout << "Total Grade: "<< total << endl;
  cout << "Percentage: " << percentage << "%" << endl;
  cout << "Overall Grade: " << grade << endl;
  cout << "Remarks: " << remark;

  return 0;
}