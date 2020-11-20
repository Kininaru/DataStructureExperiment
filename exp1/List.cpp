#include "List.h"
#include "iostream"
#include "stdlib.h"

List *createList() {
    List *ret = (List *) malloc(sizeof(List));
    if (ret == nullptr) return nullptr;
    ret->tail = nullptr;
    ret->head = nullptr;
    ret->len = 0;
    return ret;
}

void appendList(List *list, int val) {
    if (list == nullptr) list = createList();
    auto *newNode = (ListNode *) malloc(sizeof(ListNode));
    newNode->val = val;
    newNode->next = nullptr;
    if (list->len == 0) list->head = newNode;
    else list->tail->next = newNode;
    list->tail = newNode;
    list->len++;
}

void addNode(List *list, int val, int index);
void delList(List *list);
void delNode(List *list, ListNode *node);
void insBefore(List *list, ListNode *target, ListNode *newNode);
void insAfter(List *list, ListNode *target, ListNode *newNode);
bool getNode(List *list, int index, ListNode *dest);
ListNode *getPrev(List *list, ListNode *target);

void printList(List *list) {
    if (list == nullptr) return;
    std::cout << "准备输出List，长度为" << list->len << std::endl;
    ListNode *ptr = list->head;
    while (ptr) {
        std::cout << ptr->val << std::endl;
        ptr = ptr->next;
    }
}