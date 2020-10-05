#include <iostream>
#include <cstring>

using namespace std;

int main() {
  
  char input_str[81];
  char nospace_str[81] = {'\0'};
  char reverse_str[81] = {'\0'};

  cout << "Is it a Palindrome?" << endl;
  cout << "Enter up to 80 characters to find out!" << endl;
  cin.get(input_str, 81);
  cin.get();
  
  int count;
  int j = 0;
   
  for (int i = 0; i < strlen(input_str); i++) {
    if (input_str[i] != '\n') {

      //change all to lowercase
      //learned tolower from http://www.cplusplus.com/reference/cctype/tolower/
      input_str[i] = tolower(input_str[i]);
      
      //removes space, removes non alphanumeric characters, copy to nonspace_string
      //learned isalnum from http://www.cplusplus.com/reference/cctype/isalnum/
      if (input_str[i] != ' ' && isalnum(input_str[i]) !=0){
	nospace_str[j] = input_str[i];
	j++;
      }
      
    }
  }
  
  //reverse string array
  count = strlen(nospace_str) - 1;
  
  for (int a = 0; a < strlen(nospace_str); a++) {
    reverse_str[count] = nospace_str[a]; 

    if (count != 0) {
      count--;
    } 
     
  }
  
  //Compare the string to see if they are equal
  if (strcmp(nospace_str, reverse_str) == 0) {
    cout << "It's a Palindrome" << endl;
  }
  else {
    cout << "Not a Palindrome" << endl;   
  }
  
  return 0;
}
