#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

  typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

void fill_it(char **tab, t_point size, t_point begin, char c)
{
	if (begin.y < 0 || begin.y >= size.y || begin.x < 0 || begin.x >= size.x || tab[begin.y][begin.x] != c)
		return ;
	tab[begin.y][begin.x] = 'F';
	fill_it(tab, size, (t_point){begin.x + 1, begin.y}, c);
	fill_it(tab, size, (t_point){begin.x - 1, begin.y}, c);
	fill_it(tab, size, (t_point){begin.x, begin.y + 1}, c);
	fill_it(tab, size, (t_point){begin.x, begin.y - 1}, c);
}


void  flood_fill(char **tab, t_point size, t_point begin)
{
	fill_it(tab, size, begin, tab[begin.y][begin.x]);
}