#include <iostream>

using namespace std;

long long factorial(long long n) {
  if (n <= 1)
    return 1;

  return n * factorial(n - 1);
}

int main() {
  long long n;
  if (!(cin >> n))
    return 0;

  cout << factorial(n) << '\n';
  return 0;
}