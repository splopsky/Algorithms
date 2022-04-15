#include <iostream>
using namespace std;

// 1-99 are all considered as hansoo
// inputs 1-1000
bool hansoo(int a){
  if(a < 100)
    return true;
  int a1, a2, a3;
  a3 = a / 100; // digit of hundreds
  a1 = a % 10;  // digit of ones
  a2 = a % 100 / 10; // digit of tens

  // does it make an arithmetic sequence?
  if(a3 - a2 == a2 - a1)
    return true;
  else
    return false;
}


int main() {
  int N, count = 0;
  cin >> N;
  for(int i = 1; i <= N; i++){
    if(hansoo(i))
      count++;
  }
  cout << count;
  return 0;
}
