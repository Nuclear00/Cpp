include <iostream>
using namespace std;

int main() {
  double a, b, sum;
  char op;
  cout << "Operator('+' '-' '*' '/'):";
  cin >> op;
  cout << "2 numbers separated with space: ";
  cin >> a >> b;
  switch (op) {
    case '+':
      sum = a + b;
      break;
    case '-':
      sum = a - b;
      break;
    case '*':
      sum = a * b;
      break;
    case '/':
      sum = a / b;
      break;
    default:
      cout << "Error";
  }
  cout << "Sum : " << sum;
    return 0;
}
