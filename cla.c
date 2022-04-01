#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>

int main(int argc, char**argv, char* env[]){

    int opt, num1 = 0, num2 = 0, num3 = 0, result = 0;
    char* user = getenv("USER");
    while((opt = getopt(argc, argv, ":a:b:c:")) != -1){
        // printf("HERE");
        switch (opt)
        {
            case 'a':
                sscanf(optarg, "%d", &num1);

                break;
            
            case 'b':
                sscanf(optarg, "%d", &num2);

                break;

            case 'c':
                sscanf(optarg, "%d", &num3);
                break;

            case '?':
                printf("Missing arg value %c\n", optopt);
            
            case ':':
                printf("Unknown argument\n");
            
        }
    }

    result = (num1 - num2) * num3;
    printf("%s %d\n", user, result);
    return 0;
}