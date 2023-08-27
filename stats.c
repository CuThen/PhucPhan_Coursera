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
 * @brief This file is used for implementation of statistics sorting
 *
 * <Add Extended Description Here>
 *
 * @author Phuc Phan
 * @date Aug 26 2023
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
  /* Statistics and Printing Functions Go Here */
  print_statistics(test, SIZE);
  print_array(test, SIZE);
  
  unsigned char median;
  median = find_median(test, SIZE);
  
  float mean;
  mean = find_mean(test, SIZE);
  printf("Mean: %f", mean);
  printf("\n");


  unsigned char maximum, minimum;
  maximum = find_maximum(test, SIZE);
  minimum = find_minimum(test, SIZE);
  printf("Max: %d", maximum);
  printf("\n");

  printf("Min: %d", minimum);
  printf("\n");
  
  sort_array(test, SIZE);
  print_array(test,SIZE);
}

/* -------------------------------------------------------------------- */
unsigned char print_statistics(unsigned char *array, unsigned int size){
  
  unsigned char minimum = array[0];
  unsigned char maximum = array[0];
  
  for (int i = 1; i < size; i++) {
    if (array[i] < minimum) {
      minimum = array[i];
    }
    if (array[i] > maximum) {
      maximum = array[i];
    }
  }

  // Calculate the mean.
  float mean = 0;
  for (int i = 0; i < size; i++) {
    mean += array[i];
  }
  mean /= size;

  // Find the median.
  unsigned char median;
  if (size % 2 == 0) {
    median = (array[size / 2] + array[size / 2 - 1]) / 2;
  } else {
    median = array[size / 2];
  }

  // Print the statistics.
  printf("The minimum value is: %d\n", minimum);

  printf("The maximum value is: %d\n", maximum);

  printf("The mean is: %.2f\n", mean);

  printf("The median is: %d\n", median);

}
/*-----------------------------------------------------------------------*/
void print_array(unsigned char *array, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}
/* -------------------------------------------------------------------- */
unsigned char find_median(unsigned char *array, unsigned int size){
  // Sort the array.
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (array[i] > array[j]) {
        unsigned char temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  // Return the middle value.
  if (size % 2 == 0) {
    return (array[size / 2] + array[size / 2 - 1]) / 2;
  } else {
    return array[size / 2];
  }
}
/* -------------------------------------------------------------------- */
float find_mean(unsigned char *array, unsigned int size){
  float mean = 0;
  for (int i = 0; i < size; i++) {
    mean += array[i];
  }
  mean /= size;
  
  return mean;
}
/* -------------------------------------------------------------------- */
unsigned char find_maximum(unsigned char *array, unsigned int size){
  unsigned char maximum = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > maximum) {
      maximum = array[i];
    }
  }
  return maximum;
}
/* -------------------------------------------------------------------- */
unsigned char find_minimum(unsigned char *array, unsigned int size){
  unsigned char minimum = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] < minimum) {
      minimum = array[i];
    }
  }
  return minimum;
}
/* -------------------------------------------------------------------- */
void sort_array(unsigned char *array, unsigned int size){
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (array[i] < array[j]) {
        unsigned char temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}
