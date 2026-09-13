#include "fizz_buzz.h"
#include <assert.h>
#include <stdio.h>

static void life_the_universe_and_everything(void)
{
    assert(fizz_buzz() == 42);
}

int main(void)
{
    life_the_universe_and_everything();
    puts("All tests passed");
}
