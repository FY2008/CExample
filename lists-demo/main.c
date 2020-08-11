

/**
 * 版权归：信念D力量 freerealmshn@163.com
 * 文件：main.c
 * 描述：设计并实现链表功能
 * 日期：2020-07-30
 * 版本：V1.0
 * 
 * **********************************************************
 * 链表创建过程
 * 
 * 1. 创建一个链表结构体
 * 2. 创建链表头结点
 * 3. 添加一个结点（尾部添加，头部添加，指定位置插入）
 * 4. 遍历结点
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 定义一个学生链表
 * 字段包括：
 * 1. name  (姓名)
 * 2. score (成绩)
 */
typedef struct Student
{
    char name[10]; // 姓名
    int score;     // 成绩
    struct Student *next;
} StuListTypeDef;

/**
 * 创建链表，返回头节点
 * 头结点不存放任何数据，头结点用于在最前头，插入的数据在头结点后
 */
StuListTypeDef *createStuList()
{
    StuListTypeDef *headNode = (StuListTypeDef *)malloc(sizeof(StuListTypeDef));
    headNode->next = NULL;

    return headNode;
}

/**
 * 创建节点
 */
void *createNode(StuListTypeDef *pHead)
{
    StuListTypeDef *Node = (StuListTypeDef *)malloc(sizeof(StuListTypeDef));
    printf("请输入学员信息\n");
    printf("姓名: ");
    scanf("%s", Node->name); // 用户终端输入姓名
    printf("请输入成绩:");
    scanf("%d", &Node->score);
    Node->next = NULL;

    pHead->next = Node; // 让头指针指向当前节点
}

/**
 * 尾部添加多个节点
 */
void appendNode(StuListTypeDef *pHead, const char *name, int score)
{
    StuListTypeDef *pNew = (StuListTypeDef *)malloc(sizeof(StuListTypeDef));
    strcpy(pNew->name, name);
    pNew->score = score;
    pNew->next = NULL;

    /* 判断链表是否为空 */
    if (pHead->next == NULL)
    {
        pHead->next = pNew;
    }
    else
    {
        /**
         * 如果不为空，则执行else 里边的内容
         */
        StuListTypeDef *pTemp = (StuListTypeDef *)malloc(sizeof(StuListTypeDef));
        pTemp = pHead->next;
        while (pTemp->next != NULL)
        {
            pTemp = pTemp->next;
        }
        pTemp->next = pNew;
    }
}

/**
 * 删除尾结点
 * 
 * 注意：
 * (1): 如果无非空结点，则打印出链表已无结点可以删除
 */
void pop_Node(StuListTypeDef *head)
{
    if (head->next == NULL)
    {
        printf("链表中只有头结点，无数据结点可以删除！\n");
    }
    else
    {
        StuListTypeDef *pTemp = NULL;
        pTemp = head->next;
        while (pTemp->next->next != NULL)
        {
            pTemp = pTemp->next;
        }
        if (pTemp->next->next == NULL)
        {
            free(pTemp->next->next);
            pTemp->next = NULL;
        }
    }
}

/**
 * 遍历列表
 */
void forEachList(StuListTypeDef *head)
{
    if (head->next != NULL)
    {
        head = head->next;
        while (head != NULL)
        {
            printf("%s\t%d\n", head->name, head->score);
            head = head->next;
        }
    }
    else
    {
        printf("链表内无任何数据，无需删除！\n");
    }
}

/****************************************************************
 *       Main 函数
 ****************************************************************/
int main(void)
{
    printf("--------------------- 欢迎来到 C 语言的世界 ! ---------------------\n");
    StuListTypeDef *pStu = NULL; // 定义一个指针，需要来接收链表的首地址

    pStu = createStuList(); // 创建头节点

    appendNode(pStu, "张杉峰", 99); // 创建一个结点，并把头结点next 指向该结点
    appendNode(pStu, "张杉峰", 99);
    appendNode(pStu, "张杉峰", 99);
    appendNode(pStu, "张杉峰", 99);

    printf("#################### 遍历输出结果 ###########################\n");
    forEachList(pStu);

    pop_Node(pStu);
    pop_Node(pStu);
    pop_Node(pStu);
    pop_Node(pStu);
    // printf("#################### 遍历输出结果 ###########################\n");
    // forEachList(pStu);

    return 0;
}