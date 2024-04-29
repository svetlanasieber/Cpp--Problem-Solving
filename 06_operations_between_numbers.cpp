#include <iostream>

using namespace std;

int main() {
  int n1, n2;
  string math_operator;

  cin >> n1 >> n2 >> math_operator;
  int int_result;
  double double_result;

  if (math_operator == "+") {
    int_result = n1 + n2;
  } else if (math_operator == "-") {
    int_result = n1 - n2;
  } else if (math_operator == "*") {
    int_result = n1 * n2;
  } else if (math_operator == "/") {
    if (n2 == 0) {
      cout << "Cannot divide " << n1 << " by zero";
      return 1;
    }

    double_result = (double)n1 / n2;
  } else {
    if (n2 == 0) {
      cout << "Cannot divide " << n1 << " by zero";
      return 1;
    }

    int_result = n1 % n2;
  }

  if (math_operator == "+" || math_operator == "-" || math_operator == "*") {
    string is_even;

    if (int_result % 2 == 0) {
      is_even = "even";
    } else {
      is_even = "odd";
    }

    cout << n1 << " " << math_operator << " " << n2 << " = " << int_result
         << " - " << is_even << endl;
  } else if (math_operator == "/") {
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << n1 << " / " << n2 << " = " << double_result << endl;
  } else {
    cout << n1 << " % " << n2 << " = " << int_result << endl;
  }

  return 0;
}