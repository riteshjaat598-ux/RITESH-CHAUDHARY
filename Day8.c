#include<stdio.h>
int main(){
    char a;
    printf("ENTER THE CHARACTER:");
    scanf("%c",&a);

    if( a>='A' && a<='Z'){
        printf("'%c' IS AN UPPERCASE ALPHABET.\n",a);
    }
    else if( a>='a' && a<='z'){
        printf("'%c' IS AN LOWERCASE ALPHABET.\n",a);
    }
    else if(a>='0' && a<='9'){
        printf("'%c' IS AN DIGIT.\n",a);
    }
    else{
        printf("'%c' IS A SPECIAL CHARACTER.\n",a);
    }
    return 0;
}
