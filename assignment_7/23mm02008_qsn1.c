#include <stdio.h>

int main(){
    char text[101], ch;
    printf("Enter a string: ");
    fgets(text, 100, stdin);

    printf("Enter a character: ");
    scanf("%c", &ch);

    int i = 0, count = 0;
    while(text[i] != '\0'){
        if(text[i] == ch)
            count++;
        i++;
    }

    printf("Frequency of %c is: %d\n", ch, count);

    return 0;
}