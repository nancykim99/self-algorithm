// BOJ14681 : 사분면 고르기 (B5)

#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if ((a > 0) && (b > 0)) cout << "1\n";
  else if ((a < 0) && (b > 0)) cout << "2\n";
  else if ((a < 0) && (b < 0)) cout << "3\n";
  else cout << "4\n";
  return 0;
}