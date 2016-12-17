#include <stdio.h>
/*
  Given a string, write a function to check if they are one or zero edits away. 
    1. insert a character
    2. remove a character
    3. replace a character
*/

int oneAway(char* string1, char* string2);
int sameLength(char* string1, char* string2);

int main(){

  if (abs(sameLength("abek", "aepl")) > 1){
    printf("Not one away\n");
  }
  else{
    if (abs(sameLength("abek", "aepl")) > 1){
      printf("Not one away\n");
    }
    else printf("Is one away\n");
  }
  return 0;
}

int sameLength(char* string1, char* string2){
  int i = 0;
  int j = 0;
  while(string1[i] != '\0'){
  ++i;
  }
  while(string2[j] != '\0'){
  ++j;
  }

  return (i - j);
}
int oneAway(char* string1, char* string2){
  // sort both strings
  int i = 0;
  int j = 0;

  //int size1 = sizeof(string1)/sizeof(char);
  //int size2 = sizeof(string2)/sizeof(char);
  while(string1[i] != '\0'){
    if (string1[i] != string2[j]){
      ++i;
    }
    else{
      ++j; 
      ++i;
    }
  }
  return i-j;
}

