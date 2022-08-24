#include <stdio.h>

void reverse(char* begin, char* last)
{
	char temp;
	while (begin < last) {
		temp = *begin;
		*begin++ = *last;
		*last-- = temp;
	}
}

void reverseWords(char* s)
{
	char* begin = NULL;
	char* temp = s;
	while (*temp)
	{
	if ((begin == NULL) &&
				(*temp != ' '))
		{
			begin = temp;
		}
		if (begin && ((*(temp + 1) == ' ') ||
			(*(temp + 1) == '\0')))
		{
			reverse(begin, temp);
			begin = NULL;
		}
		temp++;
	} //End Loop
	reverse(s, temp - 1);
}

int main()
{
	char s[] = "sun rises in the east"
	reverseWords(s);
	printf("%s", s);
	return 0;
}
