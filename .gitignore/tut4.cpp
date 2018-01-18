#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int num, ans;
    
	
    cout << "Guess the number I'm thinking of! \n(Hint: it is from 1-100): ";
    cin >> num;
	
	srand(time(NULL));
	ans = (rand() % 100)+1;

	if (num == ans)
		cout << "YES! The number was " << ans << "." << endl;
	else cout << "No :(( the number was " << ans << "." << endl;
}