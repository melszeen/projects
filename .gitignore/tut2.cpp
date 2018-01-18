#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, first, middle, last, power, final;
	
	cout << "Enter a number: ";
	cin >> num;
	
	power = (int)log10(num);
	cout << "power: " << power << endl;
	
	//find first
	first = num/pow(10, power);
	cout << "first: " << first << endl;
	
	//find last
	last = num % 10;
	cout << "last: " << last << endl;
	
	//find middle
	middle = num - last - first*pow(10, power);
	cout << "middle: " << middle << endl;
	
	//print final number
	final = last*pow(10, power) + middle + first;
	cout << "Final number is : " << final << ".\n";
}