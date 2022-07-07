#include<stdio.h>
void E();
void F();
void match(char);
char l[20];
int i=0;
int main() 
{ 
      printf("enter a string");
    scanf("%s",l);
     E(); 
    if (l[i] == '$') 
        printf("Parsing Successful");
 else 
       printf("Parsing UnSuccessful");
      return 0;
} 
void E() 
{ 
    if (l[i] == 'i') 
{ 
        match('i'); 
        F(); 
    } 
} 
  
void F()    
{ 
    if (l[i] == '+') { 
        match('+'); 
        match('i'); 
        F(); 
    } 
    else
        return; 
} 
 void match(char t) 
{ 
    if (l[i] == t) 
{ 
        i++; 
    } 
    else
        printf("Error"); 
}
