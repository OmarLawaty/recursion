#include <iostream>

using namespace std;

void printDown(int n) {
  if (n == 0)
    return;

  cout << n;
  if (n > 1)
    cout << ' ';

  printDown(n - 1);
}

int main() {
  int n;
  if (!(cin >> n))
    return 0;

  printDown(n);
  return 0;
}