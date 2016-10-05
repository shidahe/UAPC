#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;


struct cha {
 char c[15];
 bool operator<(const cha& rhs) const {
  for (int i = 0; i < strlen(c); i++){
   char indl, indr;  
   //if (rhs.c[i] >= 'a')
    //indr = rhs.c[i] - 32;
   //if (c[i] >= 'a')
    //indl = c[i] - 32; 
   
   indl = toupper(c[i]);
   indr = toupper(rhs.c[i]); 
   if (indl < indr) return true;
   else if (indl > indr) return false;
   else if (c[i] != rhs.c[i]) return c[i] < rhs.c[i];
  }
  return false;
 }
};

    
int main() {


 int r = 0;
 int c = 0;

 cin >> r >> c;
while(r!=0 || c!=0){
 
 cha array[15];
 for (int i = 0; i < r; i++){
  //char array[15];
  for (int j = 0; j < c; j++){
   cin >> array[j].c[i];
  }
 }
  sort(array,array+c);
 for (int i = 0; i < r; i++){
  for (int j = 0; j < c; j++){
   cout << array[j].c[i];
  }
  cout << endl;
 
 }
 cout << endl;
 cin >> r >> c;
}


  return 0;
}
