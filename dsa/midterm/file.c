#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE* file = fopen("test.txt" , "w");
    fprintf(file, "Writing this in file");
    fclose(file);
    return 0;
}