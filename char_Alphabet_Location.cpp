#include <iostream>
#include <string.h>
using namespace std;

// printing out the first location of the alphabet in a given word.

int main() {
  // size has to be 101 when word length is 100.
  char word[101];
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
  int arr[26];

    for(int i = 0; i < 26; i++){
    arr[i] = -1;
  }
  
  cin >> word;
  for(int i = 0; i < strlen(alphabet); i++){
    for(int j = 0;  j < strlen(word); j++){
      if ((alphabet[i] == word[j]) && arr[i] == -1 ){
        arr[i] = j;
      }
      else if (arr[i] != -1){
        break;
      }      
      else{
        arr[i] = -1;
      }
    }
  }

  for(int i = 0; i < 26; i++){
    cout << arr[i] << " ";
  }
  return 0;

}
