//****************************************************************************************************************************
//Program name: "Random Products". This program generates random values and populates an array with those values             *
// it also sorts and normalizes said values inside the array.                                                                *
//This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License  *
//version 3 as published by the Free Software Foundation.  This program is distributed in the hope that it will be useful,   *
//but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See   *
//the GNU General Public License for more details A copy of the GNU General Public License v3 is available here:             *
//<https://www.gnu.org/licenses/>.                                                                                           *
//****************************************************************************************************************************

//Author: Adam Kaci
//Author email: adamkaci3@csu.fullerton.edu
//Program name: Arrays of floating point numbers
//Programming languages: Two modules in C, five in X86, and one in bash.
//Date program began: 2024-April-1
//Date of last update: 2024-April-14
//Files in this program: executive.asm, fill_random_array.asm, isnan.asm, main.c, normalize_array.asm, r.sh, show_array.asm, sort.c
//Testing: Alpha testing completed.  All functions are correct.
//Status: Ready for release to the customers

//Purpose of this program:
//  This program is the main frontend that communicates with all of the backend functions

//This file
//  File name: main.c
//  Language: C language.
//  Max page width: 124 columns
//  Compile: gcc  -m64 -Wall -no-pie -o main.o -std=c2x -c main.c
//  Link: gcc -m64 -no-pie -o learn.out executive.o fill_random_array.o isnan.o normalize_array.o show_array.o main.o sort.o

#include <stdio.h>
#include <string.h>

extern void executive(); 

int main() {
    printf("Welcome to Random Products, LLC.\n");
    printf("This software is maintained by Adam Kaci\n");

    executive();

    printf("A zero will be returned to the operating system.\n");
    return 0;
}