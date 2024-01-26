#include <iostream>
using namespace std;

void foo(int* pa, int* pb) {
	int temp = 0;

	temp = (*pa);
	(*pa) = (*pb);
	(*pb) = temp;
}

int main() {
	setlocale(LC_ALL, "ru");
	
	int a = 5;
	int b = 6;

	cout << a << endl;
	cout << b << endl;

	foo(&a, &b);

	cout << a << endl;
	cout << b << endl;
}