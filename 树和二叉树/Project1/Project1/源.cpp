#include<iostream>
#include<algorithm>
#define MAXLEN 255
#define ElemType int

using namespace std;
//��������˳��洢�ṹ

//����������ʽ�洢�ṹ
typedef struct BiTNode {
	ElemType data;
	struct BiTNode* lchild, * rchild;
}BiTNode,*BiTree;
//�������Ľ���
void CreatTree(BiTNode** T) {
	ElemType a;
	cin >> a;
	(*T) = (BiTNode*)malloc(sizeof(BiTNode));
	(*T)->data = a;
	CreatTree(&(*T)->lchild);
	CreatTree(&(*T)->rchild);
}

void visit(BiTree) {

}
//��������ǰ�����
void PreOrder(BiTree T) {
	if (T != NULL) {
		visit(T);
		PreOrder(T->lchild);
		PreOrder(T->rchild);
	}
}
//���������������
void InOrder(BiTree T) {
	if (T != NULL) {
		InOrder(T->lchild);
		visit(T);
		InOrder(T->rchild);
	}
}
//�������ĺ������
void PostOrder(BiTree T) {
	if (T != NULL) {
		InOrder(T->lchild);
		InOrder(T->rchild);
		visit(T);
	}
}
//��α���
void LevelOrder(BiTree T) {
	//InitQueue(Q);		//��ʼ����������
	BiTree T;
	//EnQueue(Q,T);		//�����ڵ����
	//while (!IsEmpty(Q)) {
	//	DeQueue(Q, p);		//ͷ�ڵ����
	//	visit(p);
	//	//���p�ĺ��Ӳ�Ϊ�������
	//	if (p->lchild != NULL) EnQueue(p->lchild);
	//	if (p->rchild != NULL) EnQueue(p->rchild);
	//}
}

int main()
{

	return 0;
}