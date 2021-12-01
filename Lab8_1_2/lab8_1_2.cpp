#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int ThirdComma(char* s, int comma, int i) {
		if (comma < 3) {
			if (s[i] == ',')
				return ThirdComma(s, comma+1, i+1);
			else
				return ThirdComma(s, comma, i+1);
		}
		else
			return i-1;
}

char* InsertAfter(char* d, const char* s, const char c1, const char c2, char* t)
{
	if (*s != '\0')
	{
		*t++ = *s++;
		if (*s == c1)
			*t++ = c2;
		return InsertAfter(d, s, c1, c2, t);
	}
	else
	{
		*t = '\0';
		return d;
	}
}


char* Change(char* s, const char c2, int i) {
	if(s[i] != '\0') {
		if (s[i] == ',')
			s[i] = c2;
		return Change(s, c2, i + 1);
	}
	else
		return s;
}

int main()
{
	char s[101];

	char c1 = ',';
	char c2 = '*';
	cout << "Enter string:" << endl;
	cin.getline(s, 100);
	cout << "Index of third comma in the row = " << ThirdComma(s, 0, 0) << endl;
	cout << "After change:" << endl;
	char* d = new char[2 * strlen(s) + 1];
	InsertAfter(d, s, c1, c2, d);
	cout << Change(d, c2, 0) << endl;
	return 0;
}
