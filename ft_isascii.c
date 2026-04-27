#include <libft.h>

int ft_isascii(int c)
{
  int  state;

  state = 0;
  if (c >= 0 && c <= 127)
    state  = c;
  return (state);
}
