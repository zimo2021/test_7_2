#include<iostream>
using namespace std;
//容器算法初识
//vector(矢量，向量，载体)存放数据类型
#include<vector>
#include<algorithm>//algorithm:算法 计算程序
//void show(int val)
//{
//	cout << val << endl;
//}
//void test()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	vector<int>::iterator itBegin = v.begin();//iterator:迭代器 迭代程序
//	vector<int>::iterator itEnd = v.end();
//	//第一种遍历方式
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;//10 20 30 40
//	//	itBegin++;
//	//}
//	//第二种遍历方式
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << *it << endl;//10 20 30 40
//	//}
//	//第三种遍历方式 直接利用STL提供的遍历算法
//	
//	for_each(v.begin(), v.end(), show);//10 20 30 40
//}
//int main()
//{
//	test();
//	return 0;
//}
//vector中存放自定义类型
//#include<string>
//class person
//{
//public:
//	person(string name,int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//
//void test()
//{
//	vector<person> v;
//	person p1("aaa", 10);
//	person p2("bbb", 20);
//	person p3("ccc", 30);
//	person p4("ddd", 40);
//	person p5("eee", 50);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	//遍历
//	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << " 姓名： " << it->m_name << " 年龄： " << it->m_age << endl;//成功
//	}
//}
//void test1()
//{
//	vector<person*> v;
//	person p1("aaa", 10);
//	person p2("bbb", 20);
//	person p3("ccc", 30);
//	person p4("ddd", 40);
//	person p5("eee", 50);
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//	//遍历
//	for (vector<person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << " 姓名： " << (*it)->m_name << " 年龄： " << (*it)->m_age << endl;//成功
//	}
//}
//
//int main()
//{
//	//test();
//	test1();
//	return 0;
//}
//vector容器嵌套容器
//void test()
//{
//	//创建容器
//	vector<vector<int>>vs;
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//	vector<int>v5;
//	int i;
//	//给小容器赋值
//	for (i = 0; i < 4; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i+1);
//		v3.push_back(i+2);
//		v4.push_back(i+3);
//		v5.push_back(i+4);
//	}
//	//给大容器赋值
//	vs.push_back(v1);
//	vs.push_back(v2);
//	vs.push_back(v3);
//	vs.push_back(v4);
//	vs.push_back(v5);
//	//遍历vs（大容器）
//	for (vector<vector<int>>::iterator sit = vs.begin(); sit != vs.end(); sit++)
//	{
//		for (vector<int>::iterator it = (*sit).begin(); it != (*sit).end(); it++)
//		{
//			cout << *it << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	test();
//	return 0;
//}
/*
string本质上是一个类
string类中封装了很多成员函数 如查找find 拷贝 copy等
string的构造函数
1.string();//创建一个空字符串 如 string arr;
2.string(const char* s)//使用字符串s初始化
3.string(const string& str);//使用一个string对象初始化另一个对象
4.string(int n,char c)//使用n个字符c初始化
string的多种构造方式没有可比性，灵活使用即可
*/
//#include<string>
//void test()
//{
//	string s1("hello world");
//	cout << s1 << endl;//hello world
//	string s2(s1);
//	cout << s2 << endl;//hello world
//	string s3(10, 'a');
//	cout << s3 << endl;//10个a
//}
//int main()
//{
//	test();
//	return 0;
//}
//string的赋值操作
//#include<string>
//void test()
//{
//	string str1;
//	str1 = "hello world";
//	cout << str1 << endl;
//	string str2 = str1;
//	cout << str2 << endl;
//	string str3;
//	str3.assign("hello world");//assign:分配 分派 布置任务
//	cout << str3 << endl;
//	string str4;
//	str4.assign("hello worls", 5);
//	cout << str4 << endl;//hello
//	string str5;
//	str5.assign(str4);
//	cout << str5 << endl;//hello
//	string str6;
//	str6.assign(10, 'w');
//	cout << str6 << endl;//10个w
//}
//int main()
//{
//	test();
//	return 0;
//}
//string字符串追加
//#include<string>
//void test()
//{ 
//	string str1 = "I " ;
//	//str1 += "LOVE Game";
//	//cout << str1 << endl;//I LOVE Game
//	//string str2 = "LOVE Game";
//	//str1 += str2;
//	//cout << str1 << endl;//I LOVE Game
//	//str1.append("LOVE Game");
//	//cout << str1 << endl;//I LOVE Game
//	//str1.append("LOVE Gameabcd", 9);
//	//cout << str1 << endl;//I LOVE Game
//	//string str2 = "LOVE Game";
//	//str1.append(str2);
//	//cout << str1 << endl;//I LOVE Game
//	//string str2 = "abcLOVE Gameabc";
//	//str1.append(str2, 3, 9);//此处的3表示从下表为3的字符开始 追加 9表示追加9个字符
//	//cout << str1 << endl;//I LOVE Game
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//string 字符串查找与替换
//#include<string>
//void test()
//{
//	string str1 = "abcdefgde";
//	//int ret = str1.find("de");
//	//cout << ret << endl;//3  表示起始位置下标为3(从左往右数)
//	//ret = str1.rfind("de");
//	//cout << ret << endl;//7（从右往左数）
//	//替换
//	str1.replace(2, 3, "11111");  //2表示起始位置 3表示替换三个字符 "11111"表示将这三个字符替换成11111
//	cout << str1 << endl;//ab11111fgde
//}
//int main()
//{
//	test();
//	return 0;
//}
//#include<string>
//void test()
//{
//	string str1 = "abcd";
//	string str2 = "abcde";
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1与str2相等" << endl;//逐个字符比较  相当于c语言中的strcmp
//	}
//	else
//	{
//		cout << "str1与str2不相等" << endl;
//	}
//	
//}
//int main()
//{
//	test();
//	return 0;
//}
//string字符获取
//#include<string>
//void test()
//{
//	string str1 = "hello world";
//	//两种获取方式
//	//1.通过[]获取
//	int i;
//	for ( i = 0; i < str1.size(); i++)//str1.size()也是string类中的一个成员函数
//	{
//		cout << str1[i] << " ";//h e l l o   w o r l d
//	}
//	cout << endl;
//	//2.通过at来获取
//	for (i = 0; i < str1.size(); i++)
//	{
//		cout << str1.at(i) << " ";//h e l l o   w o r l d
//	}
//	cout << endl;
//	//两种修改方式
//	//1.通过[]修改
//	str1[0] = 'x';
//	cout << str1 << endl;//xello world
//	//2.通过at修改
//	str1.at(1) = 'x';
//	cout << str1 << endl;//xxllo world
//}
//int main()
//{
//	test();
//	return 0;
//}
//string字符串插入和删除
//#include<string>
//void test()
//{
//	string str1 = "hello";
//	str1.insert(1, "111");//1代表从下表为1的位置插入 111代表插入的内容
//	cout << str1 << endl;//h111ello
//	str1.erase(1, 3);//1代表从下标为1的位置开始删除 3代表删除3个元素
//	cout << str1 << endl;//hello
//}
//int main()
//{
//	test();
//	return 0;
//}
//截取string字符串字串
//#include<string>
//void test()
//{
//	string email = "zhangsan@qq.com";
//	string sub = email.substr(0, 5);
//	cout << sub << endl;//zhang
//	int ret = email.find("@");
//	sub = email.substr(0, ret);
//	cout << sub << endl;//zhangsan  相当于吧@前的所有字符截取出来
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//vector容器构造函数
//#include<vector>
//void printvector(vector<int>v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	//法一：默认构造
//	vector<int>v1;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printvector(v1);//0 1 2 3 4 5 6 7 8 9
//	//法二：区间构造
//	vector<int>v2(v1.begin(), v1.end());
//	printvector(v2);//0 1 2 3 4 5 6 7 8 9
//	//法三：
//	vector<int>v3(10, 100);
//	printvector(v3);//100 100 100 100 100 100 100 100 100 100(10个100)
//	//法四
//	vector<int>v4(v3);
//	printvector(v4);//100 100 100 100 100 100 100 100 100 100（10个100）
//}
//int main()
//{
//	test();
//	return 0;
//}
//vector赋值操作
//#include<vector>
//void printvector(vector<int>v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	vector<int>v1;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	vector<int>v2 = v1;
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());//通过assign函数赋值
//	vector<int>v4;
//	v4.assign(10, 100);
//	printvector(v1);//0 1 2 3 4 5 6 7 8 9
//	printvector(v2);//0 1 2 3 4 5 6 7 8 9
//	printvector(v3);//0 1 2 3 4 5 6 7 8 9
//	printvector(v4);//10个100
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//vector容器容量 大小 
#include<string>
void printvector(vector<int>v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test()
{
	vector<int>v1;
	int i;
	for (i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	if (v1.empty())
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;//v1不为空
		cout << v1.capacity() << endl;//13 开辟了13个整形空间
		cout << v1.size() << endl;//10 占用了10个整形空间
	}
	v1.resize(15);//将size从10扩展到15 并用0填充
	//cout << v1 << endl;//错误 不能这样打印
	printvector(v1);//0 1 2 3 4 5 6 7 8 9 0 0 0 0 0 
	v1.resize(5);
	printvector(v1);//0 1 2 3 4 只打印前5个
}
int main()
{
	test();
	return 0;
}














