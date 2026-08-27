i = 1;

if (i <= 4)
{
    do
    {
        j = 1;

        if (j <= 5)
        {
            do
            {
                if ((i+j) % 2 == 0)
                    total += i*j;
                else
                    total += i+j;

                j++;
            } while (j <= 5);
        }

        i++;
    } while (i <= 4);
}