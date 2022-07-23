#include <cmath>
#include <iostream>

using namespace std;

	int main()
{
int n;

cout << "Input the number:" << endl;
cin >> n;

int a_cicled = n;

int i = 0; //counter

	while(true)
	{
	a_cicled = a_cicled/10;
	
	i++;
	
	if(a_cicled == 0)
	{
	cout << "\nnumber 'n' has " << i << " digit(s)";
	break;
	}
	
	}




return 0;
}
