#include<iostream>

using namespace std;

int main(){
	const int inchToFoot = 12;

	cout << "Enter number in inches:________\b\b\b\b\b\b\b\b";
	int inch, inch2, feet;
	cin >> inch;
	feet = inch/inchToFoot;
	inch2 = inch%inchToFoot;
	cout << "You enter "<< feet << " feet(foot) "<< inch2 << " inch(es)" << endl;

	return 0;
}
