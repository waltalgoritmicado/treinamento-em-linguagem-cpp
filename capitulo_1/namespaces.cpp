#include <iostream>
using namespace std;

namespace Silva {
	int a;
	int b;
}

namespace Neves {
	double a;
	double b;
}

int main() {
	system("cls");
	Silva::a = 4;
	Silva::b = 7;
	Neves::a = 5.453;
	Neves::b = 2.13e4;

	cout << "Silva::a = " << Silva::a << endl
		<< "Silva::b = " << Silva::b << endl
		<< "Neves::a = " << Neves::a << endl
		<< "Neves::b = " << Neves::b << endl;

	system("PAUSE");
	return 0;
}
