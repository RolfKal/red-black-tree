/*
 * Copyright (c) 2019 xieqing. https://github.com/xieqing
 * May be freely redistributed, but copyright notice must be retained.
 */

#ifndef _MINUNIT_HEADER
#define _MINUNIT_HEADER
#include <time.h>

#define mu_test(_s, _c) \
do { \
    double executed; \
    clock_t start = clock(); \
	printf("#%03d %s \n", ++mu_tests, _s); \
	if (_c) { \
		printf("PASSED"); \
	} else { \
		printf("FAILED"); \
		mu_fails++; \
	} \
    executed = (double)(clock() - start) / CLOCKS_PER_SEC; \
	printf(", Duration: %.3f secs\n", executed); \
} while (0)

extern int mu_tests, mu_fails;

#endif /* _MINUNIT_HEADER */