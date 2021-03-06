/**
 * @file wraplibsnark.hpp
 * @author Dennis Kuhnert <dennis.kuhnert@campus.tu-berlin.de>
 * @date 2017
 */

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdint.h>

// entrypoint, wraps the whole process, probably should be removed later
bool _run_libsnark(const uint8_t* A,
                   const uint8_t* B,
                   const uint8_t* C,
                   const uint8_t* witness,
                   int constraints,
                   int variables,
                   int inputs);

#ifdef __cplusplus
} // extern "C"
#endif
