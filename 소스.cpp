#include<iostream>
using namespace std;

class Temporary
{
	int num;
public:
	Temporary(int n) :num(n) { cout << "create obj: " << num << endl; }
	~Temporary() { cout << "destroy obj: " << num << endl; }
	void ShowTempInfo() { cout << "My num is " << num << endl; }
};

int main()
{
	Temporary(100);	//클래스 이름만 두고 따로 이름을 지정하지 않은 경우, 임시객체라고 한다. 임시객체는 곧바로 소멸한다.
	cout << "after make" << endl << endl;
	Temporary(200).ShowTempInfo();	//위와 같이 뒤에 명령이 추가된 경우, 명령을 전부 완료한 뒤에 소멸한다.
	cout << "after make" << endl << endl;
	const Temporary& ref = Temporary(300);	//참조자는 이름이 되기 때문에 소멸하지 않는다.
	cout << "end of main" << endl << endl;
	return 0;
}