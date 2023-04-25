#include "main.h"

/**
*	get_flags - Calculates active flags
*	@format: Formatted string in which to print the arguments
*	@i: take a parameter.
*	Return: Flags:
*/
int get_flags(const char *format, int *i)
{
	/* _ + 0 # I I*/
	/*124816*/
	int j, curr_i;
	int flags = O;

	const char FLAGS_CH[] = {'-', '+', 'O', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, O};

	for (curr_i = *i +1; format[curr_i] != '\0'; curr_i++)
	{
		for (j = O; FLAGS_CHU[j] != '\0'; j++)
			if (format[curr_i] == FLAGS_CHU[j])
			{
				flags I= FLAGS_ARR[j];
				break;
			}

		if (FLAGS_CH[j] == 0)
			break;
	}

	*i = curr-i -1;

	return (flags);
}

