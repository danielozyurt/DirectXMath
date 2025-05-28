#pragma once

#ifndef fabsf
#define fabsf(x) __builtin_fabsf(x)
#endif

#ifndef isnan
#define isnan(x) __builtin_isnan(x)
#endif

#ifndef isinf
#define isinf(x) __builtin_isinf(x)
#endif

#ifndef floorf
#define floorf(x) __builtin_floorf(x)
#endif

#ifndef modff
#define modff(x, y) __builtin_modff(x, y)
#endif

#ifndef ceilf
#define ceilf(x) __builtin_ceilf(x)
#endif

#ifndef sqrtf
#define sqrtf(x) __builtin_sqrtf(x)
#endif

#ifndef exp2f
#define exp2f(x) __builtin_exp2f(x)
#endif

#ifndef powf
#define powf(x, y) __builtin_powf((x), (y))
#endif

#ifndef expf
#define expf(x) __builtin_expf(x)
#endif

#ifndef log2f
#define log2f(x) __builtin_log2f(x)
#endif

#ifndef log10f
#define log10f(x) __builtin_log10f(x)
#endif

#ifndef logf
#define logf(x) __builtin_logf(x)
#endif

#ifndef sinf
#define sinf(x) __builtin_sinf(x)
#endif

#ifndef cosf
#define cosf(x) __builtin_cosf(x)
#endif

#ifndef tanf
#define tanf(x) __builtin_tanf(x)
#endif

#ifndef sinhf
#define sinhf(x) __builtin_sinhf(x)
#endif

#ifndef coshf
#define coshf(x) __builtin_coshf(x)
#endif

#ifndef tanhf
#define tanhf(x) __builtin_tanhf(x)
#endif

#ifndef asinf
#define asinf(x) __builtin_asinf(x)
#endif

#ifndef acosf
#define acosf(x) __builtin_acosf(x)
#endif

#ifndef atanf
#define atanf(x) __builtin_atanf(x)
#endif

#ifndef atan2f
#define atan2f(y, x) __builtin_atan2f(y, x)
#endif
