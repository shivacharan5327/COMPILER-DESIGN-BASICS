# COMPILER-DESIGN-BASICS

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: SURVI.SHIVA CHARAN

*INTERN ID*: CT04DM865

*DOMAIN*: C PROGRAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTHOSH KUMAR

I used Chatgpt as well as Youtube for understanding the concept, I used the  AI tool like Chatgpt  for some of the information about the task.It is applicable at Compiler Design courses,
Foundation for Compliers and Interpreters,Static Code Analysis Tools,Tool Development Training.The  C program performs  Lexical analysis is the first phase of a compiler, where the source code is read and broken into meaningful elements called tokens. These tokens are then passed to the next phase of compilation for syntax and semantic analysis. This program is a basic lexical analyzer that can identify four types of tokens: keywords, identifiers, numbers, and operators.The program begins by including standard C libraries: stdio.h, stdlib.h, string.h, and ctype.h. These libraries provide functions for file handling, string manipulation, and character classification. A list of C keywords is defined in an array named keywords[]. This array includes common keywords such as int, float, char, if, else, while, for, and others.To identify whether a word is a keyword, a helper function isKeyword() is used. It compares the input word with each entry in the keyword array using strcmp(). If a match is found, it returns 1 (true), indicating the word is a keyword; otherwise, it returns 0.Another helper function, isOperator(), checks whether a given character is a basic C operator such as +, -, *, /, =, <, >, or !. These are common arithmetic and relational operators.The main() function is where the actual lexical analysis takes place. It attempts to open the file input.c for reading. If the file is not found, an error message is printed. Otherwise, the program reads the file character by character using fgetc() until the end of the file (EOF) is reached.When a character is read, the program first skips any whitespace using isspace(). Then it checks if the character is the start of an identifier or keyword using isalpha() or _. If so, it reads subsequent characters that are alphanumeric or underscores, stores them in a buffer, and uses ungetc() to put back the character that doesn’t belong to the word. It then checks if the collected string is a keyword or an identifier and prints the appropriate label.The program ignores other characters and punctuation marks for simplicity, such as semicolons, parentheses, braces, etc., although they are important in full-scale lexical analysis.In conclusion, this C program provides a simple but functional lexical analyzer that can distinguish between basic tokens in a C program. It can be extended further to support multi-character operators, string and character literals, comments, and other punctuation symbols for more complete lexical analysis. This kind of tool is useful for understanding the basics of compiler design and for educational purposes in programming language theory.

#OUTPUT


