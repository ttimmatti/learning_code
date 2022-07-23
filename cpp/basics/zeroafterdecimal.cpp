#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float num;
    cin >> num;
    cout << endl;

    int a1, a2, a3, a4, a5;
    
    //getting the first 5 digits after dot
    int all5 = floor((num - floor(num))*100000);
    cout << all5 << endl;

    //getting each separate number
    a5 = all5 % 10;
    a4 = ((all5 % 100)-a5)/10;
    a3 = ((all5 % 1000)-a5-a4)/100;
    a2 = ((all5 % 10000)-a5-a4-a3)/1000;
    a1 = ((all5 % 100000)-a5-a4-a3-a2)/10000;
    //

    //find out if there is a 0 among these numbers
    if(a1==0||a2==0||a3==0||a4==0||a5==0)
    {
        cout << "There is a zero!";
    }
    else
    {
        cout << "No zeros for now";
    }


}