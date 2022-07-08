#include <iostream>
using namespace std;
int a;
int main() {
  a = 10;
  cout << a << endl;
  int a;
  a = 20;
  cout << a << endl;
  {
    int a;
    a = 30;
    cout << a << endl;
  }
  return 0;
}
