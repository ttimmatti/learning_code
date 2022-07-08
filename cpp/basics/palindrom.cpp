#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // n - four digit natural number
    int n;
    cout << "give me four digit number(1000+) - n(Natural): ";
    cin >> n;
    int while1count = 0;
    while(!(n>999 && n<10000))
    {
        while1count++;
        if(while1count > 3)
        {cout << "\nman, youre a dumbass... im out! \n";
        break;}
        cout << "n needs to be between 999 and 10000" << endl << "retry\n" << endl;
        cout << "give me four digit number(1000+) - n(Natural): ";
        cin >> n;
    }
    //find units digit
    int a4 = n%10;
    cout << "\na4 is " << a4;
    //find dozens digit
    int a3 = (n%100 - a4)/10;
    cout << "\na3 is " << a3;
    //find hundreds digit
    int a2 = (n%1000 - a3 - a4)/100;
    cout << "\na2 is " << a2;
    //find thousands digit
    int a1 = (n%10000 - a2 - a3 - a4)/1000;
    cout << "\na1 is " << a1;

    //make the number and print it
    int opn = a4*1000 + a3*100 + a2*10 + a1;
    cout << "\n!!!the number is '" << opn << "' !!!";
    if(opn==n)
    {
        cout << "\n AND the number is a Palindrom!!!111";
    }
    else
    {
        cout << "\n AND the number is not a Palindrom(((000";
    }

    return 0;
}