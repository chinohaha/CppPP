#include <iostream>

using namespace std;
int main(){

	cout << "Please enter the number of furlongs that you like to convert to yards:";
	float fur, yard;
	cin >> fur;
	yard = fur * 220;
	cout << fur << " furlong(s) is "<< yard << " yard(s)." << endl; 
	return 0;
}
