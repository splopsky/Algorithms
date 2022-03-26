#include <iostream>
using namespace std;


int main() {

  int T;
  int a, b;
  cin >> T;

  cin.tie(NULL);
  ios::sync_with_stdio(false);

  for(int i = 0; i < T; i++){
    cin >> a >> b;
    cout << a + b << "\n";
  }
  
  return 0;
  
}
