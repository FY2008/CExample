/*
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * **********************************************
 * @FilePath: /CExample/lists-demo/main1.c
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Date: 2020-08-11 11:54:15
 * @LastEditTime: 2020-09-05 20:50:24
 * @Description: 简单链表实现，实现一个 student 链表结构
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


/**
 * student_list 链表结构
 */
typedef struct student_list
{
    char name[10];
    int age;
    struct student_list *next;
} student_list_t;

/**
 * 判断链表是否为空
 */
bool list_empty(student_list_t *head){
    return head->next == NULL; // 如果next 为 NULL，则返回 1,否则返回 0
}

/**
 * 统计链表结点数量，不算头结点
 */
int get_list_count(student_list_t *head)
{
    student_list_t *pTem = head;
    int count = 0;
    if(!list_empty(pTem))
    {
        pTem = pTem->next;
        while (pTem!=NULL)
        { 
            pTem = pTem->next;
            count++;
        }
    }
    return count;
}

/**
 * 初始化链表(创建头结点)
 */
student_list_t* init_stu_list()
{
    student_list_t *headNode = (student_list_t*)malloc(sizeof(student_list_t));
    headNode->next = NULL;

    return headNode;
}

/**
 * 插入结点（尾部插入）
 */
void stu_list_append(student_list_t* head, char name[], int age)
{
    student_list_t *pNew = (student_list_t*)malloc(sizeof(student_list_t)); // 创建新的结点
    strcpy(pNew->name, name);
    pNew->age = age;
    

    if(list_empty(head))
    {   
        head->next = pNew;
    } else {
        student_list_t *pTemp = head;
        while(pTemp->next != NULL){
            pTemp = pTemp->next;
        }
        pTemp->next = pNew;
    }
}

/**
 * 在链表头部插入结点
 */
void insert_to_head_node(student_list_t *head, char name[], int age)
{
    student_list_t* pNew = (student_list_t*)malloc(sizeof(student_list_t));
    strcpy(pNew->name, name);
    pNew->age = age;
    pNew->next = head->next;
    head->next = pNew;
}

/**
 * 指定位置插入结点
 */
void insert_node_pos(student_list_t *head, int pos, const char *name, int age)
{
    // 判断 pos 是否超出链表范畴
    if(pos > 0 && pos < get_list_count(head)){
        student_list_t *pNew = (student_list_t*)malloc(sizeof(student_list_t));
        strcpy(pNew->name, name);
        pNew->age = age;
        
        student_list_t *temp = head;
        for (int i = 1; i < pos; i++){
            temp = temp->next;
        }
        pNew->next = temp->next;
        temp->next = pNew;
    } else {
        printf("超出结点最大范围\n");
    }
}

/**
 * 遍历链表
 */
void print_student(student_list_t *head){
    student_list_t* current = head;
    current = current->next;
    
    while (current != NULL)
    {
        printf("name: %s\nage: %d\n", current->name, current->age);
        printf("----------------------------------------------------\n");
        current = current->next;
    }
}



int main()
{
    student_list_t *pHead;
    pHead = init_stu_list();
    stu_list_append(pHead, "张五", 19);
    
    stu_list_append(pHead, "李四", 15);
    
    stu_list_append(pHead, "王三", 55);
    
    stu_list_append(pHead, "陈家辉", 61);

    insert_to_head_node(pHead, "李宏伟", 55);
    
    // print_student(pHead);

    insert_node_pos(pHead, 2, "小小非", 4);
    print_student(pHead);
    printf("结点数量为：%d\n", get_list_count(pHead));
    return 0;
}