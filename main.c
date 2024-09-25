#include "monty.h"
bus_t bus;
/**
 * main - entry point for the Monty bytecode interpreter
 * @argc: argument count
 * @argv: argument vector
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
int main(int argc, char **argv)
{
stack_t *kichwa = NULL;
unsigned int hesabu = 0;
char line[1024]; /* Buffer size for reading lines */
size_t n = sizeof(line);

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}

bus.file = fopen(argv[1], "r");
if (!bus.file)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}

/* Use fgets instead of getline */
while (fgets(line, n, bus.file) != NULL)
{
bus.content = line;
hesabu++;
execute_opcode(line, &kichwa, hesabu);
}

free_stack(kichwa);
fclose(bus.file);
return (EXIT_SUCCESS);
}

/**
 * execute_opcode - executes the opcode from the bytecode
 * @line: the line read from the file
 * @kichwa: pointer to the head of the stack
 * @hesabu: line number
 * Return: no return
 */
void execute_opcode(char *line, stack_t **kichwa, unsigned int hesabu)
{
char *opcode;

opcode = strtok(line, " \n");
if (opcode == NULL || opcode[0] == '#')
return;

bus.arg = strtok(NULL, " \n");
if (strcmp(opcode, "push") == 0)
push(kichwa, hesabu);
else if (strcmp(opcode, "pall") == 0)
pall(kichwa, hesabu);
else if (strcmp(opcode, "pint") == 0)
pint(kichwa, hesabu);
else if (strcmp(opcode, "pop") == 0)
pop(kichwa, hesabu);
else if (strcmp(opcode, "add") == 0)
add(kichwa, hesabu);
else if (strcmp(opcode, "swap") == 0)
swap(kichwa, hesabu);
else if (strcmp(opcode, "nop") == 0)
nop(kichwa, hesabu);
else
{
fprintf(stderr, "L%d: unknown instruction %s\n", hesabu, opcode);
free_stack(*kichwa);
fclose(bus.file);
free(bus.content);
exit(EXIT_FAILURE);
}
}
