#include <stdio.h>
#include <stdlib.h>
/*
  Perform basic string compression by using counts of repeated characters
*/

char* stringCompression(char* string);

int main(){
  
  printf("\n%s\n", stringCompression("aabbccddfd"));
  
  return 0;
}

int numElements(char* string){
  return sizeof(string)/sizeof(char);
}

char* stringCompression(char* string){
  int count = 0;
  int i = 1;
  
  while (string[i] != '\0'){
    if (string[i] != string[i-1]){
      ++count;
    }
    ++i;
  }

  
  char* newString = malloc(count * 2);
  count = 1;
  i = 1;
  int j = 0;
  
  while(string[i] != 0){
    if (string[i] == string[i-1]){
      ++count;
      
    }
    else{
     newString[j] = string[i-1];
     newString[j+1] = count + '0';
     j = j + 2;
     count = 1;
    }
           ++i;
  }
  newString[j] = string[i-1];
  newString[j+1] = count + '0';

  return newString;

}
