#include <stdio.h>
#include <stdlib.h>

// #include <windows.h>
#define OK 1
#define ERROR 0

typedef struct LNode{
    int data;
    struct LNode * next;
}LNode,*LinkList;




// int GetElement_L(LinkList L,int i,int * num){
//     LNode * p;
//     p = L->next;
//     int j = 1;
//     while(p&&j<i){
//         p = p->next;
//         j++;
//     }
//     *num = p->data;
//     return OK;
// }



//线性表的初始化
LNode * InitList(LinkList H){
    H = (LinkList *)malloc(sizeof(LNode));
    if(!H){
        return ERROR;
    }
    H->next = NULL;
    return H;
}


//线性表的插入
int InsertList(LinkList H,int i,int num){
    LNode *p = H,*s;
    int j = 0;
    while(p && j < i-1){
        p = p->next;
        j++;
    }
}
int main(){
    LNode LinkList;
    
}