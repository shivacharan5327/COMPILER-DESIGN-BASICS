#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// List of C keywords
const char *keywords[] = {
    "int", "float", "char", "double", "if", "else", "while", "for", "return", "void",
    "main", "switch", "case", "break", "continue", "do", "struct", "typedef", "long", "short"
};
int isKeyword(const char *word) {
    for (int i = 0; i < sizeof(keywords) / sizeof(keywords[0]); i++) {
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    }
    return 0;
}
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=' || ch == '<' || ch == '>' || ch == '!');
}
int main() {
    FILE *fp;
    char ch, buffer[100];
    int i = 0;

    fp = fopen("input.c", "r");  // Input file containing source code
    if (fp == NULL) {
        printf("Error: Cannot open input file.\n");
        return 1;
    }

    printf("Lexical Analysis Result:\n\n");
    while ((ch = fgetc(fp)) != EOF) {
        // Skip whitespace
        if (isspace(ch)) {
            continue;
        }

        // Check for identifiers or keywords
        if (isalpha(ch) || ch == '_') {
            buffer[i++] = ch;
            while (isalnum(ch = fgetc(fp)) || ch == '_') {
                buffer[i++] = ch;
            }
            buffer[i] = '\0';
            i = 0;
            ungetc(ch, fp); // Push back the character not part of the word
            if (isKeyword(buffer)) {
                printf("Keyword: %s\n", buffer);
            } else {
                printf("Identifier: %s\n", buffer);
            }
        }

        // Check for numbers (optional)
        else if (isdigit(ch)) {
            buffer[i++] = ch;
            while (isdigit(ch = fgetc(fp))) {
                buffer[i++] = ch;
            }
            buffer[i] = '\0';
            i = 0;
            ungetc(ch, fp);
            printf("Number: %s\n", buffer);
        }

        // Check for operators
        else if (isOperator(ch)) {
            printf("Operator: %c\n", ch);
        }

        // Ignore other characters or punctuations for simplicity
    }

    fclose(fp);
    return 0;
}