#include <iostream>
using namespace std;
void Pos(double &a, double i) {
  int k = a;
  for (int j = 0; j < i; j++) {
    a = a * k;
  }
};
int main() {
  double a;
  cout << "Undernum:";
  cin >> a;
  double b;
  cout << "Pownumber:";
  cin >> b;
  Pos(a, b);
  cout << a << endl;
}
