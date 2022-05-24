#include <string>
#include <iostream>
#include <cmath> //gives us pow and sqrt!

using std::string; using std::cout;
using std::cin; using std::pow;
using std::sqrt; using std::endl;

//want: a function named quadratic that will take in 3 doubles and return
//a combination of: does a solution exist, and if so, what is it?
std::pair<bool, std::pair<double, double>> quadratic(double a, double b, double c) {
	//get radical, test if negative, return indicating no roots
	double radical = pow(b, 2) - 4 * a * c;
	if (radical < 0) {
		return {false, {-1, -1}};
	}
	//otherwise get roots and return
	double x1 = (-b + sqrt(radical)) / (2 * a);
	double x2 = (-b - sqrt(radical)) / (2 * a);
	return {true, {x1, x2}};
}

int main(){
	//get 3 doubles (ax^2 + bx + c)
	double a, b, c;
	cout << "Give me 3 coefficients: " << endl;

	//This line gets 3 numbers from user input and stores them in a, b and c 
	//we will learn more about cin on Thursday
	cin >> a >> b >> c;
	//some call to quadratic function!
	auto res = quadratic(a, b, c);
	//get roots if they exist
	if (!res.first) {
		cout << "No root" << endl;
	} else {
		cout << "X1 = " << res.second.first << ", "
			 << "X2 = " << res.second.second << endl;
	}
	//print accordingly

	return 0;
}