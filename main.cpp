#include <iostream>
#include <string>

using namespace std;

bool isVowel(char ch) {
  string vowels = "aeiouAEIOU";
  for (int i = 0; i < vowels.size(); ++i) {
    if (ch == vowels[i])
      return true;
  }

  return false;
}

void countVowels(const string &s, int idx, int count) {
  if (idx == s.size()) {
    cout << count << '\n';
    return;
  }

  if (isVowel(s[idx]))
    count++;

  countVowels(s, idx + 1, count);
}

int main() {
  string s;
  if (!getline(cin, s))
    return 0;

  countVowels(s, 0, 0);
  return 0;
}