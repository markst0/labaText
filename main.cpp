#include "func.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	ifstream in("C:\\Users\\User\\source\\repos\\Project1\\file.txt");
	string str;
	in >> str;
	cout << str << endl;

	stack<int> expression;

	for (size_t i = 0; i < str.size(); ++i) {
		if (str[i] == '(') expression.push(i);
	}

	while (!expression.empty()) {
		calculate(str, expression.top());
		str.erase(expression.top(), 1);
		str.erase(str.find(')', expression.top()), 1);
		expression.pop();
		cout << str << endl;
	}

	cout << "Ответ: " << str;
	in.close();
}
