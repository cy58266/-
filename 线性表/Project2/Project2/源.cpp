#include<iostream>
#include<algorithm>
#define ElemType int 

using namespace std;

//������
typedef struct LNode {
	ElemType data;      //���������� 
	struct LNode* next;   //����ָ���� 
}LNode, * LinkList;//LNode���ṹ�����ͣ�*LinkList��ָ��LNode�ṹ�����͵�ָ��
//˫����
typedef struct DNode {
	ElemType data;
	struct DNode* piror, * next;
}Dnode, * DLinkList;
//��ʼ��
//����ͷ�ڵ�
//void InitList(LinkList &l) {
//	l = NULL;
//}
//��ͷ�ڵ�
void InitList(LinkList &l) {
	l = (LNode*)malloc(sizeof(LNode));
	l->next = NULL;
}
//����(�ú�巨���뵽λ��posֵΪe��Ԫ��)
bool ListInsert(LinkList &l,int pos,ElemType e) {
	LNode* p = l;
	for (int i = 0;i < pos - 1, p != NULL;i++) {
		p = p->next;
	}
	if (p == NULL) return false;
	LNode* s = (LNode*)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
	//˫����
	/*
	s->next=p->next;
	p->next->prior=s;
	s->piror=p;
	p->next=s;
	*/
	return s;
}
//ɾ��(ɾ����i���ڵ�)
bool ListDelet(LinkList& l, int i, ElemType& e) {
	LNode* p = l;
	int j = 0;
	while (p != NULL && j != j - 1) {
		p = p->next;
		j++;
	}
	if (p == NULL || p->next == NULL) return false;
	LNode* q = p->next;
	e = q->data;
	p->next = q->next;
	//˫����
	/*
	p->next=q->next;
	q->next->prior=p;
	free(q);
	*/

	free(q);
	return true;
}
//����
//����ֵ����
LNode* LocateElem(LinkList l,ElemType e) {
	LNode* p = l;
	while (p->data!=e&&p!=NULL)
	{
		p = p->next;
	}
	return p;
}
//����λ�ò���
LNode* GetElem(LinkList l, int pos) {
	LNode* p = l;
	int i = 0;
	while (p != NULL && i != pos) {
		p = p->next;
		i++;
	}
	return p;
}
//�鲢(��������)
void Merge(LinkList l1, LinkList l2, LinkList& l3) {
	LNode* a = l1->next;
	LNode* b = l2->next;
	LNode* c = l1;
	l3 = c;
	while (a && b) {
		if (a->data <= b->data) {
			c->next = a;
			a = a->next;
		}
		else {
			c->next = b;
			b = b->next;
		}
	}
	if (b) {
		c->next = b;
	}
	if (a) {
		c->next = a;
	}
	free(b);
}
//ͷ�巨����������
LinkList List_HeadInsert(LinkList& l) {
	LNode* s;
	int x;
	l = (LNode*)malloc(sizeof(LNode));
	l->next = NULL;
	cin >> x;
	while (x!=999)
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		s->next = l->next;
		l->next = s;
		cin >> x;
	}
	return l;
}
//β�巨����������
LinkList Link_TailInsert(LinkList& l) {
	int x;
	l = (LNode*)malloc(sizeof(LNode));
	l->next = NULL;
	LNode* s, * r = l;
	cin >> x;
	while (x != 999) {
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		r->next = s;
		r = s;
		cin >> x;
	}
	r->next = NULL;
	return l;
}
int main()
{

	return 0;
}