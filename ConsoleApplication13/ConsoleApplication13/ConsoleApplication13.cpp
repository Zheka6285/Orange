

#include <iostream>
#include "math.h"

using namespace std;

int main()
{
	int a, b;
	float h;
	cout<<"Enter a =";
	cin>>a;
	cout<<"Enter b =";
	cin>>b;
	cout<<"Enter h =";
	cin>>h;
	
	float y, x = a;
	do
	{
		y =log(pow(x,2))+2*cos(x)-2;
		printf("x=%f   y=%f\n", x, y);
		x += h;
	} while (x <= b + h / 2);

	
	system("pause");
	return 0;
}
