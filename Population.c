#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int startsize;
    int endsize;
    do
    {
        startsize = get_int("Starting Size: ");
    }
    while (startsize < 9);

    // TODO: Prompt for end size
    do
    {
        endsize = get_int("Ending Size: ");
    }
    while (endsize < startsize);
    // TODO: Calculate number of years until we reach threshold
    int Years = 0;

    while (startsize < endsize)
    {
        startsize = startsize + (startsize / 3) - (startsize / 4);
        Years++;
    }

    // TODO: Print number of years
    printf("Years: %i \n", Years);
}
