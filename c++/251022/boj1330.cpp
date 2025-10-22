// BOJ1330 : 두 수 비교하기 (B5)

#include <iostream>
using namespace std;

// int main() {
//   int a, b;
//   cin >> a >> b;
//   if (a > b) {
//     cout << ">" << '\n';
//   } else if (a < b) {
//     cout << "<" << '\n';
//   } else {
//     cout << "==" << '\n';
//   }
//   return 0;
// }

int main() {
  int a, b;
  cin >> a >> b;

  if (a > b) cout << ">\n";
  else if (a < b) cout << "<\n";
  else cout << "==\n";

  return 0;
}

