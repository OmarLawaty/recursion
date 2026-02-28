#include <iostream>

using namespace std;

long long maxRecursive(int arr[], int idx, int size) {
  if (idx == size - 1)
    return arr[idx];

  long long tailMax = maxRecursive(arr, idx + 1, size);

  if (arr[idx] > tailMax)
    return arr[idx];

  return tailMax;
}

int main() {
  int n;
  if (!(cin >> n))
    return 0;

  int arr[n];
  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  if (n == 0)
    return 0;

  cout << maxRecursive(arr, 0, n) << '\n';
  return 0;
}