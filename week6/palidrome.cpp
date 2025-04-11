// palidrome.cpp (ȸ��)
#include <algorithm> // equal()
#include <iostream>
#include <string>

using namespace std;

bool is_palidrome(const string& s) {
	return equal(s.begin(), s.end(), s.rbegin());
}

int main() {
	string s;
	while (cin >> s) {
		if (is_palidrome(s))
			cout << s << "��/�� ȸ���Դϴ�." << endl;
		else
			cout << s << "��/�� ȸ���� �ƴմϴ�." << endl;
	}
	return 0;
}