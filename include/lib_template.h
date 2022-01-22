#pragma once

#include "sdkconfig.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef LIB_EXAMPLE
#define LIB_EXAMPLE CONFIG_LIB_EXAMPLE
#endif

// TODO
void lib_example();

#ifdef __cplusplus
}
#endif
