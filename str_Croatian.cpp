#include <iostream>
#include <string>


using namespace std;


int main() {

  string croatian[8] = 
  {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

  string input;
  int idx;
  cin >> input;

  for(int i = 0; i < 8; i++)
    {
      while(1) // 루프 돌리기
      {
      idx = input.find(croatian[i]);
      // 일치 찾기 위해 npos 사용.
      if(idx == string::npos)
        break;
      // 해당 길이만큼의 문자를 길이가 1인 *로 대체
      input.replace(idx, croatian[i].length(), "*");}
    }

  cout << input.size();
  return 0;
}
