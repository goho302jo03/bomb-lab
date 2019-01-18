#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

void phase_1(char *user_input) {
    char *ans = "ubuntu";
    if(strcmp(user_input, ans)) {
        printf("Bomb explode !!!!!! hahahaha\n");
        exit(1);
    } else {
        printf("phase_1 pass!!\n");
    }
}

void phase_2(uint64_t user_input) {
    if(!(user_input ^ 0xAAAAAAAAAAAAAAAA))
        printf("phase_2 pass !!\n");
    else {
        printf("Bomb explode !!!!!! hahahaha\n");
        exit(1);
    }
}

int main() {
    printf("Start to defuse bomb!!!\n");
    char p1_input[100];
    printf("enter a string\n");
    scanf("%s", p1_input);
    phase_1(p1_input);
    printf("phase 1 defuse !!!\n");
    uint64_t p2_input;
    printf("enter a long unsigned integer\n");
    scanf("%lu", &p2_input);
    phase_2(p2_input);
    printf("phase 2 defuse !!!\n");
    return 0;
}
