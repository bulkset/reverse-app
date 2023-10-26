#include <stdio.h>

int main() {
    char mass[50];
    int count = 0;
    int end = 0;
    printf("Please enter your word: ");
    scanf("%s", &mass);
    
    while(mass[count] != '\0'){
        count++;
    }
    end = count;
    printf("Reversed word: ");
    while(end != -1){
        printf("%c", mass[end]);
        end--;
        if(end == -1){
            printf("\n");
        }
    }
    
    return 0;
}
