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