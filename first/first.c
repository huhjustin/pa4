#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int memRead = 0, memWrite = 0, cacheHit = 0, cacheMiss = 0;

/*
Cache objects
Stores Valid Bit, Tag, Cache Block 
 */
typedef struct cache{
    int validBit, tag, cacheBlock, accessCount;
} cache;

int main(int argc, char *argv[]){
    int cacheSize, assoc, blockSize, valid = 1;
    //(1) Extract cache size, input is a power of 2
    float tempCacheSize = log(atoi(argv[1]))/log(2);
    if(tempCacheSize-(int)tempCacheSize == 0){
        cacheSize = (int)tempCacheSize;
    }else {
        valid = 0;
    }
    if(cacheSize == 0){
        valid = 0;
    }
    //(2) Extracts associativity 
    if(strcmp(argv[2], "direct") == 0){
        assoc = 1;
    }else if(strcmp(argv[2], "assoc") == 0){
        assoc = cacheSize;
    }
    float tempAssoc = log(atoi(argv[2]+6))/log(2);
    if(tempAssoc-(int)tempAssoc){
        assoc = (int)tempAssoc;
    }else {
        valid = 0;
    }
    substring();
    //(3) Check to make sure cache policy is least recently used
    if(strcmp(argv[3], "lru") != 0){
        valid = 0;
    }
    //(4) Extracts block size, checks taht input is a power of 2
    float tempBlockSize = log(atoi(argv[4]))/log(2);
    if(tempBlockSize-(int)tempBlockSize == 0){
        blockSize = (int)tempBlockSize;
    }else {
        valid = 0;
    }
    if(cacheSize == 0){
        valid = 0;
    }
    //(5) Opens file for cache simulator, checks if it is a valid file

    //Make sure all input are valid, exits if not valid
    if(valid == 0){
        printf("error\n");
        return 0;
    }
}