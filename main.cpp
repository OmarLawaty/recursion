#include <iostream>
#include <vector>

using namespace std;

void printBinary(int n) {
  if (n == 0)
    return;

  printBinary(n / 2);
  cout << (n % 2);
}

int main() {
  int T;
  if (!(cin >> T))
    return 0;

  int nums[T];
  for (int i = 0; i < T; ++i)
    cin >> nums[i];

  for (int n : nums) {
    if (n == 0)
      cout << '0';
    else
      printBinary(n);

    cout << '\n';
  }

  return 0;
}