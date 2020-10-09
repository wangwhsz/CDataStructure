#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define OK 1
#define ERROR 0
#define OVERFLOW -1
#define INITSIZE 100
#define INCREASEMENT 10
//结构体定义
typedef struct SqList{
    int * elem;
    int length;
    int listsize;
}SqList;


//顺序表的初始化
int InitList_Sq(SqList *L){
    L->elem = (int)malloc(INITSIZE*sizeof(int));
    if(!L->elem){
        return ERROR;
    }
    L->length = 0;
    L->listsize = INITSIZE;
    return OK;
}
//顺序表的插入
int ListInsert_Sq(SqList *L,int i,int elem){
    //重新分配的地址
    int * newbase;
    //指向顺序表尾部的指针
    int  count = 0;
    if(i<1||i>L->length){
        return OVERFLOW;
    }
    if(L->length >= L->listsize){
        newbase = (int)realloc(L->elem,(INITSIZE+INCREASEMENT)*sizeof(int));
        if(!newbase){
            return ERROR;
        }
        L->listsize += INCREASEMENT;
        L->elem = newbase;
    }
    for(;L->elem+count<L->length;count++){
        
    }
}
int ListDelete_Sq(SqList *L,int i,int * num){

}


int main(){
    SqList L;
    InitList_Sq(&L);
    getchar();
}