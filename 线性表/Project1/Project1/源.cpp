#include<iostream>
#include<algorithm>
#define ElemType int 

using namespace std;

//��̬˳���
#define MaxSize 50
typedef struct {
	ElemType data[MaxSize];
	int length;
}SqList;
//��̬˳���
#define InitSize 100
typedef struct {
	ElemType* data;
	int maxsize, length;
}SeqList;
//��ʼ��
void InitList(SqList& l) {
	l.length = 0;
}
void InitList(SeqList& l) {
	//l.data = (ElemType*)malloc(InitSize * sizeof(ElemType));
	l.data = new ElemType[InitSize];
	l.length = 0;
	l.maxsize = InitSize;
}
//����(��posλ�ò���ֵe)
bool ListInsert(SqList& l, int pos, ElemType e) {
	if (pos > l.length + 1 || pos < 0) return false;
	if (l.length >= MaxSize) return false;
	for (int i = l.length;i >= pos;i--) {
		l.data[i] = l.data[i - 1];
	}
	l.data[pos - 1] = e;
	l.length++;
	return true;
}
//ɾ��(ɾ��posλ�õ�Ԫ��,���ҷ���e)
bool ListDelet(SqList& l, int pos, ElemType& e) {
	if (pos > l.length || pos < 0) return false;
	e = l.data[pos - 1];
	for (int i = pos;i < l.length;i++) {
		l.data[i - 1] = l.data[i];
	}
	l.length--;
	return true;
}
//����(��˳����в��ҵ�һ��ֵ����e��Ԫ�ز��ҷ���λ��)
int LocateElem(SqList l, int e) {
	int i;
	for (i = 0;i < l.length;i++) {
		if (l.data[i] == e)return i + 1;
	}
	return 0;
}
//�鲢(�ϲ���������)
void Merge(SqList& La, SeqList &Lb) {
	int i, j;
	for (i = 0;i < Lb.length;i++) {
		int cout = 0;
		for (j = 0;j < La.length;j++) {
			if (La.data[j] == Lb.data[j])
				cout++;
		}
		if (cout == 0)
			La.data[La.length++] = Lb.data[i];
	}
}
int main()
{
	int n, m;
	SqList l;
	InitList(l);
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> l.data[i];
		l.length++;
	}
	//ListInsert(l, 2, 9999);
	/*ListDelet(l, 2, m);
	cout << m << endl;*/
	cout << LocateElem(l, 99) << endl;
	for (int i = 0;i < l.length;i++) {
		cout << l.data[i] << ",";
	}
	return 0;
}