#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	char str[256];

	cout << "¬ведите строку: \n";
	cin.getline(str, 256);

	int i = 0, check = 0; 
	char str_copy[256]{}; 

	while (str[i] != '\0') {

		if (str[i] == ' ') {
			i++;
		}

		if (str[i] != ' ') { 
			char temp[256]{};
			int k = 0;

			while (str[i] != '\0' && str[i] != ' ') { 
				temp[k] = str[i];
				k++;
				i++;
			}

			temp[k] = '\0';
			check = strspn(temp, str_copy);

			if (!check) {
				strcat_s(str_copy, 256, temp);
				strcat_s(str_copy, 256, " ");
			}
		}
	}

	cout << str_copy;

	return 0;
}