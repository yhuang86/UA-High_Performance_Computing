/*
* Name: Yichen Huang
* Email: yhuang87@crimson.ua.edu
* Course Section: CS 481
* Homework#: 1
* Instruction to Compile:
* Instruction to Execute:
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

void printGraph(int **cells, int size) {
    for(int i=1;i<size-1;i++) {
        for(int j=1;j<size-1;j++) {
            if(cells[i][j] == 0) {
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
}

int main(int argc, char **argv) {
    if(argc != 3) {
        printf("Usage: %s <SIZE> <MAX_GEN>\n",argv[0]);
        exit(-1);
    }

    //get size of problem and max generations
    int size = atoi(argv[1]) + 2;
    int max_gen = atoi(argv[2]);

    int cells[size][size];
    //initialze array
    for(int i=0;i<size;i++) {
        for(int j=0;j<size;j++) {
            cells[i][j] = 0;
        }
    }
    printGraph(cells,size);
    


    srand(time(NULL));

        


    return 0;
}