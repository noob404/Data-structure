#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2     //Status define

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#define ElemType int    //List define
typedef struct{
    ElemType *elem;     //head adress
    int length;
    int listsize;       
}Sqlist;                //squential maping

typedef struct LNode{
    ElemType data;
    LNode *next;
}LNode, *LinkList;      //chain table


int main(){
    
    system("PAUSE");
    return 0;
}
