#include<iostream>
#include<stdlib.h>
#include<stdio.h>
struct Cat {

    struct  Cat *mother;
    struct Cat **offspring;
    unsigned int num_offspring;
    unsigned int age;
    
    struct Cat* produce_litter(struct Cat *mother, unsigned int litterSize)
    {
        age = 0;    // set age
        num_offspring = litterSize;

        struct Cat* cc = (struct Cat*)malloc(sizeof(struct Cat)*litterSize);

        if (cc == NULL) {
            printf("Memory not allocated.\n");
            exit(0);
        }

        // Get the elements
        for (int i = 0; i < litterSize; ++i) {

            cc[i] = 
        }


        mother = cc;

        return cc;
    }


};

