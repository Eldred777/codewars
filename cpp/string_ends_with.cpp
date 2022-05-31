#include <string>

bool solution(std::string const& str, std::string const& ending) {
  int strLen = str.length();
  int endLen = ending.length();

  for (int i = strLen - endLen; i < strLen; i++) {
    int j = i - strLen + endLen;
    if (str[i] != ending[j]) {
      // string ending differs from target
      return false;
    }
  }

  return true;
}