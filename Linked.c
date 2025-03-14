#include "linked.h"

// Inisialisasi linked list kosong
void createList(LinkedList *L) {
    L->head = NULL;
}

// Membuat node baru
Node* createNode(int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (newNode) {
        newNode->info = value;
        newNode->next = NULL;
    }
    return newNode;
}

// Insert di awal list
void insertFirst(LinkedList *L, int value) {
    Node *newNode = createNode(value);
    newNode->next = L->head;
    L->head = newNode;
}

// Insert di akhir list (perbaikan nambahin ini)
void insertLast(LinkedList *L, int value) {
    Node *newNode = createNode(value);
    if (L->head == NULL) {
        L->head = newNode;
    } else {
        Node *temp = L->head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}


// Insert setelah nilai tertentu
void insertAfter(LinkedList *L, int afterValue, int value) {
    Node *temp = L->head;
    while (temp != NULL && temp->info != afterValue) {
        temp = temp->next;
    }
    if (temp != NULL) {
        Node *newNode = createNode(value);
        if (newNode) {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
}

// Insert sebelum nilai tertentu
void insertValueBefore(LinkedList *L, int beforeValue, int value) {
    Node *newNode = createNode(value);
    if (L->head == NULL || L->head->info == beforeValue) {
        insertFirst(L, value);
        return;
    }
    Node *temp = L->head;
    while (temp->next != NULL && temp->next->info != beforeValue) {
        temp = temp->next;
    }
    if (temp->next != NULL) {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

// Insert setelah nilai tertentu
void insertValueAfter(LinkedList *L, int afterValue, int value) {
    Node *temp = L->head;
    while (temp != NULL && temp->info != afterValue) {
        temp = temp->next;
    }
    if (temp != NULL) {
        Node *newNode = createNode(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

// Hapus node pertama
void deleteFirst(LinkedList *L) {
    if (L->head != NULL) {
        Node *temp = L->head;
        L->head = L->head->next;
        free(temp);
    }
}

// Hapus node terakhir
void deleteLast(LinkedList *L) {
    if (L->head == NULL) return;
    if (L->head->next == NULL) {
        free(L->head);
        L->head = NULL;
        return;
    }
    Node *temp = L->head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

// Hapus node dengan nilai tertentu
void deleteValue(LinkedList *L, int value) {
    if (L->head == NULL) return;
    if (L->head->info == value) {
        deleteFirst(L);
        return;
    }
    Node *temp = L->head;
    while (temp->next != NULL && temp->next->info != value) {
        temp = temp->next;
    }
    if (temp->next != NULL) {
        Node *delNode = temp->next;
        temp->next = temp->next->next;
        free(delNode);
    }
}

// Modifikasi nilai node pertama
void modifyFirst(LinkedList *L, int newValue) {
    if (L->head != NULL) {
        L->head->info = newValue;
    }
}

// Modifikasi nilai node terakhir
void modifyLast(LinkedList *L, int newValue) {
    if (L->head != NULL) {
        Node *temp = L->head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->info = newValue;
    }
}

// Modifikasi nilai tertentu
void modifyValue(LinkedList *L, int oldValue, int newValue) {
    Node *temp = L->head;
    while (temp != NULL) {
        if (temp->info == oldValue) {
            temp->info = newValue;
            return;
        }
        temp = temp->next;
    }
}

// Mencetak linked list
void printList(LinkedList L) {
    Node *temp = L.head;
    while (temp != NULL) {
        printf("%d -> ", temp->info);
        temp = temp->next;
    }
    printf("NULL\n");
}
