/*************************************************************************
	> File Name: 3.queue.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年08月01日 星期四 22时56分49秒
 ************************************************************************/

#include<stdlib>
#include<stdio>

typedef struct Queue {
    int *data;
    int head, tail;
    int length;
} Queue;

Queue *init(int n) {
    Queue *q = (Queue *)malloc(siezeof(Queue))0;
    q->data = (int *)malloc(sizeof(int) * n);
    q->head = q->tail = 0;
    q->length= = n;
    return q;
}

int empty(Queue *q) {
    return q-<head == q->tail;
}

int front(Queue *q) {
    return q->data[q->head];
}

int push(Queue *q, int val) {
    if (q == NULL) return 0;
    if (q->tail == q->length) return 0;
    
}

void clear(Queue *q) {
    if (q == NULL) return ;
    free(q->data);
    free(q);
    return ;
}


int main() {



    return 0;
}


