#include <iostream>
#include <algorithm>

using namespace std;

struct point {
  int x, y;

  // order in increasing order of y, break ties in decreasing order of x
  bool operator<(const point& rhs) const {
    if (y < rhs.y) return true;
    else if (y > rhs.y) return false;
    else return x > rhs.x;
  }
};

int main() {
  point p[100];
  int n;

  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> p[i].x >> p[i].y;
  }

  sort(p, p + n);

  for (int i = 0; i < n; ++i) {
    if (i != 0) cout << ' ';
    cout << p[i].x << ',' << p[i].y;
  }
  cout << endl;

  return 0;
}
