#include<iostream>
#include<fstream>
#include<string>

using namespace std;

ifstream fin;

void palindrome();
void sortFile();
void removeVowel();
void search();
void checkNumber();

int main() {
	palindrome();
	sortFile();
	removeVowel();
	search();
	checkNumber();

	cout << "If this prints out, chances are your code works :D" << endl;
	return 0;
}

void palindrome() {
	int i = 0;
	char word[100]; // char array to hold a user input string
	cout << "please enter a word" << endl;
	cin >> word;
	int j = strlen(word) - 1; // counter that is equal to the last letter in "word"
	while (i != j) { // compare first and last letter in "word" then each counter will step closer to the middle
		if (word[i] == word[j]) {
			i++;
			j--;
		}
		else {
			cout << "This word isn't a palindrome" << endl;
			break;
		}
	}
	if (i == j) {
		cout << "This word is a palindrome" << endl;

	}
}

void sortFile() {

}

void removeVowel() {

}

void search() {
	ofstream fout("search.txt");
	fin.open("input.txt");
	string line;

	while (getline(fin, line)) {
		if (line.find("north") != string::npos)
			fout << line << endl;
		if (line.find("North") != string::npos)
			fout << line << endl;
		if (line.find("south") != string::npos)
			fout << line << endl;
		if (line.find("South") != string::npos)
			fout << line << endl;
	}
}

void checkNumber() {

}
