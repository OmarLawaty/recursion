#include <iostream>

using namespace std;

long long sumRecursive(int arr[], int idx, int size) {
  if (idx == size)
    return 0;

  return arr[idx] + sumRecursive(arr, idx + 1, size);
}

int main() {
  int n;
  if (!(cin >> n))
    return 0;

  int arr[n];
  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  cout << sumRecursive(arr, 0, n) << '\n';
  return 0;
}