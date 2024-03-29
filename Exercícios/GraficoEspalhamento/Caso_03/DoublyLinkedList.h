#ifndef DOUBLYLINKEDLIST_H_INCLUDED
#define DOUBLYLINKEDLIST_H_INCLUDED

//Cria um tipo booleano para utilização em C.
enum boolean {
    true = 1, false = 0
};
typedef enum boolean bool;//Definição do tipo booleano.
typedef struct Node { //Struct para manipulação entre os nós.
    void *data;
    struct Node *previous;
    struct Node *next;
}Node;
typedef struct DoublyLinkedList {//Struct para manipular a lista
    Node *first;
    int size;
}DoublyLinkedList;
typedef bool (*compare)(void*,void*);
typedef void (*printNode)(void*);
void init(DoublyLinkedList *list);
int enqueue(DoublyLinkedList *list, void *data);
void* dequeue(DoublyLinkedList *list);
void* first(DoublyLinkedList *list);
void* last(DoublyLinkedList *list);
int push(DoublyLinkedList *list, void *data);
void* pop(DoublyLinkedList *list);
void* top(DoublyLinkedList *list);
bool isEmpty(DoublyLinkedList *list);
int indexOf(DoublyLinkedList *list,void *data, compare equal);
Node* getNodeByPos(DoublyLinkedList *list,int pos);
void* getPos(DoublyLinkedList *list,int pos);
int add(DoublyLinkedList *list, int pos, void *data);
int addAll(DoublyLinkedList *listDest, int pos, DoublyLinkedList *listSource);
void* removePos(DoublyLinkedList *list, int pos);
int removeData(DoublyLinkedList *list, void *data, compare equal);
void show(DoublyLinkedList *list, printNode print);
void showMem(DoublyLinkedList *list);

#endif // DOUBLYLINKEDLIST_H_INCLUDED
