#include <iostream>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE
     // for getting input from input. txt
     freopen ("input1. txt", "r", stdin);
     // for writing output to output. txt
     freopen ("putput1. txt", "w", stdout);
#endif


  int n;
  cout << "Enter the number" << endl;
  cin >> n;
  int i = 2;

  while (i < n) {
    if (n % i == 0) {
      cout << " Not Prime No";
    }
    i++;
  }
   cout<<"Prime no";
}