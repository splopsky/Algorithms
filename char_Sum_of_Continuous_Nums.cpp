#include <iostream>
using namespace std;

// N numbers given without space. Output the sum of the given numbers. N is given in the first line.
int main() {

  int N;
  char c;
  int sum = 0;
  
  cin >> N;


  for(int i = 0; i < N; i++){
    cin >> c;
    sum += c - 48; // we subtract 0's ASCII value from the character input to get the desired integer and add it to the sum.
  }

  cout << sum;
  
  return 0;
}
