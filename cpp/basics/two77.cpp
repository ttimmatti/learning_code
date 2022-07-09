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
    cout << "\na4 is " << a4;
    if(a4 == 7){count7++;
    cout << "   got the seven!!";}
    //find dozens digit
    int a3 = (n%100 - a4)/10;
    cout << "\na3 is " << a3;
    if(a3 == 7){count7++;
    cout << "   got the seven!!";}
    //find hundreds digit
    int a2 = (n%1000 - a3 - a4)/100;
    cout << "\na2 is " << a2;
    if(a2 == 7){count7++;
    cout << "   got the seven!!";}
    //find thousands digit
    int a1 = (n%10000 - a2 - a3 - a4)/1000;
    cout << "\na1 is " << a1;
    if(a1 == 7){count7++;
    cout << "   got the seven!!";}

    if(count7 == 2)
    {
        cout << "\nGot two digits '7', boss!";
    }
    else if(count7 < 2)
    {
        cout << "\n<2 7s bossss :(";
    }
    else if(count7 > 2)
    {
        cout << "\ntoo many 7s :)";
    }

    return 0;
}