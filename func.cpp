#include "func.h"

using namespace std;

void calculate(string& str, const int& begin) {
	int i = begin;

	while (str[i] != ')' && i < str.size()) {
		if (str[i] == '~')
		{
			if (str[i + 1] == '1') str.replace(i, 2, "0");
			if (str[i + 1] == '0') str.replace(i, 2, "1");
			cout << str << endl;
			i = begin;
		}
		++i;
	}
	i = begin;

	while (str[i] != ')' && i < str.size()) {
		if (str[i] == '*') {
			int res = stoi(&str[i - 1]) * stoi(&str[i + 1]);
			string exch = to_string(res);
			str.replace(i - 1, 3, exch);
			cout << str << endl;
			i = begin;
		}
		++i;
	}
	i = begin;

	while (str[i] != ')' && i < str.size()) {
		if (str[i] == '+') {
			int res = (stoi(&str[i - 1]) + stoi(&str[i + 1])) % 2;
			string exch = to_string(res);
			str.replace(i - 1, 3, exch);
			cout << str << endl;
			i = begin;
		}
		++i;
	}

}