#include <iostream>
using namespace std;

int main() {
  
  int remains[42] = {};

  int num;

  for(int i = 0; i < 10; i++){
    cin >> num;

    remains[num % 42]++;
  }

  int compare = 0;

  for(int c : remains){
    if(c > 0){
      compare++;
    }
  }

  cout << compare;

  return 0;
  
}
