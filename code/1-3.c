#include<stdio.h>

char *my_strcat(char *dst, const char *src){
    for(int i = 5; i<=9; i++){
        dst[i] = src[i-5];
    }
    return 0;
}

int main(){
    char str1[20] = "Hello";
    char str2[] = "World";
    
    printf("%s\n",str1);
    my_strcat(str1, str2);
    printf("%s\n", str1);
    return 0;
}
