#include <iostream>
using namespace std;

int main() {

  int N;
  cin >> N;

  for (int i = 0; i < N; i++){

    int student_nums;
    cin >> student_nums;

    int scores[1000];
    int sum = 0;
    int average;

    for(int i = 0; i < student_nums; i++){
      cin >> scores[i];

      sum += scores[i];
    }

    average = sum / student_nums;

    int count = 0;

    for(int i = 0; i < student_nums; i++){
      if(scores[i] > average)
        count ++;
    }

    double result = (double)count / student_nums * 100;

    // 소수점 3자리까지만 출력
    cout << fixed;
    cout.precision(3);
    cout << result << "%" << endl;
    
    
  }
  
  return 0;
  
}
