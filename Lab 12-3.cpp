//Lab 12-3
#include <iostream>
#include <cstdlib>


using namespace std;

int strcompare(const char* s1, const char* s2);
unsigned long strlength(const char* str);

int main() {
	char* s1 = new char[80];
	char* s2 = new char[80];
	char* str;

	cout << "Enter string 1: ";
	cin.getline(s1, 80);
	cout << endl;

	cout << "Enter string 2: ";
	cin.getline(s2, 80);
	cout << endl;

	int num1 = strlength(s1);
	cout << "string 1 is " << num1 << " characters long." << endl;

	int num2 = strlength(s2);
	cout << "string 2 is " << num2 << " characters long." << endl;

	int equal = strcompare(s1, s2);
	if (equal > 0) {
		cout << "string 1 lexicographically comes before string 2." << endl;
	}
	if (equal == 0) {
		cout << "string 1 lexicographically is equal to string 2." << endl;
	}
	if (equal < 0) {
		cout << "string 2 lexicographically comes before string 1." << endl;
	}
}

unsigned long strlength(const char* str) {
	int num;
	num = strlen(str);
	return num;
}

int strcompare(const char* s1, const char* s2) {
	int equal;
	if (s1 != s2) {
		if (s1 < s2) {
			return -1;
		}
		else if (s1 > s2) {
			return 1;
		}
	}
	else return 0;
}