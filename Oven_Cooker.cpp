#include <iostream>
using namespace std;

int main() {

  int hr, min;
  int cook_time;

  cin >> hr >> min >> cook_time;

  int new_hr = hr + cook_time/60;
  int new_min = min + cook_time%60;

  if (new_min >= 60)
  {
    new_min -= 60;
    new_hr += 1;
  }
  
  if (new_hr >= 24)
  {
    new_hr -= 24;
  }

  cout << new_hr << " " << new_min;

  return 0;
  
  }
