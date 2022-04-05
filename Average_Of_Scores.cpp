#include <iostream>
using namespace std;

int main() {
  
  int n;
  int score[1000] = {};
  int max = 0;
  double sum = 0;
  double average;

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> score[i];
    if (score[i] > max)
      max = score[i];
    sum += score[i];
  }

  average = ((sum / max) * 100) / n;

  cout << average;

  return 0;
  
}
