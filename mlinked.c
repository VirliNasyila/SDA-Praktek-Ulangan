#include "linked.h"

int main() {
    LinkedList L;
    createList(&L);

    // 1) Memasukkan bilangan 7 sebagai elemen pertama
    insertFirst(&L, 7);
    printf("Element list: ");
    printList(L);

    // 2) Memasukkan bilangan 11 sebagai elemen kedua
    insertLast(&L, 11);
    printf("Elemen list: ");
    printList(L);

    // 3) Memasukkan bilangan 9 di antara 7 dan 11
    insertAfter(&L, 7, 9);
    printf("Elemen list: ");
    printList(L);

    // 4) Memasukan bilangan 5 di awal list
    insertFirst(&L, 5);
    printf("Elemen list: ");
    printList(L);

    // 5) Memasukkan bilangan 13 di akhir list
    insertLast(&L, 13);
    printf("Elemen list: ");
    printList(L);

    // 6) Hapus elemen terakhir (bilangan 13)
    deleteLast(&L);
    printf("Elemen list: ");
    printList(L);

    // 7) Hapus bilangan 7
    deleteValue(&L, 7);
    printf("Elemen list: ");
    printList(L);

    // 8) Hapus elemen pertama (bilangan 5)
    deleteFirst(&L);
    printf("Elemen list: ");
    printList(L);

    // 9) Hapus semua elemen
    while (L.head != NULL) {
        deleteFirst(&L);
    }
    printf("Elemen list: ");
    printList(L);

    return 0;
}
