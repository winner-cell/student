#include"student.h"
ostream& operator<<(ostream& output,const Student& s)
{
	output << s.no << " " << s.name << " " << s.sex << " " << s.score;
	return output;
	
}
istream& operator>>(istream& input, Student& s)//��ȡѧ����ѧ�� ���� �Ա� �ɼ�
{
	cout << "��ȡѧ����ѧ�� ���� �Ա� �ɼ�"<<endl;
	input >> s.no >> s.name >> s.sex >> s.score;
	return input;

}