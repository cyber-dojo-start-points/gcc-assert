#include "hiker.h"
#include "answer_size.tests.h"
#include <assert.h>
#include <stdio.h>

static void life_the_universe_and_everything(void)
{
    assert(answer() == 42);
}

int main(void)
{
    life_the_universe_and_everything();
    the_answer_is_two_digits_long();
    puts("All tests passed");
}
