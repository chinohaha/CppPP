#include<iostream>

using namespace std;

float LightyearToAstunit(float l);

int main(){
	
	cout << "Please enter the number of light years: ";
	float lightyear,astunit;
	cin >> lightyear;
	astunit = LightyearToAstunit(lightyear);
	cout << lightyear << "light years = "<< astunit << " astronomical units" << endl;
	return 0;
}

float LightyearToAstunit(float l){
	float a = l * 63240;
	return a;
}
