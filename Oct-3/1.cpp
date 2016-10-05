#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  
int h,m;

cin >> h;
cin >> m;

int mins;

mins = h*60 + m;

if(mins >= 45)
mins -= 45;
else 
mins += 24*60 - 45;

int oh,om;
oh = mins/60;
om = mins%60;

cout << oh << " " << om << endl;

  return 0;
}
