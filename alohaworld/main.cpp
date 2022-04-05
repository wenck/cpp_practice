#include<iostream>
using namespace std; 
void swap(int& x, int& y){
	int t;
	t = x; x = y; y = t;
}


int main() {
	auto a{ 5 }, b{ 10 };
	cout << "before:a=" << a << " b=" << b << endl;
	swap(a, b);
	cout << "after:a=" << a << " b=" << b << endl;
	return 0;
}