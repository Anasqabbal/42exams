  typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

void  flood_fill(char **tab, t_point size, t_point begin)
{
    static char c;
    static int  i;

    if (i == 0)
        c = tab[begin.y][begin.x];
    if (tab[begin.y][begin.x] != c)
        tab[begin.y][begin.x] = 'F';
    else if (i  &&  c = tab[begin.y][begin.x])
        return ;
    else
    {
        if (tab[begin.y][begin.x + 1] != c && tab[begin.y][begin.x + 1])
        {
            i++;
            begin.x++;
            flood_fill(tab, size, begin);
        }
        else if (tab[begin.y][begin.x - 1] != c && tab[begin.y][begin.x - 1])
        {
            i++;
            begin.x--;
            flood_fill(tab, size, begin);
        }
        else if (tab[begin.y + 1][begin.x] != c && tab[begin.y + 1][begin.x])
        {
            i++;
            begin.y++;
            flood_fill(tab, size, begin);
        }
        else if (tab[begin.y - 1][begin.x] != c && tab[begin.y - 1][begin.x])
        {
            i++;
            begin.y--;
            flood_fill(tab, size, begin);
        }
    }
}