#include <iostream>
using namespace std;
int main()
{
	int a, dar, max;
	cout << "������� ����� ������������������:" << endl;
	cin >> a;
	cout << "������� ������ �����:" <<endl;
	cin >> max;
	for (int i = 2; i <= a; i++)
	{
		cout << "������� ������ �����" << endl;
		cin >> dar;
		if (dar > max) { max = dar; }
	}
	cout << "������������ �������� :" << max << endl;
}