#include <iostream>
using namespace std;

int main() {

  int T;
  cin >> T;

  int* add = new int[T*2];

  for (int i = 0; i < T*2; i++){
    cin >> add[i];
  }
  
  for (int i = 0; i < T; i++){
    int k = i * 2;
    cout << "Case #" << i + 1 << ": " << add[k] << " + " << add[k+1] << " = " << add[k] + add[k+1] << endl;
  }

  delete[] add;

  
  return 0;

}
