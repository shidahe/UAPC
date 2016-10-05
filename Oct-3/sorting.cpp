#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int array[100], n;

  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> array[i];
  }

  sort(array, array + n);

  for (int i = 0; i < n; ++i) {
    if (i != 0) cout << ' ';
    cout << array[i];
  }
  cout << endl;

  return 0;
}
