#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    printf("=== CHARACTER TESTS ===\n");
    printf("ft_isalpha('a') = %d, isalpha('a') = %d\n", ft_isalpha('a'), isalpha('a'));
    printf("ft_isdigit('5') = %d, isdigit('5') = %d\n", ft_isdigit('5'), isdigit('5'));
    printf("ft_isalnum('a') = %d, isalnum('a') = %d\n", ft_isalnum('a'), isalnum('a'));
    printf("ft_isascii(128) = %d, isascii(128) = %d\n", ft_isascii(128), isascii(128));
    printf("ft_isprint('!') = %d, isprint('!') = %d\n", ft_isprint('!'), isprint('!'));
    printf("ft_toupper('a') = %c, toupper('a') = %c\n", ft_toupper('a'), toupper('a'));
    printf("ft_tolower('A') = %c, tolower('A') = %c\n", ft_tolower('A'), tolower('A'));

    printf("\n=== STRING TESTS ===\n");
    char str1[20] = "Hello";
    char str2[20] = "World";
    char empty[1] = "";

    // now using the variables so no warnings
    printf("ft_strlen(str1) = %zu, strlen(str1) = %zu\n", ft_strlen(str1), strlen(str1));
    printf("ft_strlen(empty) = %zu, strlen(empty) = %zu\n", ft_strlen(empty), strlen(empty));

    printf("ft_strchr(str1, 'e') = %s, strchr(str1, 'e') = %s\n",
           ft_strchr(str1, 'e'), strchr(str1, 'e'));
    printf("ft_strrchr(str1, 'l') = %s, strrchr(str1, 'l') = %s\n",
           ft_strrchr(str1, 'l'), strrchr(str1, 'l'));

    printf("ft_strncmp(str1,str2,3) = %d, strncmp(str1,str2,3) = %d\n",
           ft_strncmp(str1,str2,3), strncmp(str1,str2,3));

    printf("ft_strnstr('Hello World', 'World', 11) = %s\n",
           ft_strnstr("Hello World","World",11));
    printf("ft_strnstr('Hello World', 'World', 5) = %s\n",
           ft_strnstr("Hello World","World",5));

    char dst[20];
    ft_strlcpy(dst, "CopyMe", 20);
    printf("ft_strlcpy: dst = '%s'\n", dst);

    ft_strlcat(dst, "!!!", 20);
    printf("ft_strlcat: dst = '%s'\n", dst);

    // ft_strdup test commented out for now
    // char *dup = ft_strdup("Duplicate");
    // printf("ft_strdup: '%s'\n", dup);
    // free(dup);

    printf("\n=== MEMORY TESTS ===\n");
    char buf[10] = {0};
    ft_memset(buf, 'A', 10);
    printf("ft_memset: ");
    for (int i = 0; i < 10; i++) printf("%c", buf[i]);
    printf("\n");

    ft_bzero(buf, 10);
    printf("ft_bzero: ");
    for (int i = 0; i < 10; i++) printf("%d ", buf[i]);
    printf("\n");

    char src[10] = "123456789";
    ft_memcpy(buf, src, 9);
    buf[9] = '\0';
    printf("ft_memcpy: %s\n", buf);

    char overlap[20] = "abcdefgh";
    ft_memmove(overlap+2, overlap, 8);
    overlap[10] = '\0';
    printf("ft_memmove: %s\n", overlap);

    printf("ft_memchr(buf,'3',9) = %s\n", (char *)ft_memchr(buf,'3',9));
    printf("ft_memcmp('abc','abd',3) = %d, memcmp('abc','abd',3) = %d\n",
           ft_memcmp("abc","abd",3), memcmp("abc","abd",3));

    printf("\n=== CONVERSION TESTS ===\n");
    printf("ft_atoi('42') = %d, atoi('42') = %d\n", ft_atoi("42"), atoi("42"));
    printf("ft_atoi('   -42') = %d, atoi('   -42') = %d\n", ft_atoi("   -42"), atoi("   -42"));
    printf("ft_atoi('   +42abc') = %d, atoi('   +42abc') = %d\n", ft_atoi("   +42abc"), atoi("   +42abc"));
    printf("ft_atoi('--42') = %d, atoi('--42') = %d\n", ft_atoi("--42"), atoi("--42"));

    return 0;
}
