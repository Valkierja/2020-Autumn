#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int>q;
	int j;
	for (int i = 0;i <5; i++)
	{
		cout << "��������";
		cin >> j;
		q.push(j);
	}
	if (!q.empty())
	{
		cout << "���в�Ϊ��" << endl;
		cout << "q����" << q.size() << "��Ԫ��" << endl;
	}
	cout << "��ͷԪ��Ϊ��" << q.front() << endl;
	cout << "��βԪ��Ϊ��" << q.back() << endl;
	cout << "�������";
	for (int i = 0; i < 5; i++)
	{
		int tmp = q.front();
		cout << tmp << " ";
		q.pop();
	}
}