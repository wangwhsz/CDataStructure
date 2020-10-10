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
        exit(OVERFLOW);
    }
    L->length = 0;
    L->listsize = INITSIZE;
    // printf("listsize%d\n",L->length);
    return OK;
}
//顺序表元素的初始化
int ListElemInit(SqList *L){
    int count = 0;
    for(;count<L->listsize - 5 ; count++){
        *(L->elem+count) = count*2+1;
        
        L->length++;
    }
    // printf("listsize%d\t",L->listsize);
    // printf("length%d\t",L->length);
    // printf("count%d\t",count);
}

//顺序表的插入
int ListInsert_Sq(SqList *L,int i,int elem){
    //重新分配的地址
    int * newbase;
    //指向顺序表尾部的指针
    int  count = 0;
//Q为插入位置    
    if(i<1||i>L->length){
        return OVERFLOW;
    }
    //顺序表空间不足，重新分配
    if(L->length >= L->listsize){
        newbase = (int)realloc(L->elem,(INITSIZE+INCREASEMENT)*sizeof(int));
        if(!newbase){
            return ERROR;
        }
        L->listsize += INCREASEMENT;
        L->elem = newbase;
    }



    int *p ,*q;
    q = (L->elem+i-1);
//后移
    // for( p= (L->elem[L->length-1]) ; p >= q ; p--){
        //为什么不行？？？？？？？？？？？？？？？？？？？


        
    for( p= (L->elem+L->length-1) ; p >= q ; p--){

        *(p + 1) = *p;
    }
    *q = elem;
    L->length++;
}
int ListDelete_Sq(SqList *L,int i,int * num){

}
//顺序表的输出
int SqlistOpt(SqList *L){
    int count = 0;
    int nNewLine = 0;
    for(count = 0;count < L->length-1;count++){
        printf("%d\t",*(L->elem+count));
        nNewLine++;
        if(nNewLine % 10==0  )
        {
            putchar('\n');
        }
    }
}

int main(){
    SqList L;
    InitList_Sq(&L);
    ListElemInit(&L);
    ListInsert_Sq(&L,5,90);
    SqlistOpt(&L);
    getchar();
}