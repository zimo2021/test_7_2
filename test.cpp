#include<iostream>
using namespace std;
//�����㷨��ʶ
//vector(ʸ��������������)�����������
#include<vector>
#include<algorithm>//algorithm:�㷨 �������
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
//	vector<int>::iterator itBegin = v.begin();//iterator:������ ��������
//	vector<int>::iterator itEnd = v.end();
//	//��һ�ֱ�����ʽ
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;//10 20 30 40
//	//	itBegin++;
//	//}
//	//�ڶ��ֱ�����ʽ
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << *it << endl;//10 20 30 40
//	//}
//	//�����ֱ�����ʽ ֱ������STL�ṩ�ı����㷨
//	
//	for_each(v.begin(), v.end(), show);//10 20 30 40
//}
//int main()
//{
//	test();
//	return 0;
//}
//vector�д���Զ�������
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
//	//����
//	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << " ������ " << it->m_name << " ���䣺 " << it->m_age << endl;//�ɹ�
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
//	//����
//	for (vector<person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << " ������ " << (*it)->m_name << " ���䣺 " << (*it)->m_age << endl;//�ɹ�
//	}
//}
//
//int main()
//{
//	//test();
//	test1();
//	return 0;
//}
//vector����Ƕ������
//void test()
//{
//	//��������
//	vector<vector<int>>vs;
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//	vector<int>v5;
//	int i;
//	//��С������ֵ
//	for (i = 0; i < 4; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i+1);
//		v3.push_back(i+2);
//		v4.push_back(i+3);
//		v5.push_back(i+4);
//	}
//	//����������ֵ
//	vs.push_back(v1);
//	vs.push_back(v2);
//	vs.push_back(v3);
//	vs.push_back(v4);
//	vs.push_back(v5);
//	//����vs����������
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
string��������һ����
string���з�װ�˺ܶ��Ա���� �����find ���� copy��
string�Ĺ��캯��
1.string();//����һ�����ַ��� �� string arr;
2.string(const char* s)//ʹ���ַ���s��ʼ��
3.string(const string& str);//ʹ��һ��string�����ʼ����һ������
4.string(int n,char c)//ʹ��n���ַ�c��ʼ��
string�Ķ��ֹ��췽ʽû�пɱ��ԣ����ʹ�ü���
*/
//#include<string>
//void test()
//{
//	string s1("hello world");
//	cout << s1 << endl;//hello world
//	string s2(s1);
//	cout << s2 << endl;//hello world
//	string s3(10, 'a');
//	cout << s3 << endl;//10��a
//}
//int main()
//{
//	test();
//	return 0;
//}
//string�ĸ�ֵ����
//#include<string>
//void test()
//{
//	string str1;
//	str1 = "hello world";
//	cout << str1 << endl;
//	string str2 = str1;
//	cout << str2 << endl;
//	string str3;
//	str3.assign("hello world");//assign:���� ���� ��������
//	cout << str3 << endl;
//	string str4;
//	str4.assign("hello worls", 5);
//	cout << str4 << endl;//hello
//	string str5;
//	str5.assign(str4);
//	cout << str5 << endl;//hello
//	string str6;
//	str6.assign(10, 'w');
//	cout << str6 << endl;//10��w
//}
//int main()
//{
//	test();
//	return 0;
//}
//string�ַ���׷��
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
//	//str1.append(str2, 3, 9);//�˴���3��ʾ���±�Ϊ3���ַ���ʼ ׷�� 9��ʾ׷��9���ַ�
//	//cout << str1 << endl;//I LOVE Game
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//string �ַ����������滻
//#include<string>
//void test()
//{
//	string str1 = "abcdefgde";
//	//int ret = str1.find("de");
//	//cout << ret << endl;//3  ��ʾ��ʼλ���±�Ϊ3(����������)
//	//ret = str1.rfind("de");
//	//cout << ret << endl;//7��������������
//	//�滻
//	str1.replace(2, 3, "11111");  //2��ʾ��ʼλ�� 3��ʾ�滻�����ַ� "11111"��ʾ���������ַ��滻��11111
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
//		cout << "str1��str2���" << endl;//����ַ��Ƚ�  �൱��c�����е�strcmp
//	}
//	else
//	{
//		cout << "str1��str2�����" << endl;
//	}
//	
//}
//int main()
//{
//	test();
//	return 0;
//}
//string�ַ���ȡ
//#include<string>
//void test()
//{
//	string str1 = "hello world";
//	//���ֻ�ȡ��ʽ
//	//1.ͨ��[]��ȡ
//	int i;
//	for ( i = 0; i < str1.size(); i++)//str1.size()Ҳ��string���е�һ����Ա����
//	{
//		cout << str1[i] << " ";//h e l l o   w o r l d
//	}
//	cout << endl;
//	//2.ͨ��at����ȡ
//	for (i = 0; i < str1.size(); i++)
//	{
//		cout << str1.at(i) << " ";//h e l l o   w o r l d
//	}
//	cout << endl;
//	//�����޸ķ�ʽ
//	//1.ͨ��[]�޸�
//	str1[0] = 'x';
//	cout << str1 << endl;//xello world
//	//2.ͨ��at�޸�
//	str1.at(1) = 'x';
//	cout << str1 << endl;//xxllo world
//}
//int main()
//{
//	test();
//	return 0;
//}
//string�ַ��������ɾ��
//#include<string>
//void test()
//{
//	string str1 = "hello";
//	str1.insert(1, "111");//1������±�Ϊ1��λ�ò��� 111������������
//	cout << str1 << endl;//h111ello
//	str1.erase(1, 3);//1������±�Ϊ1��λ�ÿ�ʼɾ�� 3����ɾ��3��Ԫ��
//	cout << str1 << endl;//hello
//}
//int main()
//{
//	test();
//	return 0;
//}
//��ȡstring�ַ����ִ�
//#include<string>
//void test()
//{
//	string email = "zhangsan@qq.com";
//	string sub = email.substr(0, 5);
//	cout << sub << endl;//zhang
//	int ret = email.find("@");
//	sub = email.substr(0, ret);
//	cout << sub << endl;//zhangsan  �൱�ڰ�@ǰ�������ַ���ȡ����
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//vector�������캯��
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
//	//��һ��Ĭ�Ϲ���
//	vector<int>v1;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printvector(v1);//0 1 2 3 4 5 6 7 8 9
//	//���������乹��
//	vector<int>v2(v1.begin(), v1.end());
//	printvector(v2);//0 1 2 3 4 5 6 7 8 9
//	//������
//	vector<int>v3(10, 100);
//	printvector(v3);//100 100 100 100 100 100 100 100 100 100(10��100)
//	//����
//	vector<int>v4(v3);
//	printvector(v4);//100 100 100 100 100 100 100 100 100 100��10��100��
//}
//int main()
//{
//	test();
//	return 0;
//}
//vector��ֵ����
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
//	v3.assign(v1.begin(), v1.end());//ͨ��assign������ֵ
//	vector<int>v4;
//	v4.assign(10, 100);
//	printvector(v1);//0 1 2 3 4 5 6 7 8 9
//	printvector(v2);//0 1 2 3 4 5 6 7 8 9
//	printvector(v3);//0 1 2 3 4 5 6 7 8 9
//	printvector(v4);//10��100
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//vector�������� ��С 
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
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ��" << endl;//v1��Ϊ��
		cout << v1.capacity() << endl;//13 ������13�����οռ�
		cout << v1.size() << endl;//10 ռ����10�����οռ�
	}
	v1.resize(15);//��size��10��չ��15 ����0���
	//cout << v1 << endl;//���� ����������ӡ
	printvector(v1);//0 1 2 3 4 5 6 7 8 9 0 0 0 0 0 
	v1.resize(5);
	printvector(v1);//0 1 2 3 4 ֻ��ӡǰ5��
}
int main()
{
	test();
	return 0;
}














