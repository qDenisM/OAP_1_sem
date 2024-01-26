#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <windows.h>

using namespace std;

// Функция для сортировки букв в слове
string sortWord(const string& word)
{
	setlocale(LC_ALL, "rus");//подключение русской раскладки
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

	cout << "Введите слова (для завершения введите пустую строку):\n";

	string word;
	while (getline(cin, word) && !word.empty())	{
		string sortedWord = sortWord(word);
		wordGroups[sortedWord] += word + " ";
	}

	cout << "Группы слов с одинаковыми буквами:\n";
	for (const auto& pair : wordGroups) {
		cout << pair.second << endl;
	}

	return 0;
}
