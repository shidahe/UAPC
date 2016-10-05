#include <iostream>
#include <algorithm>

using namespace std;

int arith(int array[], int m){
  int diff;
  int ar = 1;
  diff = array[1] - array[0];
  for (int j = 2; j < m; j++) {
   if (array[j]-array[j-1] != diff)
    ar = 0; 
  }
  
  if (ar == 0)
   return 0;
  else if (ar == 1)
   return 1;
}
int main() {

  int n;

  cin >> n;

 for (int i = 0; i < n; ++i) {
  int m;
  cin >> m;
  int array[100];
  for (int j = 0; j < m; j++) {
   cin >> array[j];
  }
  
  int ar = arith(array, m);
  if(ar == 1){
    cout << "arithmetic" << endl;
    continue;
  }   
  
  sort(array, array+m);
  
  ar = arith(array,m);
  if(ar == 1){
   cout << "permuted arithmetic" << endl;
  continue;
  }
  
  cout << "non-arithmetic" << endl;

 }

  return 0;
}


