#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
  
char inputs[50];
//string inputs; 
cin >> inputs;

int l,m,r;

l = 1;
m = 0;
r = 0;


for(int i = 0; i < strlen(inputs); i++){
if(inputs[i] == 'A'){
 int temp = l;
 l = m;
 m = temp;
} else if(inputs[i] == 'B'){
 int temp = m;
 m = r;
 r = temp;
} else if(inputs[i] == 'C'){
 int temp = l;
 l = r;
 r = temp;
}
}


if(l == 1)
cout << 1;
else if (m == 1)
cout << 2;
else if (r == 1)
cout << 3;

cout << endl;

  return 0;
}
