#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // k - four digit natural number
    int k;
    cout << "give me four digit number(1000+) - k(Natural): ";
    cin >> k;
    int while1count = 0;
    while(!(k>999 && k<10000))
    {
        while1count++;
        if(while1count > 3)
        {cout << "\nman, youre a dumbass... im out! \n";
        break;}
        cout << "k needs to be between 999 and 10000" << endl << "retry\n" << endl;
        cout << "give me four digit number(1000+) - k(Natural): ";
        cin >> k;
    }
    //find units digit
    int a4 = k%10;
    cout << "\na4 is " << a4;
    //find dozens digit
    int a3 = (k%100 - a4)/10;
    cout << "\na3 is " << a3;
    //find hundreds digit
    int a2 = (k%1000 - a3 - a4)/100;
    cout << "\na2 is " << a2;
    //find thousands digit
    int a1 = (k%10000 - a2 - a3 - a4)/1000;
    cout << "\na1 is " << a1;

    //make the number and print it
    int s = a4 + a3 + a2 + a1;
    cout << "\n!!!the number is '" << s << "' !!!";

    return 0;
}