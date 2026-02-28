#include <iostream>

using namespace std;

void printChars(int count, char ch) {
  if (count <= 0)
    return;

  cout << ch;
  printChars(count - 1, ch);
}

void printPyramid(int level, int n) {
  if (level > n)
    return;

  printChars(n - level, ' ');
  printChars(2 * level - 1, '*');
  cout << '\n';

  printPyramid(level + 1, n);
}

int main() {
  int n;
  if (!(cin >> n))
    return 0;

  printPyramid(1, n);
  return 0;
}