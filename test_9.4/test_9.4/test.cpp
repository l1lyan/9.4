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
//			delete m_age;//堆区内容重复释放，程序崩溃。解决方案：用深拷贝解决浅拷贝带来的问题
//			m_age = NULL;
//		}
//	}
//	Person& operator=(Person &p)
//	{
//		//应该先判断是否有属性在堆区上，如果有先释放干净，然后在深拷贝
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//		m_age = new int(*p.m_age);
//		//返回对象本身
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
//	cout << "p1的年龄为：" << *p1.m_age << endl;
//	cout << "p2的年龄为：" << *p2.m_age << endl;
//	Person p3(30);
//	p3 = p2 = p1;//连续等于报错
//	cout << "p3的年龄为：" << *p3.m_age << endl;
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
//		cout << "p1和p2是相等的" << endl;
//	}
//	else
//	{
//		cout << "p1和p2是不相等的" << endl;
//	}
//
//	if (p1 != p2)
//	{
//		cout << "p1和p2是不相等的" << endl;
//	}
//	else
//	{
//		cout << "p1和p2是相等的" << endl;
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
//	myprint("hello world");//让对象使用重载的小括号。由于使用起来类似于函数调用，故称为仿函数
//	Myprint02("hello world");//函数调用
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


//普通实现页面
//JAVA页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++....(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
////Python页面
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++....(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
////C++
//class Cpp
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++....(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};

//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++....(公共分类列表)" << endl;
//	}
//};
//class Java:public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//class Cpp :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//void test01()
//{
//	cout << "Java下载视频页面如下:" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "------------------------" << endl;
//	cout << "Python下载视频页面如下:" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "------------------------" << endl;
//	cout << "C++下载视频页面如下:" << endl;
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
//class Son1 :public Base1//公共继承
//{
//public:
//	void func()
//	{
//		m_A = 10;//父类中的公共权限成员，到子类中依然是公共权限
//		m_B = 20;//父类中的保护权限成员，到子类中依然是保护权限
//		//m_C = 30;//报错。父类中的私有权限成员，子类访问不到
//	}
//};
//
//class Son2 :protected Base1//保护继承
//{
//public:
//	void func()
//	{
//		m_A = 10;//父类中的公共权限成员，到子类中变为保护权限
//		m_B = 20;//父类中的保护权限成员，到子类中依然是保护权限
//		//m_C = 30;//报错。父类中的私有权限成员，子类访问不到
//	}
//};
//
//class Son3 :private Base1//私有继承
//{
//public:
//	void func()
//	{
//		m_A = 10;//父类中的公共权限成员，到子类中变为私有权限
//		m_B = 20;//父类中的保护权限成员，到子类中变为私有权限
//		//m_C = 30;//报错。父类中的私有权限成员，子类访问不到
//	}
//};
//
//class GrandSon3 :public Son3//公共继承
//{
//public:
//	void func()
//	{
//		//m_A = 1000;//报错:m_A在Son3中是私有成员，子类无论用哪种方法都访问不到私有内容
//		//m_B = 1000;//报错
//		//m_C = 1000;//报错
//	}
//};
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100;//报错，m_B到Son1子类继承后，是一个保护权限，类外不能访问
//
//	Son2 s2;
//	//s2.m_A = 100;//报错，m_A到Son2子类继承后，是保护权限，类外不能访问
//	//s2.m_B = 100;//报错
//
//	Son3 s3;
//	//s3.m_A = 1000;//报错，m_A到Son3子类继承后，是私有权限，类外不能访问
//	//s3.m_B = 1000;//报错
//}


//class Base 
//{
//public:
//	Base()
//	{
//		cout << "Base的构造函数" << endl;
//	}
//	~Base()
//	{
//		cout << "Base的析构函数" << endl;
//	}
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son的构造函数" << endl;
//	}
//	~Son()
//	{
//		cout << "Son的析构函数" << endl;
//	}
//};


//class Base 
//{
//public:
//	void func()
//	{
//		cout << "Base - func()调用" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base - func(int a)调用" << endl;
//	}
//};
//
//class Son :public Base//公共继承
//{
//public:
//	void func()
//	{
//		cout << "Son - func()调用" << endl;
//	}
//};
//void test01()
//{
//	Son s;
//	s.func();
//	s.Base::func();
//	//s.func(100);//报错：如果子类中出与父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
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
	cout << "通过创建对象访问：" << endl;
	Son s;
	cout << "Son m_A = " << s.m_A << endl;
	cout << "Base m_A = " << s.Base::m_A << endl;

	cout << "通过类名访问：" << endl;
	cout << "Son m_A = " << Son::m_A << endl;
	cout << "Base m_A = " << Son::Base::m_A << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}