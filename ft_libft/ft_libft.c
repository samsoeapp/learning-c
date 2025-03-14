// ft_libft.c

#include "ft_libft.h"

int main(){
  const char str[] = "bamiislekker";
  int i = ft_strlen(str);
  printf("The str len == %d\n", i);
  // printf("the fourth char in str == %c", str[4]);

}

size_t ft_strlen (const char *s) {
  int i = 0;
  while (s[i] != '\0')
  {
    i++;
  }
  return (i);
}
