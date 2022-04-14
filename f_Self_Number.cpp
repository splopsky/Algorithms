#include <iostream>
#include <vector>

using namespace std;

// save whether n is a self number or not
bool num[10001];

int d(int n){
  int temp;
  temp = n + n / 1000 + n % 1000 / 100 + n % 100 / 10 + n % 10;
  return temp;
}

void selfNum() {
  int temp;
  num[1] = false;
  for (int i = 0; i < 10000; i++){
    if (i < 10000){
      temp = d(i);
      if (temp < 10000)
        num[temp] = true;
    }
  }
}
// print nums with no self number
int main() {
  selfNum();
  for (int i = 1; i < 10000; i++)
    if (!num[i])
      printf("%d\n", i);

  return 0;
} 
