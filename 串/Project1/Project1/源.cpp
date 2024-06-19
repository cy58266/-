#include<iostream>
#include<algorithm>
#define MAXLEN 255

using namespace std;

//����˳����ʾ
typedef struct {
	char ch[MAXLEN];
	int length;
}SString;
//������ʽ��ʾ
typedef struct snode
{
	char data;              //������
	struct snode* next;     //ָ����
} LiString;
//��ֵ����
void StrAssign(SString& s, char chs[]) {
	s.length = 0;
	for (int i = 0;chs[i] != '\0';i++) {
		s.ch[i] = chs[i];
		s.length++;
	}
	//cout << endl << s.length;
}
//����
void StrCopy(SString& s1, SString& s2) {
	for (int i = 0;i < s2.length;i++) {
		s1.ch[i] = s2.ch[i];
		s1.length = i;
	}
	s1.length++;
}
//�жϿ�
bool StrEmpty(SString s) {
	if (s.length == 0)return true;
	return false;
}
//�Ƚ�������
int StrCompare(SString a, SString b) {
	int i = 0;
	for (;i < a.length, i < b.length;i++) {
		if (a.ch[i] > b.ch[i]) return 1;
		else if (a.ch[i] < b.ch[i]) return -1;
		else return 0;
	}
	if ((i == a.length) && (i != b.length))
		return -1;
	else if ((i != a.length) && (i == b.length))
		return 1;
	else
		return 0;
}
//������
void Concat(SString& a, SString b, SString c) {

}
//�����
void ShowString(SString s)
{
	if (s.length == 0)
	{
		cout << "��ǰ��Ϊ�գ�" << endl;
	}
	for (int i = 0; i < s.length; i++)
	{
		cout << s.ch[i];
	}
	cout << endl;
}
int main()
{
	SString S, T, N, M, G, L;
	char ch[] = { "hello world" };
	char ch1[] = { "hello" };
	char ch2[] = { "hello worldd" };
	StrAssign(S, ch);
	StrAssign(N, ch1);
	StrAssign(M, ch2);
	StrAssign(S, ch);
	cout << "S:";ShowString(S);
	cout << "��һs���Ƶ�����һ��:";StrCopy(T, S);ShowString(T);
	cout << "�Ƚϴ��Ĵ�С��0������ȣ�1�����һ�����ȵڶ�������-1�����һ�����ȵڶ�����С";
	cout << "S an T:" << StrCompare(S, T) << endl;
	return 0;
}