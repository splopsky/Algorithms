#include <iostream>
using namespace std;


int main() {
  int a, b, c;
  int reward = 0;
  
  cin >> a >> b >> c;

  if (a==b && b==c){
   reward = 10000 + 1000*a;
  }

  if (a==b && b != c){
    reward = 1000 + 100*a;
  }
    if (b==c && c != a){
    reward = 1000 + 100*b;
  }
    if (c==a && a != b){
    reward = 1000 + 100*c;
  }

  else{
    if (a > b && a > c && b != c) {
      reward = a * 100;
    }
    if (b > c && b > a && c != a) {
      reward = b * 100;
    }
    if (c > a && c > b && a != b) {
      reward = c * 100;
    }
  }

  cout << reward;

  return 0;
  
}
