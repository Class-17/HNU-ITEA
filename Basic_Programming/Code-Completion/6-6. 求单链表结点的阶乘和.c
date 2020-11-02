#include <stdio.h>
#include <stdlib.h>

typedef struct Node *PtrToNode;
struct Node {
    int Data; /* 存储结点数据 */
    PtrToNode Next; /* 指向下一个结点的指针 */
};
typedef PtrToNode List; /* 定义单链表类型 */

int FactorialSum( List L )
{
    if(L == NULL) return 0;         // 特判空链表，返回零
    if(L->Data == 0) L->Data = 1;   // 特判 0的阶乘为 1
    for(int i = L->Data - 1; i > 0; i--)    // 循环求得当前节点数据的阶乘
        L->Data *= i;
    if(L->Next != NULL) return L->Data + FactorialSum(L->Next); // 递归求得所有节点阶乘和
    else                return L->Data;
}

int main()
{
    int N, i;
    List L, p;

    scanf("%d", &N);
    L = NULL;
    for ( i=0; i<N; i++ ) {
        p = (List)malloc(sizeof(struct Node));
        scanf("%d", &p->Data);
        p->Next = L;  L = p;
    }
    printf("%d\n", FactorialSum(L));

    return 0;
}