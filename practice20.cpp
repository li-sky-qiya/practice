#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char* string)
{
	char tmp = *string;
	int len = my_strlen(string);
	*string = *(string + len - 1);
	*(string + len - 1) = '\0';
	if (my_strlen(string + 1) >= 2)
	{
		reverse_string(string + 1);
	}
	*(string + len - 1) = tmp;
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}