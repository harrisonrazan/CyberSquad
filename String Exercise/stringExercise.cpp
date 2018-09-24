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
	system("pause");
	return 0;
}

void palindrome() {
	ofstream fout;
	string line, temp;
	bool check = false;

	fin.open("input.txt");
	fout.open("palindrome.txt");

	while (!fin.eof()) {
		getline(fin, line);
		temp = line;

		for (int i = 0; i < temp.length(); i++) {
			if (temp[i] >= 'A' && temp[i] <= 'Z')
				temp[i] = tolower(temp[i]);
			else if (temp[i] >= 'a' && temp[i] <= 'z')
				temp[i] = temp[i];
			else if (temp[i] >= '0' && temp[i] <= '9')
				temp[i] = temp[i];
			else {
				temp.erase(i, 1);
				i = i - 1;
			}
		}

		for (int i = 0; i < (temp.length() / 2); i++) {
			if (temp[i] != temp[temp.length() - (i + 1)]) {
				check = false;
				break;
			}
			else
				check = true;
		}

		if (check == true)
			fout << temp << endl;
	}

	fin.close();
	fout.close();
}

void sortFile() {

}

void removeVowel() {

}

void search() {

}

void checkNumber() {

}
