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
	Temporary(100);	//Ŭ���� �̸��� �ΰ� ���� �̸��� �������� ���� ���, �ӽð�ü��� �Ѵ�. �ӽð�ü�� ��ٷ� �Ҹ��Ѵ�.
	cout << "after make" << endl << endl;
	Temporary(200).ShowTempInfo();	//���� ���� �ڿ� ����� �߰��� ���, ����� ���� �Ϸ��� �ڿ� �Ҹ��Ѵ�.
	cout << "after make" << endl << endl;
	const Temporary& ref = Temporary(300);	//�����ڴ� �̸��� �Ǳ� ������ �Ҹ����� �ʴ´�.
	cout << "end of main" << endl << endl;
	return 0;
}