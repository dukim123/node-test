/*
#include <iostream>
#include <string>
using namespace std;

void star(int a = 5);
void msg(int id, string text = "");

void star(int a) {
	for (int i = 0; i < a; i++) {
		cout << '*';
	}
	cout << endl;
}

void msg(int id, string text) {
	cout << id << ' ' << text << endl;
}

int main() {
	star();
	star(10);

	msg(10);
	msg(10, "Hello");
}
*/


/*
#include <iostream>
using namespace std;

void f(char c = ' ', int line = 1);

void f(char c, int line) {
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < 10; j++) {
			cout << c;
		}
		cout << endl;
	}
}

int main() {
	f();
	f('%');
	f('@', 5);
}
*/


/*
#include <iostream>
using namespace std;

class MvVector {
	int* p;
	int (size;
public:

	~MyVector() {
		delete[] p;
	}
};

int main() {
	MvVector();
}
*/

/*
����: ���α׷� �����ϸ鼭 ���� �ö󰡴� ��
(��𼭵� ������ �� �ִ�.)
����: �Լ� ȣ����� - �Լ� ����
(�� ������ �Լ��ȿ����� �� �� �ִ�.)
����:���α׷��Ӱ� ���ϴ� ������ �Ҵ��ϰ� ���� �� �ִ�.

����(static): ���α׷� ����-���α׷� ����
(���������� ����� �� ���� �������� ��밡��)
����������!!


*/

#include <iostream>
using namespace std;

class Person {
public:
	int money;
	void addMoney(int money) {
		this->money += money;
	}

	static int sharedMoney;
	static void addShared(int n) {
		sharedMoney += n;
	}
};

int Person::sharedMoney = 10;

int main() {
	Person::addShared(50);
	cout << Person::sharedMoney << endl;

	Person han;
	han.money = 100;
	han.sharedMoney = 200;
	Person::sharedMoney = 300;
	Person::addShared(100);

	cout << han.money << ' ' << Person::sharedMoney << endl;
}