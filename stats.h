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
 * @brief Header file for the 1st assignment. 
 *  Performs statistical analysis on a dataset given in the 1st assignment.
 *
 * 
 *
 * @author Diego Delgado jdiegodelgado20
 * @date  13.05.2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief A function that prints the statistics operations
 *
 * @param array: The array containing the dataset of unsigned chars
 * @param length: The length of the array
 *
 * @return NULL
 */
void print_statistics(unsigned char array[], unsigned int length);


/** 
 * @brief Prints the array on screen
 *
 * @param array: An array of unsigned chars
 * @param length: The length of the array
 *
 * @return NULL
 */
void print_array(unsigned char array[], unsigned int length);


/** 
 * @brief Returns the median value using the array given in the assignment
 *
 * @param array: An array of unsigned chars
 * @param length: The length of the array
 *
 * @return median: The median of the array
 */
unsigned char find_median(unsigned char array[], unsigned int length);


/** 
 * @brief Returns the min value using the array given in the assignment
 *
 * @param array: An array of unsigned chars
 * @param length: The length of the array
 *
 * @return min:The min of the array
 */
unsigned char find_min(unsigned char array[], unsigned int length);


/** 
 * @brief Returns the max value using the array given in the assignment
 *
 * @param array: An array of unsigned chars
 * @param length: The length of the array
 *
 * @return mmax: The max of the array
 */
unsigned char find_max(unsigned char array[], unsigned int length);


/** 
 * @brief Returns the mean value using the array given in the assignment
 *
 * @param array: An array of unsigned chars
 * @param length: The length of the array
 *
 * @return mean:The mean of the array
 */
unsigned char find_mean(unsigned char array[], unsigned int length);


/** 
 * @brief Sorts the array using selection sort
 *
 * Selection sort is a good method to implement in embedded
 *
 * @param array: An array of unsigned chars
 * @param length: The length of the array
 */
void sort_array(unsigned char array[], unsigned int length);

#endif /* __STATS_H__ */