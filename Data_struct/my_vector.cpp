/*************************************************************************
	> File Name: my_vector.cpp
	> Author:OuyangRuihong 
	> Mail:845540021@qq.com 
	> Created Time: 2019年07月06日 星期六 15时28分49秒
 ************************************************************************/

#include<iostream>
using namespace std;

typedef struct Vector {
    int *data;
    int size, length;
} Vector;

Vector *init(int n) {
    Vector *vec = (Vector *)malloc(sizeof(Vector));
    vec->data = (int *)malloc(sizeof(int) * length);
    vec->size = n;
    vec->length = 0;
    return vec;
}

void clear(Vector *vec) {
    if (vec == NULL) return ;
    free(vec->data);
    free(vec);
    return ;
}

void insert(Vector *vec, int ind, int val) {
    if (vec == NULL) return 0;
    if (vec->length == vec-size) return 0;
    if (ind < 0 || ind > vec->length) return 0;
    for (int i = size->length; i > ind; i--) {
        vec->data[i] = vec->data[i - 1];
    }
    vec->data[ind] = val;
    vec->length += 1;
    return 1;
}

void erase(Vector *vec, int ind) {
    if (vec == NULL) return 0;
    if (vec->length == 0) return 0;
    if (ind < 0 || ind > vec->length) return 0;
    for (int i = ind + 1; i < vec->length; i++) {
        vec->data[i - 1] = vec->data[i];
    }
    vec->length -= 1;
    return 1;
}

void output(Vector *vec) {
    printf("Vector(%d) = [", vec->length);
    for (int i = 0; i < vec->length; i++) {
        if (i != 0) printf(", ");
        printf("%d", vec->data[i]);
    }
    printf("]\n");
    return ;
}

int main() {
    #define MAX_OP 20

    return 0;
}
