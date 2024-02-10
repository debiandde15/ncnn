#ifndef LAYER_FIX_MSA_H
#define LAYER_FIX_MSA_H

#if __GNUC__ <= 8 && __GNUC_MINOR__ < 5

#ifdef __msa_fmadd_w
#undef __msa_fmadd_w
#define __msa_fmadd_w(a, b, c) __builtin_msa_fmadd_w(c, b, a)
#endif

#ifdef __msa_fmadd_d
#undef __msa_fmadd_d
#define __msa_fmadd_d(a, b, c) __builtin_msa_fmadd_d(c, b, a)
#endif

#ifdef __msa_fmsub_w
#undef __msa_fmsub_w
#define __msa_fmsub_w(a, b, c) __builtin_msa_fmsub_w(c, b, a)
#endif

#ifdef __msa_fmsub_d
#undef __msa_fmsub_d
#define __msa_fmsub_d(a, b, c) __builtin_msa_fmsub_d(c, b, a)
#endif

#ifdef __msa_maddv_b
#undef __msa_maddv_b
#define __msa_maddv_b(a, b, c) __builtin_msa_maddv_b(c, b, a)
#endif

#ifdef __msa_maddv_h
#undef __msa_maddv_h
#define __msa_maddv_h(a, b, c) __builtin_msa_maddv_h(c, b, a)
#endif

#ifdef __msa_maddv_w
#undef __msa_maddv_w
#define __msa_maddv_w(a, b, c) __builtin_msa_maddv_w(c, b, a)
#endif

#ifdef __msa_maddv_d
#undef __msa_maddv_d
#define __msa_maddv_d(a, b, c) __builtin_msa_maddv_d(c, b, a)
#endif

#ifdef __msa_msubv_b
#undef __msa_msubv_b
#define __msa_msubv_b(a, b, c) __builtin_msa_msubv_b(c, b, a)
#endif

#ifdef __msa_msubv_h
#undef __msa_msubv_h
#define __msa_msubv_h(a, b, c) __builtin_msa_msubv_h(c, b, a)
#endif

#ifdef __msa_msubv_w
#undef __msa_msubv_w
#define __msa_msubv_w(a, b, c) __builtin_msa_msubv_w(c, b, a)
#endif

#ifdef __msa_msubv_d
#undef __msa_msubv_d
#define __msa_msubv_d(a, b, c) __builtin_msa_msubv_d(c, b, a)
#endif

#endif //GCC VERSION

#endif //LAYER_FIX_MSA_H
