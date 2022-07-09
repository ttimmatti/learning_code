#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int count7 = 0;
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

    //find dozens digit
    int a3 = (n%100 - a4)/10;

    //find hundreds digit
    int a2 = (n%1000 - a3 - a4)/100;

    //find thousands digit
    int a1 = (n%10000 - a2 - a3 - a4)/1000;
    cout << "\na1 is " << a1;
    cout << "\na2 is " << a2;
    cout << "\na3 is " << a3;
    cout << "\na4 is " << a4;



    if(!((a1==a2) || (a2==a3) || (a3==a4) || (a1==a4) || (a1==a3) || (a2==a4)))
    {
        cout << "\nall numbers are different";
    }
    else
    {
        cout << "\nthey're not different";
    }

    return 0;
}