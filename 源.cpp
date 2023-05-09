#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>// 标准算法头文件
#include<string>

void my_print(int val)
{
	cout << val << " ";
}

// vector存放自定义数据类型
// 
//int main()
//{
//	// 创建一个vector容器，类似于数组
//	vector<int> v;
//	// 使用vector的pushback函数插入数据
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	// 通过迭代器访问容器中的数据
//	// 方法 1
//	//vector<int>::iterator v_Begin = v.begin();// 起始迭代器，指向容器中第一个元素
//	//vector<int>::iterator v_End = v.end();// 结束迭代器，指向容器中最后一个元素的后面一个元素
//	//// 遍历访问
//	//while (v_Begin != v_End)
//	//{
//	//	cout << *v_Begin << " ";
//	//	v_Begin++;
//	//}
//	
//	// 方法 2
//	//for (vector<int>::iterator v_begin = v.begin(); v_begin != v.end(); v_begin++)
//	//{
//	//	cout << *v_begin << " ";
//	//}
//
//	// 方法 3
//	for_each(v.begin(), v.end(), my_print);
//	//	     起始位置   结束位置  调用的函数
//
//	return 0;
//}

// vector存放自定义数据类型

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
//		// 创建vector容器v
//	vector<person> v;
//	// 根据自定义数据类型创建对象
//	person p1("Joyce", 21);
//	person p2("Tatina", 20);
//	person p3("Yomi", 1);
//	person p4("nana", 18);
//	// 尾插进容器
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	// 访问数据
//	for (vector<person>::iterator v_begin = v.begin(); v_begin != v.end(); v_begin++)
//	{	// v_begin本质是个指针，可以解引用.  或者-> 访问
//		cout << (*v_begin).m_name << "的年龄为" << (*v_begin).m_age << endl;
//		cout << v_begin->m_name << "的年龄为" << v_begin->m_age << endl;
//	}
//}
//void test02()
//{
//		// 创建vector容器v
//	vector<person*> v;
//	// 根据自定义数据类型创建对象
//	person p1("Joyce", 21);
//	person p2("Tatina", 20);
//	person p3("Yomi", 1);
//	person p4("nana", 18);
//	// 尾插进容器,p是指针，所以带上&
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	// 访问数据
//	for (vector<person*>::iterator v_begin =v.begin(); v_begin != v.end(); v_begin++)
//	{	// *v_begin还是个指针，所以可以再次解引用*，或者->访问
//		cout << (*(*v_begin)).m_name << "的年龄为" << (*(*v_begin)).m_age << endl;
//		cout << (*v_begin)->m_name << "的年龄为" << (*v_begin)->m_age << endl;
//	}
//}
//
//void test03()
//{
//	// 创建大容器v
//	vector<vector<int>> v;
//	// 创建小容器
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//	// 向小容器中加入数据
//	int i = -1;
//	while (++i != 4)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//	// 将小容器加入到大容器中
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	// 通过大容器遍历所有数据
//	for (vector<vector<int>>::iterator v_begin = v.begin(); v_begin != v.end(); v_begin++)
//	{
//		// *v_begin == vector<int> ，所以我们需要再做一次遍历
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

//    STL容器

//	 1、string

/*
 string ();创建一个空的字符串
 string(const char* c);使用字符串c初始化
 string(const string&str);使用一个string对象初始化另一个string对象
 string(int n,char c);使用n个字符c初始化
*/
//void test01()
//{
//	// 
//	string s1;// 创建一个空的字符串
//
//	const char* str = "Type here";
//	string s2(str); // string(const char* s)，把c的string转换成c++的string，使用字符串s初始化
//	cout << s2 << endl;
//	string s3(s2);	// string(const string& str)，拷贝构造函数，使用一个string对象初始化另一个string对象
//	cout << s3 << endl;
//	string s4(88, 'x');// string(int n,char c) 使用n个字符x初始化s4
//	cout << s4 << endl;
//}
///*字符串赋值
// string& operator=(const char* s);    1 把char*类型字符串 赋值给 当前字符串
// string& operator=(const string& s);  2 把字符串s 赋值给 当前字符串
// string& operator=(char c);		      3 把字符c 赋值给 当前字符串
// string& assign(const	char* s);	  4 把字符串s 赋值给 当前字符串
// string& assign(const char* s,int n); 5 把字符串s前n个字符 赋值给 当前字符串
// string& assign(const string& s,int n);5 除去字符串s前n个字符 剩下的赋值给 当前字符串
// string& assign(const string& s);	  6 把字符串s 赋值给 当前字符串
// string& assign(int n,char c);		  7 把n个字符c 赋值给 当前字符串
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
//	str5.assign(str0,4);// 5 传入const char*,前面4个
//	cout << str5 << endl;
//	str5.assign(str1, 4);// 5 传入string& s，除去前面4个剩下的
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
///*字符串拼接
// string& operator+=(const char* s);	    1 把char*类型字符串 拼接到当前字符串末尾
// string& operator+=(const string& s);	2 把字符串s 拼接到当前字符串末尾
// string& operator+=(const char c);   	3 把字符c 拼接到当前字符串末尾
// string& append(const	char* s);		4 把字符串s 拼接到当前字符串末尾
// string& append(const char* s,int n);   5 把字符串s前n个字符 拼接到当前字符串末尾
// string& append(const string& s,int n); 5 把字符串s除去前n个字符 剩下的拼接到当前字符串末尾
// string& append(const string& s);		6 把字符串s 拼接到当前字符串末尾
// string& append(const string& s,int pos,int n);7 把字符串s从pos开始位置的n个字符 拼接到当前字符串末尾
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
//	str3.append(s1, 3);		// 5 把s1前3个字符追加到后面
//	cout << str3 << endl;
//	str3.append(str1, 3);	// 5 把str1除去前3个字符，剩下的追加到后面
//	cout << str3 << endl;	
//
//	str3.append(str1);
//	cout << str3 << endl;	// 6
//
//	string str4;
//	str4.append(str3, 11, 14);//7
//	cout << str4 << endl;
//}
///* 字符串查找与替换
// 找第一次
//int find(const string& s,int pos = 0)const;	 1从pos位置查找字符串s第一次出现位置
//int find(const char* s,int pos = 0)const;	 2从pos位置查找字符串s第一次出现位置
//int find(const char* s,int pos,int n)const;	 3从pos位置查找字符串s的前n个字符第一次出现位置
//int find(const char c,int pos = 0)const;	 4从pos位置查找字符c第一次出现位置
// 找最后一次
//int rfind(const string& s,int pos = npos)const; 5从pos位置查找字符串s最后一次出现位置
//int rfind(const char* s,int pos = npos)const;	6从pos位置查找字符串s最后一次出现位置
//int rfind(const char* s,int pos,int n)const;	7从pos位置查找字符串s前n个字符最后一次出现位置
//int rfind(const char c,int pos = 0)const;		8从pos位置查找字符c最后一次出现位置
// 替换
//string& replace(int pos,int n,const string& s); 9将pos位置开始n个字符替换为字符串s
//string& replace(int pos,int n,const char* s);  10将pos位置开始n个字符替换为字符串s
//*/
//void test04()
//{
//	// 查找
//	string s1 = "abcdefgcd";
//	int pos = s1.find("cd"); // 不传pos则默认从0开始找字符cd第一次出现位置
//	cout << pos << endl;
//	pos = s1.rfind("cd");// 不传pos则默认从0开始找字符cd最后一次出现位置
//	cout << pos << endl;
//
//	int pos1 = s1.find("cd", 3);// 从3开始找字符cd第一次出现位置
//	cout << pos1 << endl;
//	pos1 = s1.rfind("cd",3);	// 从3开始找字符cd最后一次出现位置
//	cout << pos1 << endl;
//
//	int pos2 = s1.find("cd", 3, 1); // 从3开始找字符串cd的前1个字符第一次出现位置
//	cout << pos2 << endl;
//	pos2 = s1.rfind("cd", 3, 1); // 从3开始找字符串cd的前1个字符最后一次出现位置
//	cout << pos2 << endl;
//}
//void test05()
//{
//	// 替换
//	string s1 = "abcdefgcd";
//	string str = " hello my ";
//	s1.replace(2, 5, str);// 从2开始前5个字符替换为str
//	cout << s1 << endl;
//}
///*字符串比较
//int compare(const string& s)const;  与字符串s比较
//int compare(const char* s)const;    与字符串s比较
//*/
//void test06()
//{
//	string s1 = "abcdefg";
//	string s2 = "abcdefg"; // 等于 0
//	string s3 = "abcdef";  // 大于 1
//	string s4 = "abcdefgh";// 小于 -1
//	int ret = s1.compare(s2);
//	cout << ret << endl;
//	ret = s1.compare(s3);
//	cout << ret << endl;
//	ret = s1.compare(s4);
//	cout << ret << endl;
//}
///*字符存取
//char& operator[](int n);  通过[]读取字符
//char& at(int n);		  通过at方法获取字符
//*/
//void test07()
//{
//	// 1 通过[]方式读取字符
//	string s = "Type here";
//	for (int i = 0; i < s.size(); i++)
//	{					// .size()可以返回字符s的长度
//		cout << s[i] << " ";
//	}
//	cout << endl;
//	// 2 通过at方式读取字符
//	for (int i = 0; i < s.size(); i++)
//	{
//		cout << s.at(i) << " ";
//	}
//	cout << endl;
//	// 通过[]修改字符
//	s[0] = 't';
//	cout << s << endl;
//	// 通过at修改字符
//	s.at(1) = 'Y';
//	cout << s << endl;
//}
///*插入和删除
// string& insert(int pos,const char* s);  1在pos位置插入字符串s
// string& insert(int pos,const string& s);2在pos位置插入字符串s
// string& insert(int pos,int n,char c);   3在pos位置插入n个字符c
// string& erase(int pos,int n = npos);	 4删除从pos开始的n个字符
//*/
//void test08()
//{
//	string s1 = "Type here";
//	s1.insert(0, "ok");   // 1 char* 从0开始加上ok字符
//	cout << s1 << endl;
//
//	string s2 = "ko";
//	s1.insert(0, s2);     // 2 string& 从0开始加上ko字符
//	cout << s1 << endl;
//
//	s1.insert(0, 8, '+'); // 3 从0开始加上8个字符+
//	cout << s1 << endl;
//
//	s1.erase(0, 12);      // 4 从位置0开始删除okko4个和8个+一共12个字符
//	cout << s1 << endl;
//}
///* 获取字串
//string substr(int pos,int n=npos)const; // 返回由pos开始n个字符组成的字符串
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
//	// 根据邮箱获取用户名称
//	int pos = user_email.find('@');// 从email中读取@字符所在的位置，这里是位置5
//	string user_name = user_email.substr(0, pos); // 截取0-5的字符
//	cout << user_name << endl;
//}
//int main()
//{
//	test10();
//	return 0;
//}

// vector容器
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
///*构造函数
//vector<T> v;			   1使用模板实现类的实现，默认构造函数
//vector(v.begin(),v.end()); 2将v[v.begin(),v.end())区间中的元素拷贝给自身，注意区间左闭右开
//vector(n,elem);			   3将n个elem元素拷贝给自身
//vector(const vector& v);   4拷贝构造函数，将v拷贝给自身
//*/
//void test01()
//{
//	vector<int> v1; // 1默认构造
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printV(v1);
//
//	vector<int> v2(v1.begin(), v1.end()); // 2
//	printV(v2);
//
//	vector<int> v3(10, 888); // 3，10个888赋给v3
//	printV(v3);
//
//	vector<int>v4(v3); // 4拷贝构造
//	printV(v4);
//}
///*赋值操作
//vector& operator=(const vector& v); 1 =赋值，重载=运算符
//assign(begin,end);					2 将[begin,end)区间中的数据赋给自身，注意区间左闭右开
//assign(n,elem);						3 将n个elem赋给自身
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
//	v2 = v1;			// 1 直接=赋值
//	printV(v2);
//
//	vector<int> v3;
//	v3.assign(v2.begin(), v2.end()); // 2 区间赋值
//	printV(v3);
//
//	vector<int> v4;
//	v4.assign(10, 888); // 3 将10个888赋给自身
//	printV(v4);
//}
///*容量和大小
//v.empty();			 判断容器是否为空，空返回true否则false
//v.capacity();		 返回容器容量
//v.size();		   	 返回容器当前大小
//v.resize(int n);	 重新指定容器长度为n，若容器变长，则以默认值0填充新位置。
//									   	  若容器变短，则末尾超出容器长度的元素被删除
//v.resize(int n,elem);重新指定容器长度为n，若容器变长，则以elem填充新位置。
//										  若容器变短，则末尾超出容器长度的元素被删除
//*/
//void test03() // 判断为空、容量、大小
//{
//	vector<int> v1; 
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printV(v1);
//
//	cout << v1.empty() << endl;		// 判断为空，ture=1，false=0
//	cout << v1.capacity() << endl;  // 容量
//	cout << v1.size() << endl;		// 大小
//}
//void test04()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printV(v1);
//	vector<int> v2 = v1; // v1赋给v2
//	v2.resize(16);	// 变长,默认用0填充
//	printV(v2);
//	v2.resize(5);	// 变短
//	printV(v2);
//	v2.resize(16, 5); // 变长且更换元素
//	printV(v2);
//}
///*插入与删除
//v.push_back(elem);			1 尾部插入elem元素
//v.pop_back();				2 删除尾部最后一个元素
//v.insert(const_iterator pos,elem);				 3 在迭代器指向的pos位置插入元素elem
//v.insert(const_iterator pos,int n,elem);		 4 在迭代器指向的pos位置插入n个elem元素
//v.erase(const_iterator pos);5 删除迭代器指向的pos位置的元素
//v.erase(const_iterator start,const_iterator end);6 删除迭代器指向的从start到end区间的元素
//v.clear();					7 删除容器中所有元素
//*/
//void test05()
//{
//	vector<int>  v1; 
//	v1.push_back(1);			 // 1尾插元素
//	v1.push_back(2);
//	v1.push_back(3);
//	v1.push_back(4);
//	printV(v1);
//
//	v1.pop_back();				 // 2尾删元素
//	v1.pop_back();
//	printV(v1);
//
//	v1.insert(v1.begin(), 'x');  // 3在begin位置插入元素'x'，
//	printV(v1);
//
//	v1.insert(v1.end(), 10, 888);// 4在end位置插入10个888
//	printV(v1);
//
//	v1.erase(v1.begin());		 // 5删除begin位置的元素 头删元素
//	printV(v1);
//
//	v1.erase(v1.begin()+2, v1.end()); // 6删除下标为2开始到end区间内的元素
//	printV(v1);
//
//	v1.clear();					 // 7清空所有元素
//	printV(v1);
//}
///*数据存取
//v.at(int pos);	1返回pos位置处的元素
//operator[pos];	2重载[]，也返回pos处的元素
//v.front();		3返回容器中第一个元素
//v.back();		4返回容器中最后一个元素
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
//	cout << v1.at(3) << endl;  // 1返回位置3处的元素
//	cout << v1[3] << endl;	   // 2返回位置3处的元素
//	cout << v1.front() << endl;// 3返回容器中第一个元素
//	cout << v1.back() << endl; // 4返回容器中最后一个元素
//}
//// v1.swap(v2); 将v2的元素与自身v1交换 
//void test07()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{ // 给v1初始化
//		v1.push_back(i);
//	}
//	cout << " v1:";
//	printV(v1);
//
//	vector<int> v2;
//	for (int i = 9; i >= 0; i--)
//	{ // 给v2初始化
//		v2.push_back(i);
//	}
//	cout << " v2:";
//	printV(v2);
//
//	v1.swap(v2);  // 交换v1与v2的元素
//	cout << " v1:";
//	printV(v1);
//	cout << " v2:";
//	printV(v2);
//}
//// 实际使用
//void test08()
//{
//	vector<int> v1;
//	for (int i = 0; i < 888888; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << v1.capacity() << endl;  // 容量
//	cout << v1.size() << endl;		// 大小
//
//	v1.resize(5);
//	cout << v1.capacity() << endl;  // 容量
//	cout << v1.size() << endl;		// 大小
//
//	vector<int>(v1).swap(v1);
//	cout << v1.capacity() << endl;  // 容量
//	cout << v1.size() << endl;		// 大小
//}
//// 预留空间
//// v.reserve(int len); 容器预留len个长度空间，但不初始化这块空间，因此元素不可访问
//void test09()
//{
//	vector<int> v1;
//	int number = 0; // 计数
//	int* p = NULL;  // 保存首地址
//	for (int i = 0; i < 888888; i++)
//	{
//		v1.push_back(i);
//		if (p != &v1[0]) // 如果v1的首元素地址变了，就是重新开辟内存了
//		{
//			p = &v1[0];
//			number++;// 计数+1
//		}
//	}
//	cout << number << endl;
//
//	vector<int> v2;
//	int number1 = 0; // 计数
//	v2.reserve(888889); // 预留888889空间
//	int* p1 = NULL;  // 保存首地址
//	for (int i = 0; i < 888888; i++)
//	{
//		v2.push_back(i);
//		if (p1 != &v2[0]) // 如果v1的首元素地址变了，就是重新开辟内存了
//		{
//			p1 = &v2[0];
//			number1++;// 计数+1
//		}
//	}
//	cout << number1 << endl;
//}
//int main()
//{
//	test09();
//	return 0;
//}

// deque容器
#include<deque>
/*构造函数
deque<T> deqT;		1默认构造函数
deque(begin,end);	2将[begin,end)区间中的元素拷贝给自身，注意区间左闭右开
deque(n,elem);		3将n个elem拷贝给自身
deque(const deque &deq); 4拷贝构造函数，将deq拷贝给自身
*/
void printD(const deque<int> d) // 加上const
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{			// 改成const_iterator
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int> d; // 1默认构造	
	for (int i = 0; i < 10; i++)
	{
		d.push_back(i);
	}
	printD(d);

	deque<int> d1(d.begin() + 2, d.end()-3); // 2将d的区间[2,6)中的数据拷贝给d1
	printD(d1);

	deque<int> d2(8, 888); // 3将8个888赋给自身d2
	printD(d2);

	deque<int> d3(d2); // 4将d2拷贝构造给自身d3
	printD(d3);
}
/*赋值操作
deque& operator=(const deque& deq); 1就是重载=操作符
deq.assign(begin,end);			2将[begin,end)区间中的元素拷贝给自身，注意区间左闭右开
deq.assign(n,elem);				3将n个elem拷贝给自身
*/
void test02()
{
	deque<int> d1; 
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printD(d1);

	deque<int> d2 = d1; // 1直接=赋值
	printD(d2);

	deque<int> d3;
	d3.assign(d2.begin() + 2, d2.end() - 3); // 2将d2的区间[2,6)中的数据拷贝给d3
	printD(d3);

	deque<int> d4;
	d4.assign(8,66); // 3将8个66赋给自身
	printD(d4);
}
/*容量和大小
deq.empty();		 1判断容器是否为空，空返回true否则false
deq.size();		   	 2返回容器当前大小
deq.resize(int n);	 3重新指定容器长度为n，若容器变长，则以默认值0填充新位置。
									   	  若容器变短，则末尾超出容器长度的元素被删除
deq.resize(int n,elem);4重新指定容器长度为n，若容器变长，则以elem填充新位置。
										  若容器变短，则末尾超出容器长度的元素被删除
*/
void test03() // 判断为空、容量、大小
{
	deque<int> d1; 
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printD(d1);

	cout << d1.empty() << endl;		// 1判断为空，ture=1，false=0
	cout << d1.size() << endl;		// 2返回大小

	d1.resize(15); // 3变长 ，默认值为0
	printD(d1);

	d1.resize(20,'v'); // 3变长，默认为为118
	printD(d1);

	d1.resize(5); // 4变短
	printD(d1);
}
/*插入与删除
d.push_front(elem);			1 头插元素
d.pop_front();				2.头删元素
d.push_back(elem);			3 尾部插入elem元素
d.pop_back();				4 删除尾部最后一个元素
d.insert( iterator pos,elem);		5 在迭代器指向的pos位置插入元素elem的拷贝，返回新数据的位置
d.insert( iterator pos,int n,elem);	6 在迭代器指向的pos位置插入n个elem元素，无返回值
d.insert(iterator  pos,begin,end);	7 在迭代器指向的pos位置插入区间[begin,end)的元素，无返回值，注意区间左闭右开
d.erase( iterator pos);				8 删除迭代器指向的pos位置的元素，返回下一个元素的位置
d.erase( begin,end);		9 删除begin到end区间的元素，返回下一个元素的位置
d.clear();					10 删除容器中所有元素
*/
void test04()
{
	deque<int> d1;
	d1.push_front(10); // 1头插10与30
	d1.push_front(30);
	d1.push_back(3); // 3尾插3与1
	d1.push_back(1);
	// 顺序：30 10 3 1
	printD(d1);

	d1.pop_back();	// 4尾删
	d1.pop_front(); // 2头删
	printD(d1);

	d1.insert(d1.begin() + 1, 5); // 5在d1.begin后一个位置插入元素5
	printD(d1);
	
	d1.insert(d1.end(), 5, 888);  // 6在d1.end位置插入5个888
	printD(d1);

	d1.insert(d1.begin() + 2, d1.begin() + 2, d1.end() - 1); 
	// 7在d1.begin+2的位置插入d1容器中区间[d1.begin+2，d1.end-1)中的元素
	printD(d1);

	d1.erase(d1.begin()+1); // 8删除d1.begin+1位置的元素 3
	printD(d1);

	d1.erase(d1.begin() + 1,d1.end()-3); // 9删除区间d1.begin+1到d1.end之间的元素
	printD(d1);

	d1.clear();   // 清空
	printD(d1); 
}
/*数据存取
d.at(int pos);	1返回pos位置处的元素
operator[pos];	2重载[]，也返回pos处的元素
d.front();		3返回容器中第一个元素
d.back();		4返回容器中最后一个元素
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
// 排序
//  sort(iterator begin,iterator end); 对区间begin到end中间的元素进行排序
#include<algorithm>	// 标准算法头文件
void test06()
{
	deque<int> d1;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 15; i++)
	{
		int num = rand()%100; // 随机数
		d1.push_back(num); // 尾插
	}
	printD(d1);

	sort(d1.begin(), d1.end()); // 进行升序排序
	printD(d1);
}

//	实例：评委打分
// 选手类
class person
{
public:
	person(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;
	}
	string m_name; //姓名
	int m_score;  // 平均分
};
// 创建选手，并初始化姓名与分数
void createPlayer(vector<person>& v)
{
	string name_seed = "ABCDE"; // 名称种子
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += name_seed[i];
		int score = 0; // 初始化分数
		person p(name, score); // 创建选手
		v.push_back(p); // 将选手插入到容器
	}
}
// 打印每位选手的姓名与分数
void print2(const vector<person> v) // 加上const
{
	for (vector<person>::const_iterator it = v.begin(); it != v.end(); it++)
	{			// 改成const_iterator
		cout << it->m_name << "分数为" << it->m_score << endl;
	}
	cout << endl;
}
// 打分并取均值，存储到选手属性中
#include<ctime>// 获取系统时间的头文件
void setScore(vector<person>& v)
{
	srand((unsigned int)time(NULL)); // 随机数种子
	// 使用双头数组deque存储分数
	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int>d;
		//cout << "该选手分数分别为";
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60; // 随机生成60-100之间的数
					//       0 - 40
		//	cout << score << " ";
			d.push_back(score);
		}
		sort(d.begin(),d.end()); // 从小到大排序
		d.pop_front(); // 去除最小值
		d.pop_back();  // 去除最大值
		// 取平均分
		int sum = 0;
		int i = 10;

		for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		{
			sum += *it; // 累加所有评委的打分
		}
		int avg = sum / d.size(); // 算出平均分
		it->m_score = avg; // 最外层循环，赋给选手的分数
		//cout << endl;
	}
}

void test07()
{
	// 1、创建选手
	vector<person> v; // 存放选手的容器
	createPlayer(v); // 创建选手并插入到容器中
	print2(v); // 查看选手的信息

	// 2、评委打分
	setScore(v); // 直接打分

	// 3、显示最后得分
	print2(v);
}
int main()
{
	test07();
	return 0;
}