#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <cstdlib>

#include "myLib.h"


int add(int x, int y)
{
  return x + y;
}

int arrayOut(int size, uint8_t * arrayOutput)
{
  uint8_t *localArray;
  localArray = (uint8_t*)malloc(sizeof(uint8_t)*size);

  int i; 
  for (i = 0; i<size; i++)  localArray[i] = i % 2;
  memcpy(arrayOutput,localArray,sizeof(localArray));
  //for (i = 0; i<3; i++)  arrayOutput[i] = i;
  return 0;
}