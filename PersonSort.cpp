#include<iostream>
#include<list>
#include<string>
#include<algorithm>
using namespace std;


class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_name = name;
		this->m_age = age;
		this->m_height = height;
	}
	string m_name;
	int m_age;
	int m_height;
};

bool compareperson(Person &p1, Person &p2)
{
	if (p1.m_age == p2.m_age)
		return p1.m_height > p2.m_height;
	else
		return p1.m_age < p2.m_age;
}

void test()
{
	list<Person> L;

	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名： " << it->m_name << " 年龄： " << it->m_age << " 身高： " << it->m_height << endl;
	}

	cout << "排序后：" << endl;
	L.sort(compareperson);
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名： " << it->m_name << " 年龄： " << it->m_age << " 身高： " << it->m_height << endl;
	}
}


int main()
{
	test();
	system("pause");
	return 0;
}
