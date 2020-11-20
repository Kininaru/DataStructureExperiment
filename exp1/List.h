typedef struct list_node {
    int val;
    struct list_node *next;
} ListNode;

typedef struct list {
    ListNode *head, *tail;
    int len;
} List;

List *createList();
void appendList(List *list, int val);
void addNode(List *list, int val, int index);
void delList(List *list);
void delNode(List *list, ListNode *node);
void insBefore(List *list, ListNode *target, ListNode *newNode);
void insAfter(List *list, ListNode *target, ListNode *newNode);
bool getNode(List *list, int index, ListNode *dest);
ListNode *getPrev(List *list, ListNode *target);
void printList(List *list);