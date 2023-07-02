#include "Source.h"

void DisplayStart() {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("...................................................................... \n");
    printf(".   o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o   . \n");
    printf(".  /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\  . \n");
    printf(".  / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\  . \n");
    printf(".       .......................................................       . \n");
    printf(". \\ o / .                                                     . \\ o / . \n");
    printf(".   |   .      _   _        __  __                            .   |   . \n");
    printf(".  / \\  .     | | | |      / _|/ _|                           .  / \\  . \n");
    printf(".       .     | |_| |_   _| |_| |_ _ __ ___   __ _ _ __       .       . \n");
    printf(".  _ o  .     |  _  | | | |  _|  _| '_ ` _ \\ / _` | '_ \\      .  _ o  . \n");
    printf(".   /\\  .     | | | | |_| | | | | | | | | | | (_| | | | |     .   /\\  . \n");
    printf(".  | \\  .     \\_| |_/\\__,_|_| |_| |_| |_| |_|\\__,_|_| |_|     .  | \\  . \n");
    printf(".       .                                                     .       . \n");
    printf(".  __\\o .                                                     .  __\\o . \n");
    printf(". /) |  .                  SELECT AN ACTION                   . /) |  . \n");
    printf(".       .                                                     .       . \n");
    printf(".   |__ .    1) Encode/decode file (enter: 1)                 .   |__ . \n");
    printf(". o/    .                                                     . o/    . \n");
    printf("./ )    .    2) Exit the program (enter: 2)                   ./ )    . \n");
    printf(".       .                                                     .       . \n");
    printf(".       .......................................................       . \n");
    printf(".   o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o   . \n");
    printf(".  /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\  . \n");
    printf(".  / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\  . \n");
    printf("....................................................................... \n");
    printf("\n\n");
    printf("Enter action(1-2): ");
}
void DisplayChoose() {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("...................................................................... \n");
    printf(".   o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o   . \n");
    printf(".  /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\  . \n");
    printf(".  / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\  . \n");
    printf(".       .......................................................       . \n");
    printf(". \\ o / .                                                     . \\ o / . \n");
    printf(".   |   .      _   _        __  __                            .   |   . \n");
    printf(".  / \\  .     | | | |      / _|/ _|                           .  / \\  . \n");
    printf(".       .     | |_| |_   _| |_| |_ _ __ ___   __ _ _ __       .       . \n");
    printf(".  _ o  .     |  _  | | | |  _|  _| '_ ` _ \\ / _` | '_ \\      .  _ o  . \n");
    printf(".   /\\  .     | | | | |_| | | | | | | | | | | (_| | | | |     .   /\\  . \n");
    printf(".  | \\  .     \\_| |_/\\__,_|_| |_| |_| |_| |_|\\__,_|_| |_|     .  | \\  . \n");
    printf(".       .                                                     .       . \n");
    printf(".   |__ .                                                     .   |__ . \n");
    printf(". o/    .        WRITE THE FILE NAME TO ENCODE & DECODE!      . o/    . \n");
    printf("./ )    .                                                     ./ )    . \n");
    printf(".       .......................................................       . \n");
    printf(".   o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o   . \n");
    printf(".  /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\  . \n");
    printf(".  / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\  . \n");
    printf("....................................................................... \n");
    printf("\n\n");
    printf("Enter file name: ");
}
void DisplayError() {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("...................................................................... \n");
    printf(".   o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o   . \n");
    printf(".  /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\  . \n");
    printf(".  / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\  . \n");
    printf(".       .......................................................       . \n");
    printf(". \\ o / .                                                     . \\ o / . \n");
    printf(".   |   .      _   _        __  __                            .   |   . \n");
    printf(".  / \\  .     | | | |      / _|/ _|                           .  / \\  . \n");
    printf(".       .     | |_| |_   _| |_| |_ _ __ ___   __ _ _ __       .       . \n");
    printf(".  _ o  .     |  _  | | | |  _|  _| '_ ` _ \\ / _` | '_ \\      .  _ o  . \n");
    printf(".   /\\  .     | | | | |_| | | | | | | | | | | (_| | | | |     .   /\\  . \n");
    printf(".  | \\  .     \\_| |_/\\__,_|_| |_| |_| |_| |_|\\__,_|_| |_|     .  | \\  . \n");
    printf(".       .                                                     .       . \n");
    printf(".  __\\o .                                                     .  __\\o . \n");
    printf(". /) |  .            FILE OPENING ERROR! DURAK!               . /) |  . \n");
    printf(".       .                                                     .       . \n");
    printf(".   |__ .          PRESS ANY BUTTON AND TRY AGAIN!            .   |__ . \n");
    printf(". o/    .                                                     . o/    . \n");
    printf("./ )    .                                                     ./ )    . \n");
    printf(".       .......................................................       . \n");
    printf(".   o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o   . \n");
    printf(".  /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\  . \n");
    printf(".  / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\  . \n");
    printf("....................................................................... \n");
    printf("\n\n");
    printf("Enter symbol: ");
}
void DisplayCompleteCode() {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("...................................................................... \n");
    printf(".   o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o   . \n");
    printf(".  /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\  . \n");
    printf(".  / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\  . \n");
    printf(".       .......................................................       . \n");
    printf(". \\ o / .                                                     . \\ o / . \n");
    printf(".   |   .      _   _        __  __                            .   |   . \n");
    printf(".  / \\  .     | | | |      / _|/ _|                           .  / \\  . \n");
    printf(".       .     | |_| |_   _| |_| |_ _ __ ___   __ _ _ __       .       . \n");
    printf(".  _ o  .     |  _  | | | |  _|  _| '_ ` _ \\ / _` | '_ \\      .  _ o  . \n");
    printf(".   /\\  .     | | | | |_| | | | | | | | | | | (_| | | | |     .   /\\  . \n");
    printf(".  | \\  .     \\_| |_/\\__,_|_| |_| |_| |_| |_|\\__,_|_| |_|     .  | \\  . \n");
    printf(".       .                                                     .       . \n");
    printf(".  __\\o .                                                     .  __\\o . \n");
    printf(". /) |  .                  FILE WAS CODED!                    . /) |  . \n");
    printf(".       .                                                     .       . \n");
    printf(".   |__ .             PRESS ANY BUTTON TO DECODE!             .   |__ . \n");
    printf(". o/    .                                                     . o/    . \n");
    printf("./ )    .                                                     ./ )    . \n");
    printf(".       .......................................................       . \n");
    printf(".   o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o   . \n");
    printf(".  /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\  . \n");
    printf(".  / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\  . \n");
    printf("....................................................................... \n");
    printf("\n\n");
}
void DisplayCompleteDecode() {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("...................................................................... \n");
    printf(".   o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o   . \n");
    printf(".  /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\  . \n");
    printf(".  / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\  . \n");
    printf(".       .......................................................       . \n");
    printf(". \\ o / .                                                     . \\ o / . \n");
    printf(".   |   .      _   _        __  __                            .   |   . \n");
    printf(".  / \\  .     | | | |      / _|/ _|                           .  / \\  . \n");
    printf(".       .     | |_| |_   _| |_| |_ _ __ ___   __ _ _ __       .       . \n");
    printf(".  _ o  .     |  _  | | | |  _|  _| '_ ` _ \\ / _` | '_ \\      .  _ o  . \n");
    printf(".   /\\  .     | | | | |_| | | | | | | | | | | (_| | | | |     .   /\\  . \n");
    printf(".  | \\  .     \\_| |_/\\__,_|_| |_| |_| |_| |_|\\__,_|_| |_|     .  | \\  . \n");
    printf(".       .                                                     .       . \n");
    printf(".  __\\o .                                                     .  __\\o . \n");
    printf(". /) |  .          YOUR FILE WAS DECODED! CHECK IT!           . /) |  . \n");
    printf(".       .                                                     .       . \n");
    printf(".   |__ .            PRESS ANY BUTTON TO CONTINUE!            .   |__ . \n");
    printf(". o/    .                                                     . o/    . \n");
    printf("./ )    .                                                     ./ )    . \n");
    printf(".       .......................................................       . \n");
    printf(".   o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o   . \n");
    printf(".  /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\  . \n");
    printf(".  / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\  . \n");
    printf("....................................................................... \n");
    printf("\n\n");
}
void DisplayFinish() {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("...................................................................... \n");
    printf(".   o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o   . \n");
    printf(".  /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\  . \n");
    printf(".  / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\  . \n");
    printf(".       .......................................................       . \n");
    printf(". \\ o / .                                                     . \\ o / . \n");
    printf(".   |   .      _   _        __  __                            .   |   . \n");
    printf(".  / \\  .     | | | |      / _|/ _|                           .  / \\  . \n");
    printf(".       .     | |_| |_   _| |_| |_ _ __ ___   __ _ _ __       .       . \n");
    printf(".  _ o  .     |  _  | | | |  _|  _| '_ ` _ \\ / _` | '_ \\      .  _ o  . \n");
    printf(".   /\\  .     | | | | |_| | | | | | | | | | | (_| | | | |     .   /\\  . \n");
    printf(".  | \\  .     \\_| |_/\\__,_|_| |_| |_| |_| |_|\\__,_|_| |_|     .  | \\  . \n");
    printf(".       .                                                     .       . \n");
    printf(".  __\\o .                                                     .  __\\o . \n");
    printf(". /) |  .                PROGRAM IS FINISHED!                 . /) |  . \n");
    printf(".       .                                                     .       . \n");
    printf(".   |__ .                  HAVE A GOOD DAY!                   .   |__ . \n");
    printf(". o/    .                                                     . o/    . \n");
    printf("./ )    .                                                     ./ )    . \n");
    printf(".       .......................................................       . \n");
    printf(".   o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o   . \n");
    printf(".  /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\  . \n");
    printf(".  / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\  . \n");
    printf("....................................................................... \n");
    printf("\n\n");
}


NODE* Add2List(NODE* head, NODE* newnode) {
    NODE* p1 = head;
    NODE* p2 = NULL;
    while (p1 && p1->freq < newnode->freq) {
        p2 = p1;
        p1 = p1->next;
    }
    newnode->next = p1;
    if (p2) p2->next = newnode;
    else head = newnode;
    return head;
}
NODE* CreateList(const unsigned int* freq) {
    NODE* head = NULL;
    for (int i = 0; i < CODE_SIZE; ++i) {
        if (freq[i]) {
            NODE* newnode = (NODE*)malloc(sizeof(NODE));
            newnode->symb = i;
            newnode->isSymb = 1;
            newnode->freq = freq[i];
            newnode->left = newnode->right = newnode->next = NULL;
            head = Add2List(head, newnode);
        }
    }
    return head;
}
NODE* CreateTree(NODE* head) {
    while (head && head->next) {
        NODE* left_node = head;
        NODE* right_node = head->next;
        NODE* new_node = (NODE*)malloc(sizeof(NODE));
        new_node->isSymb = 0;
        new_node->freq = left_node->freq + right_node->freq;
        new_node->left = left_node;
        new_node->right = right_node;
        head = Add2List(right_node->next, new_node);
    }
    return head;
}
void MoveToTree(NODE* root, unsigned char* code_table[CODE_SIZE], unsigned char* code, int level) {
    if (root == NULL) return;
    if (root->isSymb == 1) {
        code[level] = '\0';
        code_table[root->symb] = _strdup(code);
    }
    else {
        code[level] = '0';
        MoveToTree(root->left, code_table, code, level + 1);
        code[level] = '1';
        MoveToTree(root->right, code_table, code, level + 1);
    }
}
char* FormCodeTreeStr(char* from, unsigned char* code_table[CODE_SIZE], long length) {
    FILE* fr = fopen(from, "rb");
    char* result_str = malloc(length * 8 + 1);
    long ind = 0;
    for (long i = 0; i < length; ++i) {
        unsigned char c = fgetc(fr);
        for (long j = ind; j < ind + strlen(code_table[c]); j++)
            result_str[j] = code_table[c][j - ind];
        ind += strlen(code_table[c]);
    }
    result_str[ind] = '\0';
    fclose(fr);
    return result_str;
}
void WriteCodeToFile(char* str, long len, char* to) {
    FILE* fout = fopen(to, "wb");
    fwrite(str, sizeof(char), len, fout);

    DisplayCompleteCode();

    fseek(fout, 0L, SEEK_END);
    long length = ftell(fout);
    fseek(fout, 0, SEEK_SET);
    printf("\nCode file size: %d\nEnter symbol: ", length);

    fclose(fout);
}
long FormCodeBits(char* str, char* to) {
    long len = (strlen(str) / BIT8) + 1;
    if (strlen(str) % BIT8 == 0)
        len -= 1;
    long tail = strlen(str) % BIT8;
    BIT2CHAR symb;
    char* res = (char*)malloc(len * sizeof(char));
    for (int i = 0; i < 8 - tail; i++)
        str[strlen(str) + i] = '0';
    for (long i = 0; i < len; ++i)
    {
        symb.mbit.b1 = str[i * BIT8 + 0];
        symb.mbit.b2 = str[i * BIT8 + 1];
        symb.mbit.b3 = str[i * BIT8 + 2];
        symb.mbit.b4 = str[i * BIT8 + 3];
        symb.mbit.b5 = str[i * BIT8 + 4];
        symb.mbit.b6 = str[i * BIT8 + 5];
        symb.mbit.b7 = str[i * BIT8 + 6];
        symb.mbit.b8 = str[i * BIT8 + 7];
        res[i] = symb.symb;
    }
    WriteCodeToFile(res, len, to);
    return tail;
}
void DecodeFile(NODE* head, char* to, long tail) {
    FILE* fout = fopen(to, "rb");
    fseek(fout, 0L, SEEK_END);
    long length = ftell(fout);
    fseek(fout, 0, SEEK_SET);
    long len1 = 0;
    unsigned* zero_and_one_str = malloc((length * 9) * sizeof(unsigned));
    for (long i = 0; i < length; i++) {
        BIT2CHAR symb;
        symb.symb = fgetc(fout);
        zero_and_one_str[i * BIT8 + 0] = (unsigned)symb.mbit.b1;
        zero_and_one_str[i * BIT8 + 1] = (unsigned)symb.mbit.b2;
        zero_and_one_str[i * BIT8 + 2] = (unsigned)symb.mbit.b3;
        zero_and_one_str[i * BIT8 + 3] = (unsigned)symb.mbit.b4;
        zero_and_one_str[i * BIT8 + 4] = (unsigned)symb.mbit.b5;
        zero_and_one_str[i * BIT8 + 5] = (unsigned)symb.mbit.b6;
        zero_and_one_str[i * BIT8 + 6] = (unsigned)symb.mbit.b7;
        zero_and_one_str[i * BIT8 + 7] = (unsigned)symb.mbit.b8;
        len1 += 8;
    }
    len1 -= tail;
    NODE* cur = head;
    FILE* fout1 = fopen(to, "wb");
    long ind = 0;
    long count = 0;
    while (ind != len1) {
        if (zero_and_one_str[ind] == 1) {
            if (cur->right == NULL) {
                fprintf(fout1, "%c", cur->symb);
                cur = head;
                count++;
            }
            else {
                cur = cur->right;
                ind++;
            }
        }
        else if (zero_and_one_str[ind] == 0) {
            if (cur->left == NULL) {
                fprintf(fout1, "%c", cur->symb);
                cur = head;
                count++;
            }
            else {
                cur = cur->left;
                ind++;
            }
        }
    }
    if (cur->left == NULL || cur->right == NULL) {
        fprintf(fout1, "%c", cur->symb);
    }

    DisplayCompleteDecode();
    fclose(fout1);
    fclose(fout);

    fout = fopen(to, "rb");
    fseek(fout, 0L, SEEK_END);
    length = ftell(fout);
    fseek(fout, 0, SEEK_SET);
    fclose(fout);
    printf("\nDecode file size: %d\nEnter symbol: ", length);
}