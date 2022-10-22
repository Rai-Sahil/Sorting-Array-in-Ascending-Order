#include <stdio.h>
#include <string.h>

int main() {
    char user_input[200];

    fgets(user_input, sizeof user_input, stdin);

    for(int loopRunTime = 0; loopRunTime < strlen(user_input); loopRunTime++){
        for (int index = 0; index < strlen(user_input) - 1; index++){
            if (user_input[index] > user_input[index + 1]){
                char temp = user_input[index];
                user_input[index] = user_input[index + 1];
                user_input[index + 1] = temp;
            }
        }
    }
    
    puts(user_input);
}
