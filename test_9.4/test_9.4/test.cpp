#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//class Person
//{
//public:
//	Person(int age)
//	{
//		m_age = new int(age);
//	}
//	~Person()
//	{
//		if (m_age != NULL)
//		{
//			delete m_age;//���������ظ��ͷţ���������������������������ǳ��������������
//			m_age = NULL;
//		}
//	}
//	Person& operator=(Person &p)
//	{
//		//Ӧ�����ж��Ƿ��������ڶ����ϣ���������ͷŸɾ���Ȼ�������
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//		m_age = new int(*p.m_age);
//		//���ض�����
//		return *this;
//	}
//
//	int *m_age;
//};
//void test01()
//{
//	Person p1(18);
//
//	Person p2(20);
//	p2 = p1;
//	cout << "p1������Ϊ��" << *p1.m_age << endl;
//	cout << "p2������Ϊ��" << *p2.m_age << endl;
//	Person p3(30);
//	p3 = p2 = p1;//�������ڱ���
//	cout << "p3������Ϊ��" << *p3.m_age << endl;
//}



//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	bool operator==(Person& p)
//	{
//		if (this->m_name == p.m_name && this->m_age == p.m_age)
//			return true;
//		else
//			return false;
//	}
//	bool operator!=(Person& p)
//	{
//		if (this->m_name == p.m_name && this->m_age == p.m_age)
//			return false;
//		else
//			return true;
//	}
//	string m_name;
//	int m_age;
//
//};
//void test01()
//{
//	Person p1("Tom", 18);
//	Person p2("Jerry", 18);
//
//	if (p1 == p2)
//	{
//		cout << "p1��p2����ȵ�" << endl;
//	}
//	else
//	{
//		cout << "p1��p2�ǲ���ȵ�" << endl;
//	}
//
//	if (p1 != p2)
//	{
//		cout << "p1��p2�ǲ���ȵ�" << endl;
//	}
//	else
//	{
//		cout << "p1��p2����ȵ�" << endl;
//	}
//}

#include<string>
//class Myprint
//{
//public:
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//void Myprint02(string test)
//{
//	cout << test << endl;
//}
//void test01()
//{
//	Myprint myprint;
//	myprint("hello world");//�ö���ʹ�����ص�С���š�����ʹ�����������ں������ã��ʳ�Ϊ�º���
//	Myprint02("hello world");//��������
//}
//
//class Myadd
//{
//public:
//	int operator()(int num1,int num2)
//	{
//		return num1 + num2;
//	}
//};
//void test02()
//{
//	Myadd myadd;
//	int ret = myadd(12, 12);
//	cout << ret << endl;
//
//}
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}


//��ͨʵ��ҳ��
//JAVAҳ��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++....(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
////Pythonҳ��
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++....(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
////C++
//class Cpp
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++....(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};

//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++....(���������б�)" << endl;
//	}
//};
//class Java:public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//class Cpp :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//void test01()
//{
//	cout << "Java������Ƶҳ������:" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "------------------------" << endl;
//	cout << "Python������Ƶҳ������:" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "------------------------" << endl;
//	cout << "C++������Ƶҳ������:" << endl;
//	Cpp cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//class Base1 
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 :public Base1//�����̳�
//{
//public:
//	void func()
//	{
//		m_A = 10;//�����еĹ���Ȩ�޳�Ա������������Ȼ�ǹ���Ȩ��
//		m_B = 20;//�����еı���Ȩ�޳�Ա������������Ȼ�Ǳ���Ȩ��
//		//m_C = 30;//���������е�˽��Ȩ�޳�Ա��������ʲ���
//	}
//};
//
//class Son2 :protected Base1//�����̳�
//{
//public:
//	void func()
//	{
//		m_A = 10;//�����еĹ���Ȩ�޳�Ա���������б�Ϊ����Ȩ��
//		m_B = 20;//�����еı���Ȩ�޳�Ա������������Ȼ�Ǳ���Ȩ��
//		//m_C = 30;//���������е�˽��Ȩ�޳�Ա��������ʲ���
//	}
//};
//
//class Son3 :private Base1//˽�м̳�
//{
//public:
//	void func()
//	{
//		m_A = 10;//�����еĹ���Ȩ�޳�Ա���������б�Ϊ˽��Ȩ��
//		m_B = 20;//�����еı���Ȩ�޳�Ա���������б�Ϊ˽��Ȩ��
//		//m_C = 30;//���������е�˽��Ȩ�޳�Ա��������ʲ���
//	}
//};
//
//class GrandSon3 :public Son3//�����̳�
//{
//public:
//	void func()
//	{
//		//m_A = 1000;//����:m_A��Son3����˽�г�Ա���������������ַ��������ʲ���˽������
//		//m_B = 1000;//����
//		//m_C = 1000;//����
//	}
//};
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100;//����m_B��Son1����̳к���һ������Ȩ�ޣ����ⲻ�ܷ���
//
//	Son2 s2;
//	//s2.m_A = 100;//����m_A��Son2����̳к��Ǳ���Ȩ�ޣ����ⲻ�ܷ���
//	//s2.m_B = 100;//����
//
//	Son3 s3;
//	//s3.m_A = 1000;//����m_A��Son3����̳к���˽��Ȩ�ޣ����ⲻ�ܷ���
//	//s3.m_B = 1000;//����
//}


//class Base 
//{
//public:
//	Base()
//	{
//		cout << "Base�Ĺ��캯��" << endl;
//	}
//	~Base()
//	{
//		cout << "Base����������" << endl;
//	}
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son�Ĺ��캯��" << endl;
//	}
//	~Son()
//	{
//		cout << "Son����������" << endl;
//	}
//};


//class Base 
//{
//public:
//	void func()
//	{
//		cout << "Base - func()����" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base - func(int a)����" << endl;
//	}
//};
//
//class Son :public Base//�����̳�
//{
//public:
//	void func()
//	{
//		cout << "Son - func()����" << endl;
//	}
//};
//void test01()
//{
//	Son s;
//	s.func();
//	s.Base::func();
//	//s.func(100);//������������г��븸��ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ����Ա����
//	s.Base::func(100);
//}


class Base
{
public:
	static int m_A;
};
int Base::m_A = 100;
class Son :public Base
{
public:
	static int m_A;
};
int Son::m_A = 200;
void test01()
{
	cout << "ͨ������������ʣ�" << endl;
	Son s;
	cout << "Son m_A = " << s.m_A << endl;
	cout << "Base m_A = " << s.Base::m_A << endl;

	cout << "ͨ���������ʣ�" << endl;
	cout << "Son m_A = " << Son::m_A << endl;
	cout << "Base m_A = " << Son::Base::m_A << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}