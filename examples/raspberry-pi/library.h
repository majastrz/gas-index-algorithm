/*
Use the following command to build the shared library that wraps the gas index algorithm:
make gas_index_algorithm_lib
*/

#ifndef LIBRARY_H_
#define LIBRARY_H_

#include <stdint.h>

#include "sensirion_gas_index_algorithm.h"

extern void init(void);

extern int32_t process(int32_t voc_raw_value);

#endif  // LIBRARY_H_