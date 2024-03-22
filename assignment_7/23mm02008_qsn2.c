#include <stdio.h>

void Delete(char arr[],  int k){
    while(k < 100){
        arr[k] = arr[k+1];
        k++;
    }
}

int main(){
    char text[100];
    printf("Enter a string: ");
    fgets(text, 100, stdin);

    int i = 0, count = 0;
    while(text[i] != '\0'){
        if((text[i] >= 97 && text[i] <= 122) || (text[i] >= 65 && text[i] <= 90)){
            i++;
            continue;
        }
        Delete(text, i);
    }
    printf("%s\n", text);
    return 0;
}