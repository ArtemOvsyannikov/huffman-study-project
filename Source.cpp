#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Source.h"

int main() {
    while (1) {
        DisplayStart();
        int flag;
        scanf("%d", &flag);
        if (flag == 2) break;
        DisplayChoose();
        char* file_name[100];
        scanf("%s", file_name);
        unsigned int freq[CODE_SIZE] = { 0 };
        FILE* fr = fopen((const char*)file_name, "rb");
        if (!fr) {
            DisplayError();
            char sy;
            scanf("%c", &sy);
            scanf("%c", &sy);
            continue;
        }
        fseek(fr, 0L, SEEK_END);
        long length = ftell(fr);
        fseek(fr, 0, SEEK_SET);
        for (long i = 0; i < length; ++i) {
            freq[(unsigned char)fgetc(fr)] ++;
        }
        fclose(fr);
        NODE* head = CreateList(freq);
        head = CreateTree(head);
        unsigned char* code_table[CODE_SIZE] = { NULL }, code[CODE_SIZE];
        MoveToTree(head, code_table, code, 0);
        char* result_str = FormCodeTreeStr((char*)file_name, code_table, length);
        long tail = FormCodeBits(result_str, (char*)file_name);
        char symb;
        scanf("%c", &symb);
        scanf("%c", &symb);
        DecodeFile(head, (char*)file_name, tail);
        char ss;
        scanf("%c", &ss);
        scanf("%c", &ss);
        free(result_str);
    }
    DisplayFinish();
    return 0;
}