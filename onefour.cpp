#include<iostream>

using namespace std;

float CelsiusToFahrenheit(float c);

int main(){

	cout << "Please enter a Celsius value: ";
	float celsius, fahrenheit;
	cin >> celsius;
	fahrenheit = CelsiusToFahrenheit(celsius);
	cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit" << endl; 
	return 0;
}

float CelsiusToFahrenheit(float c){
	float f;	
	f = 1.8 * c + 32;
	return f;
}
