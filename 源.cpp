#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>// ��׼�㷨ͷ�ļ�
#include<string>

void my_print(int val)
{
	cout << val << " ";
}

// vector����Զ�����������
// 
//int main()
//{
//	// ����һ��vector����������������
//	vector<int> v;
//	// ʹ��vector��pushback������������
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	// ͨ�����������������е�����
//	// ���� 1
//	//vector<int>::iterator v_Begin = v.begin();// ��ʼ��������ָ�������е�һ��Ԫ��
//	//vector<int>::iterator v_End = v.end();// ������������ָ�����������һ��Ԫ�صĺ���һ��Ԫ��
//	//// ��������
//	//while (v_Begin != v_End)
//	//{
//	//	cout << *v_Begin << " ";
//	//	v_Begin++;
//	//}
//	
//	// ���� 2
//	//for (vector<int>::iterator v_begin = v.begin(); v_begin != v.end(); v_begin++)
//	//{
//	//	cout << *v_begin << " ";
//	//}
//
//	// ���� 3
//	for_each(v.begin(), v.end(), my_print);
//	//	     ��ʼλ��   ����λ��  ���õĺ���
//
//	return 0;
//}

// vector����Զ�����������

//class person
//{
//public:
//	person(string name,int age)
//	{
//		m_age = age;
//		m_name = name;
//	}
//	int m_age;
//	string m_name;
//};
//void test01()
//{
//		// ����vector����v
//	vector<person> v;
//	// �����Զ����������ʹ�������
//	person p1("Joyce", 21);
//	person p2("Tatina", 20);
//	person p3("Yomi", 1);
//	person p4("nana", 18);
//	// β�������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	// ��������
//	for (vector<person>::iterator v_begin = v.begin(); v_begin != v.end(); v_begin++)
//	{	// v_begin�����Ǹ�ָ�룬���Խ�����.  ����-> ����
//		cout << (*v_begin).m_name << "������Ϊ" << (*v_begin).m_age << endl;
//		cout << v_begin->m_name << "������Ϊ" << v_begin->m_age << endl;
//	}
//}
//void test02()
//{
//		// ����vector����v
//	vector<person*> v;
//	// �����Զ����������ʹ�������
//	person p1("Joyce", 21);
//	person p2("Tatina", 20);
//	person p3("Yomi", 1);
//	person p4("nana", 18);
//	// β�������,p��ָ�룬���Դ���&
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	// ��������
//	for (vector<person*>::iterator v_begin =v.begin(); v_begin != v.end(); v_begin++)
//	{	// *v_begin���Ǹ�ָ�룬���Կ����ٴν�����*������->����
//		cout << (*(*v_begin)).m_name << "������Ϊ" << (*(*v_begin)).m_age << endl;
//		cout << (*v_begin)->m_name << "������Ϊ" << (*v_begin)->m_age << endl;
//	}
//}
//
//void test03()
//{
//	// ����������v
//	vector<vector<int>> v;
//	// ����С����
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//	// ��С�����м�������
//	int i = -1;
//	while (++i != 4)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//	// ��С�������뵽��������
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	// ͨ��������������������
//	for (vector<vector<int>>::iterator v_begin = v.begin(); v_begin != v.end(); v_begin++)
//	{
//		// *v_begin == vector<int> ������������Ҫ����һ�α���
//		for (vector<int>::iterator vv_begin = (*v_begin).begin();vv_begin != (*v_begin).end(); vv_begin++)
//		{
//			cout << *vv_begin << " ";
//		}			
//		cout << endl;
//	}
//}
//int main()
//{
//	test03();
//
//	//for_each(v.begin(), v.end(), my_print);
//	return 0;
//}

//    STL����

//	 1��string

/*
 string ();����һ���յ��ַ���
 string(const char* c);ʹ���ַ���c��ʼ��
 string(const string&str);ʹ��һ��string�����ʼ����һ��string����
 string(int n,char c);ʹ��n���ַ�c��ʼ��
*/
//void test01()
//{
//	// 
//	string s1;// ����һ���յ��ַ���
//
//	const char* str = "Type here";
//	string s2(str); // string(const char* s)����c��stringת����c++��string��ʹ���ַ���s��ʼ��
//	cout << s2 << endl;
//	string s3(s2);	// string(const string& str)���������캯����ʹ��һ��string�����ʼ����һ��string����
//	cout << s3 << endl;
//	string s4(88, 'x');// string(int n,char c) ʹ��n���ַ�x��ʼ��s4
//	cout << s4 << endl;
//}
///*�ַ�����ֵ
// string& operator=(const char* s);    1 ��char*�����ַ��� ��ֵ�� ��ǰ�ַ���
// string& operator=(const string& s);  2 ���ַ���s ��ֵ�� ��ǰ�ַ���
// string& operator=(char c);		      3 ���ַ�c ��ֵ�� ��ǰ�ַ���
// string& assign(const	char* s);	  4 ���ַ���s ��ֵ�� ��ǰ�ַ���
// string& assign(const char* s,int n); 5 ���ַ���sǰn���ַ� ��ֵ�� ��ǰ�ַ���
// string& assign(const string& s,int n);5 ��ȥ�ַ���sǰn���ַ� ʣ�µĸ�ֵ�� ��ǰ�ַ���
// string& assign(const string& s);	  6 ���ַ���s ��ֵ�� ��ǰ�ַ���
// string& assign(int n,char c);		  7 ��n���ַ�c ��ֵ�� ��ǰ�ַ���
//*/
//void test02()
//{
//	const char* str0 = "Type there";
//	string str1;
//	str1 = str0;		// 1 
//	str1 = "Type here"; // 1
//	cout << str1 << endl;
//	
//	string str2;
//	str2 = str1;		// 2
//	cout << str2 << endl;
//
//	string str3;
//	str3 = 'x';			// 3
//	cout << str3 << endl;
//
//	string str4;
//	str4.assign(str0);	// 4
//	cout << str4 << endl;
//
//	string str5;
//	str5.assign(str0,4);// 5 ����const char*,ǰ��4��
//	cout << str5 << endl;
//	str5.assign(str1, 4);// 5 ����string& s����ȥǰ��4��ʣ�µ�
//	cout << str5 << endl;
//
//	string str6;
//	str6.assign(str1);	// 6
//	cout << str6 << endl;
//
//	string str7;
//	str7.assign(88, 'c');// 7
//	cout << str7 << endl;
//}
///*�ַ���ƴ��
// string& operator+=(const char* s);	    1 ��char*�����ַ��� ƴ�ӵ���ǰ�ַ���ĩβ
// string& operator+=(const string& s);	2 ���ַ���s ƴ�ӵ���ǰ�ַ���ĩβ
// string& operator+=(const char c);   	3 ���ַ�c ƴ�ӵ���ǰ�ַ���ĩβ
// string& append(const	char* s);		4 ���ַ���s ƴ�ӵ���ǰ�ַ���ĩβ
// string& append(const char* s,int n);   5 ���ַ���sǰn���ַ� ƴ�ӵ���ǰ�ַ���ĩβ
// string& append(const string& s,int n); 5 ���ַ���s��ȥǰn���ַ� ʣ�µ�ƴ�ӵ���ǰ�ַ���ĩβ
// string& append(const string& s);		6 ���ַ���s ƴ�ӵ���ǰ�ַ���ĩβ
// string& append(const string& s,int pos,int n);7 ���ַ���s��pos��ʼλ�õ�n���ַ� ƴ�ӵ���ǰ�ַ���ĩβ
//*/
//void test03()
//{
//	string str1 = "I";
//	const char* s = " am ";
//	//str1 += " am ";			// 1
//	str1 += s;					// 1
//	cout << str1 << endl;
//
//	string str2 = "studious";
//	str1 += str2;				// 2
//	cout << str1 << endl;
//
//	str1 += 'o';
//	cout << str1 << endl;		// 3
//
//	const char* s1 = " are ";
//	string str3 = "You";
//	str3.append(s1);		// 4
//	cout << str3 << endl;
//
//	str3.append(s1, 3);		// 5 ��s1ǰ3���ַ�׷�ӵ�����
//	cout << str3 << endl;
//	str3.append(str1, 3);	// 5 ��str1��ȥǰ3���ַ���ʣ�µ�׷�ӵ�����
//	cout << str3 << endl;	
//
//	str3.append(str1);
//	cout << str3 << endl;	// 6
//
//	string str4;
//	str4.append(str3, 11, 14);//7
//	cout << str4 << endl;
//}
///* �ַ����������滻
// �ҵ�һ��
//int find(const string& s,int pos = 0)const;	 1��posλ�ò����ַ���s��һ�γ���λ��
//int find(const char* s,int pos = 0)const;	 2��posλ�ò����ַ���s��һ�γ���λ��
//int find(const char* s,int pos,int n)const;	 3��posλ�ò����ַ���s��ǰn���ַ���һ�γ���λ��
//int find(const char c,int pos = 0)const;	 4��posλ�ò����ַ�c��һ�γ���λ��
// �����һ��
//int rfind(const string& s,int pos = npos)const; 5��posλ�ò����ַ���s���һ�γ���λ��
//int rfind(const char* s,int pos = npos)const;	6��posλ�ò����ַ���s���һ�γ���λ��
//int rfind(const char* s,int pos,int n)const;	7��posλ�ò����ַ���sǰn���ַ����һ�γ���λ��
//int rfind(const char c,int pos = 0)const;		8��posλ�ò����ַ�c���һ�γ���λ��
// �滻
//string& replace(int pos,int n,const string& s); 9��posλ�ÿ�ʼn���ַ��滻Ϊ�ַ���s
//string& replace(int pos,int n,const char* s);  10��posλ�ÿ�ʼn���ַ��滻Ϊ�ַ���s
//*/
//void test04()
//{
//	// ����
//	string s1 = "abcdefgcd";
//	int pos = s1.find("cd"); // ����pos��Ĭ�ϴ�0��ʼ���ַ�cd��һ�γ���λ��
//	cout << pos << endl;
//	pos = s1.rfind("cd");// ����pos��Ĭ�ϴ�0��ʼ���ַ�cd���һ�γ���λ��
//	cout << pos << endl;
//
//	int pos1 = s1.find("cd", 3);// ��3��ʼ���ַ�cd��һ�γ���λ��
//	cout << pos1 << endl;
//	pos1 = s1.rfind("cd",3);	// ��3��ʼ���ַ�cd���һ�γ���λ��
//	cout << pos1 << endl;
//
//	int pos2 = s1.find("cd", 3, 1); // ��3��ʼ���ַ���cd��ǰ1���ַ���һ�γ���λ��
//	cout << pos2 << endl;
//	pos2 = s1.rfind("cd", 3, 1); // ��3��ʼ���ַ���cd��ǰ1���ַ����һ�γ���λ��
//	cout << pos2 << endl;
//}
//void test05()
//{
//	// �滻
//	string s1 = "abcdefgcd";
//	string str = " hello my ";
//	s1.replace(2, 5, str);// ��2��ʼǰ5���ַ��滻Ϊstr
//	cout << s1 << endl;
//}
///*�ַ����Ƚ�
//int compare(const string& s)const;  ���ַ���s�Ƚ�
//int compare(const char* s)const;    ���ַ���s�Ƚ�
//*/
//void test06()
//{
//	string s1 = "abcdefg";
//	string s2 = "abcdefg"; // ���� 0
//	string s3 = "abcdef";  // ���� 1
//	string s4 = "abcdefgh";// С�� -1
//	int ret = s1.compare(s2);
//	cout << ret << endl;
//	ret = s1.compare(s3);
//	cout << ret << endl;
//	ret = s1.compare(s4);
//	cout << ret << endl;
//}
///*�ַ���ȡ
//char& operator[](int n);  ͨ��[]��ȡ�ַ�
//char& at(int n);		  ͨ��at������ȡ�ַ�
//*/
//void test07()
//{
//	// 1 ͨ��[]��ʽ��ȡ�ַ�
//	string s = "Type here";
//	for (int i = 0; i < s.size(); i++)
//	{					// .size()���Է����ַ�s�ĳ���
//		cout << s[i] << " ";
//	}
//	cout << endl;
//	// 2 ͨ��at��ʽ��ȡ�ַ�
//	for (int i = 0; i < s.size(); i++)
//	{
//		cout << s.at(i) << " ";
//	}
//	cout << endl;
//	// ͨ��[]�޸��ַ�
//	s[0] = 't';
//	cout << s << endl;
//	// ͨ��at�޸��ַ�
//	s.at(1) = 'Y';
//	cout << s << endl;
//}
///*�����ɾ��
// string& insert(int pos,const char* s);  1��posλ�ò����ַ���s
// string& insert(int pos,const string& s);2��posλ�ò����ַ���s
// string& insert(int pos,int n,char c);   3��posλ�ò���n���ַ�c
// string& erase(int pos,int n = npos);	 4ɾ����pos��ʼ��n���ַ�
//*/
//void test08()
//{
//	string s1 = "Type here";
//	s1.insert(0, "ok");   // 1 char* ��0��ʼ����ok�ַ�
//	cout << s1 << endl;
//
//	string s2 = "ko";
//	s1.insert(0, s2);     // 2 string& ��0��ʼ����ko�ַ�
//	cout << s1 << endl;
//
//	s1.insert(0, 8, '+'); // 3 ��0��ʼ����8���ַ�+
//	cout << s1 << endl;
//
//	s1.erase(0, 12);      // 4 ��λ��0��ʼɾ��okko4����8��+һ��12���ַ�
//	cout << s1 << endl;
//}
///* ��ȡ�ִ�
//string substr(int pos,int n=npos)const; // ������pos��ʼn���ַ���ɵ��ַ���
//*/
//void test09()
//{
//	string s1 = "Type there";
//	string s2 = s1.substr(5, 5);
//	cout << s2 << endl;
//}
//void test10()
//{
//	string user_email = "Joyce@Gmail.com";
//	// ���������ȡ�û�����
//	int pos = user_email.find('@');// ��email�ж�ȡ@�ַ����ڵ�λ�ã�������λ��5
//	string user_name = user_email.substr(0, pos); // ��ȡ0-5���ַ�
//	cout << user_name << endl;
//}
//int main()
//{
//	test10();
//	return 0;
//}

// vector����
//#include<vector>
//void printV(vector<int>& v)
//{
//	for (vector<int>::iterator it=v.begin();it<v.end();it++)
//	{
//		cout << *it<< " ";
//	}
//	cout << endl;
//}
//
///*���캯��
//vector<T> v;			   1ʹ��ģ��ʵ�����ʵ�֣�Ĭ�Ϲ��캯��
//vector(v.begin(),v.end()); 2��v[v.begin(),v.end())�����е�Ԫ�ؿ���������ע����������ҿ�
//vector(n,elem);			   3��n��elemԪ�ؿ���������
//vector(const vector& v);   4�������캯������v����������
//*/
//void test01()
//{
//	vector<int> v1; // 1Ĭ�Ϲ���
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printV(v1);
//
//	vector<int> v2(v1.begin(), v1.end()); // 2
//	printV(v2);
//
//	vector<int> v3(10, 888); // 3��10��888����v3
//	printV(v3);
//
//	vector<int>v4(v3); // 4��������
//	printV(v4);
//}
///*��ֵ����
//vector& operator=(const vector& v); 1 =��ֵ������=�����
//assign(begin,end);					2 ��[begin,end)�����е����ݸ�������ע����������ҿ�
//assign(n,elem);						3 ��n��elem��������
//*/
//void test02()
//{
//	vector<int>  v1;
//		v1.push_back(1);
//		v1.push_back(2);
//		v1.push_back(3);
//		v1.push_back(4);
//
//	vector<int> v2;
//	v2 = v1;			// 1 ֱ��=��ֵ
//	printV(v2);
//
//	vector<int> v3;
//	v3.assign(v2.begin(), v2.end()); // 2 ���丳ֵ
//	printV(v3);
//
//	vector<int> v4;
//	v4.assign(10, 888); // 3 ��10��888��������
//	printV(v4);
//}
///*�����ʹ�С
//v.empty();			 �ж������Ƿ�Ϊ�գ��շ���true����false
//v.capacity();		 ������������
//v.size();		   	 ����������ǰ��С
//v.resize(int n);	 ����ָ����������Ϊn���������䳤������Ĭ��ֵ0�����λ�á�
//									   	  ��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//v.resize(int n,elem);����ָ����������Ϊn���������䳤������elem�����λ�á�
//										  ��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//*/
//void test03() // �ж�Ϊ�ա���������С
//{
//	vector<int> v1; 
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printV(v1);
//
//	cout << v1.empty() << endl;		// �ж�Ϊ�գ�ture=1��false=0
//	cout << v1.capacity() << endl;  // ����
//	cout << v1.size() << endl;		// ��С
//}
//void test04()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printV(v1);
//	vector<int> v2 = v1; // v1����v2
//	v2.resize(16);	// �䳤,Ĭ����0���
//	printV(v2);
//	v2.resize(5);	// ���
//	printV(v2);
//	v2.resize(16, 5); // �䳤�Ҹ���Ԫ��
//	printV(v2);
//}
///*������ɾ��
//v.push_back(elem);			1 β������elemԪ��
//v.pop_back();				2 ɾ��β�����һ��Ԫ��
//v.insert(const_iterator pos,elem);				 3 �ڵ�����ָ���posλ�ò���Ԫ��elem
//v.insert(const_iterator pos,int n,elem);		 4 �ڵ�����ָ���posλ�ò���n��elemԪ��
//v.erase(const_iterator pos);5 ɾ��������ָ���posλ�õ�Ԫ��
//v.erase(const_iterator start,const_iterator end);6 ɾ��������ָ��Ĵ�start��end�����Ԫ��
//v.clear();					7 ɾ������������Ԫ��
//*/
//void test05()
//{
//	vector<int>  v1; 
//	v1.push_back(1);			 // 1β��Ԫ��
//	v1.push_back(2);
//	v1.push_back(3);
//	v1.push_back(4);
//	printV(v1);
//
//	v1.pop_back();				 // 2βɾԪ��
//	v1.pop_back();
//	printV(v1);
//
//	v1.insert(v1.begin(), 'x');  // 3��beginλ�ò���Ԫ��'x'��
//	printV(v1);
//
//	v1.insert(v1.end(), 10, 888);// 4��endλ�ò���10��888
//	printV(v1);
//
//	v1.erase(v1.begin());		 // 5ɾ��beginλ�õ�Ԫ�� ͷɾԪ��
//	printV(v1);
//
//	v1.erase(v1.begin()+2, v1.end()); // 6ɾ���±�Ϊ2��ʼ��end�����ڵ�Ԫ��
//	printV(v1);
//
//	v1.clear();					 // 7�������Ԫ��
//	printV(v1);
//}
///*���ݴ�ȡ
//v.at(int pos);	1����posλ�ô���Ԫ��
//operator[pos];	2����[]��Ҳ����pos����Ԫ��
//v.front();		3���������е�һ��Ԫ��
//v.back();		4�������������һ��Ԫ��
//*/
//void test06()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printV(v1);
//
//	cout << v1.at(3) << endl;  // 1����λ��3����Ԫ��
//	cout << v1[3] << endl;	   // 2����λ��3����Ԫ��
//	cout << v1.front() << endl;// 3���������е�һ��Ԫ��
//	cout << v1.back() << endl; // 4�������������һ��Ԫ��
//}
//// v1.swap(v2); ��v2��Ԫ��������v1���� 
//void test07()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{ // ��v1��ʼ��
//		v1.push_back(i);
//	}
//	cout << " v1:";
//	printV(v1);
//
//	vector<int> v2;
//	for (int i = 9; i >= 0; i--)
//	{ // ��v2��ʼ��
//		v2.push_back(i);
//	}
//	cout << " v2:";
//	printV(v2);
//
//	v1.swap(v2);  // ����v1��v2��Ԫ��
//	cout << " v1:";
//	printV(v1);
//	cout << " v2:";
//	printV(v2);
//}
//// ʵ��ʹ��
//void test08()
//{
//	vector<int> v1;
//	for (int i = 0; i < 888888; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << v1.capacity() << endl;  // ����
//	cout << v1.size() << endl;		// ��С
//
//	v1.resize(5);
//	cout << v1.capacity() << endl;  // ����
//	cout << v1.size() << endl;		// ��С
//
//	vector<int>(v1).swap(v1);
//	cout << v1.capacity() << endl;  // ����
//	cout << v1.size() << endl;		// ��С
//}
//// Ԥ���ռ�
//// v.reserve(int len); ����Ԥ��len�����ȿռ䣬������ʼ�����ռ䣬���Ԫ�ز��ɷ���
//void test09()
//{
//	vector<int> v1;
//	int number = 0; // ����
//	int* p = NULL;  // �����׵�ַ
//	for (int i = 0; i < 888888; i++)
//	{
//		v1.push_back(i);
//		if (p != &v1[0]) // ���v1����Ԫ�ص�ַ���ˣ��������¿����ڴ���
//		{
//			p = &v1[0];
//			number++;// ����+1
//		}
//	}
//	cout << number << endl;
//
//	vector<int> v2;
//	int number1 = 0; // ����
//	v2.reserve(888889); // Ԥ��888889�ռ�
//	int* p1 = NULL;  // �����׵�ַ
//	for (int i = 0; i < 888888; i++)
//	{
//		v2.push_back(i);
//		if (p1 != &v2[0]) // ���v1����Ԫ�ص�ַ���ˣ��������¿����ڴ���
//		{
//			p1 = &v2[0];
//			number1++;// ����+1
//		}
//	}
//	cout << number1 << endl;
//}
//int main()
//{
//	test09();
//	return 0;
//}

// deque����
#include<deque>
/*���캯��
deque<T> deqT;		1Ĭ�Ϲ��캯��
deque(begin,end);	2��[begin,end)�����е�Ԫ�ؿ���������ע����������ҿ�
deque(n,elem);		3��n��elem����������
deque(const deque &deq); 4�������캯������deq����������
*/
void printD(const deque<int> d) // ����const
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{			// �ĳ�const_iterator
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int> d; // 1Ĭ�Ϲ���	
	for (int i = 0; i < 10; i++)
	{
		d.push_back(i);
	}
	printD(d);

	deque<int> d1(d.begin() + 2, d.end()-3); // 2��d������[2,6)�е����ݿ�����d1
	printD(d1);

	deque<int> d2(8, 888); // 3��8��888��������d2
	printD(d2);

	deque<int> d3(d2); // 4��d2�������������d3
	printD(d3);
}
/*��ֵ����
deque& operator=(const deque& deq); 1��������=������
deq.assign(begin,end);			2��[begin,end)�����е�Ԫ�ؿ���������ע����������ҿ�
deq.assign(n,elem);				3��n��elem����������
*/
void test02()
{
	deque<int> d1; 
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printD(d1);

	deque<int> d2 = d1; // 1ֱ��=��ֵ
	printD(d2);

	deque<int> d3;
	d3.assign(d2.begin() + 2, d2.end() - 3); // 2��d2������[2,6)�е����ݿ�����d3
	printD(d3);

	deque<int> d4;
	d4.assign(8,66); // 3��8��66��������
	printD(d4);
}
/*�����ʹ�С
deq.empty();		 1�ж������Ƿ�Ϊ�գ��շ���true����false
deq.size();		   	 2����������ǰ��С
deq.resize(int n);	 3����ָ����������Ϊn���������䳤������Ĭ��ֵ0�����λ�á�
									   	  ��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
deq.resize(int n,elem);4����ָ����������Ϊn���������䳤������elem�����λ�á�
										  ��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
*/
void test03() // �ж�Ϊ�ա���������С
{
	deque<int> d1; 
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printD(d1);

	cout << d1.empty() << endl;		// 1�ж�Ϊ�գ�ture=1��false=0
	cout << d1.size() << endl;		// 2���ش�С

	d1.resize(15); // 3�䳤 ��Ĭ��ֵΪ0
	printD(d1);

	d1.resize(20,'v'); // 3�䳤��Ĭ��ΪΪ118
	printD(d1);

	d1.resize(5); // 4���
	printD(d1);
}
/*������ɾ��
d.push_front(elem);			1 ͷ��Ԫ��
d.pop_front();				2.ͷɾԪ��
d.push_back(elem);			3 β������elemԪ��
d.pop_back();				4 ɾ��β�����һ��Ԫ��
d.insert( iterator pos,elem);		5 �ڵ�����ָ���posλ�ò���Ԫ��elem�Ŀ��������������ݵ�λ��
d.insert( iterator pos,int n,elem);	6 �ڵ�����ָ���posλ�ò���n��elemԪ�أ��޷���ֵ
d.insert(iterator  pos,begin,end);	7 �ڵ�����ָ���posλ�ò�������[begin,end)��Ԫ�أ��޷���ֵ��ע����������ҿ�
d.erase( iterator pos);				8 ɾ��������ָ���posλ�õ�Ԫ�أ�������һ��Ԫ�ص�λ��
d.erase( begin,end);		9 ɾ��begin��end�����Ԫ�أ�������һ��Ԫ�ص�λ��
d.clear();					10 ɾ������������Ԫ��
*/
void test04()
{
	deque<int> d1;
	d1.push_front(10); // 1ͷ��10��30
	d1.push_front(30);
	d1.push_back(3); // 3β��3��1
	d1.push_back(1);
	// ˳��30 10 3 1
	printD(d1);

	d1.pop_back();	// 4βɾ
	d1.pop_front(); // 2ͷɾ
	printD(d1);

	d1.insert(d1.begin() + 1, 5); // 5��d1.begin��һ��λ�ò���Ԫ��5
	printD(d1);
	
	d1.insert(d1.end(), 5, 888);  // 6��d1.endλ�ò���5��888
	printD(d1);

	d1.insert(d1.begin() + 2, d1.begin() + 2, d1.end() - 1); 
	// 7��d1.begin+2��λ�ò���d1����������[d1.begin+2��d1.end-1)�е�Ԫ��
	printD(d1);

	d1.erase(d1.begin()+1); // 8ɾ��d1.begin+1λ�õ�Ԫ�� 3
	printD(d1);

	d1.erase(d1.begin() + 1,d1.end()-3); // 9ɾ������d1.begin+1��d1.end֮���Ԫ��
	printD(d1);

	d1.clear();   // ���
	printD(d1); 
}
/*���ݴ�ȡ
d.at(int pos);	1����posλ�ô���Ԫ��
operator[pos];	2����[]��Ҳ����pos����Ԫ��
d.front();		3���������е�һ��Ԫ��
d.back();		4�������������һ��Ԫ��
*/
void test05()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printD(d1);
	cout << d1.at(5) << endl;
	cout << d1[5] << endl;
	cout << d1.front() << endl;
	cout << d1.back() << endl;
}
// ����
//  sort(iterator begin,iterator end); ������begin��end�м��Ԫ�ؽ�������
#include<algorithm>	// ��׼�㷨ͷ�ļ�
void test06()
{
	deque<int> d1;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 15; i++)
	{
		int num = rand()%100; // �����
		d1.push_back(num); // β��
	}
	printD(d1);

	sort(d1.begin(), d1.end()); // ������������
	printD(d1);
}

//	ʵ������ί���
// ѡ����
class person
{
public:
	person(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;
	}
	string m_name; //����
	int m_score;  // ƽ����
};
// ����ѡ�֣�����ʼ�����������
void createPlayer(vector<person>& v)
{
	string name_seed = "ABCDE"; // ��������
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += name_seed[i];
		int score = 0; // ��ʼ������
		person p(name, score); // ����ѡ��
		v.push_back(p); // ��ѡ�ֲ��뵽����
	}
}
// ��ӡÿλѡ�ֵ����������
void print2(const vector<person> v) // ����const
{
	for (vector<person>::const_iterator it = v.begin(); it != v.end(); it++)
	{			// �ĳ�const_iterator
		cout << it->m_name << "����Ϊ" << it->m_score << endl;
	}
	cout << endl;
}
// ��ֲ�ȡ��ֵ���洢��ѡ��������
#include<ctime>// ��ȡϵͳʱ���ͷ�ļ�
void setScore(vector<person>& v)
{
	srand((unsigned int)time(NULL)); // ���������
	// ʹ��˫ͷ����deque�洢����
	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int>d;
		//cout << "��ѡ�ַ����ֱ�Ϊ";
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60; // �������60-100֮�����
					//       0 - 40
		//	cout << score << " ";
			d.push_back(score);
		}
		sort(d.begin(),d.end()); // ��С��������
		d.pop_front(); // ȥ����Сֵ
		d.pop_back();  // ȥ�����ֵ
		// ȡƽ����
		int sum = 0;
		int i = 10;

		for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		{
			sum += *it; // �ۼ�������ί�Ĵ��
		}
		int avg = sum / d.size(); // ���ƽ����
		it->m_score = avg; // �����ѭ��������ѡ�ֵķ���
		//cout << endl;
	}
}

void test07()
{
	// 1������ѡ��
	vector<person> v; // ���ѡ�ֵ�����
	createPlayer(v); // ����ѡ�ֲ����뵽������
	print2(v); // �鿴ѡ�ֵ���Ϣ

	// 2����ί���
	setScore(v); // ֱ�Ӵ��

	// 3����ʾ���÷�
	print2(v);
}
int main()
{
	test07();
	return 0;
}