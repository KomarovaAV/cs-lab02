#include <iostream>

using namespace std;

int main()
{
cout << "Enter A and B: ";
double a, b;
cin >> a >> b;
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n'
     << "A % B = " << (a + b) / 2 << '\n';
int max = (a > b) ? a : b;
cout << "max: " << max << endl;

}
