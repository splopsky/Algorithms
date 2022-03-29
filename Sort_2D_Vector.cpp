#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
  
  vector<pair<int, int>> v;

  int a, b;

  for(int i = 0; i < 9; i ++){
    cin >> a;
    b = i;
    v.push_back(pair<int, int>(a, b));
    
  }

  sort(v.begin(), v.end());

  cout << v[8].first << " " << v[8].second + 1;
      


  return 0;
}
