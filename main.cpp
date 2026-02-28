#include <iostream>
#include <vector>

using namespace std;

void printDigits(int n) {
  if (n >= 10)
    printDigits(n / 10);

  cout << (n % 10) << ' ';
}

int main() {
  int T;
  if (!(cin >> T))
    return 0;

  int nums[T];
  for (int i = 0; i < T; ++i)
    cin >> nums[i];

  for (int i = 0; i < T; ++i) {
    int n = nums[i];

    if (n == 0)
      cout << "0 ";
    else
      printDigits(n);

    cout << '\n';
  }

  return 0;
}