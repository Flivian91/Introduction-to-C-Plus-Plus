#include <iostream>
#include <cmath>
using namespace std;
int main(){
    const double PI = 3.14;
    double radius, area;
    cout << "Enter The Radius of the Circle: \n";
    cin >> radius;

    // Area calculation
    area = PI * radius * radius;
    cout<< "The Area of Circle is: "<< area;


    return 0;

} // namespace name
