#include <iostream>
#include <string>
using namespace std;

//counting alphabets in a word and printing the max alphabet.

//create size 26 array. Use ASCII code number. If first and second value same, print ?. 

//'A'=65, 'a'='97'

int main() 
{
  int arr[26] = {0,}; //for 26 alphabets
  int count = 0; // check if max letter is multiple.
  string word; // the input word

  cin >> word;

  for (int i = 0; i < word.length(); i++){
    if(word[i] < 97) 
      arr[word[i] - 65]++;
      // for upper class alphabets
    
    else 
      arr[word[i] - 97]++;
      // for lower class alphabets
    
  }

  int max = 0;
  int max_idx = 0;

  for (int i = 0; i < 26; i++){
    if (max < arr[i]){
      max = arr[i];
      max_idx = i;
      // starting from a, update the max value and index
    }
  }

  //check if multiple max
  for (int i = 0; i < 26; i++){
    if(max == arr[i]) count++;
  }

  if (count > 1) cout << "?";
  else cout << (char)(max_idx + 65);
  
  return 0;
}
