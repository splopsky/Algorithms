#include <iostream>
#include <string>
using namespace std;

// Handling Strings
int main() {

  int N;
  string T;


  cin >> N;

  for (int i = 0; i < N; i++){
    cin >> T;
    int score = 0;
    int count = 0;

    for (int j = 0; j < T.length(); j++){
      if(T[j] == 'O') count++;
      else count = 0;
      score += count;
    }
    cout << score << endl;
  }
  
  return 0;
  
}
