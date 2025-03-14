#ifndef LINKED_H
#define LINKED_H

#include <stdio.h>
#include <stdlib.h>

// Struktur Node
typedef struct Node {
    int info;
    struct Node *next;
} Node;

// Struktur Linked List
typedef struct {
    Node *head;
} LinkedList;

// Prototipe fungsi
void createList(LinkedList *L);
Node* createNode(int value);
void insertFirst(LinkedList *L, int value);
void insertLast(LinkedList *L, int value);
void insertBetweenBefore(LinkedList *L, int beforeValue, int value);
void insertBetweenAfter(LinkedList *L, int afterValue, int value);
void insertValueBefore(LinkedList *L, int beforeValue, int value);
void insertValueAfter(LinkedList *L, int afterValue, int value);
void deleteFirst(LinkedList *L);
void deleteLast(LinkedList *L);
void deleteValue(LinkedList *L, int value);
void modifyFirst(LinkedList *L, int newValue);
void modifyLast(LinkedList *L, int newValue);
void modifyValue(LinkedList *L, int oldValue, int newValue);
void modifyBetweenBefore(LinkedList *L, int beforeValue, int newValue);
void modifyBetweenAfter(LinkedList *L, int afterValue, int newValue);
void printList(LinkedList L);

#endif
