#include <iostream>
#include <string>

bool isVowel(const char c) {
  /* Returns whether the character is a vowel or not. */
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' ||
         c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

std::string disemvowel(const std::string& str) {
  std::string s = "";

  for (auto& c : str) {
    if (!isVowel(c)) {
      s.push_back(c);  // append character
    }
  }
  return s;
}

// nicer solutions
/* https://www.codewars.com/kata/reviews/5b21867bf13dca70ec0012aa/groups/5b2939526c9cb166db002cd0

# include <regex>
# include <string>
std::string disemvowel(std::string str)
{
  std::regex vowels("[aeiouAEIOU]");
  return std::regex_replace(str, vowels, "");
}
 */
/* https://www.codewars.com/kata/reviews/5b21867bf13dca70ec0012aa/groups/5b6e383c3cdb89f888000049

# include <string>

std::string disemvowel(std::string str)
{
    for ( auto letter : "AEIOUaeiou" ) {
      str.erase(std::remove(str.begin(), str.end(), letter), str.end());
    }

    return str;
}
 */