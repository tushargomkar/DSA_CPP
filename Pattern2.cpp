// 111
// 222
// 333

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter the number" << endl;
//   cin >> n;
//   int i = 1;

//   while (i <=n) {
//     int j=1;
//     while(j<=n){
//       cout<<i;
//       j++;
//     }
//     i++;
//     cout<<endl;
//   }
// }

// 123
// 123
// 123

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter the number" << endl;
//   cin >> n;
//   int i = 1;

//   while (i <=n) {
//     int j=1;
//     while(j<=n){
//       cout<<j;
//       j++;
//     }
//     i++;
//     cout<<endl;
//   }
// }

// 321
// 321
// 321

//   #include <iostream>
//   using namespace std;
//   int main() {
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     int i = 1;

//     while (i <=n) {
//       int j=1;
//       while(j<=n){
//         cout<<n-j+1;
//         j++;
//       }
//       i++;
//       cout<<endl;
//     }
//   }

// 123
// 456
// 789

//   #include <iostream>
//   using namespace std;
//   int main() {
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     int i = 1;
//     int count=1;
//     while (i <=n) {
//       int j=1;
//       while(j<=n){
//         cout<<count;
//         j++;
//         count++;
//       }
//       i++;
//       cout<<endl;
//     }
//   }

// *
// **
// ***
// ****

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter the number" << endl;
//   cin >> n;
//   int i = 1;
//   while (i <=n) {
//     int j=1;
//     while(j<=i){
//       cout<<"*";
//       j++;

//     }
//     i++;
//     cout<<endl;
//   }
// }

// 1
// 22
// 333
// 4444

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter the number" << endl;
//   cin >> n;
//   int i = 1;
//   while (i <=n) {
//     int j=1;
//     while(j<=i){
//       cout<<i;
//       j++;

//     }
//     i++;
//     cout<<endl;
//   }
// }

// 1
// 23
// 456
// 78910

//   #include <iostream>
//   using namespace std;
//   int main() {
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     int i = 1;
//     int count = 1;
//     while (i <= n) {
//       int j = 1;
//       while (j <= i) {
//         cout << count << " ";
//         count++;
//         j++;
//       }
//       cout << endl;
//       i++;
//     }
//   }

// 1
// 23
// 345
// 4567

//   #include <iostream>
//   using namespace std;
//   int main() {
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     int i = 1;

//     while (i <= n) {
//       int value = i;
//       int j = 1;
//       while (j <= i) {
//         cout << value << " ";
//         value++;
//         j++;
//       }
//       cout << endl;
//       i++;
//     }
//   }

// 1
// 21
// 321
// 4321

//   #include <iostream>
//   using namespace std;
//   int main() {
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     int i = 1;
//     while (i <= n) {

//       int j = 1;
//       while (j <= i) {
//        cout<<i-j+1;
//        j++;

//       }
//       cout << endl;
//       i++;
//     }
//   }

// AAA
// BBB
// CCC

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter the number" << endl;
//   cin >> n;
//   int i = 1;
//   char sn=65;
//   while (i <= n) {

//     int j = 1;
//     while (j <=n) {
//      cout<<sn;
//      j++;

//     }
//     cout << endl;
//     sn++;
//     i++;
//   }
// }

// another approch

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter the number" << endl;
//   cin >> n;
//   int i = 1;

//   while (i <= n) {

//     int j = 1;
//     while (j <= n) {
//       char ch = 'A' + i - 1;
//       cout << ch;
//       j++;
//     }
//     cout << endl;

//     i++;
//   }
// }

// ABC
// ABC
// ABC

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter the number" << endl;
//   cin >> n;
//   int i = 1;

//   while (i <= n) {

//     int j = 1;
//     while (j <= n) {
//       char ch = 'A' + j - 1;
//       cout << ch;
//       j++;
//     }
//     cout << endl;

//     i++;
//   }
// }

// ABC
// DEF
// GHI

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter the number" << endl;
//   cin >> n;
//   int i = 1;
//   char ch = 65;
//   while (i <= n) {

//     int j = 1;
//     while (j <= n) {
//       // char ch = 'A' + j - 1;
//       cout << ch;
//       j++;
//       ch++;
//     }
//     cout << endl;

//     i++;
//   }
// }

// ABC
// BCD
// CDE

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter the number" << endl;
//   cin >> n;
//   int i = 1;

//   while (i <= n) {
//     int j = 1;
//     char value = 'A' + i-1;
//     while (j <= n) {
//       cout << value;
//       j++;
//       value++;
//     }
//     cout << endl;

//     i++;
//   }
// }

// A
// BB
// CCC
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter the number" << endl;
//   cin >> n;
//   int i = 1;

//   while (i <= n) {
//     int j = 1;
//     // char value = 'A' + i-1;
//     while (j <= i) {
//       char ch = 'A' + i-1;
//       cout << ch;
//       j++;
//     }
//     cout << endl;

//     i++;
//   }
// }

// A
// BC
// DEF
// GHIJ

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter the number" << endl;
//   cin >> n;
//   int i = 1;
//   char value = 'A';
//   while (i <= n) {
//     int j = 1;

//     while (j <= i) {
//       cout << value;
//       j++;
//       value++;
//     }
//     cout << endl;

//     i++;
//   }
// }

// A
// BC
// CDE
// DEFG

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter the number" << endl;
//   cin >> n;
//   int i = 1;

//   while (i <= n) {
//     int j = 1;
//     char value = 'A'+i-1;
//     while (j <= i) {
//       cout << value;
//       j++;
//       value++;
//     }
//     cout << endl;

//     i++;
//   }
// }

// A
// BC
// CDE
// DEFG

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter the number" << endl;
//   cin >> n;
//   int i = 1;

//   while (i <= n) {
//     int j = 1;
//     while (j <= i) {
//       char ch= 'A'+i+j-2;
//       cout <<ch;
//       j++;

//     }
//     cout << endl;

//     i++;
//   }
// }

// D
// CD
// BCD
// ABCD

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter the number" << endl;
//   cin >> n;
//   int i = 1;

//   while (i <= n) {
//     int j = 1;
//     char ch = 'A' + n - i;
//     while (j <= i) {

//       cout << ch;
//       ch++;
//       j++;
//     }
//     cout << endl;

//     i++;
//   }
// }

//    *
//   **
//  ***
// ****

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter the Number";
//   cin >> n;

//   int i = 1;

//   while (i <= n) {
//     int space = n - i;
//     while (space) {
//       cout << " ";
//       space = space - 1;
//     }
//     int j = 1;
//     while (j <= i) {
//       cout << "*";
//       j++;
//     }
//     cout << endl;
//     i++;
//   }
// }

// ****
// ***
// **
// *

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter the Number";
//   cin >> n;

//   int i = 1;

//   while (i <= n) {
//     //int space = n - i;
//     // while (space) {
//     //   cout << " ";
//     //   space = space - 1;
//     // }
//     int j = 1;
//     int ch=n-i+1;
//     while (j <= ch) {
//       cout << "*";
//       j++;
//     }
//     cout << endl;
//     i++;
//   }
// }

// ****
//  ***
//   **
//    *

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter the Number";
//   cin >> n;

//   int i = 1;

//   while (i <= n) {
//     int space = i - 1;
//     while (space) {
//       cout << " ";
//       space = space - 1;
//     }
//     int j = 1;
//     int ch = n - i + 1;
//     while (j <= ch) {
//       cout << "*";
//       j++;
//     }
//     cout << endl;
//     i++;
//   }
// }

//   1
//  121
// 12321

//     #include <iostream>
//     using namespace std;
//     int main() {
//       int n;
//       cout << "Enter the Number";
//       cin >> n;

//       int i = 1;

//       while (i <= n) {
//         int space = n - i;
//         while (space) {
//           cout << " ";
//           space = space - 1;
//         }
//         int j = 1;

//         while (j <= i) {
//           int ch = i - j;
//           cout << j;
//           j++;
//           ch++;
//         }

//         int start = i - 1;
//         while (start) {
//           cout << start;
//           start--;
//         }
//         cout << endl;
//         i++;
//       }
//     }