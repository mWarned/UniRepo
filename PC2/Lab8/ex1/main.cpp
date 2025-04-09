#include <iostream>
#include <string>

int cntULetter(std::string str){
  int cnt = 0;
  for (std::string::iterator i = str.begin(); i != str.end(); i++) {
    if (*i >= 'A' && *i <= 'Z') {
      cnt++;
    }
  }
  return cnt;
}

int cntStrNumber(std::string str){
  int cnt = 0;
  for (std::string::iterator i = str.begin(); i != str.end(); i++) {
    if (*i >= '0' && *i <= '9') {
      cnt++;
    }
  }
  return cnt;
}

int main(){
  int x, y;
  std::string str("This XBS is a 4 String with 88 big letter");
  x = cntULetter(str);
  y = cntStrNumber(str);

  std::cout << "This string has " << x << " upper letters and " << y << " numbers." << std::endl;

  return 0;
}
