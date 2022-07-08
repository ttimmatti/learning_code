#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

// y = (cos e x + ln(1 + x) 2 + e cos x + sin 2 x + 1 x + cos x 2 ) sin x --  what we need to get;

int main()
{
cout << "input x: ";
double x;
cin >> x;
double y;
y = pow((cos(exp(x)))+log10(pow((1+x), 2))+sqrt(exp(cos(x))+pow(sin(M_PI*x), 2))+sqrt(1/x)+cos(pow(x, 2)), sin(x));

cout << y;

return 0;
}
