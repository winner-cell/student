#include<iostream>
using namespace std;
class Student
{
public:
	friend istream& operator>>(istream& input, Student& s);//获取学生的学号 姓名 性别 成绩
	friend ostream& operator<<(ostream& output, const Student& s);
private:
	int no;     //学号
	string name;//姓名
	string sex;   
	float score;//成绩
};