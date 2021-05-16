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
 * @file stats.h 
 * @brief Macros and def for the 1st assigment of the intro to embedded
 *
 *
 * @author Diego Delgado
 * @date 05.05.2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Print and process statistic functions from a given array
 *
 * Takes resulting statistics done on an array and print the
 * values on screen 
 * 
 * @param min: min number of array
 * @param max: max number of array
 * @param mean: mean of array
 * @param med: median of array
 *
 * @return void
 */
void print_statistics (unsigned char min, unsigned char max, float mean, unsigned char med);


/**
 * @brief Prints contents of array
 *
 * This function takes the array gived in the 1st assignment and prints it on  
 * screen.
 * 
 * @param array: first element of the array to be printed on the screen
 *
 * @return void
 */
void print_array (unsigned char *array, unsigned int counter);


/**
 * @brief Compute and find the median of the array
 *
 * This function takes the array and finds
 * its median value .
 * 
 * @param array: first element of the array to be processed
 * @param 
 *
 * @return median: median value of the array.
 */
unsigned char find_median (unsigned char *array, unsigned int counter);

/**
 * @brief Finds the mean value of the array
 *
 * This function takes the array, compute and find
 * its mean.
 * 
 * @param array: first element of the array to be processed
 *
 * @return mean: mean value of the array.
 */
float find_mean (unsigned char *array, unsigned int counter);

/**
 * @brief Finds the max value of the array
 *
 * This function takes the array and finds
 * its maximum value.
 * 
 * @param array: first element of the array to be processed
 *
 * @return max: max value of the given array.
 */
unsigned char find_maximum (unsigned char *array, unsigned int counter);

/**
 * @brief Finds the minimum of the array
 *
 * This function takes the array and finds
 * its minimum value.
 * 
 * @param array: first element of the array to be processed
 *
 * @return minimum: minimum value of the given array.
 */
unsigned char find_minimum (unsigned char *array, unsigned int counter);

/**
 * @brief Sorts the given array from the largest to smallest
 *
 * This function takes the array and its length, then it sorts
 * the array from the largest to the smallest value using a bubble sort algorithm and returns the sorted array.
 * 
 * @param array: first element of the array to be processed
 *
 * @return median: median value of the given array.
 */
void sort_array (unsigned char *array, unsigned int counter);

#endif /* __STATS_H__ */
