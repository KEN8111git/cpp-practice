#include "subclass.hpp"
using namespace std;

int main()
{
  int input1, input2;
  string mathtype;
  string confirm = "yes";
  while (confirm == "yes")
  {
    cout << "What would you do? [add, subtract, multiply, divide]";
    cin >> mathtype;
    cout << "type the value";
    cin >> input1 >> input2;

    if (mathtype == "add")
    {
      cout << calculation::add(input1, input2) << "\n";
    }
    else if (mathtype == "subtract")
    {
      cout << calculation::subtract(input1, input2) << "\n";
    }
    else if (mathtype == "multiply")
    {
      cout << calculation::multiple(input1, input2) << "\n";
    }
    else if (mathtype == "divide")
    {
      cout << calculation::multiple(input1, input2) << "\n";
    }
    else
    {
      cout << "invalid type.\n";
      return 1;
    }
    cout << "continue? [yes/no]";
    cin >> confirm;
  }
  if (confirm == "no")
    return 0;
}