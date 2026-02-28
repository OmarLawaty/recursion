#include <iostream>

using namespace std;

void printUpToN(int current, int n) {
  if (current > n)
    return;

  cout << current << '\n';
  printUpToN(current + 1, n);
}

int main() {
  int n;
  if (!(cin >> n))
    return 0;

  printUpToN(1, n);
  return 0;
}