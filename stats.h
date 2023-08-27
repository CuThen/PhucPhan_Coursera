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
 * @brief Header file
 *
 * <Add Extended Description Here>
 *
 * @author Phuc Phan
 * @date Aug 26 2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

unsigned char print_statistics(unsigned char *array, unsigned int size);

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * <Add Extended Description Here>
 *
 * @param p_array: pointer of the array
 * @param size size of the array 
 *
 * @return 
 */

void print_array(unsigned char *array, int size);
/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * <Add Extended Description Here>
 *
 * @param p_array: pointer of the array
 * @param size size of the array 
 *
 * @return 
 */

unsigned char find_median(unsigned char *array, unsigned int size);

/**
 * @brief Given an array of data and a length, returns the median value
 *
 * <Add Extended Description Here>
 *
 * @param p_array pointer of the array
 * @param size size of the array 
 *
 * @return median of the array
 */

float find_mean(unsigned char *array, unsigned int size);

/**
 * @brief Given an array of data and a length, returns the mean
 *
 * <Add Extended Description Here>
 *
 * @param p_array: pointer of the array
 * @param size size of the array 
 *
 * @return mean of the array
 */

unsigned char find_maximum(unsigned char *array, unsigned int size);

/**
 * @brief  Given an array of data and a length, returns the maximum
 *
 * <Add Extended Description Here>
 *
 * @param p_array: pointer of the array
 * @param size size of the array 
 *
 * @return 
 */

unsigned char find_minimum(unsigned char *array, unsigned int size);

/**
 * @brief  Given an array of data and a length, returns the minimum
 *
 * <Add Extended Description Here>
 *
 * @param p_array: pointer of the array
 * @param size size of the array 
 *
 * @return 
 */

void sort_array(unsigned char *array, unsigned int size);

/**
 * @brief  Given an array of data and a length, returns the minimum
 *
 * <Add Extended Description Here>
 *
 * @param p_array: pointer of the array
 * @param size size of the array 
 *
 * @return 
 */

#endif /* __STATS_H__ */
