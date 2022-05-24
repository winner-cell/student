#include"student.h"
ostream& operator<<(ostream& output,const Student& s)
{
	output << s.no << " " << s.name << " " << s.sex << " " << s.score;
	return output;
	
}
istream& operator>>(istream& input, Student& s)//获取学生的学号 姓名 性别 成绩
{
	cout << "获取学生的学号 姓名 性别 成绩"<<endl;
	input >> s.no >> s.name >> s.sex >> s.score;
	return input;

}