//maybe someone is wondering, why dont you just use an array. Well, my dier friend, i havent learned it yet :(
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // n - four digit natural number
    int n;

    /*cout << "give me four digit number(1000+) - n(Natural): ";
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
    }*/
    int r1, r2, r3, r4, r5;
    r1=r2=r3=r4=r5=0;
    for(int i = 1000; i < 10000; i++)
    {
        n = i;
        bool res = 0;
        //find units digit
        int a4 = n%10;

        //find dozens digit
        int a3 = (n%100 - a4)/10;

        //find hundreds digit
        int a2 = (n%1000 - a3 - a4)/100;

        //find thousands digit
        int a1 = (n%10000 - a2 - a3 - a4)/1000;
        cout << "\nn is " << n <<"; -a1 is " << a1;
        cout << " -a2 is " << a2;
        cout << " -a3 is " << a3;
        cout << " -a4 is " << a4;

        int sum_pow3 = pow((a1+a2+a3+a4), 3);
            if(n == sum_pow3)
            {
                cout << "\nsum in power 3 equals: " << sum_pow3;
                cout << " and is(!!!) equal to the number n";
                res = 1;
            }
            else
            {
                cout << "\nsum in power 3 equals: " << sum_pow3;
                cout << " and is NOT equal to the number n";
            }
        if(res == 1)
        {
            if(r1 > 0)
            {
                if(r2>0)
                {
                    if(r3>0)
                    {
                        if(r4>0)
                        {
                            if(r5>0)
                            {
                                r5 = 1153;
                            }
                            else{r5 = n;}
                        }
                        else{r4 = n;}
                    }
                    else{r3 = n;}
                }
                else{r2 = n;}
            }
            else{r1 = n;}
        }
        
    }
    cout << "\nResult: r1 r2 r3 r4 r5 = " << r1 << " " << r2 << " " << r3 << " " << r4 << " " << r5;
    return 0;
}