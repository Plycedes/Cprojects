#include<stdio.h> 
#include<string.h> 
void main() 
{ 
char string[30],string1[30]; 
printf("enter the string:\n"); 
scanf("%s",string); 
strcpy(string1,string); 
strrev(string); 
if(strcmp(string1,string)==0) 
{ 
printf("string is palendrome"); 
} 
else 
{ 
printf("string is not palendrome"); 
} 
}