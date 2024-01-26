#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <windows.h>

using namespace std;

// ������� ��� ���������� ���� � �����
string sortWord(const string& word)
{
	setlocale(LC_ALL, "rus");//����������� ������� ���������
	string sortedWord = word;
	sort(sortedWord.begin(), sortedWord.end());
	return sortedWord;
}

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	map<string, string> wordGroups;

	cout << "������� ����� (��� ���������� ������� ������ ������):\n";

	string word;
	while (getline(cin, word) && !word.empty())	{
		string sortedWord = sortWord(word);
		wordGroups[sortedWord] += word + " ";
	}

	cout << "������ ���� � ����������� �������:\n";
	for (const auto& pair : wordGroups) {
		cout << pair.second << endl;
	}

	return 0;
}
