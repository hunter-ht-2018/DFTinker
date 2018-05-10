
#define get_user(x, ptr) __get_user_check((x), (ptr), sizeof(*(ptr)))
#define __get_user(x, ptr) __get_user_nocheck((x), (ptr), sizeof(*(ptr)))
#define unsafe_get_user(x, ptr, err) 
//#define __get_user_unaligned __get_user
// #define __get_user_asm(x, addr, err, instr)
// #define __get_user_asm_byte(x, addr, err)
// #define __get_user_asm_half(x, __gu_addr, err)
// #define __get_user_asm_64(x, addr, err)
// #define __get_user_asm_u64(x, ptr, retval, errret)
// #define __get_user_asm64(val, ptr)
// #define __get_user_err(x, ptr, err)
// #define __get_user_error(x, ptr, err)
// extern int __get_user_bad(void);
// extern int __get_user_1(void *);
// extern int __get_user_2(void *);
// extern int __get_user_4(void *);
// extern int __get_user_8(void *);
// extern int __get_user_32t_8(void *);
// extern int __get_user_64t_1(void *);
// extern int __get_user_64t_2(void *);
// extern int __get_user_64t_4(void *);
// #define __get_user_8(addr)
// #define __get_user_16(addr)
// #define __get_user_32(addr)	
// #define __get_user_64(addr)
// #define __get_user_unknown(val, size, ptr, err)
// #define __get_user_fn(sz, u, k)
// #define __arc_get_user_one(dst, src, op, ret)
// #define __arc_get_user_one_64(dst, src, ret)
// #define __get_user_x(__r2, __p, __e, __l, __s)
// #define __get_user_x_32t(__r2, __p, __e, __l, __s)
// #define __get_user_x_64t(__r2, __p, __e, __l, __s)
// #define __do_get_user(check, x, ptr, size, segment)
// #define __get_user_size_ex(x, ptr, size)



#define __copy_in_user(to, from, size)	__copy_user((to), (from), (size))
unsigned long __copy_user(void __user *pdst, const void *psrc, unsigned long pn)
extern unsigned long __copy_user_zeroing(void *to, const void __user *from, unsigned long n);

// static inline unsigned long __constant_copy_from_user(void *to, const void __user *from, unsigned long n)
static inline size_t copy_from_user(void *to, const void __user *from, size_t n)
// static inline unsigned long __generic_copy_from_user_nocheck(void *to, const void __user *from, unsigned long n)
#define __copy_from_user(to, from, n) __generic_copy_from_user_nocheck((to), (from), (n))
#define __copy_from_user_inatomic __copy_from_user
// static inline unsigned long __copy_from_user_inatomic_nocache(void *to,	const void __user *from, unsigned long n)
// static inline unsigned long __copy_from_user_nocache(void *to, const void __user *from, unsigned long n)
// extern long arc_copy_from_user_noinline(void *to, const void __user * from, unsigned long n);
// #define __arch_copy_from_user(to, from, n)	(memcpy(to, (void __force *)from, n), 0)
// static inline unsigned long __arc_copy_from_user(void *to, const void __user *from, unsigned long n)
// extern unsigned long __must_check arm_copy_from_user(void *to, const void __user *from, unsigned long n);
// #define __asm_copy_user_cont(to, from, ret, COPY, FIXUP, TENTRY)
// unsigned long __copy_from_user_hexagon(void *to, const void __user *from,				     unsigned long n);
// extern unsigned long raw_copy_from_user(void *to, const void __user *from, 					unsigned long n);
// extern unsigned long __copy_tofrom_user(void __user *to, const void __user *from, unsigned long size);
// #define __invoke_copy_from_user(to, from, n)
// extern size_t __copy_user_inatomic_eva(void *__to, const void *__from, size_t __n);
// extern size_t __copy_from_user_eva(void *__to, const void *__from, size_t __n);
// #define __invoke_copy_from_user_inatomic(to, from, n)
// extern unsigned long lcopy_from_user(void *, const void __user *, unsigned long);

// extern unsigned long copy_from_user_nmi(void *to, const void __user *from, unsigned long n);




// static inline long __strncpy_from_user(char *dst, const char __user *src, long count)
static inline long strncpy_from_user(char *dst, const char __user *src, long count)
// extern unsigned long __strlen_user (const char __user *);
// extern __must_check long strlen_user(const char __user *str);
// extern long __strnlen_user(const char __user *__s, long __n);
extern __must_check long strnlen_user(const char __user *str, long n);
// #define strlen_user(str)	strnlen_user((str), 0x7ffffffe)
// long strncpy_from_unsafe(char *dst, const void *unsafe_addr, long count)
// extern long arc_strncpy_from_user_noinline (char *dst, const char __user *src, long count);
// static inline long __arc_strncpy_from_user(char *dst, const char __user *src, long count)
// static inline long __arc_strnlen_user(const char __user *s, long n)
// static inline long __do_strncpy_from_user(char *dst, const char *src, long count)
// static inline long hexagon_strncpy_from_user(char *dst, const char __user *src,					     long n)
// extern long lstrnlen_user(const char __user *, long);

char *strndup_user(const char __user *s, long n)


void *memdup_user_nul(const void __user *src, size_t len)
void *memdup_user(const void __user *src, size_t len)

struct filename * getname_flags(const char __user *filename, int flags, int *empty)
struct filename * getname(const char __user * filename)