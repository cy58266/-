#include<iostream>
#include<algorithm>
#define MAXVerttexNum 100		//������Ŀ�����ֵ

//�ڽӾ���
typedef char VertexType;		//�����Ӧ����������
typedef int EdgType;			//�߶�Ӧ����������
typedef struct {
	VertexType vex[MAXVerttexNum];		//�����
	EdgType edge[MAXVerttexNum][MAXVerttexNum];//�ڽӾ��󣬱߱�
	int vexnum, arcnum;			//ͼ��ǰ�Ķ�����,����
}Mgraph;
//�ڽӱ�
typedef struct ArcNode {		//�߱�ڵ�
	int adjvex;					//�û�ָ�򶥵��λ��
	struct ArcNode* nextrac;	//ָ����һ������λ��
	//InfoType info;			//���ı�Ȩֵ
}ArcNode;
typedef struct VNode {
	VertexType data;			//������Ϣ
	ArcNode* firstarc;			//ָ���һ�������ö��㻡��ָ��
}VNode, AdjList[MAXVerttexNum];
typedef struct {
	AdjList vertices;			//�ڽӱ�
	int vexnum, arcm;			//ͼ��ǰ�Ķ�����,����
}ALGraph;
using namespace std;

void visit(int i) {

}

//�ڽӱ�ʵ��BFS
void BFS(ALGraph g, int i) {
	visit(i);
	//visited[i] = false;		//��Ƿ��ʵ�����
	//EnQueue(Q, i);			//����i���
	//while (!IsEmpty(q))
	//{
	//	DeQueue(Q, v);			//����Ԫ�س���
	//	for (p = g.vertices[v];p;p = p->nextrac) {
	//		w = p->adjvex;
	//		if (visited[w] == false) {
	//			visit(w);
	//			visited[w] = true;
	//			EnQueue(Q, w);
	//		}
	//	}
	//}
}
//�ڽӾ���ʵ��BFS
//void BFS(Mgraph g, int i) {
//	visit(i);
//	visited[i] = true;
//	EnQueue(Q, i);
//	while (!IsEmpty(Q)) {
//		DeQueue(g, v);
//		for (w = 0;w < g.vexnum;w++) {
//			if (visit[w] == false && g.edge[v][w] == 1) {
//				visit[w];
//				visited[w] = true;
//				EnQueue(Q, w);
//			}
//		}
//	}
//}
//DFS��α����
//bool visited[MAXVerttexNum];		//��Ƿ�������,��������Ĳ���������
//void DFS(Graph G) {
//	for (i = 0;i < G.vexnum;i++) {
//		visited[i] = false;
//	}
//	for (i = 0;i < G.vexnum;i++) {
//		if (!visited[i]) DFS(G, i);
//	}
//}

int main()
{

	return 0;
}