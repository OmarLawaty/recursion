#include <iostream>

using namespace std;

void printRecursion(int n) {

  if (n < 1)
    return;
  printRecursion(n - 1);

  cout << "I love Recursion" << '\n';
}

int main() {
  int n;
  if (!(cin >> n))
    return 0;

  printRecursion(n);
  return 0;
}