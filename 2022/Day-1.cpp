#include <iostream>
#include <fstream>
#include <string>


int main() {
  std::ifstream file("day-1-input.txt");
  if (file.is_open()) {
    int ans = -1;
    while(!file.eof()) {
      int sum = 0;
      std::string str;
      std::getline(file, str);

      if (str.length() == 0) {
        if (sum > ans)
          ans = sum;
        
        sum = 0;
      }
      else {
        sum += std::atoi(str);
      }
    }
    std::cout << ans;
  }
  file.close()
}
