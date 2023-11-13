#include<stdio.h>
#include<string.h>
void main(){
 char i,c,s[10];
 printf("enter name:");
 gets(s);
 printf("enter a character:");
 scanf("%c",&c);
 for(i=0;s[i]!='\0';i++){
 	if(s[i]==c){
 		printf("%d",i);
	 }
 }
 }
