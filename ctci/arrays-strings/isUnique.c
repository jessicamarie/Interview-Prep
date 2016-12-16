#include <stdio.h>

char* isUnique(char* string);
/*
  Algorithm takes a sorted string to determine if a string has all unique characters.
*/

int main(){
  char* sortedString1 = "abcdefg";
  printf("%s is %s\n", sortedString1, isUnique(sortedString1));
  
  return 0;
}

char* isUnique(char* string){
  char c = string[0];
  int i = 1;
  
  while (string[i] != '\0'){
    if (string[i] == c){
      return ("not unique.\n");
    }
    c = string[i];
    ++i;
  }
  return ("unique.\n");
}
