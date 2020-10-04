#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
  
  char str[20];
  char str2[20] = {'\0'};
  cin.get(str, 20);
  cin.get();
  cout << str2 << endl;
  int count = strlen(str) - 1;

  // implement and test reverse string array.
  for (int i = 0; i <= strlen(str)-1; i++) {
    if (str[i] != '\n') {
      
      str2[count] = str[i];

     
      cout << str2[count] << endl;
      cout << count << endl;
      
      if (count != 0) {
	count--;
      }
    } else {
   
    }
   }
  
   cout << str << endl;
   cout << str2 << endl;
  return 0;
}
