#include<iostream>
#include<algorithm>
#define ElemType int 

using namespace std;
//ջ
//��ʽ�洢��ʽ
typedef struct {
	ElemType data;
	struct Linknode* next;
}LiStack;
//���Դ洢��ʽ
#define MaxSize 50
typedef struct {
	ElemType data[MaxSize];
	int top;
}Sqstack;
//����
//��ʽ�洢��ʽ
typedef struct LinkNode {
	ElemType data;
	struct LinkNode* next;
}LinkNode;
typedef struct {
	LinkNode* front, * rear;
}LinkQueue;
//˳��洢��ʽ
typedef struct {
	ElemType data[MaxSize];
	int front, rear;
}SqQueue;
//��ʼ��
void InitStack(Sqstack& s) {
	s.top = -1;
}
//��ʽ����(��ͷ�ڵ�)
void InitQueue(LinkQueue& q) {
	q.front = (LinkNode*)malloc(sizeof(LinkNode));
	q.front->next = NULL;
}
//���Զ���
void InitQueue(SqQueue& q) {
	q.rear = q.front = 0;
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
//��ʽ����(��ͷ�ڵ�)
void EnQueue(LinkQueue& q, ElemType e) {
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = e;
	s->next = NULL;
	q.rear->next = s;
	q.rear = s;
}
//���Զ���
void EnQueue(SqQueue& q, ElemType e) {
	if ((q.rear + 1) % MaxSize == q.front) return;
	q.data[q.rear] = e;
	q.rear = (q.rear + 1) % MaxSize;
}
//����
//��ʽ����(��ͷ�ڵ�)
void DeQueue(LinkQueue& q, ElemType& e) {
	if (q.front == q.rear) return;
	LinkNode* p = q.front->next;
	e = p->data;
	q.front->next = p->next;
	if (q.rear == p) q.rear = q.front;//��ԭ����ֻ��һ���ڵ�,ɾ������
	free(p);
}
//���Զ���
void DeQueue(SqQueue& q, ElemType& e) {
	if (q.rear == q.front) return;
	e = q.data[q.front];
	q.front = (q.front + 1) % MaxSize;
}
int main()
{

	return 0;
}