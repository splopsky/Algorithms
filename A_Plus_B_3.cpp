#include <iostream>
using namespace std;


int main() {

  int num;
  cin >> num;

  int* add = new int[num*2];

  for (int i = 0; i < num*2; i++){
    cin >> add[i];
  }
  
  for (int i = 0; i < num; i++){
    int k = i * 2;
    cout << add[k] + add[k+1] << endl;
  }

  delete[] add;

  return 0;
  
}
