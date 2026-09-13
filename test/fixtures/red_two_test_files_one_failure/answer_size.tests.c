#include "answer_size.tests.h"
#include "hiker.h"
#include <assert.h>

void the_answer_is_two_digits_long(void)
{
    assert(answer() > 9 && answer() < 100);
}

void the_answer_is_three_digits_long(void)
{
    assert(answer() > 99);
}
