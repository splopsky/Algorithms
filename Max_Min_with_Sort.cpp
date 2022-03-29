#include <iostream>
#include <algorithm>
using namespace std;


int main(int argc, const char * argv[]) {
   ios_base::sync_with_stdio(0);

  
  int N;
  cin >> N;

  int arr[1000001];

  for(int i = 0; i < N; i++){
    cin >> arr[i];
  }

  sort(arr, arr + N);

  cout << arr[0] << " " << arr[N - 1];


  return 0;
}
