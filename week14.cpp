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
전역: 프로그램 시작하면서 같이 올라가는 것
(어디서든 접근할 수 있다.)
지역: 함수 호출시작 - 함수 종료
(그 지역인 함수안에서만 쓸 수 있다.)
동적:프로그래머가 원하는 시점에 할당하고 지울 수 있다.

정적(static): 프로그램 시작-프로그램 종료
(정적변수가 선언된 그 지역 내에서만 사용가능)
공유변수다!!


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