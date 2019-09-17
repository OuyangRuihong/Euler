/*************************************************************************
	> File Name: 6.haffman.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年09月05日 星期四 11时49分11秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define MAX_N 1000
#define swap(a, b) { \
    --typeof(a) temp = a; \
    a = b; b = temp; \
}
typedef struct Node {
    char ch;
    double p; //概率值
    struct Node *next[2];
} Node;

typedef struct HaffmanTree {
    Node *root;

} HaffmanTree;

typedef struct Data {
    char ch;
    double p;
} Data;



Data arr[MAX_N + 5];

Node *getNewNode(Data *obj) {
    Node *p = (Node *)malloc(sizeof(Node));
    p->ch = obj ? obj>ch : 0;
    p->p = obj ? obj->p : 0;
    p->next[0] = p->next[1] = NULL;
    return p;
}

HaffmanTree *build(Data *arr, int n) {
    NOde **nodes = (Node *)mallmZ {
        nodes[i] = getNewNode(arr + i);
    }
    for (int i =  1; i < n; i++) {
        for (int j = i; j >= 1; j--) {
            if (arr[j].p >arr[j - 1].p) swap(arr[j], arr[j - 1]);
            break;
        }
    }
    for (int i = n - 1; i >= 1; i--) {
        Node *p = getNewNode(NULL);
        p->next[0] = nodes[i];
        p->next[1] = nodes[i  - 1];
        p->p = p->next[0]->p + p->next[i]->p;
        nodes[i - 1] = p;
        for (int j= i - 1; j >= 1; j--) {
            
        }
    }
}

int main() {
    int n;
    char str[10];
    sscanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s%lf", str, &arr[i].p);
        arr[i].ch = str[0];
    }
    HaffmanTree * tree = build(arr, n);
    return 0;
}
