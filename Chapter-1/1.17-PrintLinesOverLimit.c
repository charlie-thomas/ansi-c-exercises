#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */
#define LIMIT 80 /* minimum number of characters in printed lines */

int getLine(char line[], int maxline);

/* Prints all lines from the input that have more characters than LIMIT */
int main() {

    int len; /* current line length */
    char line[MAXLINE]; /* current input line */

    while ((len = getLine(line, MAXLINE)) > 0)
        if (len > LIMIT)
            printf("Length: %d\tLine: %s\n", len, line);
}

/* getline: read a line into s, return length */
int getLine(char s[],int lim) {
    int c, i;

    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}