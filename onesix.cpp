#include<iostream>

using namespace std;

void displayTime(string h,string m);
//I use string to take time because I don't like the look of 2:2

int main(){
	string hr,min;
	cout << "Enter the number of hours: ";
	cin >> hr;
	cout << "Enter the number of minuts: ";
	cin >> min;
	displayTime(hr,min);
}

void displayTime(string h,string m){
	cout << "Time: " << h << ":" << m <<endl;
}
