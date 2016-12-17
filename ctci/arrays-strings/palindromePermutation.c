#include <stdio.h>

int palindromePermutation(char* string);

/*
  Write a function to check if a string is a permutation of a palindrome.
*/

int main(){

  printf("\n%d\n", palindromePermutation("aacceeerrr"));
  return 0;
}

int palindromePermutation(char* string){
  int isOdd = 0;
  int i = 0;
  int count = 1;
  char c = string[i];
  // sort string
  // count that each character is even. Only one character allowed to be odd.
  while(string[i] != '\0'){
    if (c == string[i+1]){
      ++count;
    }
    else{
      if ((count % 2) == 1){
        ++isOdd;
      }
      count = 1;
      c = string[i+1];
    }
  ++i;
  }

  if (isOdd > 1 ){
    return 0;
  }
  else return 1;
}

