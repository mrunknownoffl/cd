%{
#include<stdio.h>
%}
/*Rule Section*/
%%
auto|double|int|struch|break|else|long|switch|case|enum|register|typedef|char|extern|return|union|continue|for|signed|void|do|if|static|while|default|goto|sizeof|volatile|const|float|short|unsigned; {printf("keyword\n");}
^[a-zA-Z][_a-zA-Z0-9]* {printf("Identifier\n");}  
^[_][a-zA-Z][_a-zA-Z0-9]* {printf("not Identifier\n");} 
^[0-9]+ {printf("Not a Identifier\n");} 
%%
/*call the yywrap function*/
int yywrap()					
{
return 1;
}
int main(void)
{
/*call the yylex function.*/
yylex();						
return 0;
}
