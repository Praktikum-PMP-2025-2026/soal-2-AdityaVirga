#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100 

typedef struct {
    int arr[MAX_SIZE];
    int top;
} Stack;

// inisialisasi 
void initialize(Stack *stack){
    stack -> top = -1 ; 
}

// Fungsi cek stack kosong 
int apkhKosong (Stack *stack){
    return stack -> top == -1; 
}

// Fungsi cek stack full 
int apkhFull (Stack *stack){
    return stack->top>=MAX_SIZE - 1;
} 

// Fungsi untuk membandingkan dua angka
// Mengembalikan nilai < 0 jika angka a lebih baik dari b
int compare_angka(Stack a, Stack b) {
    if (a.arr != b.arr) {
        return a.arr - b.arr;       // angka lebih kecil lebih baik
    }
}

// Fungsi untuk memasukkan integer ke stack
void push(Stack *stack, int value ) {
    if (apkhFull(stack)){
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++stack->top] = value; 
}

int main() {
    Stack stack;
    initialize(&stack);
    
    // Membaca input 
    if (scanf("%d\n", stack) !=1) return 0;

    // Memasukkan setiap integer ke dalam stack
    int len = (&stack);
    for (int i = 0; i < len; i++) {
        push(&stack, i);

    // Mengeluarkan integer dari stack untuk output integer merge terurut
    for (int i = 0; i < len; i++) {
        printf("%d\n", push(Stack *stack, int value));
    }
    printf("\n");

    return 0;
}
