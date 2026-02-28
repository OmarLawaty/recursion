#include <iostream>

using namespace std;

void printChars(int count, char ch) {
  if (count <= 0)
    return;

  cout << ch;
  printChars(count - 1, ch);
}

void printReversePyramid(int level, int n) {
  if (level == 0)
    return;

  printChars(n - level, ' ');
  printChars(2 * level - 1, '*');
  cout << '\n';

  printReversePyramid(level - 1, n);
}

int main() {
  int n;
  if (!(cin >> n))
    return 0;

  printReversePyramid(n, n);
  return 0;
}