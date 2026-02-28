#include <iostream>
#include <vector>

using namespace std;

void printEvenIndices(long long arr[], int n, int idx = 0) {
  if (idx >= n)
    return;

  printEvenIndices(arr, n, idx + 2);
  cout << arr[idx] << ' ';
}

int main() {
  int N;
  if (!(cin >> N))
    return 0;

  long long arr[N];
  for (int i = 0; i < N; ++i)
    cin >> arr[i];

  printEvenIndices(arr, N);

  return 0;
}