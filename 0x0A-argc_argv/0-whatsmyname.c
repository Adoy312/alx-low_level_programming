#include "main.h"

/**
 * main - prints program name
 * argc: number of arguments
 * argv: array of pointers
 * Return: 0
 */

int main(int argc __attribute__((unused)), char)
{
    printf("%s\n", *(argv + 0));
    return (0);

}
