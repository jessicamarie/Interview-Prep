#include <stdio.h>

int checkPermutation(char* string1, char* string2);

/*
  Given 2 strings, decide of one is a permutation of the other.
*/

int main(){
  char* sortedString1 = "this";
  char* sortedString2 = "thiis";
  printf("\n%d\n", checkPermutation(sortedString1, sortedString2));

  return 0;
}

int checkPermutation(char* string1, char* string2){

  // check that strings are same length
  // sort strings
  // check that sorted strings are the same

  int i = 0;
  while(string1[i] != '\0'){
    if (string1[i] != string2[i]){
      return 0;
    }
    ++i;
  }
  return 1;
}
