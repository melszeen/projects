#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int adults, child, dest;
	double total, da, dc;
	bool valid=false;
	
	while (valid==false) {
	cout << "Input your destination (Langkawi Island=1, Pangkor Island=2, Tioman Island=3) : ";
	cin >> dest;
	if (dest<4 && dest>0)
		valid = true;
		else cout << "Invalid input!" << endl;
	}
	
	cout << "Input the number of adults going : ";
	cin >> adults;
	
	cout << "Input the number of children going : ";
	cin >> child;
	
	if (dest==1) //Langkawi
		total = (adults+child)*(120+260);
	else if (dest==2) //Pangkor
		total = (adults+child)*(90+330);
	else //Tioman
		total = (adults+child)*(150+390);
	
	//discounts
	if (adults==2 && dest==1)
		da = 2 * 0.2*120;
	else if (adults>2 && dest==1)
		da = adults * 0.3*120;
	else if (adults==2 && dest==2)
		da = 2 * 0.2*90;
	else if (adults>2 && dest==2)
		da = adults * 0.3*90;
	else if (adults==2 && dest==3)
		da = 2 * 0.2*150;
	else if (adults>2 && dest==3)
		da = 3 * 0.3*150;
	else da = 0;
	
	if (child>0 && dest==1) {
		dc = child * 0.5*120;
	    dc += child * 0.5*260;
	}
	else if (child>0 && dest==2) {
		dc = child * 0.5*90;
        dc += child * 0.5*330;
	}
	else if (child>0 && dest==3) {
		dc = child * 0.5*150;
	    dc += child * 0.5*390;
	}
	else dc = 0;
	
	total = total - da - dc ;
	
	std::cout << std::fixed << std::setprecision(2) << "The total cost is RM " << total << "." << endl;
	
}