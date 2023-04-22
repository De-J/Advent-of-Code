#include <iostream>
#include <fstream>
#include <string>

int main() {
  std::ifstream file("day-1-input.txt");
  if (file.is_open()) {
    int ans = -1, sum = 0;
    while(!file.eof()) {
      std::string str;
      std::getline(file, str);

      if (str.length() == 0) {
        if (sum > ans)
          ans = sum;
        
        sum = 0;
      }
      else {
        sum += std::stoi(str);
      }
    }
    std::cout << ans;
  }
  file.close();
  return 0;
}
