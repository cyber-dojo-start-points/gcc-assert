#include "answer_size.tests.h"
#include "hiker.h"
#include <assert.h>

void the_answer_is_three_digits_long(void)
{
    assert(answer() > 99);
}
