#include <stdio.h>
#include <string.h>

int main(){
    char str[]="   today is     31st of   may 2018";
    char ptr[10][10];
    int i, tokencount, tokenlen, flag;
    
    i=0;
    tokencount=0;
    tokenlen=0;
    flag=2;
    
    while(str[i]!='\0') {
        if(str[i]!=' '){
            ptr[tokencount][tokenlen]=str[i];
            tokenlen++;
            flag=0;
        }
        else {
            ptr[tokencount][tokenlen]='\0';
            tokenlen=0;
            if (flag==0) tokencount++;
            flag=1;
        }
        i++;
    }
    
    for(i=0; i<=tokencount; i++)
        printf("%s : %d\n", ptr[i], i);
    
}





/*
#include <stdio.h>
#include <string.h>

int main(){
    char str[]="abcde";
    char* ptr;
    char word[20];
    int len=0;
    int i;
    ptr=str;
   
    i=0;
    while(str[i]!='\0') {
        len=len+1;
        i=i+1;
    }

    for (i = 0; i <= len / 2; ++i) {
        word[i] = str[len - i - 1];
        word[len - i - 1] = str[i];
    }
    word[len] = '\0';
    printf("\n%s", word);
}
*/
