#include<iostream>
using namespace std;
class Student
{
public:
	friend istream& operator>>(istream& input, Student& s);//��ȡѧ����ѧ�� ���� �Ա� �ɼ�
	friend ostream& operator<<(ostream& output, const Student& s);
private:
	int no;     //ѧ��
	string name;//����
	string sex;   
	float score;//�ɼ�
};