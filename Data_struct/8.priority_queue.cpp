/*************************************************************************
	> File Name: 8.priority_queue.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年09月06日 星期五 17时04分18秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define swap(a, b) { \
    __typeof(a) __temp = a; \
    a = b, b = __temp; \
}
typedef struct priority_queue {
    int *data;
    int cnt, size;
} priority_queue;

priority_queue *init(int n) {
    priority_queue *q = (priority_queue *)malloc(sizeof(priority_queue));
    q->data = (int *)malloc(sizeof(int) * (n + 1));
    q->cnt = 0, q->size = n;
    return q;
}

int empty(priority_queue *q) {
    return q->cnt == 0;
}

int top(priority_queue *q) {
    return q->data[1];
}

int push(priority_queue *q, int val) {
    if (q->cnt == q->size) return 0;
    q->cnt += 1;
    q->data[q->cnt] = val;
    int ind = q->cnt;
    while (ind >> 1 && q->data[ind] > q->data[ind >> 1]) {
        swap(q->data[ind], q->data[ind >> 1]);
        ind >>= 1;
    }
    return 1;
}

int pop(priority_queue *q) {
   if (empty(q)) return 0;
    q->data[1] = q->data[q->cnt--];
    int ind = 1;
    while ((ind << 1) <= q->cnt) {
        int temp = ind;
        if (q->data[ind << 1] > q->data[temp]) temp = ind << 1;
        if ((ind << 1 | 1) <= q->cnt && q->data[ind << 1 | 1] > q->data[temp]) {
            temp = ind << 1 | 1;
        }
        if (temp == ind) break;
        swap(q->data[ind], q->data[temp]);
        ind = temp;
    }
    return 1;
}

void clear(priority_queue *q) {
    if (q == NULL) return ;
    free(q->data);
    free(q);
    return ;
}

int main() {
    srand(time(0));
    #define MAX_OP 20
    priority_queue *q = init(MAX_OP);
    for (int i = 0; i < MAX_OP; i++) {
        int val = rand() % 100;
        push(q, val);
        printf("insert %d to queu\n", val);
    }
    for (int i = 0; i < MAX_OP; i++) {
        printf("%d ", top(q));
        pop(q);
    }
    printf("\n");
    return 0;
}