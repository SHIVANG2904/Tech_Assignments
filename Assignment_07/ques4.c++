#include<stdio.h>
#include<string.h>

int main() {
   char str[50];
    int i=0,j,k,c;
    printf("Input:");
    scanf("%s",&str);
    for(i=0;i<strlen(str);) {
        for(j=0;j<str[i+1]-'0';j++) {
            printf("%c",str[i]);
        }
    i=i+2;
    }
}
