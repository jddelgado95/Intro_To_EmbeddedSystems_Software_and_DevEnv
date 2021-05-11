/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief 1st assignment Intro Embedded
 *
 * This file includes all required functions asked in the 1st assigment
 *
 * @author Diego Delgado
 * @date 05.05.2021
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char min = 0;
  float mean = 0;
  unsigned char med = 0;
  unsigned char max = 0;

  /* Statistics and Printing Functions Go Here */
  printf("Original array: \n");
  print_array(&test, SIZE);
  med = find_median(&test, SIZE);
  mean = find_mean(&test, SIZE);
  max = find_maximum(&test, SIZE);
  min = find_minimum(&test, SIZE);
  print_statistics(min, max, mean, med);
  sort_array(&test, SIZE);
  printf("After some magic: \n");
  print_array(&test, SIZE);
}

void print_statistics (unsigned char min, unsigned char max, float mean, unsigned char med){
  printf("The minimum is %d \n", min);
  printf("The maximum is %d \n", max);
  printf("The mean is %f \n", mean);
  printf("The median is %d \n", med);
}


void print_array (unsigned char *array, unsigned int counter){
  for (int i=0; i<counter; i++){
    printf("%d,", *(array + i));
  }
  printf("\n");
}

unsigned char find_median (unsigned char *array, unsigned int counter){
  unsigned char med = 0;
  med = *(array + (counter / 2) -1);
  return med;
}

float find_mean (unsigned char *array, unsigned int counter){
  unsigned int store = 0; // store variable
  float mean = 0;
  for (int i=0; i<counter; i++){
    store = store + array[i] /* *(array + i) */;
  }
  printf("acc = %d \n", store);
  mean = store / ((float) counter); //stores 
  return mean;
}

unsigned char find_maximum (unsigned char *array, unsigned int counter){
  unsigned char max = *array; // initalize max variable
  for (int i=1; i<counter; i++){ // start loop
    if (*(array + i) > max){
      max = *(array + i);
    }
    else {} // Nothing.
  }
  return max;
}

unsigned char find_minimum (unsigned char *array, unsigned int counter){
  unsigned char min = *array; // initalize minimum variable
  for (int i=1; i<counter; i++){ // starts loop
    if (*(array + i) < min){
      min = *(array + i);
    }
    else {} // Nothing
  }
  return min;
}

void sort_array (unsigned char *array, unsigned int counter){
  char flag = 0; //indicates if swap process has occurred in the loop
  unsigned char temporal;
  do {
    flag = 0;
    for (int index=0; index<counter; index++){
      if (array[index] > array[index +1] || array[index] == array[index +1]) {
        continue;
      }
      else if (array[index] < array[index +1]) {
        temporal = array[index];
        array[index] = array[index+1];
        array[index+1] = temporal;

        flag = 1; // swap process has ocurred
      }
    }
  }
  while (flag ==1); 
}
