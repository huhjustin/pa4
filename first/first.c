#include <stdio.h>
#include <math.h>

int memRead = 0, memWrite = 0, cacheHit = 0, cacheMiss = 0;

/*
Cache objects
Stores Valid Bit, Tag, Cache Block 
 */
typedef struct cache{
    int validBit, tag, cacheBlock;
} cache;

int main(int argc, char *argv[]){
    int cacheSize = 0;
    for(int i=0; argv[i] != NULL; i++){
        printf("%s", argv[i]);
        printf("\n");
    }
}