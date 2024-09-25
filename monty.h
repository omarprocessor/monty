#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* Define the structure for the stack */
typedef struct stack_s
{
	int n;
	struct stack_s *next;
	struct stack_s *prev;
} stack_t;

/* Define the structure for bus */
typedef struct bus_s
{
	char *content;
	FILE *file; 
	char *arg; 
	int lifi;
} bus_t;

/* Global variable */
extern bus_t bus;

/* Function prototypes */
void addnode(stack_t **kichwa, int n);
void addqueue(stack_t **kichwa, int n);
void push(stack_t **kichwa, unsigned int hesabu);
void pall(stack_t **kichwa, unsigned int hesabu);
void add(stack_t **kichwa, unsigned int hesabu);
void swap(stack_t **kichwa, unsigned int hesabu);
void nop(stack_t **kichwa, unsigned int hesabu);
void free_stack(stack_t *kichwa);
void execute_opcode(char *line, stack_t **kichwa, unsigned int hesabu);

#endif /* MONTY_H */

