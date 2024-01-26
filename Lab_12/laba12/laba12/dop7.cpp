#include <iostream>
#include <sstream>
#include <Windows.h>
using namespace std;

string findShortestWord(const string& sentence1, const string& sentence2) {
	istringstream iss1(sentence1);
	istringstream iss2(sentence2);
	
	string word, shortestWord;
	int shortestLength = INT_MAX;

	
	while (iss1 >> word) {
		if (sentence2.find(word) == string::npos) {
			if (word.length() < shortestLength) {
				shortestLength = word.length();
				shortestWord = word;
			}
		}
	}
	return shortestWord;
}

int main() {
	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	string sentence1, sentence2;
	cout << "������� ������ �����������: ";
	getline(cin, sentence1);
	
	cout << "������� ������ �����������: ";
	getline(cin, sentence2);

	string result = findShortestWord(sentence1, sentence2);

	if (!result.empty()) {
		cout << "����� �������� ����� �� ������� �����������, �������������� �� ������: " << result << endl;
	}
	else {
		cout << "����� ����� �� �������." << endl;
	}

	return 0;
}