#ifndef SAYI_H
#define SAYI_H

#include <stdio.h> // printf,fgets, fopen icin
#include <string.h> // strlen icin 
#include <stdlib.h> // malloc icin

int* ikiyleCarp(int*, size_t);
void rakamlariTopla(int*, size_t);
int tumBasamaklariTopla(int*);
void kartGecerliMi(int);
char *bosluklariSil(char*);
void satirlariSil(char*);
int* charToInt(char*);

#endif