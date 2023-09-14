%{
#include <stdio.h>
#include <stdlib.h>
int mark = 40; // Default passing mark
%}

%%
[0-9]+  {
           int student_mark = atoi(yytext);
           if (student_mark < mark) {
               printf("Fail\n");
           } else {
               printf("Pass\n");
           }
         }
.       { printf("Invalid input\n"); }
\n      { return 0; }
%%
int yywrap(){}
int main() {
    printf("Enter your marks: ");
    yylex();
    return 0;
}
