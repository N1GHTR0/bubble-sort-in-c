void my_bubblesort(int *str, int len)
{
    int keeper;
    int x;
    int y;

    x = 0;
    while(x < len)
    {
        y = x + 1;
        while(y < len)
        {
            if (str[x] > str[y])
            {
                keeper = str[x];
                str[x] = str[y];
                str[y] = keeper;
            }
            y++;
        }
        x++;
    }
}