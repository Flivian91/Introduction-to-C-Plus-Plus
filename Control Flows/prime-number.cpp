#include <iostream>
using namespace std;
// This program is used to find the prime number for numbers from 2 to 100

int main(){
  int i, j;

  for(i=2; i<100; i++){
    for(j=2; j<=(i/j); j++)
      if(!(i%j)) break;
      if(j > (i/j)) cout << i << " is Prime \n";
  }

  return 0;
}