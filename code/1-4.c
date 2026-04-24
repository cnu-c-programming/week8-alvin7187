#include<stdio.h>

int my_strcmp(const char *a, const char *b){
    for(int i =0;; i++){
        if(a[i] != b[i]){
            return (int)a[i] - (int)b[i];
        }
        else if(a[i]=='\0' && b[i] == '\0')
            return 0;
    }
}

int main(){
    
    printf("%d\n", my_strcmp("abc", "abcd"));
    printf("%d\n", my_strcmp("abc", "abc"));
    printf("%d\n", my_strcmp("b", "a"));

    return 0;
}
