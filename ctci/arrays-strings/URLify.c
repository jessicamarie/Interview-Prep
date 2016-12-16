#include <stdio.h>
#include <stdlib.h>

int sizeOfArray(char* string);
char* replaceSpace(char* string, int newLength);

/*
  A method to replace all spaces in a string with %20
*/

int main(){
  int length = sizeOfArray("this is a string ");
  printf("URLify: %s\n", replaceSpace("this is a string ", length));
  return 0;
}

int sizeOfArray(char* string){
  int numSpaces, i, length;
  numSpaces = 0;
  i = 0;  
  length = 0;

  while(string[i] != '\0'){
    if(string[i] == ' '){
      ++numSpaces;
    }
    ++i; 
  }
  
  length = i + (numSpaces * 2);
  return length;
}

char* replaceSpace(char* string, int newLength){
  int i = 0;
  int j = 0;
  char* newString = malloc(newLength * sizeof(char));
  while (string[i] != '\0'){
    if(string[i] == ' '){
      newString[j] = '%';
      newString[j+1] = '2';
      newString[j+2] = '0';
      j = j+3;
    }
    else{
      newString[j] = string[i];
      ++j;
    }
  ++i;
  }
  return newString;
}
