#include "main.h"

<<<<<<< HEAD
/**
 * _strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return:pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
=======


/**

 * _strcat - concatenates @src to @dest

 * @src: the source string to append to @dest

 * @dest: the destiation string to be concatenated upon

 * Return:pointer to the resulting string

 */



char *_strcat(char *dest, char *src)

{

	int index = 0;

	int dest_len = 0;



	while (dest[index++])

		dest_len++;

	for (index = 0; src[index]; index++)

		dest[dest_len++] = src[index];

	return (dest);

}
>>>>>>> cb6731fad2a9e17896f65ae12bb336e5a25f1b62
