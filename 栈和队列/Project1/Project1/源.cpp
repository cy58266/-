#include<iostream>
#include<algorithm>
#define ElemType int 

using namespace std;
//ջ
#define MaxSize 50
typedef struct {
	ElemType data[MaxSize];
	int top;
}Sqstack;
//����

//��ʼ��
void InitStack(Sqstack& s) {
	s.top = -1;
}

//��ջ
void Pop(Sqstack& s, ElemType& e) {
	if (s.top == -1)return;
	e = s.data[s.top--];
}
//��ջ
void Push(Sqstack& s, ElemType e) {
	if (s.top == MaxSize) return;
	s.data[s.top++] = e;
}
//����

//����
int main()
{

	return 0;
}