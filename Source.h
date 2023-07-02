#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CODE_SIZE 256
#define BIT8 8

typedef union bit2char {
    char symb;
    struct bit {
        unsigned b1 : 1;
        unsigned b2 : 1;
        unsigned b3 : 1;
        unsigned b4 : 1;
        unsigned b5 : 1;
        unsigned b6 : 1;
        unsigned b7 : 1;
        unsigned b8 : 1;
    }mbit;
}BIT2CHAR;
typedef struct node {
    unsigned char symb;
    unsigned char isSymb;
    unsigned int freq;
    struct node* left, * right, * next;
}NODE;

void DisplayStart();
void DisplayChoose();
void DisplayError();
void DisplayCompleteCode();
void DisplayCompleteDecode();
void DisplayFinish();

NODE* Add2List(NODE* head, NODE* newnode);
NODE* CreateList(const unsigned int* freq);
NODE* CreateTree(NODE* head);
void MoveToTree(NODE* root, unsigned char* code_table[CODE_SIZE], unsigned char* code, int level);
char* FormCodeTreeStr(char* from, unsigned char* code_table[CODE_SIZE], long length);
void WriteCodeToFile(char* str, long len, char* to);
long FormCodeBits(char* str, char* to);
void DecodeFile(NODE* head, char* to, long tail);


