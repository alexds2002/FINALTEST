#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(int argc, char** argv){

    //1 
    unsigned char str[256];
    uint16_t num;  
    

    FILE *finp = fopen(argv[1], "r");
    if (!finp) {
        fprintf(stderr, "Unable to open the input file!!\n");
        return 0;
    }
    FILE *fout = fopen(argv[2], "wb");
    if (!fout) {
        fprintf(stderr, "Unable to open the input file!!\n");
        return 0;
    }

    while (fread(&num, sizeof(num), 1, finp)) { 
        
        
        
        fwrite(&num, 1, 16, fout);
        
    }
    fclose(finp);
    fclose(fout);

    // 2
    // READING BINARY FILE //

    // unsigned char str[256];
    // uint16_t num;  

    // FILE *finp = fopen(argv[1], "rb");
    // if (!finp) {
    //     printf("Unable to open the input file!!\n");
    //     return 0;
    // }
    // FILE *fout = fopen(argv[2], "w");
    // if (!fout) {
    //     printf("Unable to open the input file!!\n");
    //     return 0;
    // }
    // while (fread(&num, sizeof(num), 1, finp)) { 
    //     uint16_t tempNum = (uint16_t)num;
    //     fwrite(&tempNum, sizeof(num), 1, fout);
        
    // }
    // fclose(finp);
    // fclose(fout);

    return EXIT_SUCCESS;
}