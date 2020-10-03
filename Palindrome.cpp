#include <iostream>
#include <cstring>

using namespace std;

int main() {
  
  char str[20];
  char str2[20];
  cin.get(str, 20);
  cin.get();
  cout << str2 << endl;
  int count = strlen(str) - 1;
  for (int i = 0; i <= strlen(str); i++) {
    if (str[i] != '\n') {
      str2[count] = str[i];

     
      cout << str2[count] << endl;
      cout << count << endl;
      cout << str2 << endl;
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
