#include <iostream>
using namespace std;


int main() {

  int N;
  int compare;
  int cycle = 0;
  
  cin >> N;
  compare = N;

  do {

    N = (N % 10) * 10 + ((N / 10) + (N % 10)) % 10;

    cycle++;
  } while(compare != N);
  
  cout << cycle;

  return 0;
}
