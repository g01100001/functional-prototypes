#include <stdio.h>
#include <stdlib.h>

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    if (!s)  // Check for null input
        return NULL;

    int s_len = 0;
    while (s[s_len] != '\0')  // Calculate source string length
        s_len++;

    if (start >= s_len)  // Check if start is out of bounds
        return NULL;

    if (start + len > s_len)  // Adjust length if it exceeds source string
        len = s_len - start;

    char *sub = malloc(len + 1);  // Allocate memory for ft_substring
    if (!sub)
        return NULL;

    int i = 0;
    while (i < len) {  // Replace for loop with while loop
        sub[i] = s[start + i];
        i++;
    }
    sub[len] = '\0';  // Null-terminate the ft_substring

    return sub;
}
/*
int main(void) {
    char *str = "It's a string";
    char *ft = ft_substr(str, 7, 6);

    if (ft) {
        printf("Substring: %s\n", ft);
        free(ft);  // Free allocated memory
    }

    return 0;
}
*/