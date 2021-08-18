#include<stdio.h>
#include<string.h>

int main() 
{

	char str[300], * ptr, c1, c2;
	c1=c2=0;

	printf("Enter String: ");
	gets(str);

	ptr = str;

	while (*ptr != '\0') {
		if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' || *ptr == 'A' ||
		 *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')
			++c2;
		else if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
			++c1;
		++ptr;
	}

	printf("Number of Vowels: %d", c2);

}
