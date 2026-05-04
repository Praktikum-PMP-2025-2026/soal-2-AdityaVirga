#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct{
    int arr[MAX_SIZE];
    int top;
} Stack;

int arr[MAX_SIZE];
int top = -1;

// Fungsi untuk membandingkan dua angka
// Mengembalikan nilai < 0 jika angka a lebih baik dari b
int compare_angka(Stack a, Stack b) {
    if (a.arr != b.arr) {
        return a.arr - b.arr;       // angka lebih kecil lebih baik
    }
}

// Fungsi untuk memasukkan integer ke stack
void push (int d) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        arr[++top] = d;
    }
}

// Fungsi untuk mengeluarkan char dari stack
char pop() {
    if (top < 0) {
        return '\0';
    } else {
        return stack[top--];
    }
}


int main(){ 
int inte[MAX_SIZE];
    
    // Input
    scanf("%d\n", inte); 

    // Memasukkan setiap integer ke dalam stack
    int len = strlen(inte);
    for (int i = 0; i < len; i++) {
        push(inte[i]);
    }
    
    // Output urutan dari yang terkecil
    for (int i = 0; i < len; i++) {
        printf("%d\n", pop());
    }
    printf("\n");

    return 0;
}
