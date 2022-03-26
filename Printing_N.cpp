#include <iostream>
using namespace std;


int main() {

  int n;
  cin >> n;

  cin.tie(NULL);
  ios::sync_with_stdio(false);
  
  for(int i = 0; i < n; i++){
    cout << i + 1 << "\n";
  }
  
  return 0;
  
}
