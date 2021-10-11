#include <iostream>
using namespace std;

int main() {
  string c = "Cat :3 Dog";
  cout << "Input: " << c << "\n" << endl;
  for (int i = 0; i < c.length(); i++) {
    cout << c[i] << " " << (int)c[i] << endl;
  }
  return 0;
}
