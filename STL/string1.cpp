#include<bits/stdc++.h>
using namespace std;

//string()  ����һ�����ַ��� 
//string(const char* s);  ʹ���ַ���s��ʼ��
//string(const string& str);  ʹ��һ��string�����ʼ����һ��string����
//string (int n,char c);  ʹ��n���ַ�c��ʼ�� 
//string(const char* s); 
//string ��ֵ����
//string& operator=(const char* s);char* �����ַ������Ƹ���ǰ���ַ���
//string& operator=(const string& s);
//string& operator=(char c);
//string& assign(const char* s);
//string& assign(const char* s,,int n);���ַ�����ǰn���ַ�����ֵ����ǰ�ַ���
//string& assign(const string& s);
//string& assign(int n,char c);n���ַ�������ǰ�ַ���
//����ĵ��õ��� 

//string str="woshiniaba@qq.com";
//int pos=str.find('@'); 
//string username=email.substr(0,pos);
int main()
{
	string str="woshiniaba@qq.com";
	int pos=str.find('@'); 
	string username=str.substr(0,pos);
	cout<<username;
	system("pause");
	return 0;
}

/*
3.1 string����
3.1.1 string��������

���ʣ�

    string��C++�����ַ�������string��������һ����
    string��char*����
    char*��һ��ָ��
    string��һ���࣬���ڲ���װ��char*����������ַ�������һ��char�͵�������
    �ص㣺
    string���ڲ���װ�˺ܶ��Ա����
    ���磺����find������copy��ɾ��delete �滻replace������insert
    string����char��������ڴ棬���õ��ĸ���Խ���ȡֵԽ��ȣ������ڲ����и���

3.1.2 string���캯��

���캯��ԭ�ͣ�

    string() //����һ���յ��ַ��� ���磺string str;
    string(const char* s); //ʹ���ַ�����ʼ��
    string(const string& str); // ʹ��һ��string�����ʼ����һ��string����
    string(int n,char c); //ʹ��n���ַ���ʼ��

ʾ���� 3.1-string����-���캯��.cpp
�ܽ᣺ string�Ķ��ֹ��췽ʽû�пɱ��ԣ����ʹ�ü���
3.1.3 string��ֵ����

����������

    ��string�ַ������и�ֵ

��ֵ�ĺ���ԭ��:

    string &operator=(const char s); // char�����ַ��� ��ֵ����ǰ���ַ���
    string &operator=(const string &s); //���ַ���s��ֵ����ǰ���ַ���
    string &operator=(char c); //���ָ�ֵ����ǰ���ַ���
    string &assign()(const char *s); //���ַ���s������ǰ���ַ���
    string &assign()(const char *s, int n); //���ַ���s��ǰn���ַ�����ֵ����ǰ���ַ���
    string &assign(const string &s); //���ַ���s��ֵ����ǰ�ַ���
    string &assign(int n, char c); //��n���ַ�c��ֵ����ǰ�ַ���

ʾ���� 3.2-string����-��ֵ����.cpp
�ܽ᣺
string�ĸ�ֵ��ʽ�ܶ࣬operator= ���ַ�ʽ�ǱȽ�ʵ�õ�
3.1.4 string�ַ���ƴ��

����������

    ʵ�����ַ���ĩβƴ���ַ���

����ԭ��:

    string &operator+=(const char *str); // ����+=������
    string &operator+=(const char c); //����+=������
    string &operator+=(const string &str); //����+=������
    string &append()(const char *s); //���ַ���s���ӵ���ǰ�ַ�����β
    string &append()(const char *s, int n); //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
    string &append(const string &s); //ͬoperator+=(const string& str)
    string &append(const string &s��int pos, int n); //�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β

ʾ����3.3-string����-�ַ���ƴ��.cpp
�ܽ᣺
string��ƴ�ӵ����ذ汾�ܶ࣬��ѧ�׶μ�ס���ּ���
3.1.5 string���Һ��滻

����������

    ���ң�����ָ���ַ����Ƿ����
    �滻����ָ����λ���滻�ַ���

����ԭ��:

    int find(const string& str, int pos = 0)const; // ����str��һ�γ���λ�ã���pos��ʼ����
    int find(const char* s, int pos = 0)const; // ����s��һ�γ���λ�ã���pos��ʼ����
    int find(const char* s, int pos, int n)const; //��posλ�ò���s��ǰn���ַ���һ��λ��
    int find(const char c, int pos = 0)const; // �����ַ�c��һ�γ���λ��
    int rfind(const string& str, int pos = npos)const; //����str���һ��λ�ã���pos��ʼ����
    int rfind(const char* s, int pos = n)const; // ��pos��ʼs��ǰn���ַ����һ��λ��
    int rfind(const char c, int pos = 0)const; // �����ַ�c���һ�γ��ֵ�λ��
    string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
    string& replace(int pos, int n, const char* s); //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s

ʾ���� 3.4-string����-�ַ����������滻.cpp
�ܽ᣺

    find�����Ǵ�������rfind��������
    find�ҵ��ַ����󷵻ز��ҵĵ�һ���ַ�λ�ã��Ҳ�������-1
    replace���滻ʱ��Ҫָ�����ĸ�λ���𣬶��ٸ��ַ����滻��ʲô�����ַ���

3.1.6 string�ַ����Ƚ�

����������

    �ַ���֮��ıȽ�
    �ȽϷ�ʽ��
    �ַ����Ƚ��ǰ��ַ���ASCII����жԱ�
    =���� 0

    ���� 1
    <���� -1

����ԭ��:

    int compare(const string& str)const; // ���ַ���s�Ƚ�
    int compare(const char* s)const; // ���ַ���s�Ƚ�

ʾ����3.5-string����-�ַ���ƴ��.cpp
�ܽ᣺ �ַ����Ա���Ҫ�����ڱȽ������ַ����Ƿ���ȣ��ж�˭��˭С�����岢���Ǻܴ�
3.1.7 string�ַ���ȡ

string�е����ַ���ȡ��ʽ������

    char& operator[] (int n); // ͨ��[]��ʽȡ�ַ�
    char& at(int n); // ͨ��at������ȡ�ַ�

����ԭ��:

    int compare(const string& str)const; // ���ַ���s�Ƚ�
    int compare(const char* s)const; // ���ַ���s�Ƚ�

ʾ���� 3.6-string����-�ַ�����ȡ.cpp
�ܽ᣺ string�ַ����е����ַ���ȡ�����ַ�ʽ������[]��at
3.1.8 string�����ɾ��

����������

    ��string�ַ������в����ɾ���ַ� ����

����ԭ��:

    string& insert(int pos,const char* s); // �����ַ���
    string& insert(int pos,const string& str); // �����ַ���
    string& insert(int pos,int n, char c); // ��ָ��λ�ò���n���ַ�c
    string& earese(int pos,int n = npos); // ɾ����Pos��ʼ��n���ַ�

ʾ����3.7-string����-�����ɾ��.cpp
�ܽ᣺ �����ɾ������ʼ�±궼�Ǵ�0��ʼ
3.1.9 string�Ӵ�

����������

    ���ַ����л�ȡ��Ҫ���Ӵ�

����ԭ��:

    string& substr(int pos = 0,int n = npos); const // ������pos��ʼ��n���ַ���ɵ��ַ���



(constructor)��������	     ����˵��
string()	                 ����յ�string����󣬼����ַ���
string(const char* s)	     ��C-string������string�����
string(size_t n, char c)	 string������а���n���ַ�c
string(const string& s)	     �������캯��
size	�����ַ�����Ч�ַ�����
length	�����ַ�����Ч�ַ�����
capacity	���ؿռ��ܴ�С
empty	����ַ����ͷ�Ϊ�մ����Ƿ���true�����򷵻�false
clear	�����Ч�ַ�
reserve	Ϊ�ַ���Ԥ���ռ�
resize	����Ч�ַ��ĸ����ó�n��������Ŀռ����ַ�c���
operator[]	����posλ�õ��ַ���const string��������
begin+end	begin��ȡһ���ַ��ĵ�����+end��ȡ���һ���ַ���һ��λ�õĵ�����
rbegin+rend	begin��ȡһ���ַ��ĵ�������+end��ȡ���һ���ַ���һ��λ�õĵ�����
��Χfor	c++֧�ָ����ķ�Χfor���±�����ʽ
push_back	���ַ�����β���ַ�c
append	���ַ�����׷��һ���ַ���
operator+=	���ַ�����׷���ַ���str
c_str	����C��ʽ�ַ���
find+npos	���ַ���posλ�ÿ�ʼ�������ַ�c����ڸ��ַ����ַ����е�λ��
rfind	���ַ���posλ�ÿ�ʼ��ǰ���ַ�c�����ظ��ַ����ַ����е�λ��
substr	��str�д�posλ�ÿ�ʼ����ȡn���ַ�����ν��䷵��
operator+	�������ã���Ϊ��ֵ���أ��������Ч�ʵ�
operator>>	�������������
operator<<	������������
getline	��ȡһ���ַ���������ʱ�����ܵ��ո��Ӱ�죬ֻ���ܵ����з���Ӱ��
relational operators	��С�Ƚϣ��ӿںܶ࣬��������
//string str="woshiniaba@qq.com";
//int pos=str.find('@');
//string username=email.substr(0,pos);
