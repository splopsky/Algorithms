#include <iostream>
using namespace std;

int main()
{
  int num;
  cin>>num;
  int array[num - 1];

  
  for(int i = 0; i < num; i++)
  {
    cin>>array[i];
  }
  
  for(int i = num - 1 ; i >= 0; i--)
  {
    cout<<array[i]<<endl;
  }
  
  return 0;
  
}
