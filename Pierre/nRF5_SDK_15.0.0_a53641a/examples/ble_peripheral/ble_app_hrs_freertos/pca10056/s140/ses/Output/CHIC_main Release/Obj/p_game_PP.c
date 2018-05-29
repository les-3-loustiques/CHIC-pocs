# 1 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c"
# 1 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.h" 1



# 1 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h" 1



# 1 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h" 1
# 44 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
# 1 "../../../../../../modules/nrfx/nrfx.h" 1
# 44 "../../../../../../modules/nrfx/nrfx.h"
# 1 "../../../../../../integration/nrfx/nrfx_config.h" 1
# 45 "../../../../../../integration/nrfx/nrfx_config.h"
# 1 "../config/sdk_config.h" 1
# 46 "../../../../../../integration/nrfx/nrfx_config.h" 2
# 45 "../../../../../../modules/nrfx/nrfx.h" 2
# 1 "../../../../../../modules/nrfx/drivers/nrfx_common.h" 1
# 44 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdint.h" 1 3 4
# 15 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdint.h" 3 4

# 15 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdint.h" 3 4
typedef signed char int8_t;
typedef unsigned char uint8_t;




typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
# 36 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdint.h" 3 4
typedef signed long long int64_t;
typedef unsigned long long uint64_t;


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;

typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int32_t int_fast8_t;
typedef int32_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;

typedef uint32_t uint_fast8_t;
typedef uint32_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;

typedef int32_t intptr_t;
typedef uint32_t uintptr_t;
# 86 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdint.h" 3 4
typedef int64_t intmax_t;
typedef uint64_t uintmax_t;
# 45 "../../../../../../modules/nrfx/drivers/nrfx_common.h" 2
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stddef.h" 1 3 4
# 15 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stddef.h" 3 4
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/__crossworks.h" 1 3 4
# 44 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/__crossworks.h" 3 4
typedef __builtin_va_list __va_list;
# 94 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/__crossworks.h" 3 4
struct __mbstate_s {
  int __state;
  long __wchar;
};

typedef int (__RAL_mb_encode_t)(char *s, unsigned wc, struct __mbstate_s *codec);
typedef int (__RAL_mb_decode_t)(unsigned *pwc, const char *s, unsigned len, struct __mbstate_s *codec);

typedef struct {

  const char *decimal_point;
  const char *thousands_sep;
  const char *grouping;

  const char *int_curr_symbol;
  const char *currency_symbol;
  const char *mon_decimal_point;
  const char *mon_thousands_sep;
  const char *mon_grouping;
  const char *positive_sign;
  const char *negative_sign;

  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
  char int_p_cs_precedes;
  char int_n_cs_precedes;
  char int_p_sep_by_space;
  char int_n_sep_by_space;
  char int_p_sign_posn;
  char int_n_sign_posn;




  const char *day_names;
  const char *abbrev_day_names;
  const char *month_names;
  const char *abbrev_month_names;
  const char *am_pm_indicator;
  const char *date_format;
  const char *time_format;
  const char *date_time_format;
} __RAL_locale_data_t;

enum {
  __RAL_WC_ALNUM = 1,
  __RAL_WC_ALPHA,
  __RAL_WC_CNTRL,
  __RAL_WC_DIGIT,
  __RAL_WC_GRAPH,
  __RAL_WC_LOWER,
  __RAL_WC_UPPER,
  __RAL_WC_SPACE,
  __RAL_WC_PRINT,
  __RAL_WC_PUNCT,
  __RAL_WC_BLANK,
  __RAL_WC_XDIGIT
};

enum {
  __RAL_WT_TOLOWER = 1,
  __RAL_WT_TOUPPER
};

typedef struct {

  int (*__isctype)(int, int);
  int (*__toupper)(int);
  int (*__tolower)(int);


  int (*__iswctype)(long, int);
  long (*__towupper)(long);
  long (*__towlower)(long);


  int (*__wctomb)(char *s, unsigned wc, struct __mbstate_s *state);
  int (*__mbtowc)(unsigned *pwc, const char *s, unsigned len, struct __mbstate_s *state);
} __RAL_locale_codeset_t;

typedef struct {
  const char *name;
  const __RAL_locale_data_t *data;
  const __RAL_locale_codeset_t *codeset;
} __RAL_locale_t;



typedef struct __locale_s {
  const __RAL_locale_t *__category[5];
} *__locale_t;


const __RAL_locale_t *__user_find_locale(const char *locale);
# 207 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/__crossworks.h" 3 4
const __RAL_locale_t *__RAL_find_locale(const char *locale);







const __RAL_locale_t *__RAL_global_locale_category(int __category);







const __RAL_locale_t *__RAL_locale_category(__locale_t __locale, int __category);






extern struct __locale_s __RAL_global_locale;






extern const __RAL_locale_t __RAL_c_locale;


extern const __RAL_locale_codeset_t __RAL_codeset_ascii;
extern const __RAL_locale_codeset_t __RAL_codeset_utf8;

extern const unsigned char __RAL_ascii_ctype_map[128];

extern const char __RAL_c_locale_day_names[];
extern const char __RAL_c_locale_abbrev_day_names[];
extern const char __RAL_c_locale_month_names[];
extern const char __RAL_c_locale_abbrev_month_names[];

extern const char __RAL_data_utf8_period[];
extern const char __RAL_data_utf8_comma[];
extern const char __RAL_data_utf8_space[];
extern const char __RAL_data_utf8_plus[];
extern const char __RAL_data_utf8_minus[];
extern const char __RAL_data_empty_string[];

const char *__RAL_string_list_decode(const char *str, int index);
int __RAL_string_list_encode(const char *list, const char *str);


void __RAL_init_mbstate(struct __mbstate_s *state);

int __RAL_ascii_wctomb(char *s, unsigned wc, struct __mbstate_s *state);
int __RAL_ascii_mbtowc(unsigned *pwc, const char *s, unsigned len, struct __mbstate_s *state);

int __RAL_utf8_wctomb(char *s, unsigned wc, struct __mbstate_s *state);
int __RAL_utf8_mbtowc(unsigned *pwc, const char *s, unsigned len, struct __mbstate_s *state);

int __RAL_mb_max(const struct __locale_s *loc);

struct timeval;


int __RAL_compare_locale_name(const char *str0, const char *str1);


extern int (*__user_set_time_of_day)(const struct timeval *tp);
extern int (*__user_get_time_of_day)(struct timeval *tp);


typedef struct { unsigned short min, max, map; } __RAL_unicode_map_bmp_range_t;
typedef struct { unsigned short cp, map; } __RAL_unicode_map_bmp_singleton_t;


typedef struct { unsigned short min, max; } __RAL_unicode_set_bmp_range_t;
typedef struct { long min, max; } __RAL_unicode_set_nonbmp_range_t;


int __RAL_unicode_iswctype(long ch, int ty);
long __RAL_unicode_towupper(long ch);
long __RAL_unicode_towlower(long ch);


int __RAL_unicode_map_range_search(const void *k0, const void *k1);
int __RAL_unicode_map_singleton_search(const void *k0, const void *k1);


int __RAL_unicode_set_bmp_range_search(const void *k0, const void *k1);
int __RAL_unicode_set_nonbmp_range_search(const void *k0, const void *k1);

typedef const char * (*__RAL_error_decoder_fn_t)(int error);

typedef struct __RAL_error_decoder_s
{
  __RAL_error_decoder_fn_t decode;
  struct __RAL_error_decoder_s *next;
} __RAL_error_decoder_t;

void __RAL_register_error_decoder(__RAL_error_decoder_t *decoder);

extern __RAL_error_decoder_t *__RAL_error_decoder_head;

const char *__RAL_decode_error(int num);
# 16 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stddef.h" 2 3 4







typedef unsigned size_t;






typedef int ptrdiff_t;
# 45 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stddef.h" 3 4
typedef unsigned wchar_t;
# 46 "../../../../../../modules/nrfx/drivers/nrfx_common.h" 2
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdbool.h" 1 3 4
# 47 "../../../../../../modules/nrfx/drivers/nrfx_common.h" 2

# 1 "../../../../../../modules/nrfx/mdk/nrf.h" 1
# 79 "../../../../../../modules/nrfx/mdk/nrf.h"
# 1 "../../../../../../modules/nrfx/mdk/nrf52840.h" 1
# 74 "../../../../../../modules/nrfx/mdk/nrf52840.h"

# 74 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef enum {

  Reset_IRQn = -15,
  NonMaskableInt_IRQn = -14,
  HardFault_IRQn = -13,
  MemoryManagement_IRQn = -12,

  BusFault_IRQn = -11,

  UsageFault_IRQn = -10,
  SVCall_IRQn = -5,
  DebugMonitor_IRQn = -4,
  PendSV_IRQn = -2,
  SysTick_IRQn = -1,

  POWER_CLOCK_IRQn = 0,
  RADIO_IRQn = 1,
  UARTE0_UART0_IRQn = 2,
  SPIM0_SPIS0_TWIM0_TWIS0_SPI0_TWI0_IRQn= 3,
  SPIM1_SPIS1_TWIM1_TWIS1_SPI1_TWI1_IRQn= 4,
  NFCT_IRQn = 5,
  GPIOTE_IRQn = 6,
  SAADC_IRQn = 7,
  TIMER0_IRQn = 8,
  TIMER1_IRQn = 9,
  TIMER2_IRQn = 10,
  RTC0_IRQn = 11,
  TEMP_IRQn = 12,
  RNG_IRQn = 13,
  ECB_IRQn = 14,
  CCM_AAR_IRQn = 15,
  WDT_IRQn = 16,
  RTC1_IRQn = 17,
  QDEC_IRQn = 18,
  COMP_LPCOMP_IRQn = 19,
  SWI0_EGU0_IRQn = 20,
  SWI1_EGU1_IRQn = 21,
  SWI2_EGU2_IRQn = 22,
  SWI3_EGU3_IRQn = 23,
  SWI4_EGU4_IRQn = 24,
  SWI5_EGU5_IRQn = 25,
  TIMER3_IRQn = 26,
  TIMER4_IRQn = 27,
  PWM0_IRQn = 28,
  PDM_IRQn = 29,
  MWU_IRQn = 32,
  PWM1_IRQn = 33,
  PWM2_IRQn = 34,
  SPIM2_SPIS2_SPI2_IRQn = 35,
  RTC2_IRQn = 36,
  I2S_IRQn = 37,
  FPU_IRQn = 38,
  USBD_IRQn = 39,
  UARTE1_IRQn = 40,
  QSPI_IRQn = 41,
  CRYPTOCELL_IRQn = 42,
  PWM3_IRQn = 45,
  SPIM3_IRQn = 47
} IRQn_Type;
# 152 "../../../../../../modules/nrfx/mdk/nrf52840.h"
# 1 "../../../../../../components/toolchain/cmsis/include/core_cm4.h" 1
# 210 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
# 1 "../../../../../../components/toolchain/cmsis/include/core_cmInstr.h" 1
# 61 "../../../../../../components/toolchain/cmsis/include/core_cmInstr.h"
# 1 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 1
# 40 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"
# 58 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline void __enable_irq(void)
{
  __asm volatile ("cpsie i" : : : "memory");
}







__attribute__( ( always_inline ) ) static inline void __disable_irq(void)
{
  __asm volatile ("cpsid i" : : : "memory");
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline void __set_CONTROL(uint32_t control)
{
  __asm volatile ("MSR control, %0" : : "r" (control) : "memory");
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_IPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_APSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}
# 134 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_xPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_PSP(void)
{
  register uint32_t result;

  __asm volatile ("MRS %0, psp\n" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline void __set_PSP(uint32_t topOfProcStack)
{
  __asm volatile ("MSR psp, %0\n" : : "r" (topOfProcStack) : "sp");
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_MSP(void)
{
  register uint32_t result;

  __asm volatile ("MRS %0, msp\n" : "=r" (result) );
  return(result);
}
# 188 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm volatile ("MSR msp, %0\n" : : "r" (topOfMainStack) : "sp");
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, primask" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline void __set_PRIMASK(uint32_t priMask)
{
  __asm volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}
# 226 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline void __enable_fault_irq(void)
{
  __asm volatile ("cpsie f" : : : "memory");
}







__attribute__( ( always_inline ) ) static inline void __disable_fault_irq(void)
{
  __asm volatile ("cpsid f" : : : "memory");
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_BASEPRI(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, basepri" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline void __set_BASEPRI(uint32_t value)
{
  __asm volatile ("MSR basepri, %0" : : "r" (value) : "memory");
}
# 274 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline void __set_BASEPRI_MAX(uint32_t value)
{
  __asm volatile ("MSR basepri_max, %0" : : "r" (value) : "memory");
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_FAULTMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, faultmask" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline void __set_FAULTMASK(uint32_t faultMask)
{
  __asm volatile ("MSR faultmask, %0" : : "r" (faultMask) : "memory");
}
# 314 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_FPSCR(void)
{

  uint32_t result;


  __asm volatile ("");
  __asm volatile ("VMRS %0, fpscr" : "=r" (result) );
  __asm volatile ("");
  return(result);



}







__attribute__( ( always_inline ) ) static inline void __set_FPSCR(uint32_t fpscr)
{


  __asm volatile ("");
  __asm volatile ("VMSR fpscr, %0" : : "r" (fpscr) : "vfpcc");
  __asm volatile ("");

}
# 373 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __NOP(void)
{
  __asm volatile ("nop");
}






__attribute__((always_inline)) static inline void __WFI(void)
{
  __asm volatile ("wfi");
}







__attribute__((always_inline)) static inline void __WFE(void)
{
  __asm volatile ("wfe");
}






__attribute__((always_inline)) static inline void __SEV(void)
{
  __asm volatile ("sev");
}
# 416 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __ISB(void)
{
  __asm volatile ("isb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DSB(void)
{
  __asm volatile ("dsb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DMB(void)
{
  __asm volatile ("dmb 0xF":::"memory");
}
# 450 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}
# 469 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rev16 %0, %1" : "=r" (result) : "r" (value) );
  return(result);
}
# 484 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int32_t __REVSH(int32_t value)
{

  return (short)__builtin_bswap16(value);






}
# 504 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  return (op1 >> op2) | (op1 << (32U - op2));
}
# 526 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;


   __asm volatile ("rbit %0, %1" : "=r" (result) : "r" (value) );
# 544 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
  return(result);
}
# 565 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __LDREXB(volatile uint8_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexb %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint8_t) result);
}
# 587 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint16_t __LDREXH(volatile uint16_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexh %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint16_t) result);
}
# 609 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __LDREXW(volatile uint32_t *addr)
{
    uint32_t result;

   __asm volatile ("ldrex %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}
# 626 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXB(uint8_t value, volatile uint8_t *addr)
{
   uint32_t result;

   __asm volatile ("strexb %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 643 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXH(uint16_t value, volatile uint16_t *addr)
{
   uint32_t result;

   __asm volatile ("strexh %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 660 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXW(uint32_t value, volatile uint32_t *addr)
{
   uint32_t result;

   __asm volatile ("strex %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" (value) );
   return(result);
}






__attribute__((always_inline)) static inline void __CLREX(void)
{
  __asm volatile ("clrex" ::: "memory");
}
# 716 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RRX(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rrx %0, %1" : "=r" (result) : "r" (value) );
  return(result);
}
# 731 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __LDRBT(volatile uint8_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrbt %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint8_t) result);
}
# 753 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint16_t __LDRHT(volatile uint16_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrht %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint16_t) result);
}
# 775 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __LDRT(volatile uint32_t *addr)
{
    uint32_t result;

   __asm volatile ("ldrt %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}
# 790 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRBT(uint8_t value, volatile uint8_t *addr)
{
   __asm volatile ("strbt %1, %0" : "=Q" (*addr) : "r" ((uint32_t)value) );
}
# 802 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRHT(uint16_t value, volatile uint16_t *addr)
{
   __asm volatile ("strht %1, %0" : "=Q" (*addr) : "r" ((uint32_t)value) );
}
# 814 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRT(uint32_t value, volatile uint32_t *addr)
{
   __asm volatile ("strt %1, %0" : "=Q" (*addr) : "r" (value) );
}
# 832 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __SADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__( ( always_inline ) ) static inline uint32_t __SSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__( ( always_inline ) ) static inline uint32_t __SADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USAD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usad8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USADA8(uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("usada8 %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}
# 1152 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __UXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("uxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("sxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMUAD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuad %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMUADX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuadx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMLAD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlad %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMLADX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smladx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint64_t __SMLALD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlald %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__( ( always_inline ) ) static inline uint64_t __SMLALDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlaldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMUSD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMUSDX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusdx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMLSD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsd %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMLSDX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsdx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint64_t __SMLSLD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsld %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__( ( always_inline ) ) static inline uint64_t __SMLSLDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SEL (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sel %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline int32_t __QADD( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qadd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline int32_t __QSUB( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qsub %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}
# 1357 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __SMMLA (int32_t op1, int32_t op2, int32_t op3)
{
 int32_t result;

 __asm volatile ("smmla %0, %1, %2, %3" : "=r" (result): "r" (op1), "r" (op2), "r" (op3) );
 return(result);
}






#pragma GCC diagnostic pop
# 62 "../../../../../../components/toolchain/cmsis/include/core_cmInstr.h" 2
# 211 "../../../../../../components/toolchain/cmsis/include/core_cm4.h" 2
# 1 "../../../../../../components/toolchain/cmsis/include/core_cmFunc.h" 1
# 212 "../../../../../../components/toolchain/cmsis/include/core_cm4.h" 2
# 1 "../../../../../../components/toolchain/cmsis/include/core_cmSimd.h" 1
# 213 "../../../../../../components/toolchain/cmsis/include/core_cm4.h" 2
# 308 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t _reserved0:16;
    uint32_t GE:4;
    uint32_t _reserved1:7;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} APSR_Type;
# 347 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:23;
  } b;
  uint32_t w;
} IPSR_Type;
# 365 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:7;
    uint32_t GE:4;
    uint32_t _reserved1:4;
    uint32_t T:1;
    uint32_t IT:2;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} xPSR_Type;
# 416 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t nPRIV:1;
    uint32_t SPSEL:1;
    uint32_t FPCA:1;
    uint32_t _reserved0:29;
  } b;
  uint32_t w;
} CONTROL_Type;
# 451 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t ISER[8U];
        uint32_t RESERVED0[24U];
  volatile uint32_t ICER[8U];
        uint32_t RSERVED1[24U];
  volatile uint32_t ISPR[8U];
        uint32_t RESERVED2[24U];
  volatile uint32_t ICPR[8U];
        uint32_t RESERVED3[24U];
  volatile uint32_t IABR[8U];
        uint32_t RESERVED4[56U];
  volatile uint8_t IP[240U];
        uint32_t RESERVED5[644U];
  volatile uint32_t STIR;
} NVIC_Type;
# 485 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile const uint32_t CPUID;
  volatile uint32_t ICSR;
  volatile uint32_t VTOR;
  volatile uint32_t AIRCR;
  volatile uint32_t SCR;
  volatile uint32_t CCR;
  volatile uint8_t SHP[12U];
  volatile uint32_t SHCSR;
  volatile uint32_t CFSR;
  volatile uint32_t HFSR;
  volatile uint32_t DFSR;
  volatile uint32_t MMFAR;
  volatile uint32_t BFAR;
  volatile uint32_t AFSR;
  volatile const uint32_t PFR[2U];
  volatile const uint32_t DFR;
  volatile const uint32_t ADR;
  volatile const uint32_t MMFR[4U];
  volatile const uint32_t ISAR[5U];
        uint32_t RESERVED0[5U];
  volatile uint32_t CPACR;
} SCB_Type;
# 704 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile const uint32_t ICTR;
  volatile uint32_t ACTLR;
} SCnSCB_Type;
# 744 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t LOAD;
  volatile uint32_t VAL;
  volatile const uint32_t CALIB;
} SysTick_Type;
# 796 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile union
  {
    volatile uint8_t u8;
    volatile uint16_t u16;
    volatile uint32_t u32;
  } PORT [32U];
        uint32_t RESERVED0[864U];
  volatile uint32_t TER;
        uint32_t RESERVED1[15U];
  volatile uint32_t TPR;
        uint32_t RESERVED2[15U];
  volatile uint32_t TCR;
        uint32_t RESERVED3[29U];
  volatile uint32_t IWR;
  volatile const uint32_t IRR;
  volatile uint32_t IMCR;
        uint32_t RESERVED4[43U];
  volatile uint32_t LAR;
  volatile const uint32_t LSR;
        uint32_t RESERVED5[6U];
  volatile const uint32_t PID4;
  volatile const uint32_t PID5;
  volatile const uint32_t PID6;
  volatile const uint32_t PID7;
  volatile const uint32_t PID0;
  volatile const uint32_t PID1;
  volatile const uint32_t PID2;
  volatile const uint32_t PID3;
  volatile const uint32_t CID0;
  volatile const uint32_t CID1;
  volatile const uint32_t CID2;
  volatile const uint32_t CID3;
} ITM_Type;
# 899 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t CYCCNT;
  volatile uint32_t CPICNT;
  volatile uint32_t EXCCNT;
  volatile uint32_t SLEEPCNT;
  volatile uint32_t LSUCNT;
  volatile uint32_t FOLDCNT;
  volatile const uint32_t PCSR;
  volatile uint32_t COMP0;
  volatile uint32_t MASK0;
  volatile uint32_t FUNCTION0;
        uint32_t RESERVED0[1U];
  volatile uint32_t COMP1;
  volatile uint32_t MASK1;
  volatile uint32_t FUNCTION1;
        uint32_t RESERVED1[1U];
  volatile uint32_t COMP2;
  volatile uint32_t MASK2;
  volatile uint32_t FUNCTION2;
        uint32_t RESERVED2[1U];
  volatile uint32_t COMP3;
  volatile uint32_t MASK3;
  volatile uint32_t FUNCTION3;
} DWT_Type;
# 1046 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t SSPSR;
  volatile uint32_t CSPSR;
        uint32_t RESERVED0[2U];
  volatile uint32_t ACPR;
        uint32_t RESERVED1[55U];
  volatile uint32_t SPPR;
        uint32_t RESERVED2[131U];
  volatile const uint32_t FFSR;
  volatile uint32_t FFCR;
  volatile const uint32_t FSCR;
        uint32_t RESERVED3[759U];
  volatile const uint32_t TRIGGER;
  volatile const uint32_t FIFO0;
  volatile const uint32_t ITATBCTR2;
        uint32_t RESERVED4[1U];
  volatile const uint32_t ITATBCTR0;
  volatile const uint32_t FIFO1;
  volatile uint32_t ITCTRL;
        uint32_t RESERVED5[39U];
  volatile uint32_t CLAIMSET;
  volatile uint32_t CLAIMCLR;
        uint32_t RESERVED7[8U];
  volatile const uint32_t DEVID;
  volatile const uint32_t DEVTYPE;
} TPI_Type;
# 1202 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile const uint32_t TYPE;
  volatile uint32_t CTRL;
  volatile uint32_t RNR;
  volatile uint32_t RBAR;
  volatile uint32_t RASR;
  volatile uint32_t RBAR_A1;
  volatile uint32_t RASR_A1;
  volatile uint32_t RBAR_A2;
  volatile uint32_t RASR_A2;
  volatile uint32_t RBAR_A3;
  volatile uint32_t RASR_A3;
} MPU_Type;
# 1297 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile uint32_t FPCCR;
  volatile uint32_t FPCAR;
  volatile uint32_t FPDSCR;
  volatile const uint32_t MVFR0;
  volatile const uint32_t MVFR1;
} FPU_Type;
# 1404 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t DHCSR;
  volatile uint32_t DCRSR;
  volatile uint32_t DCRDR;
  volatile uint32_t DEMCR;
} CoreDebug_Type;
# 1596 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline void NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
  uint32_t reg_value;
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);

  reg_value = ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR;
  reg_value &= ~((uint32_t)((0xFFFFUL << 16U) | (7UL << 8U)));
  reg_value = (reg_value |
                ((uint32_t)0x5FAUL << 16U) |
                (PriorityGroupTmp << 8U) );
  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = reg_value;
}







static inline uint32_t NVIC_GetPriorityGrouping(void)
{
  return ((uint32_t)((((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) >> 8U));
}







static inline void NVIC_EnableIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)(int32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
}







static inline void NVIC_DisableIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[(((uint32_t)(int32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
}
# 1650 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)(int32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
}







static inline void NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)(int32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
}







static inline void NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICPR[(((uint32_t)(int32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
}
# 1685 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t NVIC_GetActive(IRQn_Type IRQn)
{
  return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IABR[(((uint32_t)(int32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
}
# 1698 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline void NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if ((int32_t)(IRQn) < 0)
  {
    ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)(int32_t)IRQn) & 0xFUL)-4UL] = (uint8_t)((priority << (8U - 3)) & (uint32_t)0xFFUL);
  }
  else
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)(int32_t)IRQn)] = (uint8_t)((priority << (8U - 3)) & (uint32_t)0xFFUL);
  }
}
# 1720 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t NVIC_GetPriority(IRQn_Type IRQn)
{

  if ((int32_t)(IRQn) < 0)
  {
    return(((uint32_t)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)(int32_t)IRQn) & 0xFUL)-4UL] >> (8U - 3)));
  }
  else
  {
    return(((uint32_t)((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)(int32_t)IRQn)] >> (8U - 3)));
  }
}
# 1745 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(3)) ? (uint32_t)(3) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(3)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(3));

  return (
           ((PreemptPriority & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL)) << SubPriorityBits) |
           ((SubPriority & (uint32_t)((1UL << (SubPriorityBits )) - 1UL)))
         );
}
# 1772 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* const pPreemptPriority, uint32_t* const pSubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(3)) ? (uint32_t)(3) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(3)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(3));

  *pPreemptPriority = (Priority >> SubPriorityBits) & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL);
  *pSubPriority = (Priority ) & (uint32_t)((1UL << (SubPriorityBits )) - 1UL);
}






static inline void NVIC_SystemReset(void)
{
  __DSB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = (uint32_t)((0x5FAUL << 16U) |
                           (((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) |
                            (1UL << 2U) );
  __DSB();

  for (;;)
  {
    __NOP();
  }
}
# 1830 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t SysTick_Config(uint32_t ticks)
{
  if ((ticks - 1UL) > (0xFFFFFFUL ))
  {
    return (1UL);
  }

  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->LOAD = (uint32_t)(ticks - 1UL);
  NVIC_SetPriority (SysTick_IRQn, (1UL << 3) - 1UL);
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->VAL = 0UL;
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->CTRL = (1UL << 2U) |
                   (1UL << 1U) |
                   (1UL );
  return (0UL);
}
# 1860 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
extern volatile int32_t ITM_RxBuffer;
# 1872 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t ITM_SendChar (uint32_t ch)
{
  if (((((ITM_Type *) (0xE0000000UL) )->TCR & (1UL )) != 0UL) &&
      ((((ITM_Type *) (0xE0000000UL) )->TER & 1UL ) != 0UL) )
  {
    while (((ITM_Type *) (0xE0000000UL) )->PORT[0U].u32 == 0UL)
    {
      __NOP();
    }
    ((ITM_Type *) (0xE0000000UL) )->PORT[0U].u8 = (uint8_t)ch;
  }
  return (ch);
}
# 1893 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline int32_t ITM_ReceiveChar (void)
{
  int32_t ch = -1;

  if (ITM_RxBuffer != 0x5AA55AA5U)
  {
    ch = ITM_RxBuffer;
    ITM_RxBuffer = 0x5AA55AA5U;
  }

  return (ch);
}
# 1913 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline int32_t ITM_CheckChar (void)
{

  if (ITM_RxBuffer == 0x5AA55AA5U)
  {
    return (0);
  }
  else
  {
    return (1);
  }
}
# 153 "../../../../../../modules/nrfx/mdk/nrf52840.h" 2
# 1 "../../../../../../modules/nrfx/mdk/system_nrf52840.h" 1
# 33 "../../../../../../modules/nrfx/mdk/system_nrf52840.h"
extern uint32_t SystemCoreClock;
# 44 "../../../../../../modules/nrfx/mdk/system_nrf52840.h"
extern void SystemInit (void);
# 55 "../../../../../../modules/nrfx/mdk/system_nrf52840.h"
extern void SystemCoreClockUpdate (void);
# 154 "../../../../../../modules/nrfx/mdk/nrf52840.h" 2
# 183 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t PART;
  volatile const uint32_t VARIANT;
  volatile const uint32_t PACKAGE;
  volatile const uint32_t RAM;
  volatile const uint32_t FLASH;
  volatile uint32_t UNUSED8[3];
} FICR_INFO_Type;

typedef struct {
  volatile const uint32_t A0;
  volatile const uint32_t A1;
  volatile const uint32_t A2;
  volatile const uint32_t A3;
  volatile const uint32_t A4;
  volatile const uint32_t A5;
  volatile const uint32_t B0;
  volatile const uint32_t B1;
  volatile const uint32_t B2;
  volatile const uint32_t B3;
  volatile const uint32_t B4;
  volatile const uint32_t B5;
  volatile const uint32_t T0;
  volatile const uint32_t T1;
  volatile const uint32_t T2;
  volatile const uint32_t T3;
  volatile const uint32_t T4;
} FICR_TEMP_Type;

typedef struct {
  volatile const uint32_t TAGHEADER0;

  volatile const uint32_t TAGHEADER1;

  volatile const uint32_t TAGHEADER2;

  volatile const uint32_t TAGHEADER3;

} FICR_NFC_Type;

typedef struct {
  volatile const uint32_t BYTES;
  volatile const uint32_t RCCUTOFF;
  volatile const uint32_t APCUTOFF;
  volatile const uint32_t STARTUP;
  volatile const uint32_t ROSC1;
  volatile const uint32_t ROSC2;
  volatile const uint32_t ROSC3;
  volatile const uint32_t ROSC4;
} FICR_TRNG90B_Type;

typedef struct {
  volatile uint32_t POWER;
  volatile uint32_t POWERSET;
  volatile uint32_t POWERCLR;
  volatile const uint32_t RESERVED0;
} POWER_RAM_Type;

typedef struct {
  volatile uint32_t RTS;
  volatile uint32_t TXD;
  volatile uint32_t CTS;
  volatile uint32_t RXD;
} UART_PSEL_Type;

typedef struct {
  volatile uint32_t RTS;
  volatile uint32_t TXD;
  volatile uint32_t CTS;
  volatile uint32_t RXD;
} UARTE_PSEL_Type;

typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} UARTE_RXD_Type;

typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} UARTE_TXD_Type;

typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t MOSI;
  volatile uint32_t MISO;
} SPI_PSEL_Type;

typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t MOSI;
  volatile uint32_t MISO;
  volatile uint32_t CSN;
} SPIM_PSEL_Type;

typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIM_RXD_Type;

typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIM_TXD_Type;

typedef struct {
  volatile uint32_t RXDELAY;
  volatile uint32_t CSNDUR;

} SPIM_IFTIMING_Type;

typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t MISO;
  volatile uint32_t MOSI;
  volatile uint32_t CSN;
} SPIS_PSEL_Type;

typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} SPIS_RXD_Type;

typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} SPIS_TXD_Type;

typedef struct {
  volatile uint32_t SCL;
  volatile uint32_t SDA;
} TWI_PSEL_Type;

typedef struct {
  volatile uint32_t SCL;
  volatile uint32_t SDA;
} TWIM_PSEL_Type;

typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIM_RXD_Type;

typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIM_TXD_Type;

typedef struct {
  volatile uint32_t SCL;
  volatile uint32_t SDA;
} TWIS_PSEL_Type;

typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} TWIS_RXD_Type;

typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} TWIS_TXD_Type;

typedef struct {
  volatile uint32_t RX;
} NFCT_FRAMESTATUS_Type;

typedef struct {
  volatile uint32_t FRAMECONFIG;
  volatile uint32_t AMOUNT;
} NFCT_TXD_Type;

typedef struct {
  volatile uint32_t FRAMECONFIG;
  volatile const uint32_t AMOUNT;
} NFCT_RXD_Type;

typedef struct {
  volatile uint32_t LIMITH;
  volatile uint32_t LIMITL;
} SAADC_EVENTS_CH_Type;

typedef struct {
  volatile uint32_t PSELP;
  volatile uint32_t PSELN;
  volatile uint32_t CONFIG;
  volatile uint32_t LIMIT;

} SAADC_CH_Type;

typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;

  volatile const uint32_t AMOUNT;

} SAADC_RESULT_Type;

typedef struct {
  volatile uint32_t LED;
  volatile uint32_t A;
  volatile uint32_t B;
} QDEC_PSEL_Type;

typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t CNT;

  volatile uint32_t REFRESH;

  volatile uint32_t ENDDELAY;
  volatile const uint32_t RESERVED1[4];
} PWM_SEQ_Type;

typedef struct {
  volatile uint32_t OUT[4];

} PWM_PSEL_Type;

typedef struct {
  volatile uint32_t CLK;
  volatile uint32_t DIN;
} PDM_PSEL_Type;

typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
} PDM_SAMPLE_Type;

typedef struct {
  volatile uint32_t ADDR;

  volatile uint32_t SIZE;

  volatile uint32_t PERM;

  volatile uint32_t UNUSED0;
} ACL_ACL_Type;

typedef struct {
  volatile uint32_t EN;
  volatile uint32_t DIS;
} PPI_TASKS_CHG_Type;

typedef struct {
  volatile uint32_t EEP;
  volatile uint32_t TEP;
} PPI_CH_Type;

typedef struct {
  volatile uint32_t TEP;
} PPI_FORK_Type;

typedef struct {
  volatile uint32_t WA;
  volatile uint32_t RA;
} MWU_EVENTS_REGION_Type;

typedef struct {
  volatile uint32_t WA;

  volatile uint32_t RA;
} MWU_EVENTS_PREGION_Type;

typedef struct {
  volatile uint32_t SUBSTATWA;


  volatile uint32_t SUBSTATRA;


} MWU_PERREGION_Type;

typedef struct {
  volatile uint32_t START;
  volatile uint32_t END;
  volatile const uint32_t RESERVED2[2];
} MWU_REGION_Type;

typedef struct {
  volatile const uint32_t START;
  volatile const uint32_t END;
  volatile uint32_t SUBS;
  volatile const uint32_t RESERVED3;
} MWU_PREGION_Type;

typedef struct {
  volatile uint32_t MODE;
  volatile uint32_t RXEN;
  volatile uint32_t TXEN;
  volatile uint32_t MCKEN;
  volatile uint32_t MCKFREQ;
  volatile uint32_t RATIO;
  volatile uint32_t SWIDTH;
  volatile uint32_t ALIGN;
  volatile uint32_t FORMAT;
  volatile uint32_t CHANNELS;
} I2S_CONFIG_Type;

typedef struct {
  volatile uint32_t PTR;
} I2S_RXD_Type;

typedef struct {
  volatile uint32_t PTR;
} I2S_TXD_Type;

typedef struct {
  volatile uint32_t MAXCNT;
} I2S_RXTXD_Type;

typedef struct {
  volatile uint32_t MCK;
  volatile uint32_t SCK;
  volatile uint32_t LRCK;
  volatile uint32_t SDIN;
  volatile uint32_t SDOUT;
} I2S_PSEL_Type;

typedef struct {
  volatile const uint32_t EPIN[8];

  volatile const uint32_t RESERVED4;
  volatile const uint32_t EPOUT[8];

} USBD_HALTED_Type;

typedef struct {
  volatile uint32_t EPOUT[8];

  volatile const uint32_t ISOOUT;
} USBD_SIZE_Type;

typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;

  volatile const uint32_t RESERVED5[2];
} USBD_EPIN_Type;

typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} USBD_ISOIN_Type;

typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;

  volatile const uint32_t RESERVED6[2];
} USBD_EPOUT_Type;

typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} USBD_ISOOUT_Type;

typedef struct {
  volatile uint32_t SRC;
  volatile uint32_t DST;
  volatile uint32_t CNT;
} QSPI_READ_Type;

typedef struct {
  volatile uint32_t DST;
  volatile uint32_t SRC;
  volatile uint32_t CNT;
} QSPI_WRITE_Type;

typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t LEN;
} QSPI_ERASE_Type;

typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t CSN;
  volatile const uint32_t RESERVED7;
  volatile uint32_t IO0;
  volatile uint32_t IO1;
  volatile uint32_t IO2;
  volatile uint32_t IO3;
} QSPI_PSEL_Type;
# 595 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED0[4];
  volatile const uint32_t CODEPAGESIZE;
  volatile const uint32_t CODESIZE;
  volatile const uint32_t RESERVED1[18];
  volatile const uint32_t DEVICEID[2];
  volatile const uint32_t RESERVED2[6];
  volatile const uint32_t ER[4];
  volatile const uint32_t IR[4];
  volatile const uint32_t DEVICEADDRTYPE;
  volatile const uint32_t DEVICEADDR[2];
  volatile const uint32_t RESERVED3[21];
  FICR_INFO_Type INFO;
  volatile const uint32_t RESERVED4[140];
  volatile const uint32_t PRODTEST[3];
  volatile const uint32_t RESERVED5[42];
  FICR_TEMP_Type TEMP;
  volatile const uint32_t RESERVED6[2];
  FICR_NFC_Type NFC;
  volatile const uint32_t RESERVED7[488];
  FICR_TRNG90B_Type TRNG90B;
} NRF_FICR_Type;
# 628 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t UNUSED0;
  volatile uint32_t UNUSED1;
  volatile uint32_t UNUSED2;
  volatile const uint32_t RESERVED0;
  volatile uint32_t UNUSED3;
  volatile uint32_t NRFFW[15];
  volatile uint32_t NRFHW[12];
  volatile uint32_t CUSTOMER[32];
  volatile const uint32_t RESERVED1[64];
  volatile uint32_t PSELRESET[2];
  volatile uint32_t APPROTECT;
  volatile uint32_t NFCPINS;

  volatile uint32_t DEBUGCTRL;
  volatile const uint32_t RESERVED2[60];
  volatile uint32_t REGOUT0;

} NRF_UICR_Type;
# 658 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_HFCLKSTART;
  volatile uint32_t TASKS_HFCLKSTOP;
  volatile uint32_t TASKS_LFCLKSTART;
  volatile uint32_t TASKS_LFCLKSTOP;
  volatile uint32_t TASKS_CAL;
  volatile uint32_t TASKS_CTSTART;
  volatile uint32_t TASKS_CTSTOP;
  volatile const uint32_t RESERVED0[57];
  volatile uint32_t EVENTS_HFCLKSTARTED;
  volatile uint32_t EVENTS_LFCLKSTARTED;
  volatile const uint32_t RESERVED1;
  volatile uint32_t EVENTS_DONE;
  volatile uint32_t EVENTS_CTTO;
  volatile const uint32_t RESERVED2[5];
  volatile uint32_t EVENTS_CTSTARTED;

  volatile uint32_t EVENTS_CTSTOPPED;

  volatile const uint32_t RESERVED3[117];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[63];
  volatile const uint32_t HFCLKRUN;
  volatile const uint32_t HFCLKSTAT;
  volatile const uint32_t RESERVED5;
  volatile const uint32_t LFCLKRUN;
  volatile const uint32_t LFCLKSTAT;
  volatile const uint32_t LFCLKSRCCOPY;
  volatile const uint32_t RESERVED6[62];
  volatile uint32_t LFCLKSRC;
  volatile const uint32_t RESERVED7[3];
  volatile uint32_t HFXODEBOUNCE;

  volatile const uint32_t RESERVED8[3];
  volatile uint32_t CTIV;
  volatile const uint32_t RESERVED9[8];
  volatile uint32_t TRACECONFIG;
  volatile const uint32_t RESERVED10[21];
  volatile uint32_t LFRCMODE;
} NRF_CLOCK_Type;
# 710 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED0[30];
  volatile uint32_t TASKS_CONSTLAT;
  volatile uint32_t TASKS_LOWPWR;
  volatile const uint32_t RESERVED1[34];
  volatile uint32_t EVENTS_POFWARN;
  volatile const uint32_t RESERVED2[2];
  volatile uint32_t EVENTS_SLEEPENTER;
  volatile uint32_t EVENTS_SLEEPEXIT;
  volatile uint32_t EVENTS_USBDETECTED;
  volatile uint32_t EVENTS_USBREMOVED;
  volatile uint32_t EVENTS_USBPWRRDY;
  volatile const uint32_t RESERVED3[119];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[61];
  volatile uint32_t RESETREAS;
  volatile const uint32_t RESERVED5[9];
  volatile const uint32_t RAMSTATUS;
  volatile const uint32_t RESERVED6[3];
  volatile const uint32_t USBREGSTATUS;
  volatile const uint32_t RESERVED7[49];
  volatile uint32_t SYSTEMOFF;
  volatile const uint32_t RESERVED8[3];
  volatile uint32_t POFCON;
  volatile const uint32_t RESERVED9[2];
  volatile uint32_t GPREGRET;
  volatile uint32_t GPREGRET2;
  volatile const uint32_t RESERVED10[21];
  volatile uint32_t DCDCEN;
  volatile const uint32_t RESERVED11;
  volatile uint32_t DCDCEN0;
  volatile const uint32_t RESERVED12[47];
  volatile const uint32_t MAINREGSTATUS;
  volatile const uint32_t RESERVED13[175];
  POWER_RAM_Type RAM[9];
} NRF_POWER_Type;
# 758 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_TXEN;
  volatile uint32_t TASKS_RXEN;
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_DISABLE;
  volatile uint32_t TASKS_RSSISTART;

  volatile uint32_t TASKS_RSSISTOP;
  volatile uint32_t TASKS_BCSTART;
  volatile uint32_t TASKS_BCSTOP;
  volatile uint32_t TASKS_EDSTART;
  volatile uint32_t TASKS_EDSTOP;
  volatile uint32_t TASKS_CCASTART;
  volatile uint32_t TASKS_CCASTOP;
  volatile const uint32_t RESERVED0[51];
  volatile uint32_t EVENTS_READY;
  volatile uint32_t EVENTS_ADDRESS;
  volatile uint32_t EVENTS_PAYLOAD;
  volatile uint32_t EVENTS_END;
  volatile uint32_t EVENTS_DISABLED;
  volatile uint32_t EVENTS_DEVMATCH;
  volatile uint32_t EVENTS_DEVMISS;
  volatile uint32_t EVENTS_RSSIEND;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t EVENTS_BCMATCH;
  volatile const uint32_t RESERVED2;
  volatile uint32_t EVENTS_CRCOK;
  volatile uint32_t EVENTS_CRCERROR;
  volatile uint32_t EVENTS_FRAMESTART;
  volatile uint32_t EVENTS_EDEND;

  volatile uint32_t EVENTS_EDSTOPPED;
  volatile uint32_t EVENTS_CCAIDLE;
  volatile uint32_t EVENTS_CCABUSY;
  volatile uint32_t EVENTS_CCASTOPPED;
  volatile uint32_t EVENTS_RATEBOOST;

  volatile uint32_t EVENTS_TXREADY;
  volatile uint32_t EVENTS_RXREADY;
  volatile uint32_t EVENTS_MHRMATCH;
  volatile const uint32_t RESERVED3[3];
  volatile uint32_t EVENTS_PHYEND;

  volatile const uint32_t RESERVED4[36];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED5[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED6[61];
  volatile const uint32_t CRCSTATUS;
  volatile const uint32_t RESERVED7;
  volatile const uint32_t RXMATCH;
  volatile const uint32_t RXCRC;
  volatile const uint32_t DAI;
  volatile const uint32_t PDUSTAT;
  volatile const uint32_t RESERVED8[59];
  volatile uint32_t PACKETPTR;
  volatile uint32_t FREQUENCY;
  volatile uint32_t TXPOWER;
  volatile uint32_t MODE;
  volatile uint32_t PCNF0;
  volatile uint32_t PCNF1;
  volatile uint32_t BASE0;
  volatile uint32_t BASE1;
  volatile uint32_t PREFIX0;
  volatile uint32_t PREFIX1;
  volatile uint32_t TXADDRESS;
  volatile uint32_t RXADDRESSES;
  volatile uint32_t CRCCNF;
  volatile uint32_t CRCPOLY;
  volatile uint32_t CRCINIT;
  volatile const uint32_t RESERVED9;
  volatile uint32_t TIFS;
  volatile const uint32_t RSSISAMPLE;
  volatile const uint32_t RESERVED10;
  volatile const uint32_t STATE;
  volatile uint32_t DATAWHITEIV;
  volatile const uint32_t RESERVED11[2];
  volatile uint32_t BCC;
  volatile const uint32_t RESERVED12[39];
  volatile uint32_t DAB[8];
  volatile uint32_t DAP[8];
  volatile uint32_t DACNF;
  volatile uint32_t MHRMATCHCONF;
  volatile uint32_t MHRMATCHMAS;
  volatile const uint32_t RESERVED13;
  volatile uint32_t MODECNF0;
  volatile const uint32_t RESERVED14[3];
  volatile uint32_t SFD;
  volatile uint32_t EDCNT;
  volatile uint32_t EDSAMPLE;
  volatile uint32_t CCACTRL;
  volatile const uint32_t RESERVED15[611];
  volatile uint32_t POWER;
} NRF_RADIO_Type;
# 865 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile uint32_t TASKS_STOPRX;
  volatile uint32_t TASKS_STARTTX;
  volatile uint32_t TASKS_STOPTX;
  volatile const uint32_t RESERVED0[3];
  volatile uint32_t TASKS_SUSPEND;
  volatile const uint32_t RESERVED1[56];
  volatile uint32_t EVENTS_CTS;
  volatile uint32_t EVENTS_NCTS;
  volatile uint32_t EVENTS_RXDRDY;
  volatile const uint32_t RESERVED2[4];
  volatile uint32_t EVENTS_TXDRDY;
  volatile const uint32_t RESERVED3;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_RXTO;
  volatile const uint32_t RESERVED5[46];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED6[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED7[93];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t RESERVED8[31];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED9;
  UART_PSEL_Type PSEL;
  volatile const uint32_t RXD;
  volatile uint32_t TXD;
  volatile const uint32_t RESERVED10;
  volatile uint32_t BAUDRATE;
  volatile const uint32_t RESERVED11[17];
  volatile uint32_t CONFIG;
} NRF_UART_Type;
# 911 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile uint32_t TASKS_STOPRX;
  volatile uint32_t TASKS_STARTTX;
  volatile uint32_t TASKS_STOPTX;
  volatile const uint32_t RESERVED0[7];
  volatile uint32_t TASKS_FLUSHRX;
  volatile const uint32_t RESERVED1[52];
  volatile uint32_t EVENTS_CTS;
  volatile uint32_t EVENTS_NCTS;
  volatile uint32_t EVENTS_RXDRDY;

  volatile const uint32_t RESERVED2;
  volatile uint32_t EVENTS_ENDRX;
  volatile const uint32_t RESERVED3[2];
  volatile uint32_t EVENTS_TXDRDY;
  volatile uint32_t EVENTS_ENDTX;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_RXTO;
  volatile const uint32_t RESERVED5;
  volatile uint32_t EVENTS_RXSTARTED;
  volatile uint32_t EVENTS_TXSTARTED;
  volatile const uint32_t RESERVED6;
  volatile uint32_t EVENTS_TXSTOPPED;
  volatile const uint32_t RESERVED7[41];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[93];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t RESERVED10[31];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED11;
  UARTE_PSEL_Type PSEL;
  volatile const uint32_t RESERVED12[3];
  volatile uint32_t BAUDRATE;
  volatile const uint32_t RESERVED13[3];
  UARTE_RXD_Type RXD;
  volatile const uint32_t RESERVED14;
  UARTE_TXD_Type TXD;
  volatile const uint32_t RESERVED15[7];
  volatile uint32_t CONFIG;
} NRF_UARTE_Type;
# 968 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED0[66];
  volatile uint32_t EVENTS_READY;
  volatile const uint32_t RESERVED1[126];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[125];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED3;
  SPI_PSEL_Type PSEL;
  volatile const uint32_t RESERVED4;
  volatile const uint32_t RXD;
  volatile uint32_t TXD;
  volatile const uint32_t RESERVED5;
  volatile uint32_t FREQUENCY;
  volatile const uint32_t RESERVED6[11];
  volatile uint32_t CONFIG;
} NRF_SPI_Type;
# 997 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED0[4];
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED1;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED2[56];
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED3[2];
  volatile uint32_t EVENTS_ENDRX;
  volatile const uint32_t RESERVED4;
  volatile uint32_t EVENTS_END;
  volatile const uint32_t RESERVED5;
  volatile uint32_t EVENTS_ENDTX;
  volatile const uint32_t RESERVED6[10];
  volatile uint32_t EVENTS_STARTED;
  volatile const uint32_t RESERVED7[44];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[61];
  volatile uint32_t STALLSTAT;


  volatile const uint32_t RESERVED10[63];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED11;
  SPIM_PSEL_Type PSEL;
  volatile const uint32_t RESERVED12[3];
  volatile uint32_t FREQUENCY;
  volatile const uint32_t RESERVED13[3];
  SPIM_RXD_Type RXD;
  SPIM_TXD_Type TXD;
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED14[2];
  SPIM_IFTIMING_Type IFTIMING;
  volatile uint32_t CSNPOL;
  volatile uint32_t PSELDCX;
  volatile uint32_t DCXCNT;
  volatile const uint32_t RESERVED15[19];
  volatile uint32_t ORC;

} NRF_SPIM_Type;
# 1053 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED0[9];
  volatile uint32_t TASKS_ACQUIRE;
  volatile uint32_t TASKS_RELEASE;
  volatile const uint32_t RESERVED1[54];
  volatile uint32_t EVENTS_END;
  volatile const uint32_t RESERVED2[2];
  volatile uint32_t EVENTS_ENDRX;
  volatile const uint32_t RESERVED3[5];
  volatile uint32_t EVENTS_ACQUIRED;
  volatile const uint32_t RESERVED4[53];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED5[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED6[61];
  volatile const uint32_t SEMSTAT;
  volatile const uint32_t RESERVED7[15];
  volatile uint32_t STATUS;
  volatile const uint32_t RESERVED8[47];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED9;
  SPIS_PSEL_Type PSEL;
  volatile const uint32_t RESERVED10[7];
  SPIS_RXD_Type RXD;
  volatile const uint32_t RESERVED11;
  SPIS_TXD_Type TXD;
  volatile const uint32_t RESERVED12;
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED13;
  volatile uint32_t DEF;

  volatile const uint32_t RESERVED14[24];
  volatile uint32_t ORC;
} NRF_SPIS_Type;
# 1099 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile const uint32_t RESERVED0;
  volatile uint32_t TASKS_STARTTX;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED2;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED3[56];
  volatile uint32_t EVENTS_STOPPED;
  volatile uint32_t EVENTS_RXDREADY;
  volatile const uint32_t RESERVED4[4];
  volatile uint32_t EVENTS_TXDSENT;
  volatile const uint32_t RESERVED5;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED6[4];
  volatile uint32_t EVENTS_BB;

  volatile const uint32_t RESERVED7[3];
  volatile uint32_t EVENTS_SUSPENDED;
  volatile const uint32_t RESERVED8[45];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED9[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED10[110];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t RESERVED11[14];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED12;
  TWI_PSEL_Type PSEL;
  volatile const uint32_t RESERVED13[2];
  volatile const uint32_t RXD;
  volatile uint32_t TXD;
  volatile const uint32_t RESERVED14;
  volatile uint32_t FREQUENCY;
  volatile const uint32_t RESERVED15[24];
  volatile uint32_t ADDRESS;
} NRF_TWI_Type;
# 1150 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile const uint32_t RESERVED0;
  volatile uint32_t TASKS_STARTTX;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t TASKS_STOP;

  volatile const uint32_t RESERVED2;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED3[56];
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED5[8];
  volatile uint32_t EVENTS_SUSPENDED;

  volatile uint32_t EVENTS_RXSTARTED;
  volatile uint32_t EVENTS_TXSTARTED;
  volatile const uint32_t RESERVED6[2];
  volatile uint32_t EVENTS_LASTRX;
  volatile uint32_t EVENTS_LASTTX;
  volatile const uint32_t RESERVED7[39];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[110];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t RESERVED10[14];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED11;
  TWIM_PSEL_Type PSEL;
  volatile const uint32_t RESERVED12[5];
  volatile uint32_t FREQUENCY;
  volatile const uint32_t RESERVED13[3];
  TWIM_RXD_Type RXD;
  TWIM_TXD_Type TXD;
  volatile const uint32_t RESERVED14[13];
  volatile uint32_t ADDRESS;
} NRF_TWIM_Type;
# 1203 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED0[5];
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED1;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED2[3];
  volatile uint32_t TASKS_PREPARERX;
  volatile uint32_t TASKS_PREPARETX;
  volatile const uint32_t RESERVED3[51];
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED5[9];
  volatile uint32_t EVENTS_RXSTARTED;
  volatile uint32_t EVENTS_TXSTARTED;
  volatile const uint32_t RESERVED6[4];
  volatile uint32_t EVENTS_WRITE;
  volatile uint32_t EVENTS_READ;
  volatile const uint32_t RESERVED7[37];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[113];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t MATCH;
  volatile const uint32_t RESERVED10[10];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED11;
  TWIS_PSEL_Type PSEL;
  volatile const uint32_t RESERVED12[9];
  TWIS_RXD_Type RXD;
  volatile const uint32_t RESERVED13;
  TWIS_TXD_Type TXD;
  volatile const uint32_t RESERVED14[14];
  volatile uint32_t ADDRESS[2];
  volatile const uint32_t RESERVED15;
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED16[10];
  volatile uint32_t ORC;

} NRF_TWIS_Type;
# 1258 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_ACTIVATE;

  volatile uint32_t TASKS_DISABLE;
  volatile uint32_t TASKS_SENSE;
  volatile uint32_t TASKS_STARTTX;
  volatile const uint32_t RESERVED0[3];
  volatile uint32_t TASKS_ENABLERXDATA;
  volatile const uint32_t RESERVED1;
  volatile uint32_t TASKS_GOIDLE;
  volatile uint32_t TASKS_GOSLEEP;
  volatile const uint32_t RESERVED2[53];
  volatile uint32_t EVENTS_READY;
  volatile uint32_t EVENTS_FIELDDETECTED;
  volatile uint32_t EVENTS_FIELDLOST;
  volatile uint32_t EVENTS_TXFRAMESTART;
  volatile uint32_t EVENTS_TXFRAMEEND;
  volatile uint32_t EVENTS_RXFRAMESTART;
  volatile uint32_t EVENTS_RXFRAMEEND;

  volatile uint32_t EVENTS_ERROR;

  volatile const uint32_t RESERVED3[2];
  volatile uint32_t EVENTS_RXERROR;

  volatile uint32_t EVENTS_ENDRX;
  volatile uint32_t EVENTS_ENDTX;

  volatile const uint32_t RESERVED4;
  volatile uint32_t EVENTS_AUTOCOLRESSTARTED;
  volatile const uint32_t RESERVED5[3];
  volatile uint32_t EVENTS_COLLISION;
  volatile uint32_t EVENTS_SELECTED;
  volatile uint32_t EVENTS_STARTED;
  volatile const uint32_t RESERVED6[43];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED7[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED8[62];
  volatile uint32_t ERRORSTATUS;
  volatile const uint32_t RESERVED9;
  NFCT_FRAMESTATUS_Type FRAMESTATUS;
  volatile const uint32_t NFCTAGSTATE;
  volatile const uint32_t RESERVED10[3];
  volatile const uint32_t SLEEPSTATE;
  volatile const uint32_t RESERVED11[6];
  volatile const uint32_t FIELDPRESENT;
  volatile const uint32_t RESERVED12[49];
  volatile uint32_t FRAMEDELAYMIN;
  volatile uint32_t FRAMEDELAYMAX;
  volatile uint32_t FRAMEDELAYMODE;
  volatile uint32_t PACKETPTR;
  volatile uint32_t MAXLEN;

  NFCT_TXD_Type TXD;
  NFCT_RXD_Type RXD;
  volatile const uint32_t RESERVED13[26];
  volatile uint32_t NFCID1_LAST;
  volatile uint32_t NFCID1_2ND_LAST;
  volatile uint32_t NFCID1_3RD_LAST;
  volatile uint32_t AUTOCOLRESCONFIG;

  volatile uint32_t SENSRES;
  volatile uint32_t SELRES;
} NRF_NFCT_Type;
# 1336 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_OUT[8];

  volatile const uint32_t RESERVED0[4];
  volatile uint32_t TASKS_SET[8];

  volatile const uint32_t RESERVED1[4];
  volatile uint32_t TASKS_CLR[8];

  volatile const uint32_t RESERVED2[32];
  volatile uint32_t EVENTS_IN[8];

  volatile const uint32_t RESERVED3[23];
  volatile uint32_t EVENTS_PORT;

  volatile const uint32_t RESERVED4[97];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED5[129];
  volatile uint32_t CONFIG[8];

} NRF_GPIOTE_Type;
# 1369 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_SAMPLE;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_CALIBRATEOFFSET;
  volatile const uint32_t RESERVED0[60];
  volatile uint32_t EVENTS_STARTED;
  volatile uint32_t EVENTS_END;
  volatile uint32_t EVENTS_DONE;


  volatile uint32_t EVENTS_RESULTDONE;
  volatile uint32_t EVENTS_CALIBRATEDONE;
  volatile uint32_t EVENTS_STOPPED;
  SAADC_EVENTS_CH_Type EVENTS_CH[8];
  volatile const uint32_t RESERVED1[106];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[61];
  volatile const uint32_t STATUS;
  volatile const uint32_t RESERVED3[63];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED4[3];
  SAADC_CH_Type CH[8];
  volatile const uint32_t RESERVED5[24];
  volatile uint32_t RESOLUTION;
  volatile uint32_t OVERSAMPLE;


  volatile uint32_t SAMPLERATE;
  volatile const uint32_t RESERVED6[12];
  SAADC_RESULT_Type RESULT;
} NRF_SAADC_Type;
# 1414 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_COUNT;
  volatile uint32_t TASKS_CLEAR;
  volatile uint32_t TASKS_SHUTDOWN;
  volatile const uint32_t RESERVED0[11];
  volatile uint32_t TASKS_CAPTURE[6];
  volatile const uint32_t RESERVED1[58];
  volatile uint32_t EVENTS_COMPARE[6];
  volatile const uint32_t RESERVED2[42];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED3[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[126];
  volatile uint32_t MODE;
  volatile uint32_t BITMODE;
  volatile const uint32_t RESERVED5;
  volatile uint32_t PRESCALER;
  volatile const uint32_t RESERVED6[11];
  volatile uint32_t CC[6];
} NRF_TIMER_Type;
# 1448 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_CLEAR;
  volatile uint32_t TASKS_TRIGOVRFLW;
  volatile const uint32_t RESERVED0[60];
  volatile uint32_t EVENTS_TICK;
  volatile uint32_t EVENTS_OVRFLW;
  volatile const uint32_t RESERVED1[14];
  volatile uint32_t EVENTS_COMPARE[4];
  volatile const uint32_t RESERVED2[109];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[13];
  volatile uint32_t EVTEN;
  volatile uint32_t EVTENSET;
  volatile uint32_t EVTENCLR;
  volatile const uint32_t RESERVED4[110];
  volatile const uint32_t COUNTER;
  volatile uint32_t PRESCALER;

  volatile const uint32_t RESERVED5[13];
  volatile uint32_t CC[4];
} NRF_RTC_Type;
# 1483 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED0[62];
  volatile uint32_t EVENTS_DATARDY;
  volatile const uint32_t RESERVED1[128];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[127];
  volatile const int32_t TEMP;
  volatile const uint32_t RESERVED3[5];
  volatile uint32_t A0;
  volatile uint32_t A1;
  volatile uint32_t A2;
  volatile uint32_t A3;
  volatile uint32_t A4;
  volatile uint32_t A5;
  volatile const uint32_t RESERVED4[2];
  volatile uint32_t B0;
  volatile uint32_t B1;
  volatile uint32_t B2;
  volatile uint32_t B3;
  volatile uint32_t B4;
  volatile uint32_t B5;
  volatile const uint32_t RESERVED5[2];
  volatile uint32_t T0;
  volatile uint32_t T1;
  volatile uint32_t T2;
  volatile uint32_t T3;
  volatile uint32_t T4;
} NRF_TEMP_Type;
# 1525 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED0[62];
  volatile uint32_t EVENTS_VALRDY;

  volatile const uint32_t RESERVED1[63];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[126];
  volatile uint32_t CONFIG;
  volatile const uint32_t VALUE;
} NRF_RNG_Type;
# 1551 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_STARTECB;
  volatile uint32_t TASKS_STOPECB;
  volatile const uint32_t RESERVED0[62];
  volatile uint32_t EVENTS_ENDECB;
  volatile uint32_t EVENTS_ERRORECB;

  volatile const uint32_t RESERVED1[127];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[126];
  volatile uint32_t ECBDATAPTR;
} NRF_ECB_Type;
# 1575 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;

  volatile const uint32_t RESERVED0;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED1[61];
  volatile uint32_t EVENTS_END;
  volatile uint32_t EVENTS_RESOLVED;
  volatile uint32_t EVENTS_NOTRESOLVED;
  volatile const uint32_t RESERVED2[126];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t STATUS;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t NIRK;
  volatile uint32_t IRKPTR;
  volatile const uint32_t RESERVED5;
  volatile uint32_t ADDRPTR;
  volatile uint32_t SCRATCHPTR;
} NRF_AAR_Type;
# 1608 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_KSGEN;

  volatile uint32_t TASKS_CRYPT;

  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_RATEOVERRIDE;

  volatile const uint32_t RESERVED0[60];
  volatile uint32_t EVENTS_ENDKSGEN;
  volatile uint32_t EVENTS_ENDCRYPT;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED1[61];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t MICSTATUS;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t MODE;
  volatile uint32_t CNFPTR;
  volatile uint32_t INPTR;
  volatile uint32_t OUTPTR;
  volatile uint32_t SCRATCHPTR;
  volatile uint32_t MAXPACKETSIZE;
  volatile uint32_t RATEOVERRIDE;
} NRF_CCM_Type;
# 1648 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile const uint32_t RESERVED0[63];
  volatile uint32_t EVENTS_TIMEOUT;
  volatile const uint32_t RESERVED1[128];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[61];
  volatile const uint32_t RUNSTATUS;
  volatile const uint32_t REQSTATUS;
  volatile const uint32_t RESERVED3[63];
  volatile uint32_t CRV;
  volatile uint32_t RREN;
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED4[60];
  volatile uint32_t RR[8];
} NRF_WDT_Type;
# 1676 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_READCLRACC;
  volatile uint32_t TASKS_RDCLRACC;
  volatile uint32_t TASKS_RDCLRDBL;
  volatile const uint32_t RESERVED0[59];
  volatile uint32_t EVENTS_SAMPLERDY;

  volatile uint32_t EVENTS_REPORTRDY;
  volatile uint32_t EVENTS_ACCOF;
  volatile uint32_t EVENTS_DBLRDY;
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED1[59];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[125];
  volatile uint32_t ENABLE;
  volatile uint32_t LEDPOL;
  volatile uint32_t SAMPLEPER;
  volatile const int32_t SAMPLE;
  volatile uint32_t REPORTPER;

  volatile const int32_t ACC;
  volatile const int32_t ACCREAD;

  QDEC_PSEL_Type PSEL;
  volatile uint32_t DBFEN;
  volatile const uint32_t RESERVED4[5];
  volatile uint32_t LEDPRE;
  volatile const uint32_t ACCDBL;
  volatile const uint32_t ACCDBLREAD;

} NRF_QDEC_Type;
# 1723 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_SAMPLE;
  volatile const uint32_t RESERVED0[61];
  volatile uint32_t EVENTS_READY;
  volatile uint32_t EVENTS_DOWN;
  volatile uint32_t EVENTS_UP;
  volatile uint32_t EVENTS_CROSS;
  volatile const uint32_t RESERVED1[60];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t RESULT;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t PSEL;
  volatile uint32_t REFSEL;
  volatile uint32_t EXTREFSEL;
  volatile const uint32_t RESERVED5[8];
  volatile uint32_t TH;
  volatile uint32_t MODE;
  volatile uint32_t HYST;
} NRF_COMP_Type;
# 1761 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_SAMPLE;
  volatile const uint32_t RESERVED0[61];
  volatile uint32_t EVENTS_READY;
  volatile uint32_t EVENTS_DOWN;
  volatile uint32_t EVENTS_UP;
  volatile uint32_t EVENTS_CROSS;
  volatile const uint32_t RESERVED1[60];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t RESULT;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t PSEL;
  volatile uint32_t REFSEL;
  volatile uint32_t EXTREFSEL;
  volatile const uint32_t RESERVED5[4];
  volatile uint32_t ANADETECT;
  volatile const uint32_t RESERVED6[5];
  volatile uint32_t HYST;
} NRF_LPCOMP_Type;
# 1798 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_TRIGGER[16];

  volatile const uint32_t RESERVED0[48];
  volatile uint32_t EVENTS_TRIGGERED[16];

  volatile const uint32_t RESERVED1[112];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
} NRF_EGU_Type;
# 1820 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t UNUSED;
} NRF_SWI_Type;
# 1834 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED0;
  volatile uint32_t TASKS_STOP;

  volatile uint32_t TASKS_SEQSTART[2];



  volatile uint32_t TASKS_NEXTSTEP;


  volatile const uint32_t RESERVED1[60];
  volatile uint32_t EVENTS_STOPPED;

  volatile uint32_t EVENTS_SEQSTARTED[2];

  volatile uint32_t EVENTS_SEQEND[2];

  volatile uint32_t EVENTS_PWMPERIODEND;
  volatile uint32_t EVENTS_LOOPSDONE;

  volatile const uint32_t RESERVED2[56];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED3[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[125];
  volatile uint32_t ENABLE;
  volatile uint32_t MODE;
  volatile uint32_t COUNTERTOP;
  volatile uint32_t PRESCALER;
  volatile uint32_t DECODER;
  volatile uint32_t LOOP;
  volatile const uint32_t RESERVED5[2];
  PWM_SEQ_Type SEQ[2];
  PWM_PSEL_Type PSEL;
} NRF_PWM_Type;
# 1883 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED0[62];
  volatile uint32_t EVENTS_STARTED;
  volatile uint32_t EVENTS_STOPPED;
  volatile uint32_t EVENTS_END;


  volatile const uint32_t RESERVED1[125];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[125];
  volatile uint32_t ENABLE;
  volatile uint32_t PDMCLKCTRL;
  volatile uint32_t MODE;
  volatile const uint32_t RESERVED3[3];
  volatile uint32_t GAINL;
  volatile uint32_t GAINR;
  volatile uint32_t RATIO;

  volatile const uint32_t RESERVED4[7];
  PDM_PSEL_Type PSEL;
  volatile const uint32_t RESERVED5[6];
  PDM_SAMPLE_Type SAMPLE;
} NRF_PDM_Type;
# 1921 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED0[512];
  ACL_ACL_Type ACL[8];
} NRF_ACL_Type;
# 1936 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED0[256];
  volatile const uint32_t READY;
  volatile const uint32_t RESERVED1;
  volatile const uint32_t READYNEXT;
  volatile const uint32_t RESERVED2[62];
  volatile uint32_t CONFIG;

  union {
    volatile uint32_t ERASEPCR1;

    volatile uint32_t ERASEPAGE;
  };
  volatile uint32_t ERASEALL;
  volatile uint32_t ERASEPCR0;

  volatile uint32_t ERASEUICR;
  volatile uint32_t ERASEPAGEPARTIAL;
  volatile uint32_t ERASEPAGEPARTIALCFG;
  volatile const uint32_t RESERVED3[8];
  volatile uint32_t ICACHECNF;
  volatile const uint32_t RESERVED4;
  volatile uint32_t IHIT;
  volatile uint32_t IMISS;
} NRF_NVMC_Type;
# 1972 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  PPI_TASKS_CHG_Type TASKS_CHG[6];
  volatile const uint32_t RESERVED0[308];
  volatile uint32_t CHEN;
  volatile uint32_t CHENSET;
  volatile uint32_t CHENCLR;
  volatile const uint32_t RESERVED1;
  PPI_CH_Type CH[20];
  volatile const uint32_t RESERVED2[148];
  volatile uint32_t CHG[6];
  volatile const uint32_t RESERVED3[62];
  PPI_FORK_Type FORK[32];
} NRF_PPI_Type;
# 1996 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED0[64];
  MWU_EVENTS_REGION_Type EVENTS_REGION[4];
  volatile const uint32_t RESERVED1[16];
  MWU_EVENTS_PREGION_Type EVENTS_PREGION[2];
  volatile const uint32_t RESERVED2[100];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[5];
  volatile uint32_t NMIEN;
  volatile uint32_t NMIENSET;
  volatile uint32_t NMIENCLR;
  volatile const uint32_t RESERVED4[53];
  MWU_PERREGION_Type PERREGION[2];
  volatile const uint32_t RESERVED5[64];
  volatile uint32_t REGIONEN;
  volatile uint32_t REGIONENSET;
  volatile uint32_t REGIONENCLR;
  volatile const uint32_t RESERVED6[57];
  MWU_REGION_Type REGION[4];
  volatile const uint32_t RESERVED7[32];
  MWU_PREGION_Type PREGION[2];
} NRF_MWU_Type;
# 2031 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;

  volatile uint32_t TASKS_STOP;

  volatile const uint32_t RESERVED0[63];
  volatile uint32_t EVENTS_RXPTRUPD;



  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t EVENTS_TXPTRUPD;



  volatile const uint32_t RESERVED2[122];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[125];
  volatile uint32_t ENABLE;
  I2S_CONFIG_Type CONFIG;
  volatile const uint32_t RESERVED4[3];
  I2S_RXD_Type RXD;
  volatile const uint32_t RESERVED5;
  I2S_TXD_Type TXD;
  volatile const uint32_t RESERVED6[3];
  I2S_RXTXD_Type RXTXD;
  volatile const uint32_t RESERVED7[3];
  I2S_PSEL_Type PSEL;
} NRF_I2S_Type;
# 2074 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t UNUSED;
} NRF_FPU_Type;
# 2088 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED0;
  volatile uint32_t TASKS_STARTEPIN[8];


  volatile uint32_t TASKS_STARTISOIN;

  volatile uint32_t TASKS_STARTEPOUT[8];


  volatile uint32_t TASKS_STARTISOOUT;

  volatile uint32_t TASKS_EP0RCVOUT;
  volatile uint32_t TASKS_EP0STATUS;
  volatile uint32_t TASKS_EP0STALL;
  volatile uint32_t TASKS_DPDMDRIVE;

  volatile uint32_t TASKS_DPDMNODRIVE;

  volatile const uint32_t RESERVED1[40];
  volatile uint32_t EVENTS_USBRESET;

  volatile uint32_t EVENTS_STARTED;


  volatile uint32_t EVENTS_ENDEPIN[8];

  volatile uint32_t EVENTS_EP0DATADONE;

  volatile uint32_t EVENTS_ENDISOIN;

  volatile uint32_t EVENTS_ENDEPOUT[8];

  volatile uint32_t EVENTS_ENDISOOUT;

  volatile uint32_t EVENTS_SOF;

  volatile uint32_t EVENTS_USBEVENT;

  volatile uint32_t EVENTS_EP0SETUP;

  volatile uint32_t EVENTS_EPDATA;

  volatile const uint32_t RESERVED2[39];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED3[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[61];
  volatile uint32_t EVENTCAUSE;
  volatile const uint32_t RESERVED5[7];
  USBD_HALTED_Type HALTED;
  volatile const uint32_t RESERVED6;
  volatile uint32_t EPSTATUS;

  volatile uint32_t EPDATASTATUS;

  volatile const uint32_t USBADDR;
  volatile const uint32_t RESERVED7[3];
  volatile const uint32_t BMREQUESTTYPE;
  volatile const uint32_t BREQUEST;
  volatile const uint32_t WVALUEL;
  volatile const uint32_t WVALUEH;
  volatile const uint32_t WINDEXL;
  volatile const uint32_t WINDEXH;
  volatile const uint32_t WLENGTHL;
  volatile const uint32_t WLENGTHH;
  USBD_SIZE_Type SIZE;
  volatile const uint32_t RESERVED8[15];
  volatile uint32_t ENABLE;
  volatile uint32_t USBPULLUP;
  volatile uint32_t DPDMVALUE;


  volatile uint32_t DTOGGLE;
  volatile uint32_t EPINEN;
  volatile uint32_t EPOUTEN;
  volatile uint32_t EPSTALL;
  volatile uint32_t ISOSPLIT;
  volatile const uint32_t FRAMECNTR;
  volatile const uint32_t RESERVED9[2];
  volatile uint32_t LOWPOWER;
  volatile uint32_t ISOINCONFIG;

  volatile const uint32_t RESERVED10[51];
  USBD_EPIN_Type EPIN[8];
  USBD_ISOIN_Type ISOIN;
  volatile const uint32_t RESERVED11[21];
  USBD_EPOUT_Type EPOUT[8];
  USBD_ISOOUT_Type ISOOUT;
} NRF_USBD_Type;
# 2191 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_ACTIVATE;
  volatile uint32_t TASKS_READSTART;
  volatile uint32_t TASKS_WRITESTART;
  volatile uint32_t TASKS_ERASESTART;
  volatile uint32_t TASKS_DEACTIVATE;
  volatile const uint32_t RESERVED0[59];
  volatile uint32_t EVENTS_READY;

  volatile const uint32_t RESERVED1[127];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[125];
  volatile uint32_t ENABLE;

  QSPI_READ_Type READ;
  QSPI_WRITE_Type WRITE;
  QSPI_ERASE_Type ERASE;
  QSPI_PSEL_Type PSEL;
  volatile uint32_t XIPOFFSET;

  volatile uint32_t IFCONFIG0;
  volatile const uint32_t RESERVED3[46];
  volatile uint32_t IFCONFIG1;
  volatile const uint32_t STATUS;
  volatile const uint32_t RESERVED4[3];
  volatile uint32_t DPMDUR;

  volatile const uint32_t RESERVED5[3];
  volatile uint32_t ADDRCONF;
  volatile const uint32_t RESERVED6[3];
  volatile uint32_t CINSTRCONF;
  volatile uint32_t CINSTRDAT0;
  volatile uint32_t CINSTRDAT1;
  volatile uint32_t IFTIMING;
} NRF_QSPI_Type;
# 2239 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED0[321];
  volatile uint32_t OUT;
  volatile uint32_t OUTSET;
  volatile uint32_t OUTCLR;
  volatile const uint32_t IN;
  volatile uint32_t DIR;
  volatile uint32_t DIRSET;
  volatile uint32_t DIRCLR;
  volatile uint32_t LATCH;

  volatile uint32_t DETECTMODE;
  volatile const uint32_t RESERVED1[118];
  volatile uint32_t PIN_CNF[32];
} NRF_GPIO_Type;
# 2265 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED0[1678];
  volatile uint32_t HOST_CRYPTOKEY_SEL;
  volatile const uint32_t RESERVED1[4];
  volatile uint32_t HOST_IOT_KPRTL_LOCK;



  volatile uint32_t HOST_IOT_KDR0;



  volatile uint32_t HOST_IOT_KDR1;

  volatile uint32_t HOST_IOT_KDR2;

  volatile uint32_t HOST_IOT_KDR3;

  volatile uint32_t HOST_IOT_LCS;
} NRF_CC_HOST_RGF_Type;
# 2296 "../../../../../../modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED0[320];
  volatile uint32_t ENABLE;
} NRF_CRYPTOCELL_Type;
# 80 "../../../../../../modules/nrfx/mdk/nrf.h" 2
# 1 "../../../../../../modules/nrfx/mdk/nrf52840_bitfields.h" 1
# 81 "../../../../../../modules/nrfx/mdk/nrf.h" 2
# 1 "../../../../../../modules/nrfx/mdk/nrf51_to_nrf52840.h" 1
# 82 "../../../../../../modules/nrfx/mdk/nrf.h" 2
# 1 "../../../../../../modules/nrfx/mdk/nrf52_to_nrf52840.h" 1
# 83 "../../../../../../modules/nrfx/mdk/nrf.h" 2
# 97 "../../../../../../modules/nrfx/mdk/nrf.h"
# 1 "../../../../../../modules/nrfx/mdk/compiler_abstraction.h" 1
# 120 "../../../../../../modules/nrfx/mdk/compiler_abstraction.h"
    static inline unsigned int gcc_current_sp(void)
    {
        register unsigned sp __asm("sp");
        return sp;
    }
# 98 "../../../../../../modules/nrfx/mdk/nrf.h" 2
# 49 "../../../../../../modules/nrfx/drivers/nrfx_common.h" 2
# 1 "../../../../../../modules/nrfx/mdk/nrf_peripherals.h" 1
# 63 "../../../../../../modules/nrfx/mdk/nrf_peripherals.h"
# 1 "../../../../../../modules/nrfx/mdk/nrf52840_peripherals.h" 1
# 64 "../../../../../../modules/nrfx/mdk/nrf_peripherals.h" 2
# 50 "../../../../../../modules/nrfx/drivers/nrfx_common.h" 2
# 167 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
typedef void (* nrfx_irq_handler_t)(void);




typedef enum
{
    NRFX_DRV_STATE_UNINITIALIZED,
    NRFX_DRV_STATE_INITIALIZED,
    NRFX_DRV_STATE_POWERED_ON,
} nrfx_drv_state_t;
# 192 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
static inline 
# 192 "../../../../../../modules/nrfx/drivers/nrfx_common.h" 3 4
               _Bool 
# 192 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
                    nrfx_is_in_ram(void const * p_object);
# 201 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
static inline IRQn_Type nrfx_get_irq_number(void const * p_reg);
# 217 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
static inline uint32_t nrfx_bitpos_to_event(uint32_t bit);
# 233 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
static inline uint32_t nrfx_event_to_bitpos(uint32_t event);




static inline 
# 238 "../../../../../../modules/nrfx/drivers/nrfx_common.h" 3 4
               _Bool 
# 238 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
                    nrfx_is_in_ram(void const * p_object)
{
    return ((((uint32_t)p_object) & 0xE0000000u) == 0x20000000u);
}

static inline IRQn_Type nrfx_get_irq_number(void const * p_reg)
{
    uint8_t irq_number = (uint8_t)(((uint32_t)p_reg) >> 12u);
    return (IRQn_Type)irq_number;
}

static inline uint32_t nrfx_bitpos_to_event(uint32_t bit)
{
    static const uint32_t event_reg_offset = 0x100u;
    return event_reg_offset + (bit * sizeof(uint32_t));
}

static inline uint32_t nrfx_event_to_bitpos(uint32_t event)
{
    static const uint32_t event_reg_offset = 0x100u;
    return (event - event_reg_offset) / sizeof(uint32_t);
}
# 46 "../../../../../../modules/nrfx/nrfx.h" 2
# 1 "../../../../../../integration/nrfx/nrfx_glue.h" 1
# 57 "../../../../../../integration/nrfx/nrfx_glue.h"
# 1 "../../../../../../integration/nrfx/legacy/apply_old_config.h" 1
# 58 "../../../../../../integration/nrfx/nrfx_glue.h" 2

# 1 "../../../../../../modules/nrfx/soc/nrfx_irqs.h" 1
# 51 "../../../../../../modules/nrfx/soc/nrfx_irqs.h"
# 1 "../../../../../../modules/nrfx/soc/nrfx_irqs_nrf52840.h" 1
# 52 "../../../../../../modules/nrfx/soc/nrfx_irqs.h" 2
# 60 "../../../../../../integration/nrfx/nrfx_glue.h" 2



# 1 "../../../../../../components/libraries/util/nrf_assert.h" 1
# 75 "../../../../../../components/libraries/util/nrf_assert.h"
void assert_nrf_callback(uint16_t line_num, const uint8_t *file_name);
# 64 "../../../../../../integration/nrfx/nrfx_glue.h" 2







# 1 "../../../../../../components/libraries/util/app_util.h" 1
# 55 "../../../../../../components/libraries/util/app_util.h"
# 1 "../../../../../../modules/nrfx/mdk/compiler_abstraction.h" 1
# 56 "../../../../../../components/libraries/util/app_util.h" 2
# 1 "../../../../../../components/libraries/util/nordic_common.h" 1
# 57 "../../../../../../components/libraries/util/app_util.h" 2
# 83 "../../../../../../components/libraries/util/app_util.h"
extern uint32_t __StackTop;
extern uint32_t __StackLimit;
# 114 "../../../../../../components/libraries/util/app_util.h"
extern uint32_t * _vectors;
extern uint32_t __FLASH_segment_used_end__;
# 132 "../../../../../../components/libraries/util/app_util.h"
enum
{
    UNIT_0_625_MS = 625,
    UNIT_1_25_MS = 1250,
    UNIT_10_MS = 10000
};
# 302 "../../../../../../components/libraries/util/app_util.h"
typedef uint8_t uint16_le_t[2];


typedef uint8_t uint32_le_t[4];


typedef struct
{
    uint16_t size;
    uint8_t * p_data;
} uint8_array_t;
# 902 "../../../../../../components/libraries/util/app_util.h"
static inline uint64_t value_rescale(uint32_t value, uint32_t old_unit_reversal, uint16_t new_unit_reversal)
{
    return (uint64_t)((((uint64_t)value * new_unit_reversal) + ((old_unit_reversal) / 2)) / (old_unit_reversal));
}
# 914 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint16_encode(uint16_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x00FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0xFF00) >> 8);
    return sizeof(uint16_t);
}
# 928 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint24_encode(uint32_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x000000FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0x0000FF00) >> 8);
    p_encoded_data[2] = (uint8_t) ((value & 0x00FF0000) >> 16);
    return 3;
}
# 943 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint32_encode(uint32_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x000000FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0x0000FF00) >> 8);
    p_encoded_data[2] = (uint8_t) ((value & 0x00FF0000) >> 16);
    p_encoded_data[3] = (uint8_t) ((value & 0xFF000000) >> 24);
    return sizeof(uint32_t);
}
# 959 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint40_encode(uint64_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x00000000FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0x000000FF00) >> 8);
    p_encoded_data[2] = (uint8_t) ((value & 0x0000FF0000) >> 16);
    p_encoded_data[3] = (uint8_t) ((value & 0x00FF000000) >> 24);
    p_encoded_data[4] = (uint8_t) ((value & 0xFF00000000) >> 32);
    return 5;
}
# 976 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint48_encode(uint64_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x0000000000FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0x00000000FF00) >> 8);
    p_encoded_data[2] = (uint8_t) ((value & 0x000000FF0000) >> 16);
    p_encoded_data[3] = (uint8_t) ((value & 0x0000FF000000) >> 24);
    p_encoded_data[4] = (uint8_t) ((value & 0x00FF00000000) >> 32);
    p_encoded_data[5] = (uint8_t) ((value & 0xFF0000000000) >> 40);
    return 6;
}







static inline uint16_t uint16_decode(const uint8_t * p_encoded_data)
{
        return ( (((uint16_t)((uint8_t *)p_encoded_data)[0])) |
                 (((uint16_t)((uint8_t *)p_encoded_data)[1]) << 8 ));
}







static inline uint16_t uint16_big_decode(const uint8_t * p_encoded_data)
{
        return ( (((uint16_t)((uint8_t *)p_encoded_data)[0]) << 8 ) |
                 (((uint16_t)((uint8_t *)p_encoded_data)[1])) );
}







static inline uint32_t uint24_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint32_t)((uint8_t *)p_encoded_data)[0]) << 0) |
             (((uint32_t)((uint8_t *)p_encoded_data)[1]) << 8) |
             (((uint32_t)((uint8_t *)p_encoded_data)[2]) << 16));
}







static inline uint32_t uint32_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint32_t)((uint8_t *)p_encoded_data)[0]) << 0) |
             (((uint32_t)((uint8_t *)p_encoded_data)[1]) << 8) |
             (((uint32_t)((uint8_t *)p_encoded_data)[2]) << 16) |
             (((uint32_t)((uint8_t *)p_encoded_data)[3]) << 24 ));
}







static inline uint32_t uint32_big_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint32_t)((uint8_t *)p_encoded_data)[0]) << 24) |
             (((uint32_t)((uint8_t *)p_encoded_data)[1]) << 16) |
             (((uint32_t)((uint8_t *)p_encoded_data)[2]) << 8) |
             (((uint32_t)((uint8_t *)p_encoded_data)[3]) << 0) );
}
# 1060 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint16_big_encode(uint16_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) (value >> 8);
    p_encoded_data[1] = (uint8_t) (value & 0xFF);

    return sizeof(uint16_t);
}
# 1077 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint32_big_encode(uint32_t value, uint8_t * p_encoded_data)
{
    *(uint32_t *)p_encoded_data = __REV(value);
    return sizeof(uint32_t);
}







static inline uint64_t uint40_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint64_t)((uint8_t *)p_encoded_data)[0]) << 0) |
             (((uint64_t)((uint8_t *)p_encoded_data)[1]) << 8) |
             (((uint64_t)((uint8_t *)p_encoded_data)[2]) << 16) |
             (((uint64_t)((uint8_t *)p_encoded_data)[3]) << 24) |
             (((uint64_t)((uint8_t *)p_encoded_data)[4]) << 32 ));
}







static inline uint64_t uint48_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint64_t)((uint8_t *)p_encoded_data)[0]) << 0) |
             (((uint64_t)((uint8_t *)p_encoded_data)[1]) << 8) |
             (((uint64_t)((uint8_t *)p_encoded_data)[2]) << 16) |
             (((uint64_t)((uint8_t *)p_encoded_data)[3]) << 24) |
             (((uint64_t)((uint8_t *)p_encoded_data)[4]) << 32) |
             (((uint64_t)((uint8_t *)p_encoded_data)[5]) << 40 ));
}
# 1134 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t battery_level_in_percent(const uint16_t mvolts)
{
    uint8_t battery_level;

    if (mvolts >= 3000)
    {
        battery_level = 100;
    }
    else if (mvolts > 2900)
    {
        battery_level = 100 - ((3000 - mvolts) * 58) / 100;
    }
    else if (mvolts > 2740)
    {
        battery_level = 42 - ((2900 - mvolts) * 24) / 160;
    }
    else if (mvolts > 2440)
    {
        battery_level = 18 - ((2740 - mvolts) * 12) / 300;
    }
    else if (mvolts > 2100)
    {
        battery_level = 6 - ((2440 - mvolts) * 6) / 340;
    }
    else
    {
        battery_level = 0;
    }

    return battery_level;
}







static inline 
# 1172 "../../../../../../components/libraries/util/app_util.h" 3 4
               _Bool 
# 1172 "../../../../../../components/libraries/util/app_util.h"
                    is_word_aligned(void const* p)
{
    return (((uintptr_t)p & 0x03) == 0);
}
# 1185 "../../../../../../components/libraries/util/app_util.h"
static inline 
# 1185 "../../../../../../components/libraries/util/app_util.h" 3 4
               _Bool 
# 1185 "../../../../../../components/libraries/util/app_util.h"
                    is_address_from_stack(void * ptr)
{
    if (((uint32_t)ptr >= (uint32_t)&__StackLimit) &&
        ((uint32_t)ptr < (uint32_t)&__StackTop) )
    {
        return 
# 1190 "../../../../../../components/libraries/util/app_util.h" 3 4
              1
# 1190 "../../../../../../components/libraries/util/app_util.h"
                  ;
    }
    else
    {
        return 
# 1194 "../../../../../../components/libraries/util/app_util.h" 3 4
              0
# 1194 "../../../../../../components/libraries/util/app_util.h"
                   ;
    }
}
# 72 "../../../../../../integration/nrfx/nrfx_glue.h" 2
# 104 "../../../../../../integration/nrfx/nrfx_glue.h"
static inline void _NRFX_IRQ_PRIORITY_SET(IRQn_Type irq_number,
                                          uint8_t priority)
{
    if (0) { if (((((priority) > 1) && ((priority) < 4)) || (((priority) > 4) && ((priority) < 8)))) { } else { assert_nrf_callback((uint16_t)107, (uint8_t *)"../../../../../../integration/nrfx/nrfx_glue.h"); } };
    NVIC_SetPriority(irq_number, priority);
}







static inline void _NRFX_IRQ_ENABLE(IRQn_Type irq_number)
{
    NVIC_ClearPendingIRQ(irq_number);
    NVIC_EnableIRQ(irq_number);
}
# 132 "../../../../../../integration/nrfx/nrfx_glue.h"
static inline 
# 132 "../../../../../../integration/nrfx/nrfx_glue.h" 3 4
             _Bool 
# 132 "../../../../../../integration/nrfx/nrfx_glue.h"
                  _NRFX_IRQ_IS_ENABLED(IRQn_Type irq_number)
{
    return 0 != (((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[irq_number / 32] & (1UL << (irq_number % 32)));
}







static inline void _NRFX_IRQ_DISABLE(IRQn_Type irq_number)
{
    NVIC_DisableIRQ(irq_number);
}







static inline void _NRFX_IRQ_PENDING_SET(IRQn_Type irq_number)
{
    NVIC_SetPendingIRQ(irq_number);
}







static inline void _NRFX_IRQ_PENDING_CLEAR(IRQn_Type irq_number)
{
    NVIC_ClearPendingIRQ(irq_number);
}
# 177 "../../../../../../integration/nrfx/nrfx_glue.h"
static inline 
# 177 "../../../../../../integration/nrfx/nrfx_glue.h" 3 4
             _Bool 
# 177 "../../../../../../integration/nrfx/nrfx_glue.h"
                  _NRFX_IRQ_IS_PENDING(IRQn_Type irq_number)
{
    return (NVIC_GetPendingIRQ(irq_number) == 1);
}

# 1 "../../../../../../components/libraries/util/nordic_common.h" 1
# 183 "../../../../../../integration/nrfx/nrfx_glue.h" 2
# 1 "../../../../../../components/libraries/util/app_util_platform.h" 1
# 56 "../../../../../../components/libraries/util/app_util_platform.h"
# 1 "../../../../../../components/softdevice/s140/headers/nrf_soc.h" 1
# 52 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
# 1 "../../../../../../components/softdevice/s140/headers/nrf_svc.h" 1
# 53 "../../../../../../components/softdevice/s140/headers/nrf_soc.h" 2
# 1 "../../../../../../components/softdevice/s140/headers/nrf_error.h" 1
# 54 "../../../../../../components/softdevice/s140/headers/nrf_soc.h" 2
# 1 "../../../../../../components/softdevice/s140/headers/nrf_error_soc.h" 1
# 55 "../../../../../../components/softdevice/s140/headers/nrf_soc.h" 2
# 104 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
enum NRF_SOC_SVCS
{
  SD_PPI_CHANNEL_ENABLE_GET = (0x20),
  SD_PPI_CHANNEL_ENABLE_SET = (0x20) + 1,
  SD_PPI_CHANNEL_ENABLE_CLR = (0x20) + 2,
  SD_PPI_CHANNEL_ASSIGN = (0x20) + 3,
  SD_PPI_GROUP_TASK_ENABLE = (0x20) + 4,
  SD_PPI_GROUP_TASK_DISABLE = (0x20) + 5,
  SD_PPI_GROUP_ASSIGN = (0x20) + 6,
  SD_PPI_GROUP_GET = (0x20) + 7,
  SD_FLASH_PAGE_ERASE = (0x20) + 8,
  SD_FLASH_WRITE = (0x20) + 9,
  SD_PROTECTED_REGISTER_WRITE = (0x20) + 11,
  SD_MUTEX_NEW = (0x2C),
  SD_MUTEX_ACQUIRE = (0x2C) + 1,
  SD_MUTEX_RELEASE = (0x2C) + 2,
  SD_RAND_APPLICATION_POOL_CAPACITY_GET = (0x2C) + 3,
  SD_RAND_APPLICATION_BYTES_AVAILABLE_GET = (0x2C) + 4,
  SD_RAND_APPLICATION_VECTOR_GET = (0x2C) + 5,
  SD_POWER_MODE_SET = (0x2C) + 6,
  SD_POWER_SYSTEM_OFF = (0x2C) + 7,
  SD_POWER_RESET_REASON_GET = (0x2C) + 8,
  SD_POWER_RESET_REASON_CLR = (0x2C) + 9,
  SD_POWER_POF_ENABLE = (0x2C) + 10,
  SD_POWER_POF_THRESHOLD_SET = (0x2C) + 11,
  SD_POWER_POF_THRESHOLDVDDH_SET = (0x2C) + 12,
  SD_POWER_RAM_POWER_SET = (0x2C) + 13,
  SD_POWER_RAM_POWER_CLR = (0x2C) + 14,
  SD_POWER_RAM_POWER_GET = (0x2C) + 15,
  SD_POWER_GPREGRET_SET = (0x2C) + 16,
  SD_POWER_GPREGRET_CLR = (0x2C) + 17,
  SD_POWER_GPREGRET_GET = (0x2C) + 18,
  SD_POWER_DCDC_MODE_SET = (0x2C) + 19,
  SD_POWER_DCDC0_MODE_SET = (0x2C) + 20,
  SD_APP_EVT_WAIT = (0x2C) + 21,
  SD_CLOCK_HFCLK_REQUEST = (0x2C) + 22,
  SD_CLOCK_HFCLK_RELEASE = (0x2C) + 23,
  SD_CLOCK_HFCLK_IS_RUNNING = (0x2C) + 24,
  SD_RADIO_NOTIFICATION_CFG_SET = (0x2C) + 25,
  SD_ECB_BLOCK_ENCRYPT = (0x2C) + 26,
  SD_ECB_BLOCKS_ENCRYPT = (0x2C) + 27,
  SD_RADIO_SESSION_OPEN = (0x2C) + 28,
  SD_RADIO_SESSION_CLOSE = (0x2C) + 29,
  SD_RADIO_REQUEST = (0x2C) + 30,
  SD_EVT_GET = (0x2C) + 31,
  SD_TEMP_GET = (0x2C) + 32,
  SD_POWER_USBPWRRDY_ENABLE = (0x2C) + 33,
  SD_POWER_USBDETECTED_ENABLE = (0x2C) + 34,
  SD_POWER_USBREMOVED_ENABLE = (0x2C) + 35,
  SD_POWER_USBREGSTATUS_GET = (0x2C) + 36,
  SVC_SOC_LAST = (0x2C) + 37
};


enum NRF_MUTEX_VALUES
{
  NRF_MUTEX_FREE,
  NRF_MUTEX_TAKEN
};


enum NRF_POWER_MODES
{
  NRF_POWER_MODE_CONSTLAT,
  NRF_POWER_MODE_LOWPWR
};



enum NRF_POWER_THRESHOLDS
{
  NRF_POWER_THRESHOLD_V17 = 4UL,
  NRF_POWER_THRESHOLD_V18,
  NRF_POWER_THRESHOLD_V19,
  NRF_POWER_THRESHOLD_V20,
  NRF_POWER_THRESHOLD_V21,
  NRF_POWER_THRESHOLD_V22,
  NRF_POWER_THRESHOLD_V23,
  NRF_POWER_THRESHOLD_V24,
  NRF_POWER_THRESHOLD_V25,
  NRF_POWER_THRESHOLD_V26,
  NRF_POWER_THRESHOLD_V27,
  NRF_POWER_THRESHOLD_V28
};


enum NRF_POWER_THRESHOLDVDDHS
{
  NRF_POWER_THRESHOLDVDDH_V27,
  NRF_POWER_THRESHOLDVDDH_V28,
  NRF_POWER_THRESHOLDVDDH_V29,
  NRF_POWER_THRESHOLDVDDH_V30,
  NRF_POWER_THRESHOLDVDDH_V31,
  NRF_POWER_THRESHOLDVDDH_V32,
  NRF_POWER_THRESHOLDVDDH_V33,
  NRF_POWER_THRESHOLDVDDH_V34,
  NRF_POWER_THRESHOLDVDDH_V35,
  NRF_POWER_THRESHOLDVDDH_V36,
  NRF_POWER_THRESHOLDVDDH_V37,
  NRF_POWER_THRESHOLDVDDH_V38,
  NRF_POWER_THRESHOLDVDDH_V39,
  NRF_POWER_THRESHOLDVDDH_V40,
  NRF_POWER_THRESHOLDVDDH_V41,
  NRF_POWER_THRESHOLDVDDH_V42
};



enum NRF_POWER_DCDC_MODES
{
  NRF_POWER_DCDC_DISABLE,
  NRF_POWER_DCDC_ENABLE
};


enum NRF_RADIO_NOTIFICATION_DISTANCES
{
  NRF_RADIO_NOTIFICATION_DISTANCE_NONE = 0,
  NRF_RADIO_NOTIFICATION_DISTANCE_800US,
  NRF_RADIO_NOTIFICATION_DISTANCE_1740US,
  NRF_RADIO_NOTIFICATION_DISTANCE_2680US,
  NRF_RADIO_NOTIFICATION_DISTANCE_3620US,
  NRF_RADIO_NOTIFICATION_DISTANCE_4560US,
  NRF_RADIO_NOTIFICATION_DISTANCE_5500US
};



enum NRF_RADIO_NOTIFICATION_TYPES
{
  NRF_RADIO_NOTIFICATION_TYPE_NONE = 0,
  NRF_RADIO_NOTIFICATION_TYPE_INT_ON_ACTIVE,
  NRF_RADIO_NOTIFICATION_TYPE_INT_ON_INACTIVE,
  NRF_RADIO_NOTIFICATION_TYPE_INT_ON_BOTH,
};


enum NRF_RADIO_CALLBACK_SIGNAL_TYPE
{
  NRF_RADIO_CALLBACK_SIGNAL_TYPE_START,
  NRF_RADIO_CALLBACK_SIGNAL_TYPE_TIMER0,
  NRF_RADIO_CALLBACK_SIGNAL_TYPE_RADIO,
  NRF_RADIO_CALLBACK_SIGNAL_TYPE_EXTEND_FAILED,
  NRF_RADIO_CALLBACK_SIGNAL_TYPE_EXTEND_SUCCEEDED
};






enum NRF_RADIO_SIGNAL_CALLBACK_ACTION
{
  NRF_RADIO_SIGNAL_CALLBACK_ACTION_NONE,
  NRF_RADIO_SIGNAL_CALLBACK_ACTION_EXTEND,





  NRF_RADIO_SIGNAL_CALLBACK_ACTION_END,
  NRF_RADIO_SIGNAL_CALLBACK_ACTION_REQUEST_AND_END
};


enum NRF_RADIO_HFCLK_CFG
{
  NRF_RADIO_HFCLK_CFG_XTAL_GUARANTEED,






  NRF_RADIO_HFCLK_CFG_NO_GUARANTEE




};


enum NRF_RADIO_PRIORITY
{
  NRF_RADIO_PRIORITY_HIGH,
  NRF_RADIO_PRIORITY_NORMAL,
};


enum NRF_RADIO_REQUEST_TYPE
{
  NRF_RADIO_REQ_TYPE_EARLIEST,
  NRF_RADIO_REQ_TYPE_NORMAL
};


enum NRF_SOC_EVTS
{
  NRF_EVT_HFCLKSTARTED,
  NRF_EVT_POWER_FAILURE_WARNING,
  NRF_EVT_FLASH_OPERATION_SUCCESS,
  NRF_EVT_FLASH_OPERATION_ERROR,
  NRF_EVT_RADIO_BLOCKED,
  NRF_EVT_RADIO_CANCELED,
  NRF_EVT_RADIO_SIGNAL_CALLBACK_INVALID_RETURN,
  NRF_EVT_RADIO_SESSION_IDLE,
  NRF_EVT_RADIO_SESSION_CLOSED,
  NRF_EVT_POWER_USB_POWER_READY,
  NRF_EVT_POWER_USB_DETECTED,
  NRF_EVT_POWER_USB_REMOVED,
  NRF_EVT_NUMBER_OF_EVTS
};
# 326 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
typedef volatile uint8_t nrf_mutex_t;


typedef struct
{
  uint8_t hfclk;
  uint8_t priority;
  uint32_t length_us;
  uint32_t timeout_us;
} nrf_radio_request_earliest_t;


typedef struct
{
  uint8_t hfclk;
  uint8_t priority;
  uint32_t distance_us;
  uint32_t length_us;
} nrf_radio_request_normal_t;


typedef struct
{
  uint8_t request_type;
  union
  {
    nrf_radio_request_earliest_t earliest;
    nrf_radio_request_normal_t normal;
  } params;
} nrf_radio_request_t;


typedef struct
{
  uint8_t callback_action;
  union
  {
    struct
    {
      nrf_radio_request_t * p_next;
    } request;
    struct
    {
      uint32_t length_us;
    } extend;
  } params;
} nrf_radio_signal_callback_return_param_t;
# 386 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
typedef nrf_radio_signal_callback_return_param_t * (*nrf_radio_signal_callback_t) (uint8_t signal_type);


typedef uint8_t soc_ecb_key_t[(16)];
typedef uint8_t soc_ecb_cleartext_t[(16)];
typedef uint8_t soc_ecb_ciphertext_t[((16))];


typedef struct
{
  soc_ecb_key_t key;
  soc_ecb_cleartext_t cleartext;
  soc_ecb_ciphertext_t ciphertext;
} nrf_ecb_hal_data_t;



typedef struct
{
  soc_ecb_key_t const * p_key;
  soc_ecb_cleartext_t const * p_cleartext;
  soc_ecb_ciphertext_t * p_ciphertext;
} nrf_ecb_hal_data_block_t;
# 421 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 421 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 421 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 421 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 421 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_mutex_new(nrf_mutex_t * p_mutex) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_MUTEX_NEW) : "r0" ); }
# 421 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 421 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 430 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 430 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 430 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 430 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 430 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_mutex_acquire(nrf_mutex_t * p_mutex) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_MUTEX_ACQUIRE) : "r0" ); }
# 430 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 430 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;








# 438 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 438 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 438 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 438 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_mutex_release(nrf_mutex_t * p_mutex) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_MUTEX_RELEASE) : "r0" ); }
# 438 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 438 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;








# 446 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 446 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 446 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 446 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_rand_application_pool_capacity_get(uint8_t * p_pool_capacity) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RAND_APPLICATION_POOL_CAPACITY_GET) : "r0" ); }
# 446 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 446 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;








# 454 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 454 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 454 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 454 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_rand_application_bytes_available_get(uint8_t * p_bytes_available) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RAND_APPLICATION_BYTES_AVAILABLE_GET) : "r0" ); }
# 454 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 454 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 464 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 464 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 464 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 464 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 464 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_rand_application_vector_get(uint8_t * p_buff, uint8_t length) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RAND_APPLICATION_VECTOR_GET) : "r0" ); }
# 464 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 464 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;








# 472 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 472 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 472 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 472 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_reset_reason_get(uint32_t * p_reset_reason) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_RESET_REASON_GET) : "r0" ); }
# 472 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 472 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;








# 480 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 480 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 480 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 480 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_reset_reason_clr(uint32_t reset_reason_clr_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_RESET_REASON_CLR) : "r0" ); }
# 480 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 480 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 489 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 489 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 489 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 489 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 489 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_mode_set(uint8_t power_mode) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_MODE_SET) : "r0" ); }
# 489 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 489 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;






# 495 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 495 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 495 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 495 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_system_off(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_SYSTEM_OFF) : "r0" ); }
# 495 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 495 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 506 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 506 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 506 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 506 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 506 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_pof_enable(uint8_t pof_enable) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_POF_ENABLE) : "r0" ); }
# 506 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 506 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 517 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 517 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 517 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 517 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 517 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_usbpwrrdy_enable(uint8_t usbpwrrdy_enable) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_USBPWRRDY_ENABLE) : "r0" ); }
# 517 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 517 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 528 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 528 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 528 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 528 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 528 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_usbdetected_enable(uint8_t usbdetected_enable) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_USBDETECTED_ENABLE) : "r0" ); }
# 528 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 528 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 539 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 539 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 539 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 539 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 539 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_usbremoved_enable(uint8_t usbremoved_enable) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_USBREMOVED_ENABLE) : "r0" ); }
# 539 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 539 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;








# 547 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 547 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 547 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 547 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_usbregstatus_get(uint32_t * usbregstatus) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_USBREGSTATUS_GET) : "r0" ); }
# 547 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 547 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 560 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 560 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 560 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 560 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 560 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_pof_threshold_set(uint8_t threshold) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_POF_THRESHOLD_SET) : "r0" ); }
# 560 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 560 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 573 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 573 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 573 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 573 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 573 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_pof_thresholdvddh_set(uint8_t threshold) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_POF_THRESHOLDVDDH_SET) : "r0" ); }
# 573 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 573 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 582 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 582 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 582 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 582 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 582 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_ram_power_set(uint8_t index, uint32_t ram_powerset) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_RAM_POWER_SET) : "r0" ); }
# 582 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 582 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 591 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 591 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 591 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 591 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 591 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_ram_power_clr(uint8_t index, uint32_t ram_powerclr) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_RAM_POWER_CLR) : "r0" ); }
# 591 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 591 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 600 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 600 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 600 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 600 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 600 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_ram_power_get(uint8_t index, uint32_t * p_ram_power) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_RAM_POWER_GET) : "r0" ); }
# 600 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 600 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 609 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 609 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 609 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 609 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 609 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_gpregret_set(uint32_t gpregret_id, uint32_t gpregret_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_GPREGRET_SET) : "r0" ); }
# 609 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 609 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 618 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 618 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 618 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 618 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 618 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_gpregret_clr(uint32_t gpregret_id, uint32_t gpregret_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_GPREGRET_CLR) : "r0" ); }
# 618 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 618 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 627 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 627 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 627 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 627 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 627 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_gpregret_get(uint32_t gpregret_id, uint32_t *p_gpregret) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_GPREGRET_GET) : "r0" ); }
# 627 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 627 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 636 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 636 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 636 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 636 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 636 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_dcdc_mode_set(uint8_t dcdc_mode) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_DCDC_MODE_SET) : "r0" ); }
# 636 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 636 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 647 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 647 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 647 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 647 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 647 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_dcdc0_mode_set(uint8_t dcdc_mode) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_DCDC0_MODE_SET) : "r0" ); }
# 647 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 647 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 659 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 659 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 659 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 659 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 659 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_clock_hfclk_request(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_CLOCK_HFCLK_REQUEST) : "r0" ); }
# 659 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 659 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 670 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 670 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 670 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 670 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 670 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_clock_hfclk_release(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_CLOCK_HFCLK_RELEASE) : "r0" ); }
# 670 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 670 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 681 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 681 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 681 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 681 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 681 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_clock_hfclk_is_running(uint32_t * p_is_running) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_CLOCK_HFCLK_IS_RUNNING) : "r0" ); }
# 681 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 681 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 709 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 709 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 709 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 709 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 709 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_app_evt_wait(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_APP_EVT_WAIT) : "r0" ); }
# 709 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 709 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;








# 717 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 717 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 717 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 717 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_channel_enable_get(uint32_t * p_channel_enable) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_CHANNEL_ENABLE_GET) : "r0" ); }
# 717 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 717 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;








# 725 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 725 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 725 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 725 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_channel_enable_set(uint32_t channel_enable_set_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_CHANNEL_ENABLE_SET) : "r0" ); }
# 725 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 725 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;








# 733 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 733 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 733 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 733 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_channel_enable_clr(uint32_t channel_enable_clr_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_CHANNEL_ENABLE_CLR) : "r0" ); }
# 733 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 733 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 744 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 744 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 744 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 744 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 744 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_channel_assign(uint8_t channel_num, const volatile void * evt_endpoint, const volatile void * task_endpoint) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_CHANNEL_ASSIGN) : "r0" ); }
# 744 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 744 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 753 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 753 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 753 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 753 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 753 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_group_task_enable(uint8_t group_num) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_GROUP_TASK_ENABLE) : "r0" ); }
# 753 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 753 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 762 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 762 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 762 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 762 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 762 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_group_task_disable(uint8_t group_num) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_GROUP_TASK_DISABLE) : "r0" ); }
# 762 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 762 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 772 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 772 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 772 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 772 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 772 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_group_assign(uint8_t group_num, uint32_t channel_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_GROUP_ASSIGN) : "r0" ); }
# 772 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 772 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 782 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 782 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 782 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 782 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 782 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_group_get(uint8_t group_num, uint32_t * p_channel_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_GROUP_GET) : "r0" ); }
# 782 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 782 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 813 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 813 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 813 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 813 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 813 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_radio_notification_cfg_set(uint8_t type, uint8_t distance) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RADIO_NOTIFICATION_CFG_SET) : "r0" ); }
# 813 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 813 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 829 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 829 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 829 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 829 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 829 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ecb_block_encrypt(nrf_ecb_hal_data_t * p_ecb_data) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_ECB_BLOCK_ENCRYPT) : "r0" ); }
# 829 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 829 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 846 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 846 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 846 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 846 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 846 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ecb_blocks_encrypt(uint8_t block_count, nrf_ecb_hal_data_block_t * p_data_blocks) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_ECB_BLOCKS_ENCRYPT) : "r0" ); }
# 846 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 846 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 857 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 857 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 857 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 857 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 857 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_evt_get(uint32_t * p_evt_id) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_EVT_GET) : "r0" ); }
# 857 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 857 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 868 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 868 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 868 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 868 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 868 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_temp_get(int32_t * p_temp) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_TEMP_GET) : "r0" ); }
# 868 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 868 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 905 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 905 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 905 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 905 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 905 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_flash_write(uint32_t * p_dst, uint32_t const * p_src, uint32_t size) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_FLASH_WRITE) : "r0" ); }
# 905 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 905 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 937 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 937 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 937 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 937 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 937 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_flash_page_erase(uint32_t page_number) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_FLASH_PAGE_ERASE) : "r0" ); }
# 937 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 937 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 961 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 961 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 961 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 961 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 961 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_radio_session_open(nrf_radio_signal_callback_t p_radio_signal_callback) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RADIO_SESSION_OPEN) : "r0" ); }
# 961 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 961 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 974 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 974 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 974 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 974 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 974 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_radio_session_close(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RADIO_SESSION_CLOSE) : "r0" ); }
# 974 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 974 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 1006 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 1006 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 1006 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 1006 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1006 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_radio_request(nrf_radio_request_t const * p_request) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RADIO_REQUEST) : "r0" ); }
# 1006 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 1006 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 1027 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 1027 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 1027 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"

# 1027 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1027 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_protected_register_write(volatile uint32_t * p_register, uint32_t value) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PROTECTED_REGISTER_WRITE) : "r0" ); }
# 1027 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 1027 "../../../../../../components/softdevice/s140/headers/nrf_soc.h"
 ;
# 57 "../../../../../../components/libraries/util/app_util_platform.h" 2
# 1 "../../../../../../components/softdevice/s140/headers/nrf_nvic.h" 1
# 109 "../../../../../../components/softdevice/s140/headers/nrf_nvic.h"
typedef struct
{
  uint32_t volatile __irq_masks[(2)];
  uint32_t volatile __cr_flag;
} nrf_nvic_state_t;



extern nrf_nvic_state_t nrf_nvic_state;
# 128 "../../../../../../components/softdevice/s140/headers/nrf_nvic.h"
static inline int __sd_nvic_irq_disable(void);



static inline void __sd_nvic_irq_enable(void);






static inline uint32_t __sd_nvic_app_accessible_irq(IRQn_Type IRQn);






static inline uint32_t __sd_nvic_is_app_accessible_priority(uint32_t priority);
# 164 "../../../../../../components/softdevice/s140/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_EnableIRQ(IRQn_Type IRQn);
# 176 "../../../../../../components/softdevice/s140/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_DisableIRQ(IRQn_Type IRQn);
# 189 "../../../../../../components/softdevice/s140/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_GetPendingIRQ(IRQn_Type IRQn, uint32_t * p_pending_irq);
# 201 "../../../../../../components/softdevice/s140/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_SetPendingIRQ(IRQn_Type IRQn);
# 213 "../../../../../../components/softdevice/s140/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_ClearPendingIRQ(IRQn_Type IRQn);
# 228 "../../../../../../components/softdevice/s140/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_SetPriority(IRQn_Type IRQn, uint32_t priority);
# 241 "../../../../../../components/softdevice/s140/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_GetPriority(IRQn_Type IRQn, uint32_t * p_priority);






static inline uint32_t sd_nvic_SystemReset(void);
# 261 "../../../../../../components/softdevice/s140/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_critical_region_enter(uint8_t * p_is_nested_critical_region);
# 272 "../../../../../../components/softdevice/s140/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_critical_region_exit(uint8_t is_nested_critical_region);





static inline int __sd_nvic_irq_disable(void)
{
  int pm = __get_PRIMASK();
  __disable_irq();
  return pm;
}

static inline void __sd_nvic_irq_enable(void)
{
  __enable_irq();
}

static inline uint32_t __sd_nvic_app_accessible_irq(IRQn_Type IRQn)
{
  if (IRQn < 32)
  {
    return ((1UL<<IRQn) & (~((uint32_t)( (1U << POWER_CLOCK_IRQn) | (1U << RADIO_IRQn) | (1U << RTC0_IRQn) | (1U << TIMER0_IRQn) | (1U << RNG_IRQn) | (1U << ECB_IRQn) | (1U << CCM_AAR_IRQn) | (1U << TEMP_IRQn) | (1U << (30)) | (1U << (uint32_t)SWI5_EGU5_IRQn) )))) != 0;
  }
  else if (IRQn < 64)
  {
    return ((1UL<<(IRQn-32)) & (~((uint32_t)0))) != 0;
  }
  else
  {
    return 1;
  }
}

static inline uint32_t __sd_nvic_is_app_accessible_priority(uint32_t priority)
{
  if(priority >= (1 << 3))
  {
    return 0;
  }
  if( priority == 0
     || priority == 1
     || priority == 4
     )
  {
    return 0;
  }
  return 1;
}


static inline uint32_t sd_nvic_EnableIRQ(IRQn_Type IRQn)
{
  if (!__sd_nvic_app_accessible_irq(IRQn))
  {
    return ((0x2000) + 1);
  }
  if (!__sd_nvic_is_app_accessible_priority(NVIC_GetPriority(IRQn)))
  {
    return ((0x2000) + 2);
  }

  if (nrf_nvic_state.__cr_flag)
  {
    nrf_nvic_state.__irq_masks[(uint32_t)((int32_t)IRQn) >> 5] |= (uint32_t)(1 << ((uint32_t)((int32_t)IRQn) & (uint32_t)0x1F));
  }
  else
  {
    NVIC_EnableIRQ(IRQn);
  }
  return ((0x0) + 0);
}

static inline uint32_t sd_nvic_DisableIRQ(IRQn_Type IRQn)
{
  if (!__sd_nvic_app_accessible_irq(IRQn))
  {
    return ((0x2000) + 1);
  }

  if (nrf_nvic_state.__cr_flag)
  {
    nrf_nvic_state.__irq_masks[(uint32_t)((int32_t)IRQn) >> 5] &= ~(1UL << ((uint32_t)(IRQn) & 0x1F));
  }
  else
  {
    NVIC_DisableIRQ(IRQn);
  }

  return ((0x0) + 0);
}

static inline uint32_t sd_nvic_GetPendingIRQ(IRQn_Type IRQn, uint32_t * p_pending_irq)
{
  if (__sd_nvic_app_accessible_irq(IRQn))
  {
    *p_pending_irq = NVIC_GetPendingIRQ(IRQn);
    return ((0x0) + 0);
  }
  else
  {
    return ((0x2000) + 1);
  }
}

static inline uint32_t sd_nvic_SetPendingIRQ(IRQn_Type IRQn)
{
  if (__sd_nvic_app_accessible_irq(IRQn))
  {
    NVIC_SetPendingIRQ(IRQn);
    return ((0x0) + 0);
  }
  else
  {
    return ((0x2000) + 1);
  }
}

static inline uint32_t sd_nvic_ClearPendingIRQ(IRQn_Type IRQn)
{
  if (__sd_nvic_app_accessible_irq(IRQn))
  {
    NVIC_ClearPendingIRQ(IRQn);
    return ((0x0) + 0);
  }
  else
  {
    return ((0x2000) + 1);
  }
}

static inline uint32_t sd_nvic_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if (!__sd_nvic_app_accessible_irq(IRQn))
  {
    return ((0x2000) + 1);
  }

  if (!__sd_nvic_is_app_accessible_priority(priority))
  {
    return ((0x2000) + 2);
  }

  NVIC_SetPriority(IRQn, (uint32_t)priority);
  return ((0x0) + 0);
}

static inline uint32_t sd_nvic_GetPriority(IRQn_Type IRQn, uint32_t * p_priority)
{
  if (__sd_nvic_app_accessible_irq(IRQn))
  {
    *p_priority = (NVIC_GetPriority(IRQn) & 0xFF);
    return ((0x0) + 0);
  }
  else
  {
    return ((0x2000) + 1);
  }
}

static inline uint32_t sd_nvic_SystemReset(void)
{
  NVIC_SystemReset();
  return ((0x2000) + 3);
}

static inline uint32_t sd_nvic_critical_region_enter(uint8_t * p_is_nested_critical_region)
{
  int was_masked = __sd_nvic_irq_disable();
  if (!nrf_nvic_state.__cr_flag)
  {
    nrf_nvic_state.__cr_flag = 1;
    nrf_nvic_state.__irq_masks[0] = ( ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[0] & (~((uint32_t)( (1U << POWER_CLOCK_IRQn) | (1U << RADIO_IRQn) | (1U << RTC0_IRQn) | (1U << TIMER0_IRQn) | (1U << RNG_IRQn) | (1U << ECB_IRQn) | (1U << CCM_AAR_IRQn) | (1U << TEMP_IRQn) | (1U << (30)) | (1U << (uint32_t)SWI5_EGU5_IRQn) ))) );
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[0] = (~((uint32_t)( (1U << POWER_CLOCK_IRQn) | (1U << RADIO_IRQn) | (1U << RTC0_IRQn) | (1U << TIMER0_IRQn) | (1U << RNG_IRQn) | (1U << ECB_IRQn) | (1U << CCM_AAR_IRQn) | (1U << TEMP_IRQn) | (1U << (30)) | (1U << (uint32_t)SWI5_EGU5_IRQn) )));
    nrf_nvic_state.__irq_masks[1] = ( ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[1] & (~((uint32_t)0)) );
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[1] = (~((uint32_t)0));
    *p_is_nested_critical_region = 0;
  }
  else
  {
    *p_is_nested_critical_region = 1;
  }
  if (!was_masked)
  {
    __sd_nvic_irq_enable();
  }
  return ((0x0) + 0);
}

static inline uint32_t sd_nvic_critical_region_exit(uint8_t is_nested_critical_region)
{
  if (nrf_nvic_state.__cr_flag && (is_nested_critical_region == 0))
  {
    int was_masked = __sd_nvic_irq_disable();
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[0] = nrf_nvic_state.__irq_masks[0];
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[1] = nrf_nvic_state.__irq_masks[1];
    nrf_nvic_state.__cr_flag = 0;
    if (!was_masked)
    {
      __sd_nvic_irq_enable();
    }
  }

  return ((0x0) + 0);
}
# 58 "../../../../../../components/libraries/util/app_util_platform.h" 2

# 1 "../../../../../../components/libraries/util/nrf_assert.h" 1
# 60 "../../../../../../components/libraries/util/app_util_platform.h" 2
# 1 "../../../../../../components/libraries/util/app_error.h" 1
# 54 "../../../../../../components/libraries/util/app_error.h"
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdio.h" 1 3 4
# 46 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdio.h" 3 4

# 46 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdio.h" 3 4
int putchar(int __c);
# 55 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdio.h" 3 4
int getchar(void);
# 67 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdio.h" 3 4
int puts(const char *__s);
# 84 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdio.h" 3 4
char *gets(char *__s);
# 103 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdio.h" 3 4
int sprintf(char *__s, const char *__format, ...);
# 131 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdio.h" 3 4
int snprintf(char *__s, size_t __n, const char *__format, ...);
# 167 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdio.h" 3 4
int vsnprintf(char *__s, size_t __n, const char *__format, __va_list __arg);
# 413 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdio.h" 3 4
int printf(const char *__format, ...);
# 433 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdio.h" 3 4
int vprintf(const char *__format, __va_list __arg);
# 462 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdio.h" 3 4
int vsprintf(char *__s, const char *__format, __va_list __arg);
# 663 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdio.h" 3 4
int scanf(const char *__format, ...);
# 683 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdio.h" 3 4
int sscanf(const char *__s, const char *__format, ...);
# 709 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdio.h" 3 4
int vscanf(const char *__format, __va_list __arg);
# 733 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdio.h" 3 4
int vsscanf(const char *__s, const char *__format, __va_list __arg);
# 754 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdio.h" 3 4
typedef struct __RAL_FILE FILE;


typedef long fpos_t;
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE *, fpos_t *);
char *fgets(char *, int, FILE *);
int fileno(FILE *);
FILE *fopen(const char *, const char *);
int fprintf(FILE *, const char *, ...);
int fputc(int, FILE *);
int fputs(const char *, FILE *);
size_t fread(void *, size_t, size_t, FILE *);
FILE *freopen(const char *, const char *, FILE *);
int fscanf(FILE *, const char *, ...);
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void *, size_t, size_t, FILE *);
int getc(FILE *);
void perror(const char *);
int putc(int, FILE *);
int remove(const char *);
int rename(const char *, const char *);
void rewind(FILE *);
void setbuf(FILE *, char *);
int setvbuf(FILE *, char *, int, size_t);
FILE *tmpfile(void);
char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE *, const char *, __va_list);
int vfscanf(FILE *, const char *, __va_list);
# 55 "../../../../../../components/libraries/util/app_error.h" 2


# 1 "../../../../../../components/libraries/util/sdk_errors.h" 1
# 73 "../../../../../../components/libraries/util/sdk_errors.h"
# 1 "../../../../../../components/softdevice/s140/headers/nrf_error.h" 1
# 74 "../../../../../../components/libraries/util/sdk_errors.h" 2
# 158 "../../../../../../components/libraries/util/sdk_errors.h"

# 158 "../../../../../../components/libraries/util/sdk_errors.h"
typedef uint32_t ret_code_t;
# 58 "../../../../../../components/libraries/util/app_error.h" 2

# 1 "../../../../../../components/libraries/util/app_error_weak.h" 1
# 77 "../../../../../../components/libraries/util/app_error_weak.h"
void app_error_fault_handler(uint32_t id, uint32_t pc, uint32_t info);
# 60 "../../../../../../components/libraries/util/app_error.h" 2
# 80 "../../../../../../components/libraries/util/app_error.h"
typedef struct
{
    uint32_t line_num;
    uint8_t const * p_file_name;
    uint32_t err_code;
} error_info_t;



typedef struct
{
    uint16_t line_num;
    uint8_t const * p_file_name;
} assert_info_t;
# 111 "../../../../../../components/libraries/util/app_error.h"
void app_error_handler(uint32_t error_code, uint32_t line_num, const uint8_t * p_file_name);





void app_error_handler_bare(ret_code_t error_code);
# 127 "../../../../../../components/libraries/util/app_error.h"
void app_error_save_and_stop(uint32_t id, uint32_t pc, uint32_t info);
# 137 "../../../../../../components/libraries/util/app_error.h"
void app_error_log_handle(uint32_t id, uint32_t pc, uint32_t info);
# 61 "../../../../../../components/libraries/util/app_util_platform.h" 2
# 91 "../../../../../../components/libraries/util/app_util_platform.h"
typedef enum
{



    APP_IRQ_PRIORITY_HIGHEST = 2,

    APP_IRQ_PRIORITY_HIGH = 2,



    APP_IRQ_PRIORITY_MID = 3,

    APP_IRQ_PRIORITY_LOW = 6,
    APP_IRQ_PRIORITY_LOWEST = 7,
    APP_IRQ_PRIORITY_THREAD = 15
} app_irq_priority_t;




typedef enum
{
    APP_LEVEL_UNPRIVILEGED,
    APP_LEVEL_PRIVILEGED
} app_level_t;
# 172 "../../../../../../components/libraries/util/app_util_platform.h"
void app_util_critical_region_enter (uint8_t *p_nested);
void app_util_critical_region_exit (uint8_t nested);
# 261 "../../../../../../components/libraries/util/app_util_platform.h"
uint8_t current_int_priority_get(void);
# 270 "../../../../../../components/libraries/util/app_util_platform.h"
uint8_t privilege_level_get(void);
# 184 "../../../../../../integration/nrfx/nrfx_glue.h" 2
# 204 "../../../../../../integration/nrfx/nrfx_glue.h"
# 1 "../../../../../../modules/nrfx/soc/nrfx_coredep.h" 1
# 84 "../../../../../../modules/nrfx/soc/nrfx_coredep.h"
static inline void nrfx_coredep_delay_us(uint32_t time_us);
# 128 "../../../../../../modules/nrfx/soc/nrfx_coredep.h"
static inline void nrfx_coredep_delay_us(uint32_t time_us)
{
    if (time_us == 0)
    {
        return;
    }
# 152 "../../../../../../modules/nrfx/soc/nrfx_coredep.h"
    __attribute__((aligned(16)))
    static const uint16_t delay_bytecode[] = {
        0x3803,
        0xd8fd,
        0x4770
        };


    typedef void (* delay_func_t)(uint32_t);

    const delay_func_t delay_cycles = (delay_func_t)((((uint32_t)delay_bytecode) | 1));
    uint32_t cycles = time_us * 64;
    delay_cycles(cycles);
}
# 205 "../../../../../../integration/nrfx/nrfx_glue.h" 2





# 1 "../../../../../../components/libraries/util/sdk_errors.h" 1
# 211 "../../../../../../integration/nrfx/nrfx_glue.h" 2
# 219 "../../../../../../integration/nrfx/nrfx_glue.h"
typedef ret_code_t nrfx_err_t;
# 241 "../../../../../../integration/nrfx/nrfx_glue.h"
# 1 "../../../../../../components/libraries/util/sdk_resources.h" 1
# 52 "../../../../../../components/libraries/util/sdk_resources.h"
# 1 "../../../../../../components/softdevice/s140/headers/nrf_sd_def.h" 1
# 53 "../../../../../../components/libraries/util/sdk_resources.h" 2
# 242 "../../../../../../integration/nrfx/nrfx_glue.h" 2
# 47 "../../../../../../modules/nrfx/nrfx.h" 2
# 1 "../../../../../../modules/nrfx/drivers/nrfx_errors.h" 1
# 48 "../../../../../../modules/nrfx/nrfx.h" 2
# 45 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h" 2

# 1 "../../../../../../modules/nrfx/drivers/include/nrfx_spim.h" 1
# 45 "../../../../../../modules/nrfx/drivers/include/nrfx_spim.h"
# 1 "../../../../../../modules/nrfx/hal/nrf_spim.h" 1
# 84 "../../../../../../modules/nrfx/hal/nrf_spim.h"
typedef enum
{

    NRF_SPIM_TASK_START = __builtin_offsetof (NRF_SPIM_Type, TASKS_START),
    NRF_SPIM_TASK_STOP = __builtin_offsetof (NRF_SPIM_Type, TASKS_STOP),
    NRF_SPIM_TASK_SUSPEND = __builtin_offsetof (NRF_SPIM_Type, TASKS_SUSPEND),
    NRF_SPIM_TASK_RESUME = __builtin_offsetof (NRF_SPIM_Type, TASKS_RESUME)

} nrf_spim_task_t;




typedef enum
{

    NRF_SPIM_EVENT_STOPPED = __builtin_offsetof (NRF_SPIM_Type, EVENTS_STOPPED),
    NRF_SPIM_EVENT_ENDRX = __builtin_offsetof (NRF_SPIM_Type, EVENTS_ENDRX),
    NRF_SPIM_EVENT_END = __builtin_offsetof (NRF_SPIM_Type, EVENTS_END),
    NRF_SPIM_EVENT_ENDTX = __builtin_offsetof (NRF_SPIM_Type, EVENTS_ENDTX),
    NRF_SPIM_EVENT_STARTED = __builtin_offsetof (NRF_SPIM_Type, EVENTS_STARTED)

} nrf_spim_event_t;




typedef enum
{
    NRF_SPIM_SHORT_END_START_MASK = (0x1UL << (17UL)),
    NRF_SPIM_ALL_SHORTS_MASK = (0x1UL << (17UL))
} nrf_spim_short_mask_t;




typedef enum
{
    NRF_SPIM_INT_STOPPED_MASK = (0x1UL << (1UL)),
    NRF_SPIM_INT_ENDRX_MASK = (0x1UL << (4UL)),
    NRF_SPIM_INT_END_MASK = (0x1UL << (6UL)),
    NRF_SPIM_INT_ENDTX_MASK = (0x1UL << (8UL)),
    NRF_SPIM_INT_STARTED_MASK = (0x1UL << (19UL)),
    NRF_SPIM_ALL_INTS_MASK = (0x1UL << (1UL)) |
                                (0x1UL << (4UL)) |
                                (0x1UL << (6UL)) |
                                (0x1UL << (8UL)) |
                                (0x1UL << (19UL))
} nrf_spim_int_mask_t;




typedef enum
{
    NRF_SPIM_FREQ_125K = (0x02000000UL),
    NRF_SPIM_FREQ_250K = (0x04000000UL),
    NRF_SPIM_FREQ_500K = (0x08000000UL),
    NRF_SPIM_FREQ_1M = (0x10000000UL),
    NRF_SPIM_FREQ_2M = (0x20000000UL),
    NRF_SPIM_FREQ_4M = (0x40000000UL),


    NRF_SPIM_FREQ_8M = (int)(0x80000000UL),

    NRF_SPIM_FREQ_16M = (0x0A000000UL),


    NRF_SPIM_FREQ_32M = (0x14000000UL)

} nrf_spim_frequency_t;




typedef enum
{
    NRF_SPIM_MODE_0,
    NRF_SPIM_MODE_1,
    NRF_SPIM_MODE_2,
    NRF_SPIM_MODE_3
} nrf_spim_mode_t;




typedef enum
{
    NRF_SPIM_BIT_ORDER_MSB_FIRST = (0UL),
    NRF_SPIM_BIT_ORDER_LSB_FIRST = (1UL)
} nrf_spim_bit_order_t;





typedef enum
{
    NRF_SPIM_CSN_POL_LOW = (0UL),
    NRF_SPIM_CSN_POL_HIGH = (1UL)
} nrf_spim_csn_pol_t;
# 193 "../../../../../../modules/nrfx/hal/nrf_spim.h"
static inline void nrf_spim_task_trigger(NRF_SPIM_Type * p_reg,
                                           nrf_spim_task_t spim_task);
# 204 "../../../../../../modules/nrfx/hal/nrf_spim.h"
static inline uint32_t nrf_spim_task_address_get(NRF_SPIM_Type * p_reg,
                                                   nrf_spim_task_t spim_task);







static inline void nrf_spim_event_clear(NRF_SPIM_Type * p_reg,
                                          nrf_spim_event_t spim_event);
# 225 "../../../../../../modules/nrfx/hal/nrf_spim.h"
static inline 
# 225 "../../../../../../modules/nrfx/hal/nrf_spim.h" 3 4
               _Bool 
# 225 "../../../../../../modules/nrfx/hal/nrf_spim.h"
                    nrf_spim_event_check(NRF_SPIM_Type * p_reg,
                                          nrf_spim_event_t spim_event);
# 236 "../../../../../../modules/nrfx/hal/nrf_spim.h"
static inline uint32_t nrf_spim_event_address_get(NRF_SPIM_Type * p_reg,
                                                    nrf_spim_event_t spim_event);






static inline void nrf_spim_shorts_enable(NRF_SPIM_Type * p_reg,
                                            uint32_t spim_shorts_mask);







static inline void nrf_spim_shorts_disable(NRF_SPIM_Type * p_reg,
                                             uint32_t spim_shorts_mask);






static inline uint32_t nrf_spim_shorts_get(NRF_SPIM_Type * p_reg);







static inline void nrf_spim_int_enable(NRF_SPIM_Type * p_reg,
                                         uint32_t spim_int_mask);







static inline void nrf_spim_int_disable(NRF_SPIM_Type * p_reg,
                                          uint32_t spim_int_mask);
# 290 "../../../../../../modules/nrfx/hal/nrf_spim.h"
static inline 
# 290 "../../../../../../modules/nrfx/hal/nrf_spim.h" 3 4
               _Bool 
# 290 "../../../../../../modules/nrfx/hal/nrf_spim.h"
                    nrf_spim_int_enable_check(NRF_SPIM_Type * p_reg,
                                               nrf_spim_int_mask_t spim_int);






static inline void nrf_spim_enable(NRF_SPIM_Type * p_reg);






static inline void nrf_spim_disable(NRF_SPIM_Type * p_reg);
# 318 "../../../../../../modules/nrfx/hal/nrf_spim.h"
static inline void nrf_spim_pins_set(NRF_SPIM_Type * p_reg,
                                       uint32_t sck_pin,
                                       uint32_t mosi_pin,
                                       uint32_t miso_pin);
# 337 "../../../../../../modules/nrfx/hal/nrf_spim.h"
static inline void nrf_spim_csn_configure(NRF_SPIM_Type * p_reg,
                                            uint32_t pin,
                                            nrf_spim_csn_pol_t polarity,
                                            uint32_t duration);
# 353 "../../../../../../modules/nrfx/hal/nrf_spim.h"
static inline void nrf_spim_dcx_pin_set(NRF_SPIM_Type * p_reg,
                                          uint32_t dcx_pin);
# 367 "../../../../../../modules/nrfx/hal/nrf_spim.h"
static inline void nrf_spim_dcx_cnt_set(NRF_SPIM_Type * p_reg,
                                          uint32_t count);
# 378 "../../../../../../modules/nrfx/hal/nrf_spim.h"
static inline void nrf_spim_iftiming_set(NRF_SPIM_Type * p_reg,
                                           uint32_t rxdelay);
# 388 "../../../../../../modules/nrfx/hal/nrf_spim.h"
static inline void nrf_spim_stallstat_rx_clear(NRF_SPIM_Type * p_reg);
# 397 "../../../../../../modules/nrfx/hal/nrf_spim.h"
static inline 
# 397 "../../../../../../modules/nrfx/hal/nrf_spim.h" 3 4
               _Bool 
# 397 "../../../../../../modules/nrfx/hal/nrf_spim.h"
                    nrf_spim_stallstat_rx_get(NRF_SPIM_Type * p_reg);
# 406 "../../../../../../modules/nrfx/hal/nrf_spim.h"
static inline void nrf_spim_stallstat_tx_clear(NRF_SPIM_Type * p_reg);
# 415 "../../../../../../modules/nrfx/hal/nrf_spim.h"
static inline 
# 415 "../../../../../../modules/nrfx/hal/nrf_spim.h" 3 4
               _Bool 
# 415 "../../../../../../modules/nrfx/hal/nrf_spim.h"
                    nrf_spim_stallstat_tx_get(NRF_SPIM_Type * p_reg);
# 424 "../../../../../../modules/nrfx/hal/nrf_spim.h"
static inline void nrf_spim_frequency_set(NRF_SPIM_Type * p_reg,
                                            nrf_spim_frequency_t frequency);
# 434 "../../../../../../modules/nrfx/hal/nrf_spim.h"
static inline void nrf_spim_tx_buffer_set(NRF_SPIM_Type * p_reg,
                                            uint8_t const * p_buffer,
                                            size_t length);
# 445 "../../../../../../modules/nrfx/hal/nrf_spim.h"
static inline void nrf_spim_rx_buffer_set(NRF_SPIM_Type * p_reg,
                                            uint8_t * p_buffer,
                                            size_t length);
# 456 "../../../../../../modules/nrfx/hal/nrf_spim.h"
static inline void nrf_spim_configure(NRF_SPIM_Type * p_reg,
                                        nrf_spim_mode_t spi_mode,
                                        nrf_spim_bit_order_t spi_bit_order);
# 467 "../../../../../../modules/nrfx/hal/nrf_spim.h"
static inline void nrf_spim_orc_set(NRF_SPIM_Type * p_reg,
                                      uint8_t orc);






static inline void nrf_spim_tx_list_enable(NRF_SPIM_Type * p_reg);






static inline void nrf_spim_tx_list_disable(NRF_SPIM_Type * p_reg);






static inline void nrf_spim_rx_list_enable(NRF_SPIM_Type * p_reg);






static inline void nrf_spim_rx_list_disable(NRF_SPIM_Type * p_reg);



static inline void nrf_spim_task_trigger(NRF_SPIM_Type * p_reg,
                                           nrf_spim_task_t spim_task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)spim_task)) = 0x1UL;
}

static inline uint32_t nrf_spim_task_address_get(NRF_SPIM_Type * p_reg,
                                                   nrf_spim_task_t spim_task)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)spim_task);
}

static inline void nrf_spim_event_clear(NRF_SPIM_Type * p_reg,
                                          nrf_spim_event_t spim_event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)spim_event)) = 0x0UL;

    volatile uint32_t dummy = *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)spim_event));
    (void)dummy;

}

static inline 
# 522 "../../../../../../modules/nrfx/hal/nrf_spim.h" 3 4
               _Bool 
# 522 "../../../../../../modules/nrfx/hal/nrf_spim.h"
                    nrf_spim_event_check(NRF_SPIM_Type * p_reg,
                                          nrf_spim_event_t spim_event)
{
    return (
# 525 "../../../../../../modules/nrfx/hal/nrf_spim.h" 3 4
           _Bool
# 525 "../../../../../../modules/nrfx/hal/nrf_spim.h"
               )*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)spim_event);
}

static inline uint32_t nrf_spim_event_address_get(NRF_SPIM_Type * p_reg,
                                                    nrf_spim_event_t spim_event)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)spim_event);
}

static inline void nrf_spim_shorts_enable(NRF_SPIM_Type * p_reg,
                                            uint32_t spim_shorts_mask)
{
    p_reg->SHORTS |= spim_shorts_mask;
}

static inline void nrf_spim_shorts_disable(NRF_SPIM_Type * p_reg,
                                             uint32_t spim_shorts_mask)
{
    p_reg->SHORTS &= ~(spim_shorts_mask);
}

static inline uint32_t nrf_spim_shorts_get(NRF_SPIM_Type * p_reg)
{
    return p_reg->SHORTS;
}

static inline void nrf_spim_int_enable(NRF_SPIM_Type * p_reg,
                                         uint32_t spim_int_mask)
{
    p_reg->INTENSET = spim_int_mask;
}

static inline void nrf_spim_int_disable(NRF_SPIM_Type * p_reg,
                                          uint32_t spim_int_mask)
{
    p_reg->INTENCLR = spim_int_mask;
}

static inline 
# 563 "../../../../../../modules/nrfx/hal/nrf_spim.h" 3 4
               _Bool 
# 563 "../../../../../../modules/nrfx/hal/nrf_spim.h"
                    nrf_spim_int_enable_check(NRF_SPIM_Type * p_reg,
                                               nrf_spim_int_mask_t spim_int)
{
    return (
# 566 "../../../../../../modules/nrfx/hal/nrf_spim.h" 3 4
           _Bool
# 566 "../../../../../../modules/nrfx/hal/nrf_spim.h"
               )(p_reg->INTENSET & spim_int);
}

static inline void nrf_spim_enable(NRF_SPIM_Type * p_reg)
{
    p_reg->ENABLE = ((7UL) << (0UL));
}

static inline void nrf_spim_disable(NRF_SPIM_Type * p_reg)
{
    p_reg->ENABLE = ((0UL) << (0UL));
}

static inline void nrf_spim_pins_set(NRF_SPIM_Type * p_reg,
                                       uint32_t sck_pin,
                                       uint32_t mosi_pin,
                                       uint32_t miso_pin)
{
    p_reg->PSEL.SCK = sck_pin;
    p_reg->PSEL.MOSI = mosi_pin;
    p_reg->PSEL.MISO = miso_pin;
}


static inline void nrf_spim_csn_configure(NRF_SPIM_Type * p_reg,
                                            uint32_t pin,
                                            nrf_spim_csn_pol_t polarity,
                                            uint32_t duration)
{
    p_reg->PSEL.CSN = pin;
    p_reg->CSNPOL = polarity;
    p_reg->IFTIMING.CSNDUR = duration;
}



static inline void nrf_spim_dcx_pin_set(NRF_SPIM_Type * p_reg,
                                          uint32_t dcx_pin)
{
    p_reg->PSELDCX = dcx_pin;
}

static inline void nrf_spim_dcx_cnt_set(NRF_SPIM_Type * p_reg,
                                          uint32_t dcx_cnt)
{
    p_reg->DCXCNT = dcx_cnt;
}



static inline void nrf_spim_iftiming_set(NRF_SPIM_Type * p_reg,
                                           uint32_t rxdelay)
{
    p_reg->IFTIMING.RXDELAY = rxdelay;
}



static inline void nrf_spim_stallstat_rx_clear(NRF_SPIM_Type * p_reg)
{
    p_reg->STALLSTAT &= ~((0x1UL << (1UL)));
}

static inline 
# 629 "../../../../../../modules/nrfx/hal/nrf_spim.h" 3 4
               _Bool 
# 629 "../../../../../../modules/nrfx/hal/nrf_spim.h"
                    nrf_spim_stallstat_rx_get(NRF_SPIM_Type * p_reg)
{
    return (p_reg->STALLSTAT & (0x1UL << (1UL))) != 0;
}



static inline void nrf_spim_stallstat_tx_clear(NRF_SPIM_Type * p_reg)
{
    p_reg->STALLSTAT &= ~((0x1UL << (0UL)));
}

static inline 
# 641 "../../../../../../modules/nrfx/hal/nrf_spim.h" 3 4
               _Bool 
# 641 "../../../../../../modules/nrfx/hal/nrf_spim.h"
                    nrf_spim_stallstat_tx_get(NRF_SPIM_Type * p_reg)
{
    return (p_reg->STALLSTAT & (0x1UL << (0UL))) != 0;
}


static inline void nrf_spim_frequency_set(NRF_SPIM_Type * p_reg,
                                            nrf_spim_frequency_t frequency)
{
    p_reg->FREQUENCY = frequency;
}

static inline void nrf_spim_tx_buffer_set(NRF_SPIM_Type * p_reg,
                                            uint8_t const * p_buffer,
                                            size_t length)
{
    p_reg->TXD.PTR = (uint32_t)p_buffer;
    p_reg->TXD.MAXCNT = length;
}

static inline void nrf_spim_rx_buffer_set(NRF_SPIM_Type * p_reg,
                                            uint8_t * p_buffer,
                                            size_t length)
{
    p_reg->RXD.PTR = (uint32_t)p_buffer;
    p_reg->RXD.MAXCNT = length;
}

static inline void nrf_spim_configure(NRF_SPIM_Type * p_reg,
                                        nrf_spim_mode_t spi_mode,
                                        nrf_spim_bit_order_t spi_bit_order)
{
    uint32_t config = (spi_bit_order == NRF_SPIM_BIT_ORDER_MSB_FIRST ?
        (0UL) : (1UL));
    switch (spi_mode)
    {
    default:
    case NRF_SPIM_MODE_0:
        config |= ((0UL) << (2UL)) |
                  ((0UL) << (1UL));
        break;

    case NRF_SPIM_MODE_1:
        config |= ((0UL) << (2UL)) |
                  ((1UL) << (1UL));
        break;

    case NRF_SPIM_MODE_2:
        config |= ((1UL) << (2UL)) |
                  ((0UL) << (1UL));
        break;

    case NRF_SPIM_MODE_3:
        config |= ((1UL) << (2UL)) |
                  ((1UL) << (1UL));
        break;
    }
    p_reg->CONFIG = config;
}

static inline void nrf_spim_orc_set(NRF_SPIM_Type * p_reg,
                                      uint8_t orc)
{
    p_reg->ORC = orc;
}


static inline void nrf_spim_tx_list_enable(NRF_SPIM_Type * p_reg)
{
    p_reg->TXD.LIST = 1;
}

static inline void nrf_spim_tx_list_disable(NRF_SPIM_Type * p_reg)
{
    p_reg->TXD.LIST = 0;
}

static inline void nrf_spim_rx_list_enable(NRF_SPIM_Type * p_reg)
{
    p_reg->RXD.LIST = 1;
}

static inline void nrf_spim_rx_list_disable(NRF_SPIM_Type * p_reg)
{
    p_reg->RXD.LIST = 0;
}
# 46 "../../../../../../modules/nrfx/drivers/include/nrfx_spim.h" 2
# 61 "../../../../../../modules/nrfx/drivers/include/nrfx_spim.h"
typedef struct
{
    NRF_SPIM_Type * p_reg;
    uint8_t drv_inst_idx;
} nrfx_spim_t;

enum {




    NRFX_SPIM1_INST_IDX,


    NRFX_SPIM2_INST_IDX,




    NRFX_SPIM_ENABLED_COUNT
};
# 102 "../../../../../../modules/nrfx/drivers/include/nrfx_spim.h"
typedef struct
{
    uint8_t sck_pin;
    uint8_t mosi_pin;


    uint8_t miso_pin;


    uint8_t ss_pin;


    
# 114 "../../../../../../modules/nrfx/drivers/include/nrfx_spim.h" 3 4
   _Bool 
# 114 "../../../../../../modules/nrfx/drivers/include/nrfx_spim.h"
        ss_active_high;
    uint8_t irq_priority;
    uint8_t orc;


    nrf_spim_frequency_t frequency;
    nrf_spim_mode_t mode;
    nrf_spim_bit_order_t bit_order;
# 136 "../../../../../../modules/nrfx/drivers/include/nrfx_spim.h"
} nrfx_spim_config_t;
# 178 "../../../../../../modules/nrfx/drivers/include/nrfx_spim.h"
typedef struct
{
    uint8_t const * p_tx_buffer;
    size_t tx_length;
    uint8_t * p_rx_buffer;
    size_t rx_length;
} nrfx_spim_xfer_desc_t;
# 221 "../../../../../../modules/nrfx/drivers/include/nrfx_spim.h"
typedef enum
{
    NRFX_SPIM_EVENT_DONE,
} nrfx_spim_evt_type_t;

typedef struct
{
    nrfx_spim_evt_type_t type;
    nrfx_spim_xfer_desc_t xfer_desc;
} nrfx_spim_evt_t;




typedef void (* nrfx_spim_evt_handler_t)(nrfx_spim_evt_t const * p_event,
                                         void * p_context);
# 259 "../../../../../../modules/nrfx/drivers/include/nrfx_spim.h"
nrfx_err_t nrfx_spim_init(nrfx_spim_t const * const p_instance,
                          nrfx_spim_config_t const * p_config,
                          nrfx_spim_evt_handler_t handler,
                          void * p_context);






void nrfx_spim_uninit(nrfx_spim_t const * const p_instance);
# 313 "../../../../../../modules/nrfx/drivers/include/nrfx_spim.h"
nrfx_err_t nrfx_spim_xfer(nrfx_spim_t const * const p_instance,
                          nrfx_spim_xfer_desc_t const * p_xfer_desc,
                          uint32_t flags);
# 362 "../../../../../../modules/nrfx/drivers/include/nrfx_spim.h"
uint32_t nrfx_spim_start_task_get(nrfx_spim_t const * p_instance);
# 374 "../../../../../../modules/nrfx/drivers/include/nrfx_spim.h"
uint32_t nrfx_spim_end_event_get(nrfx_spim_t const * p_instance);






void nrfx_spim_abort(nrfx_spim_t const * p_instance);


void SPIM0_SPIS0_TWIM0_TWIS0_SPI0_TWI0_IRQHandler(void);
void SPIM1_SPIS1_TWIM1_TWIS1_SPI1_TWI1_IRQHandler(void);
void SPIM2_SPIS2_SPI2_IRQHandler(void);
void SPIM3_IRQHandler(void);
# 47 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h" 2
# 59 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
# 1 "../../../../../../modules/nrfx/drivers/include/nrfx_spi.h" 1
# 45 "../../../../../../modules/nrfx/drivers/include/nrfx_spi.h"
# 1 "../../../../../../modules/nrfx/hal/nrf_spi.h" 1
# 68 "../../../../../../modules/nrfx/hal/nrf_spi.h"
typedef enum
{

    NRF_SPI_EVENT_READY = __builtin_offsetof (NRF_SPI_Type, EVENTS_READY)

} nrf_spi_event_t;




typedef enum
{
    NRF_SPI_INT_READY_MASK = (0x1UL << (2UL)),
    NRF_SPI_ALL_INTS_MASK = (0x1UL << (2UL))
} nrf_spi_int_mask_t;




typedef enum
{
    NRF_SPI_FREQ_125K = (0x02000000UL),
    NRF_SPI_FREQ_250K = (0x04000000UL),
    NRF_SPI_FREQ_500K = (0x08000000UL),
    NRF_SPI_FREQ_1M = (0x10000000UL),
    NRF_SPI_FREQ_2M = (0x20000000UL),
    NRF_SPI_FREQ_4M = (0x40000000UL),


    NRF_SPI_FREQ_8M = (int)(0x80000000UL)
} nrf_spi_frequency_t;




typedef enum
{
    NRF_SPI_MODE_0,
    NRF_SPI_MODE_1,
    NRF_SPI_MODE_2,
    NRF_SPI_MODE_3
} nrf_spi_mode_t;




typedef enum
{
    NRF_SPI_BIT_ORDER_MSB_FIRST = (0UL),
    NRF_SPI_BIT_ORDER_LSB_FIRST = (1UL)
} nrf_spi_bit_order_t;
# 127 "../../../../../../modules/nrfx/hal/nrf_spi.h"
static inline void nrf_spi_event_clear(NRF_SPI_Type * p_reg,
                                         nrf_spi_event_t spi_event);
# 139 "../../../../../../modules/nrfx/hal/nrf_spi.h"
static inline 
# 139 "../../../../../../modules/nrfx/hal/nrf_spi.h" 3 4
               _Bool 
# 139 "../../../../../../modules/nrfx/hal/nrf_spi.h"
                    nrf_spi_event_check(NRF_SPI_Type * p_reg,
                                         nrf_spi_event_t spi_event);
# 150 "../../../../../../modules/nrfx/hal/nrf_spi.h"
static inline uint32_t * nrf_spi_event_address_get(NRF_SPI_Type * p_reg,
                                                     nrf_spi_event_t spi_event);







static inline void nrf_spi_int_enable(NRF_SPI_Type * p_reg,
                                        uint32_t spi_int_mask);







static inline void nrf_spi_int_disable(NRF_SPI_Type * p_reg,
                                         uint32_t spi_int_mask);
# 180 "../../../../../../modules/nrfx/hal/nrf_spi.h"
static inline 
# 180 "../../../../../../modules/nrfx/hal/nrf_spi.h" 3 4
               _Bool 
# 180 "../../../../../../modules/nrfx/hal/nrf_spi.h"
                    nrf_spi_int_enable_check(NRF_SPI_Type * p_reg,
                                              nrf_spi_int_mask_t spi_int);






static inline void nrf_spi_enable(NRF_SPI_Type * p_reg);






static inline void nrf_spi_disable(NRF_SPI_Type * p_reg);
# 208 "../../../../../../modules/nrfx/hal/nrf_spi.h"
static inline void nrf_spi_pins_set(NRF_SPI_Type * p_reg,
                                      uint32_t sck_pin,
                                      uint32_t mosi_pin,
                                      uint32_t miso_pin);







static inline void nrf_spi_txd_set(NRF_SPI_Type * p_reg, uint8_t data);
# 228 "../../../../../../modules/nrfx/hal/nrf_spi.h"
static inline uint8_t nrf_spi_rxd_get(NRF_SPI_Type * p_reg);







static inline void nrf_spi_frequency_set(NRF_SPI_Type * p_reg,
                                           nrf_spi_frequency_t frequency);
# 246 "../../../../../../modules/nrfx/hal/nrf_spi.h"
static inline void nrf_spi_configure(NRF_SPI_Type * p_reg,
                                       nrf_spi_mode_t spi_mode,
                                       nrf_spi_bit_order_t spi_bit_order);




static inline void nrf_spi_event_clear(NRF_SPI_Type * p_reg,
                                         nrf_spi_event_t spi_event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)spi_event)) = 0x0UL;

    volatile uint32_t dummy = *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)spi_event));
    (void)dummy;

}

static inline 
# 263 "../../../../../../modules/nrfx/hal/nrf_spi.h" 3 4
               _Bool 
# 263 "../../../../../../modules/nrfx/hal/nrf_spi.h"
                    nrf_spi_event_check(NRF_SPI_Type * p_reg,
                                         nrf_spi_event_t spi_event)
{
    return (
# 266 "../../../../../../modules/nrfx/hal/nrf_spi.h" 3 4
           _Bool
# 266 "../../../../../../modules/nrfx/hal/nrf_spi.h"
               )*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)spi_event);
}

static inline uint32_t * nrf_spi_event_address_get(NRF_SPI_Type * p_reg,
                                                     nrf_spi_event_t spi_event)
{
    return (uint32_t *)((uint8_t *)p_reg + (uint32_t)spi_event);
}

static inline void nrf_spi_int_enable(NRF_SPI_Type * p_reg,
                                        uint32_t spi_int_mask)
{
    p_reg->INTENSET = spi_int_mask;
}

static inline void nrf_spi_int_disable(NRF_SPI_Type * p_reg,
                                         uint32_t spi_int_mask)
{
    p_reg->INTENCLR = spi_int_mask;
}

static inline 
# 287 "../../../../../../modules/nrfx/hal/nrf_spi.h" 3 4
               _Bool 
# 287 "../../../../../../modules/nrfx/hal/nrf_spi.h"
                    nrf_spi_int_enable_check(NRF_SPI_Type * p_reg,
                                              nrf_spi_int_mask_t spi_int)
{
    return (
# 290 "../../../../../../modules/nrfx/hal/nrf_spi.h" 3 4
           _Bool
# 290 "../../../../../../modules/nrfx/hal/nrf_spi.h"
               )(p_reg->INTENSET & spi_int);
}

static inline void nrf_spi_enable(NRF_SPI_Type * p_reg)
{
    p_reg->ENABLE = ((1UL) << (0UL));
}

static inline void nrf_spi_disable(NRF_SPI_Type * p_reg)
{
    p_reg->ENABLE = ((0UL) << (0UL));
}

static inline void nrf_spi_pins_set(NRF_SPI_Type * p_reg,
                                      uint32_t sck_pin,
                                      uint32_t mosi_pin,
                                      uint32_t miso_pin)
{
    p_reg->PSEL.SCK = sck_pin;
    p_reg->PSEL.MOSI = mosi_pin;
    p_reg->PSEL.MISO = miso_pin;
}

static inline void nrf_spi_txd_set(NRF_SPI_Type * p_reg, uint8_t data)
{
    p_reg->TXD = data;
}

static inline uint8_t nrf_spi_rxd_get(NRF_SPI_Type * p_reg)
{
    return p_reg->RXD;
}

static inline void nrf_spi_frequency_set(NRF_SPI_Type * p_reg,
                                           nrf_spi_frequency_t frequency)
{
    p_reg->FREQUENCY = frequency;
}

static inline void nrf_spi_configure(NRF_SPI_Type * p_reg,
                                       nrf_spi_mode_t spi_mode,
                                       nrf_spi_bit_order_t spi_bit_order)
{
    uint32_t config = (spi_bit_order == NRF_SPI_BIT_ORDER_MSB_FIRST ?
        (0UL) : (1UL));
    switch (spi_mode)
    {
    default:
    case NRF_SPI_MODE_0:
        config |= ((0UL) << (2UL)) |
                  ((0UL) << (1UL));
        break;

    case NRF_SPI_MODE_1:
        config |= ((0UL) << (2UL)) |
                  ((1UL) << (1UL));
        break;

    case NRF_SPI_MODE_2:
        config |= ((1UL) << (2UL)) |
                  ((0UL) << (1UL));
        break;

    case NRF_SPI_MODE_3:
        config |= ((1UL) << (2UL)) |
                  ((1UL) << (1UL));
        break;
    }
    p_reg->CONFIG = config;
}
# 46 "../../../../../../modules/nrfx/drivers/include/nrfx_spi.h" 2
# 61 "../../../../../../modules/nrfx/drivers/include/nrfx_spi.h"
typedef struct
{
    NRF_SPI_Type * p_reg;
    uint8_t drv_inst_idx;
} nrfx_spi_t;

enum {
# 77 "../../../../../../modules/nrfx/drivers/include/nrfx_spi.h"
    NRFX_SPI_ENABLED_COUNT
};
# 99 "../../../../../../modules/nrfx/drivers/include/nrfx_spi.h"
typedef struct
{
    uint8_t sck_pin;
    uint8_t mosi_pin;


    uint8_t miso_pin;


    uint8_t ss_pin;





    uint8_t irq_priority;
    uint8_t orc;


    nrf_spi_frequency_t frequency;
    nrf_spi_mode_t mode;
    nrf_spi_bit_order_t bit_order;
} nrfx_spi_config_t;
# 142 "../../../../../../modules/nrfx/drivers/include/nrfx_spi.h"
typedef struct
{
    uint8_t const * p_tx_buffer;
    size_t tx_length;
    uint8_t * p_rx_buffer;
    size_t rx_length;
} nrfx_spi_xfer_desc_t;
# 185 "../../../../../../modules/nrfx/drivers/include/nrfx_spi.h"
typedef enum
{
    NRFX_SPI_EVENT_DONE,
} nrfx_spi_evt_type_t;

typedef struct
{
    nrfx_spi_evt_type_t type;
    nrfx_spi_xfer_desc_t xfer_desc;
} nrfx_spi_evt_t;




typedef void (* nrfx_spi_evt_handler_t)(nrfx_spi_evt_t const * p_event,
                                        void * p_context);
# 221 "../../../../../../modules/nrfx/drivers/include/nrfx_spi.h"
nrfx_err_t nrfx_spi_init(nrfx_spi_t const * const p_instance,
                         nrfx_spi_config_t const * p_config,
                         nrfx_spi_evt_handler_t handler,
                         void * p_context);






void nrfx_spi_uninit(nrfx_spi_t const * const p_instance);
# 250 "../../../../../../modules/nrfx/drivers/include/nrfx_spi.h"
nrfx_err_t nrfx_spi_xfer(nrfx_spi_t const * const p_instance,
                         nrfx_spi_xfer_desc_t const * p_xfer_desc,
                         uint32_t flags);






void nrfx_spi_abort(nrfx_spi_t const * p_instance);


void SPIM0_SPIS0_TWIM0_TWIS0_SPI0_TWI0_IRQHandler(void);
void SPIM1_SPIS1_TWIM1_TWIS1_SPI1_TWI1_IRQHandler(void);
void SPIM2_SPIS2_SPI2_IRQHandler(void);
# 60 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h" 2
# 101 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
typedef struct
{
    uint8_t inst_idx;
    union
    {

        nrfx_spim_t spim;


        nrfx_spi_t spi;

    } u;
    
# 113 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h" 3 4
   _Bool 
# 113 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
           use_easy_dma;
} nrf_drv_spi_t;
# 154 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
typedef enum
{
    NRF_DRV_SPI_FREQ_125K = NRF_SPI_FREQ_125K,
    NRF_DRV_SPI_FREQ_250K = NRF_SPI_FREQ_250K,
    NRF_DRV_SPI_FREQ_500K = NRF_SPI_FREQ_500K,
    NRF_DRV_SPI_FREQ_1M = NRF_SPI_FREQ_1M,
    NRF_DRV_SPI_FREQ_2M = NRF_SPI_FREQ_2M,
    NRF_DRV_SPI_FREQ_4M = NRF_SPI_FREQ_4M,
    NRF_DRV_SPI_FREQ_8M = NRF_SPI_FREQ_8M
} nrf_drv_spi_frequency_t;




typedef enum
{
    NRF_DRV_SPI_MODE_0 = NRF_SPI_MODE_0,
    NRF_DRV_SPI_MODE_1 = NRF_SPI_MODE_1,
    NRF_DRV_SPI_MODE_2 = NRF_SPI_MODE_2,
    NRF_DRV_SPI_MODE_3 = NRF_SPI_MODE_3
} nrf_drv_spi_mode_t;




typedef enum
{
    NRF_DRV_SPI_BIT_ORDER_MSB_FIRST = NRF_SPI_BIT_ORDER_MSB_FIRST,
    NRF_DRV_SPI_BIT_ORDER_LSB_FIRST = NRF_SPI_BIT_ORDER_LSB_FIRST
} nrf_drv_spi_bit_order_t;




typedef struct
{
    uint8_t sck_pin;
    uint8_t mosi_pin;


    uint8_t miso_pin;


    uint8_t ss_pin;





    uint8_t irq_priority;
    uint8_t orc;


    nrf_drv_spi_frequency_t frequency;
    nrf_drv_spi_mode_t mode;
    nrf_drv_spi_bit_order_t bit_order;
} nrf_drv_spi_config_t;
# 237 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
typedef struct
{
    uint8_t const * p_tx_buffer;
    uint8_t tx_length;
    uint8_t * p_rx_buffer;
    uint8_t rx_length;
}nrf_drv_spi_xfer_desc_t;
# 280 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
typedef enum
{
    NRF_DRV_SPI_EVENT_DONE,
} nrf_drv_spi_evt_type_t;

typedef struct
{
    nrf_drv_spi_evt_type_t type;
    union
    {
        nrf_drv_spi_xfer_desc_t done;
    } data;
} nrf_drv_spi_evt_t;




typedef void (* nrf_drv_spi_evt_handler_t)(nrf_drv_spi_evt_t const * p_event,
                                           void * p_context);
# 322 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
ret_code_t nrf_drv_spi_init(nrf_drv_spi_t const * const p_instance,
                            nrf_drv_spi_config_t const * p_config,
                            nrf_drv_spi_evt_handler_t handler,
                            void * p_context);
# 334 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
static inline
void nrf_drv_spi_uninit(nrf_drv_spi_t const * const p_instance);
# 363 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
static inline
ret_code_t nrf_drv_spi_transfer(nrf_drv_spi_t const * const p_instance,
                                uint8_t const * p_tx_buffer,
                                uint16_t tx_buffer_length,
                                uint8_t * p_rx_buffer,
                                uint8_t rx_buffer_length);
# 411 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
static inline
ret_code_t nrf_drv_spi_xfer(nrf_drv_spi_t const * const p_instance,
                            nrf_drv_spi_xfer_desc_t const * p_xfer_desc,
                            uint32_t flags);
# 426 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
static inline
uint32_t nrf_drv_spi_start_task_get(nrf_drv_spi_t const * p_instance);
# 439 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
static inline
uint32_t nrf_drv_spi_end_event_get(nrf_drv_spi_t const * p_instance);






static inline
void nrf_drv_spi_abort(nrf_drv_spi_t const * p_instance);
# 478 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
static inline
void nrf_drv_spi_uninit(nrf_drv_spi_t const * p_instance)
{
    if (
# 481 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h" 3 4
       1
# 481 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
                           )
    {
        nrfx_spim_uninit(&p_instance->u.spim);
    }
    else if ((!
# 485 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h" 3 4
            1
# 485 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
            ))
    {
        nrfx_spi_uninit(&p_instance->u.spi);
    }
}

static inline
ret_code_t nrf_drv_spi_transfer(nrf_drv_spi_t const * const p_instance,
                                uint8_t const * p_tx_buffer,
                                uint16_t tx_buffer_length,
                                uint8_t * p_rx_buffer,
                                uint8_t rx_buffer_length)
{
    ret_code_t result = 0;
    if (
# 499 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h" 3 4
       1
# 499 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
                           )
    {

        nrfx_spim_xfer_desc_t const spim_xfer_desc =
        {
            .p_tx_buffer = p_tx_buffer,
            .tx_length = tx_buffer_length,
            .p_rx_buffer = p_rx_buffer,
            .rx_length = rx_buffer_length,
        };
        result = nrfx_spim_xfer(&p_instance->u.spim, &spim_xfer_desc, 0);

    }
    else if ((!
# 512 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h" 3 4
            1
# 512 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
            ))
    {

        nrfx_spi_xfer_desc_t const spi_xfer_desc =
        {
            .p_tx_buffer = p_tx_buffer,
            .tx_length = tx_buffer_length,
            .p_rx_buffer = p_rx_buffer,
            .rx_length = rx_buffer_length,
        };
        result = nrfx_spi_xfer(&p_instance->u.spi, &spi_xfer_desc, 0);

    }
    return result;
}

static inline
ret_code_t nrf_drv_spi_xfer(nrf_drv_spi_t const * const p_instance,
                            nrf_drv_spi_xfer_desc_t const * p_xfer_desc,
                            uint32_t flags)
{
    ret_code_t result = 0;
    if (
# 534 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h" 3 4
       1
# 534 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
                           )
    {

        nrfx_spim_xfer_desc_t const spim_xfer_desc =
        {
            .p_tx_buffer = p_xfer_desc->p_tx_buffer,
            .tx_length = p_xfer_desc->tx_length,
            .p_rx_buffer = p_xfer_desc->p_rx_buffer,
            .rx_length = p_xfer_desc->rx_length,
        };
        result = nrfx_spim_xfer(&p_instance->u.spim, &spim_xfer_desc, flags);

    }
    else if ((!
# 547 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h" 3 4
            1
# 547 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
            ))
    {

        nrfx_spi_xfer_desc_t const spi_xfer_desc =
        {
            .p_tx_buffer = p_xfer_desc->p_tx_buffer,
            .tx_length = p_xfer_desc->tx_length,
            .p_rx_buffer = p_xfer_desc->p_rx_buffer,
            .rx_length = p_xfer_desc->rx_length,
        };
        result = nrfx_spi_xfer(&p_instance->u.spi, &spi_xfer_desc, flags);

    }
    return result;
}

static inline
uint32_t nrf_drv_spi_start_task_get(nrf_drv_spi_t const * p_instance)
{
    uint32_t result = 0;
    if (
# 567 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h" 3 4
       1
# 567 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
                           )
    {
        result = nrfx_spim_start_task_get(&p_instance->u.spim);
    }
    else if ((!
# 571 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h" 3 4
            1
# 571 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
            ))
    {
        if (0) { if (
# 573 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h" 3 4
       0
# 573 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
       ) { } else { assert_nrf_callback((uint16_t)573, (uint8_t *)"../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"); } };
        result = 0;
    }
    return result;
}

static inline
uint32_t nrf_drv_spi_end_event_get(nrf_drv_spi_t const * p_instance)
{
    uint32_t result = 0;
    if (
# 583 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h" 3 4
       1
# 583 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
                           )
    {
        result = nrfx_spim_end_event_get(&p_instance->u.spim);
    }
    else if ((!
# 587 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h" 3 4
            1
# 587 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
            ))
    {
        if (0) { if (
# 589 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h" 3 4
       0
# 589 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
       ) { } else { assert_nrf_callback((uint16_t)589, (uint8_t *)"../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"); } };
        result = 0;
    }
    return result;
}

static inline
void nrf_drv_spi_abort(nrf_drv_spi_t const * p_instance)
{
    if (
# 598 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h" 3 4
       1
# 598 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
                           )
    {
        nrfx_spim_abort(&p_instance->u.spim);
    }
    else if ((!
# 602 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h" 3 4
            1
# 602 "../../../../../../integration/nrfx/legacy/nrf_drv_spi.h"
            ))
    {
        nrfx_spi_abort(&p_instance->u.spi);
    }
}
# 5 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h" 2
# 1 "../../../../../../components/libraries/experimental_log/nrf_log.h" 1
# 52 "../../../../../../components/libraries/experimental_log/nrf_log.h"
# 1 "../../../../../../components/libraries/util/sdk_common.h" 1
# 55 "../../../../../../components/libraries/util/sdk_common.h"
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 1 3 4
# 58 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4

# 58 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
void *memcpy(void *__s1, const void *__s2, size_t __n);
# 73 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
void *memcpy_fast(void *__s1, const void *__s2, size_t __n);
# 92 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
void *memccpy(void *__s1, const void *__s2, int __c, size_t __n);
# 106 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
void *mempcpy(void *__s1, const void *__s2, size_t __n);
# 121 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
void *memmove(void *__s1, const void *__s2, size_t __n);
# 132 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
int memcmp(const void *__s1, const void *__s2, size_t __n);
# 146 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
void *memchr(const void *__s, int __c, size_t __n);
# 156 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
void *memset(void *__s, int __c, size_t __n);
# 167 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
char *strcpy(char *__s1, const char *__s2);
# 187 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
char *strncpy(char *__s1, const char *__s2, size_t __n);
# 204 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
size_t strlcpy(char *__s1, const char *__s2, size_t __n);
# 217 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
char *strcat(char *__s1, const char *__s2);
# 231 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
char *strncat(char *__s1, const char *__s2, size_t __n);
# 252 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
size_t strlcat(char *__s1, const char *__s2, size_t __n);
# 262 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
int strcmp(const char *__s1, const char *__s2);
# 275 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
int strncmp(const char *__s1, const char *__s2, size_t __n);
# 287 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
int strcasecmp(const char *__s1, const char *__s2);
# 302 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
int strncasecmp(const char *__s1, const char *__s2, size_t __n);
# 314 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
char *strchr(const char *__s, int __c);
# 326 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
char *strnchr(const char *__str, size_t __n, int __ch);
# 337 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
size_t strcspn(const char *__s1, const char *__s2);
# 348 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
char *strpbrk(const char *__s1, const char *__s2);
# 360 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
char *strrchr(const char *__s, int __c);
# 371 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
size_t strspn(const char *__s1, const char *__s2);
# 384 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
char *strstr(const char *__s1, const char *__s2);
# 399 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
char *strnstr(const char *__s1, const char *__s2, size_t __n);
# 414 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
char *strcasestr(const char *__s1, const char *__s2);
# 430 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
char *strncasestr(const char *__s1, const char *__s2, size_t __n);







size_t strlen(const char *__s);
# 449 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
size_t strnlen(const char *__s, size_t __n);
# 483 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
char *strtok(char *__s1, const char *__s2);
# 502 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
char *strsep(char **__stringp, const char *__delim);
# 515 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
char *strtok_r(char *__s1, const char *__s2, char **__s3);
# 529 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
char *strdup(const char *__s1);
# 547 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
char *strndup(const char *__s1, size_t __n);
# 560 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/string.h" 3 4
char *strerror(int __num);



int strcoll(const char *__str1, const char *__str2);
size_t strxfrm( char *__str1, const char *__str2, size_t __num);
# 56 "../../../../../../components/libraries/util/sdk_common.h" 2



# 1 "../../../../../../components/libraries/util/sdk_os.h" 1
# 60 "../../../../../../components/libraries/util/sdk_common.h" 2

# 1 "../../../../../../components/libraries/util/app_util.h" 1
# 62 "../../../../../../components/libraries/util/sdk_common.h" 2
# 1 "../../../../../../components/libraries/util/sdk_macros.h" 1
# 63 "../../../../../../components/libraries/util/sdk_common.h" 2
# 53 "../../../../../../components/libraries/experimental_log/nrf_log.h" 2
# 1 "../../../../../../components/libraries/experimental_section_vars/nrf_section.h" 1
# 54 "../../../../../../components/libraries/experimental_log/nrf_log.h" 2

# 1 "../../../../../../components/libraries/strerror/nrf_strerror.h" 1
# 69 "../../../../../../components/libraries/strerror/nrf_strerror.h"

# 69 "../../../../../../components/libraries/strerror/nrf_strerror.h"
char const * nrf_strerror_get(ret_code_t code);
# 81 "../../../../../../components/libraries/strerror/nrf_strerror.h"
char const * nrf_strerror_find(ret_code_t code);
# 56 "../../../../../../components/libraries/experimental_log/nrf_log.h" 2
# 81 "../../../../../../components/libraries/experimental_log/nrf_log.h"
# 1 "../../../../../../components/libraries/experimental_log/src/nrf_log_internal.h" 1
# 48 "../../../../../../components/libraries/experimental_log/src/nrf_log_internal.h"
# 1 "../../../../../../components/libraries/experimental_log/nrf_log_instance.h" 1
# 45 "../../../../../../components/libraries/experimental_log/nrf_log_instance.h"
# 1 "../../../../../../components/libraries/experimental_log/nrf_log_types.h" 1
# 48 "../../../../../../components/libraries/experimental_log/nrf_log_types.h"
typedef enum
{
    NRF_LOG_SEVERITY_NONE,
    NRF_LOG_SEVERITY_ERROR,
    NRF_LOG_SEVERITY_WARNING,
    NRF_LOG_SEVERITY_INFO,
    NRF_LOG_SEVERITY_DEBUG,
    NRF_LOG_SEVERITY_INFO_RAW,
} nrf_log_severity_t;






typedef struct
{
    uint16_t module_id;
    uint16_t order_idx;
    uint32_t filter;
    uint32_t filter_lvls;
} nrf_log_module_dynamic_data_t;






typedef struct
{
    uint16_t module_id;
    uint16_t padding;
} nrf_log_module_reduced_dynamic_data_t;







typedef struct
{
    const char * p_module_name;
    uint8_t info_color_id;
    uint8_t debug_color_id;
    nrf_log_severity_t compiled_lvl;
    nrf_log_severity_t initial_lvl;
} nrf_log_module_const_data_t;
# 46 "../../../../../../components/libraries/experimental_log/nrf_log_instance.h" 2
# 49 "../../../../../../components/libraries/experimental_log/src/nrf_log_internal.h" 2
# 1 "../../../../../../components/libraries/experimental_log/nrf_log_types.h" 1
# 50 "../../../../../../components/libraries/experimental_log/src/nrf_log_internal.h" 2
# 292 "../../../../../../components/libraries/experimental_log/src/nrf_log_internal.h"
extern nrf_log_module_reduced_dynamic_data_t m_nrf_log_app_logs_data_dynamic;
# 362 "../../../../../../components/libraries/experimental_log/src/nrf_log_internal.h"
typedef struct
{
    uint32_t type : 2;
    uint32_t in_progress: 1;
    uint32_t data : 29;
} nrf_log_generic_header_t;

typedef struct
{
    uint32_t type : 2;
    uint32_t in_progress: 1;
    uint32_t severity : 3;
    uint32_t nargs : 4;
    uint32_t addr : 22;
} nrf_log_std_header_t;

typedef struct
{
    uint32_t type : 2;
    uint32_t in_progress: 1;
    uint32_t severity : 3;
    uint32_t offset : 10;
    uint32_t reserved : 6;
    uint32_t len : 10;
} nrf_log_hexdump_header_t;

typedef struct
{
    uint32_t type : 2;
    uint32_t reserved0 : 4;
    uint32_t offset : 10;
    uint32_t reserved1 : 6;
    uint32_t len : 10;
} nrf_log_pushed_header_t;

typedef union
{
    nrf_log_generic_header_t generic;
    nrf_log_std_header_t std;
    nrf_log_hexdump_header_t hexdump;
    nrf_log_pushed_header_t pushed;
    uint32_t raw;
} nrf_log_main_header_t;

typedef struct
{
    nrf_log_main_header_t base;
    uint16_t module_id;
    uint16_t dropped;
    uint32_t timestamp;
} nrf_log_header_t;







_Static_assert((sizeof(nrf_log_pushed_header_t)/sizeof(uint32_t)) == 1, "unspecified message");






void nrf_log_frontend_std_0(uint32_t severity_mid, char const * const p_str);
# 436 "../../../../../../components/libraries/experimental_log/src/nrf_log_internal.h"
void nrf_log_frontend_std_1(uint32_t severity_mid,
                            char const * const p_str,
                            uint32_t val0);
# 447 "../../../../../../components/libraries/experimental_log/src/nrf_log_internal.h"
void nrf_log_frontend_std_2(uint32_t severity_mid,
                            char const * const p_str,
                            uint32_t val0,
                            uint32_t val1);
# 459 "../../../../../../components/libraries/experimental_log/src/nrf_log_internal.h"
void nrf_log_frontend_std_3(uint32_t severity_mid,
                            char const * const p_str,
                            uint32_t val0,
                            uint32_t val1,
                            uint32_t val2);
# 472 "../../../../../../components/libraries/experimental_log/src/nrf_log_internal.h"
void nrf_log_frontend_std_4(uint32_t severity_mid,
                            char const * const p_str,
                            uint32_t val0,
                            uint32_t val1,
                            uint32_t val2,
                            uint32_t val3);
# 486 "../../../../../../components/libraries/experimental_log/src/nrf_log_internal.h"
void nrf_log_frontend_std_5(uint32_t severity_mid,
                            char const * const p_str,
                            uint32_t val0,
                            uint32_t val1,
                            uint32_t val2,
                            uint32_t val3,
                            uint32_t val4);
# 501 "../../../../../../components/libraries/experimental_log/src/nrf_log_internal.h"
void nrf_log_frontend_std_6(uint32_t severity_mid,
                            char const * const p_str,
                            uint32_t val0,
                            uint32_t val1,
                            uint32_t val2,
                            uint32_t val3,
                            uint32_t val4,
                            uint32_t val5);
# 519 "../../../../../../components/libraries/experimental_log/src/nrf_log_internal.h"
void nrf_log_frontend_hexdump(uint32_t severity_mid,
                              const void * const p_data,
                              uint16_t length);






uint8_t nrf_log_getchar(void);
# 82 "../../../../../../components/libraries/experimental_log/nrf_log.h" 2
# 257 "../../../../../../components/libraries/experimental_log/nrf_log.h"
uint32_t nrf_log_push(char * const p_str);
# 6 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h" 2
# 1 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h" 1
# 58 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h"
# 1 "../../../../../../components/libraries/experimental_log/src/nrf_log_ctrl_internal.h" 1
# 59 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h" 2
# 1 "../../../../../../components/libraries/experimental_log/nrf_log_backend_interface.h" 1
# 53 "../../../../../../components/libraries/experimental_log/nrf_log_backend_interface.h"
# 1 "../../../../../../components/libraries/experimental_memobj/nrf_memobj.h" 1
# 51 "../../../../../../components/libraries/experimental_memobj/nrf_memobj.h"
# 1 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 1 3 4
# 72 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4

# 72 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
typedef struct
{
  int quot;
  int rem;
} div_t;





typedef struct
{
  long quot;
  long rem;
} ldiv_t;






typedef struct
{
  long long quot;
  long rem;
} lldiv_t;






int abs(int __j);






long int labs(long int __j);






long long int llabs(long long int __j);
# 134 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
div_t div(int __numer, int __denom);
# 150 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
ldiv_t ldiv(long int __numer, long int __denom);
# 167 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
lldiv_t lldiv(long long int __numer, long long int __denom);
# 179 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
void *malloc(size_t __size);
# 191 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
void *calloc(size_t __nobj, size_t __size);
# 214 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
void *realloc(void *p, size_t __size);
# 227 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
void free(void *__p);
# 245 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
double atof(const char *__nptr);
# 285 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
double strtod(const char *__nptr, char **__endptr);
# 325 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
float strtof(const char *__nptr, char **__endptr);
# 343 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
int atoi(const char *__nptr);
# 361 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
long int atol(const char *__nptr);
# 380 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
long long int atoll(const char *__nptr);
# 438 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
long int strtol(const char *__nptr, char **__endptr, int __base);
# 496 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
long long int strtoll(const char *__nptr, char **__endptr, int __base);
# 554 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
unsigned long int strtoul(const char *__nptr, char **__endptr, int __base);
# 612 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
unsigned long long int strtoull(const char *__nptr, char **__endptr, int __base);
# 622 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
int rand(void);
# 638 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
void srand(unsigned int __seed);
# 652 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
void *bsearch(const void *__key,
              const void *__buf,
              size_t __num,
              size_t __size,
              int (*__compare)(const void *, const void *));
# 667 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
void qsort(void *__buf,
           size_t __num,
           size_t __size,
           int (*__compare)(const void *, const void *));

void abort(void);






void exit(int __exit_code);
# 689 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
int atexit(void (*__func)(void));

char *getenv(const char *__name);
int system(const char *__command);
# 711 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
char *itoa(int __val, char *__buf, int __radix);
# 725 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
char *utoa(unsigned val, char *buf, int radix);
# 743 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
char *ltoa(long __val, char *__buf, int __radix);
# 757 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
char *ultoa(unsigned long __val, char *__buf, int __radix);
# 775 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
char *lltoa(long long __val, char *__buf, int __radix);
# 789 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
char *ulltoa(unsigned long long __val, char *__buf, int __radix);
# 817 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
int mblen(const char *__s, size_t __n);
# 845 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
int mblen_l(const char *__s, size_t __n, struct __locale_s *__loc);
# 870 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
size_t mbstowcs(wchar_t *__pwcs, const char *__s, size_t __n);
# 881 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
size_t mbstowcs_l(wchar_t *__pwcs, const char *__s, size_t __n, struct __locale_s *__loc);
# 905 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
int mbtowc(wchar_t *__pwc, const char *__s, size_t __n);
# 930 "C:/Program Files/SEGGER/SEGGER Embedded Studio for ARM 3.34b/include/stdlib.h" 3 4
int mbtowc_l(wchar_t *__pwc, const char *__s, size_t __n, struct __locale_s *__loc);


int wctomb(char *__s, wchar_t __wc);
int wctomb_l(char *__s, wchar_t __wc, struct __locale_s *__loc);

size_t wcstombs(char *__s, const wchar_t *__pwcs, size_t __n);
size_t wcstombs_l(char *__s, const wchar_t *__pwcs, size_t __n, struct __locale_s *__loc);
# 52 "../../../../../../components/libraries/experimental_memobj/nrf_memobj.h" 2

# 1 "../../../../../../components/libraries/balloc/nrf_balloc.h" 1
# 104 "../../../../../../components/libraries/balloc/nrf_balloc.h"

# 104 "../../../../../../components/libraries/balloc/nrf_balloc.h"
typedef struct
{
    uint8_t * p_stack_pointer;
    uint8_t max_utilization;
} nrf_balloc_cb_t;


typedef struct
{
    nrf_balloc_cb_t * p_cb;
    uint8_t * p_stack_base;



    uint8_t * p_stack_limit;
    void * p_memory_begin;



    nrf_log_module_reduced_dynamic_data_t * p_log;
# 133 "../../../../../../components/libraries/balloc/nrf_balloc.h"
    uint16_t block_size;




} nrf_balloc_t;
# 295 "../../../../../../components/libraries/balloc/nrf_balloc.h"
ret_code_t nrf_balloc_init(nrf_balloc_t const * p_pool);
# 305 "../../../../../../components/libraries/balloc/nrf_balloc.h"
void * nrf_balloc_alloc(nrf_balloc_t const * p_pool);






void nrf_balloc_free(nrf_balloc_t const * p_pool, void * p_element);







static inline uint8_t nrf_balloc_max_utilization_get(nrf_balloc_t const * p_pool);


static inline uint8_t nrf_balloc_max_utilization_get(nrf_balloc_t const * p_pool)
{
    if (0) { if (p_pool != 
# 325 "../../../../../../components/libraries/balloc/nrf_balloc.h" 3 4
   0
# 325 "../../../../../../components/libraries/balloc/nrf_balloc.h"
   ) { } else { assert_nrf_callback((uint16_t)325, (uint8_t *)"../../../../../../components/libraries/balloc/nrf_balloc.h"); } };
    return p_pool->p_cb->max_utilization;
}
# 336 "../../../../../../components/libraries/balloc/nrf_balloc.h"
static inline uint8_t nrf_balloc_utilization_get(nrf_balloc_t const * p_pool);


static inline uint8_t nrf_balloc_utilization_get(nrf_balloc_t const * p_pool)
{
    if (0) { if (p_pool != 
# 341 "../../../../../../components/libraries/balloc/nrf_balloc.h" 3 4
   0
# 341 "../../../../../../components/libraries/balloc/nrf_balloc.h"
   ) { } else { assert_nrf_callback((uint16_t)341, (uint8_t *)"../../../../../../components/libraries/balloc/nrf_balloc.h"); } };
    return (p_pool->p_stack_limit - p_pool->p_cb->p_stack_pointer);
}
# 54 "../../../../../../components/libraries/experimental_memobj/nrf_memobj.h" 2
# 93 "../../../../../../components/libraries/experimental_memobj/nrf_memobj.h"
typedef nrf_balloc_t nrf_memobj_pool_t;




typedef void * nrf_memobj_t;
# 109 "../../../../../../components/libraries/experimental_memobj/nrf_memobj.h"
ret_code_t nrf_memobj_pool_init(nrf_memobj_pool_t const * p_pool);
# 126 "../../../../../../components/libraries/experimental_memobj/nrf_memobj.h"
nrf_memobj_t * nrf_memobj_alloc(nrf_memobj_pool_t const * p_pool,
                                size_t size);
# 138 "../../../../../../components/libraries/experimental_memobj/nrf_memobj.h"
void nrf_memobj_get(nrf_memobj_t const * p_obj);
# 153 "../../../../../../components/libraries/experimental_memobj/nrf_memobj.h"
void nrf_memobj_put(nrf_memobj_t * p_obj);
# 164 "../../../../../../components/libraries/experimental_memobj/nrf_memobj.h"
void nrf_memobj_free(nrf_memobj_t * p_obj);
# 174 "../../../../../../components/libraries/experimental_memobj/nrf_memobj.h"
void nrf_memobj_write(nrf_memobj_t * p_obj,
                      void * p_data,
                      uint32_t len,
                      uint32_t offset);
# 187 "../../../../../../components/libraries/experimental_memobj/nrf_memobj.h"
void nrf_memobj_read(nrf_memobj_t * p_obj,
                     void * p_data,
                     uint32_t len,
                     uint32_t offset);
# 54 "../../../../../../components/libraries/experimental_log/nrf_log_backend_interface.h" 2
# 64 "../../../../../../components/libraries/experimental_log/nrf_log_backend_interface.h"
typedef nrf_memobj_t nrf_log_entry_t;


typedef struct nrf_log_backend_s nrf_log_backend_t;




typedef struct
{



    void (*put)(nrf_log_backend_t const * p_backend, nrf_log_entry_t * p_entry);




    void (*panic_set)(nrf_log_backend_t const * p_backend);




    void (*flush)(nrf_log_backend_t const * p_backend);
} nrf_log_backend_api_t;




struct nrf_log_backend_s
{
    nrf_log_backend_api_t const * p_api;
    nrf_log_backend_t * p_next;
    uint8_t id;
    
# 98 "../../../../../../components/libraries/experimental_log/nrf_log_backend_interface.h" 3 4
   _Bool 
# 98 "../../../../../../components/libraries/experimental_log/nrf_log_backend_interface.h"
                                 enabled;
};







static inline void nrf_log_backend_put(nrf_log_backend_t const * p_backend,
                                         nrf_log_entry_t * p_msg);






static inline void nrf_log_backend_panic_set(nrf_log_backend_t const * p_backend);
# 124 "../../../../../../components/libraries/experimental_log/nrf_log_backend_interface.h"
static inline void nrf_log_backend_flush(nrf_log_backend_t const * p_backend);
# 135 "../../../../../../components/libraries/experimental_log/nrf_log_backend_interface.h"
static inline void nrf_log_backend_id_set(nrf_log_backend_t * p_backend, uint8_t id);
# 145 "../../../../../../components/libraries/experimental_log/nrf_log_backend_interface.h"
static inline uint8_t nrf_log_backend_id_get(nrf_log_backend_t const * p_backend);






static inline void nrf_log_backend_enable(nrf_log_backend_t * p_backend);






static inline void nrf_log_backend_disable(nrf_log_backend_t * p_backend);
# 168 "../../../../../../components/libraries/experimental_log/nrf_log_backend_interface.h"
static inline 
# 168 "../../../../../../components/libraries/experimental_log/nrf_log_backend_interface.h" 3 4
               _Bool 
# 168 "../../../../../../components/libraries/experimental_log/nrf_log_backend_interface.h"
                    nrf_log_backend_is_enabled(nrf_log_backend_t const * p_backend);


static inline void nrf_log_backend_put(nrf_log_backend_t const * p_backend,
                                         nrf_log_entry_t * p_msg)
{
    p_backend->p_api->put(p_backend, p_msg);
}

static inline void nrf_log_backend_panic_set(nrf_log_backend_t const * p_backend)
{
    p_backend->p_api->panic_set(p_backend);
}

static inline void nrf_log_backend_flush(nrf_log_backend_t const * p_backend)
{
    p_backend->p_api->flush(p_backend);
}

static inline void nrf_log_backend_id_set(nrf_log_backend_t * p_backend, uint8_t id)
{
    p_backend->id = id;
}

static inline uint8_t nrf_log_backend_id_get(nrf_log_backend_t const * p_backend)
{
    return p_backend->id;
}

static inline void nrf_log_backend_enable(nrf_log_backend_t * p_backend)
{
    p_backend->enabled = 
# 199 "../../../../../../components/libraries/experimental_log/nrf_log_backend_interface.h" 3 4
                        1
# 199 "../../../../../../components/libraries/experimental_log/nrf_log_backend_interface.h"
                            ;
}

static inline void nrf_log_backend_disable(nrf_log_backend_t * p_backend)
{
    p_backend->enabled = 
# 204 "../../../../../../components/libraries/experimental_log/nrf_log_backend_interface.h" 3 4
                        0
# 204 "../../../../../../components/libraries/experimental_log/nrf_log_backend_interface.h"
                             ;
}

static inline 
# 207 "../../../../../../components/libraries/experimental_log/nrf_log_backend_interface.h" 3 4
               _Bool 
# 207 "../../../../../../components/libraries/experimental_log/nrf_log_backend_interface.h"
                    nrf_log_backend_is_enabled(nrf_log_backend_t const * p_backend)
{
    return p_backend->enabled;
}
# 60 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h" 2
# 69 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h"
typedef uint32_t (*nrf_log_timestamp_func_t)(void);
# 123 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h"
ret_code_t nrf_log_init(nrf_log_timestamp_func_t timestamp_func, uint32_t timestamp_freq);
# 133 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h"
int32_t nrf_log_backend_add(nrf_log_backend_t * p_backend, nrf_log_severity_t severity);







void nrf_log_backend_remove(nrf_log_backend_t * p_backend);







void nrf_log_panic(void);
# 160 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h"

# 160 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h" 3 4
_Bool 
# 160 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h"
    nrf_log_frontend_dequeue(void);






uint32_t nrf_log_module_cnt_get(void);
# 176 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h"
const char * nrf_log_module_name_get(uint32_t module_id, 
# 176 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h" 3 4
                                                        _Bool 
# 176 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h"
                                                             is_ordered_idx);
# 186 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h"
uint8_t nrf_log_color_id_get(uint32_t module_id, nrf_log_severity_t severity);
# 197 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h"
void nrf_log_module_filter_set(uint32_t backend_id,
                               uint32_t module_id,
                               nrf_log_severity_t severity);
# 213 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h"
nrf_log_severity_t nrf_log_module_filter_get(uint32_t backend_id,
                                             uint32_t module_id,
                                             
# 215 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h" 3 4
                                            _Bool 
# 215 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h"
                                                     is_ordered_idx,
                                             
# 216 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h" 3 4
                                            _Bool 
# 216 "../../../../../../components/libraries/experimental_log/nrf_log_ctrl.h"
                                                     dynamic);
# 7 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h" 2
# 1 "../../../../../../components/libraries/experimental_log/nrf_log_default_backends.h" 1
# 73 "../../../../../../components/libraries/experimental_log/nrf_log_default_backends.h"
void nrf_log_default_backends_init(void);
# 8 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h" 2
# 1 "../../../../../../external/freertos/source/include/FreeRTOS.h" 1
# 57 "../../../../../../external/freertos/source/include/FreeRTOS.h"
# 1 "../../../config/FreeRTOSConfig.h" 1
# 58 "../../../../../../external/freertos/source/include/FreeRTOS.h" 2


# 1 "../../../../../../external/freertos/source/include/projdefs.h" 1
# 36 "../../../../../../external/freertos/source/include/projdefs.h"
typedef void (*TaskFunction_t)( void * );
# 61 "../../../../../../external/freertos/source/include/FreeRTOS.h" 2


# 1 "../../../../../../external/freertos/source/include/portable.h" 1
# 46 "../../../../../../external/freertos/source/include/portable.h"
# 1 "../../../../../../external/freertos/source/include/deprecated_definitions.h" 1
# 47 "../../../../../../external/freertos/source/include/portable.h" 2






# 1 "../../../../../../external/freertos/portable/GCC/nrf52/portmacro.h" 1
# 33 "../../../../../../external/freertos/portable/GCC/nrf52/portmacro.h"
# 1 "../../../../../../external/freertos/portable/CMSIS/nrf52/portmacro_cmsis.h" 1
# 56 "../../../../../../external/freertos/portable/CMSIS/nrf52/portmacro_cmsis.h"
typedef uint32_t StackType_t;
typedef long BaseType_t;
typedef unsigned long UBaseType_t;





    typedef uint32_t TickType_t;
# 107 "../../../../../../external/freertos/portable/CMSIS/nrf52/portmacro_cmsis.h"
extern void vPortEnterCritical( void );
extern void vPortExitCritical( void );
# 127 "../../../../../../external/freertos/portable/CMSIS/nrf52/portmacro_cmsis.h"
    extern void vPortSuppressTicksAndSleep( TickType_t xExpectedIdleTime );
# 174 "../../../../../../external/freertos/portable/CMSIS/nrf52/portmacro_cmsis.h"
static inline uint32_t ulPortRaiseBASEPRI( void )
{
    uint32_t ulOriginalBASEPRI = __get_BASEPRI();
    __set_BASEPRI(2 << (8 - 3));
    return ulOriginalBASEPRI;
}
# 34 "../../../../../../external/freertos/portable/GCC/nrf52/portmacro.h" 2
# 54 "../../../../../../external/freertos/source/include/portable.h" 2
# 92 "../../../../../../external/freertos/source/include/portable.h"
# 1 "../../../../../../external/freertos/source/include/mpu_wrappers.h" 1
# 93 "../../../../../../external/freertos/source/include/portable.h" 2
# 103 "../../../../../../external/freertos/source/include/portable.h"
 StackType_t *pxPortInitialiseStack( StackType_t *pxTopOfStack, TaskFunction_t pxCode, void *pvParameters ) ;



typedef struct HeapRegion
{
 uint8_t *pucStartAddress;
 size_t xSizeInBytes;
} HeapRegion_t;
# 124 "../../../../../../external/freertos/source/include/portable.h"
void vPortDefineHeapRegions( const HeapRegion_t * const pxHeapRegions ) ;





void *pvPortMalloc( size_t xSize ) ;
void vPortFree( void *pv ) ;
void vPortInitialiseBlocks( void ) ;
size_t xPortGetFreeHeapSize( void ) ;
size_t xPortGetMinimumEverFreeHeapSize( void ) ;





BaseType_t xPortStartScheduler( void ) ;






void vPortEndScheduler( void ) ;
# 64 "../../../../../../external/freertos/source/include/FreeRTOS.h" 2
# 949 "../../../../../../external/freertos/source/include/FreeRTOS.h"
struct xSTATIC_LIST_ITEM
{
 TickType_t xDummy1;
 void *pvDummy2[ 4 ];
};
typedef struct xSTATIC_LIST_ITEM StaticListItem_t;


struct xSTATIC_MINI_LIST_ITEM
{
 TickType_t xDummy1;
 void *pvDummy2[ 2 ];
};
typedef struct xSTATIC_MINI_LIST_ITEM StaticMiniListItem_t;


typedef struct xSTATIC_LIST
{
 UBaseType_t uxDummy1;
 void *pvDummy2;
 StaticMiniListItem_t xDummy3;
} StaticList_t;
# 985 "../../../../../../external/freertos/source/include/FreeRTOS.h"
typedef struct xSTATIC_TCB
{
 void *pxDummy1;



 StaticListItem_t xDummy3[ 2 ];
 UBaseType_t uxDummy5;
 void *pxDummy6;
 uint8_t ucDummy7[ ( 4 ) ];
# 1005 "../../../../../../external/freertos/source/include/FreeRTOS.h"
  UBaseType_t uxDummy12[ 2 ];
# 1020 "../../../../../../external/freertos/source/include/FreeRTOS.h"
  uint32_t ulDummy18;
  uint8_t ucDummy19;
# 1031 "../../../../../../external/freertos/source/include/FreeRTOS.h"
} StaticTask_t;
# 1047 "../../../../../../external/freertos/source/include/FreeRTOS.h"
typedef struct xSTATIC_QUEUE
{
 void *pvDummy1[ 3 ];

 union
 {
  void *pvDummy2;
  UBaseType_t uxDummy2;
 } u;

 StaticList_t xDummy3[ 2 ];
 UBaseType_t uxDummy4[ 3 ];
 uint8_t ucDummy5[ 2 ];
# 1074 "../../../../../../external/freertos/source/include/FreeRTOS.h"
} StaticQueue_t;
typedef StaticQueue_t StaticSemaphore_t;
# 1091 "../../../../../../external/freertos/source/include/FreeRTOS.h"
typedef struct xSTATIC_EVENT_GROUP
{
 TickType_t xDummy1;
 StaticList_t xDummy2;
# 1104 "../../../../../../external/freertos/source/include/FreeRTOS.h"
} StaticEventGroup_t;
# 1120 "../../../../../../external/freertos/source/include/FreeRTOS.h"
typedef struct xSTATIC_TIMER
{
 void *pvDummy1;
 StaticListItem_t xDummy2;
 TickType_t xDummy3;
 UBaseType_t uxDummy4;
 void *pvDummy5[ 2 ];
# 1135 "../../../../../../external/freertos/source/include/FreeRTOS.h"
} StaticTimer_t;
# 1151 "../../../../../../external/freertos/source/include/FreeRTOS.h"
typedef struct xSTATIC_STREAM_BUFFER
{
 size_t uxDummy1[ 4 ];
 void * pvDummy2[ 3 ];
 uint8_t ucDummy3;



} StaticStreamBuffer_t;


typedef StaticStreamBuffer_t StaticMessageBuffer_t;
# 9 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h" 2
# 1 "../../../../../../external/freertos/source/include/task.h" 1
# 37 "../../../../../../external/freertos/source/include/task.h"
# 1 "../../../../../../external/freertos/source/include/list.h" 1
# 140 "../../../../../../external/freertos/source/include/list.h"
struct xLIST_ITEM
{

 TickType_t xItemValue;
 struct xLIST_ITEM * pxNext;
 struct xLIST_ITEM * pxPrevious;
 void * pvOwner;
 void * pvContainer;

};
typedef struct xLIST_ITEM ListItem_t;

struct xMINI_LIST_ITEM
{

 TickType_t xItemValue;
 struct xLIST_ITEM * pxNext;
 struct xLIST_ITEM * pxPrevious;
};
typedef struct xMINI_LIST_ITEM MiniListItem_t;




typedef struct xLIST
{

 volatile UBaseType_t uxNumberOfItems;
 ListItem_t * pxIndex;
 MiniListItem_t xListEnd;

} List_t;
# 345 "../../../../../../external/freertos/source/include/list.h"
void vListInitialise( List_t * const pxList ) ;
# 356 "../../../../../../external/freertos/source/include/list.h"
void vListInitialiseItem( ListItem_t * const pxItem ) ;
# 369 "../../../../../../external/freertos/source/include/list.h"
void vListInsert( List_t * const pxList, ListItem_t * const pxNewListItem ) ;
# 390 "../../../../../../external/freertos/source/include/list.h"
void vListInsertEnd( List_t * const pxList, ListItem_t * const pxNewListItem ) ;
# 405 "../../../../../../external/freertos/source/include/list.h"
UBaseType_t uxListRemove( ListItem_t * const pxItemToRemove ) ;
# 38 "../../../../../../external/freertos/source/include/task.h" 2
# 62 "../../../../../../external/freertos/source/include/task.h"
typedef void * TaskHandle_t;





typedef BaseType_t (*TaskHookFunction_t)( void * );


typedef enum
{
 eRunning = 0,
 eReady,
 eBlocked,
 eSuspended,
 eDeleted,
 eInvalid
} eTaskState;


typedef enum
{
 eNoAction = 0,
 eSetBits,
 eIncrement,
 eSetValueWithOverwrite,
 eSetValueWithoutOverwrite
} eNotifyAction;




typedef struct xTIME_OUT
{
 BaseType_t xOverflowCount;
 TickType_t xTimeOnEntering;
} TimeOut_t;




typedef struct xMEMORY_REGION
{
 void *pvBaseAddress;
 uint32_t ulLengthInBytes;
 uint32_t ulParameters;
} MemoryRegion_t;




typedef struct xTASK_PARAMETERS
{
 TaskFunction_t pvTaskCode;
 const char * const pcName;
 uint16_t usStackDepth;
 void *pvParameters;
 UBaseType_t uxPriority;
 StackType_t *puxStackBuffer;
 MemoryRegion_t xRegions[ 1 ];



} TaskParameters_t;



typedef struct xTASK_STATUS
{
 TaskHandle_t xHandle;
 const char *pcTaskName;
 UBaseType_t xTaskNumber;
 eTaskState eCurrentState;
 UBaseType_t uxCurrentPriority;
 UBaseType_t uxBasePriority;
 uint32_t ulRunTimeCounter;
 StackType_t *pxStackBase;
 uint16_t usStackHighWaterMark;
} TaskStatus_t;


typedef enum
{
 eAbortSleep = 0,
 eStandardSleep,
 eNoTasksWaitingTimeout
} eSleepModeStatus;
# 322 "../../../../../../external/freertos/source/include/task.h"
 BaseType_t xTaskCreate( TaskFunction_t pxTaskCode,
       const char * const pcName,
       const uint16_t usStackDepth,
       void * const pvParameters,
       UBaseType_t uxPriority,
       TaskHandle_t * const pxCreatedTask ) ;
# 657 "../../../../../../external/freertos/source/include/task.h"
void vTaskAllocateMPURegions( TaskHandle_t xTask, const MemoryRegion_t * const pxRegions ) ;
# 698 "../../../../../../external/freertos/source/include/task.h"
void vTaskDelete( TaskHandle_t xTaskToDelete ) ;
# 750 "../../../../../../external/freertos/source/include/task.h"
void vTaskDelay( const TickType_t xTicksToDelay ) ;
# 809 "../../../../../../external/freertos/source/include/task.h"
void vTaskDelayUntil( TickType_t * const pxPreviousWakeTime, const TickType_t xTimeIncrement ) ;
# 834 "../../../../../../external/freertos/source/include/task.h"
BaseType_t xTaskAbortDelay( TaskHandle_t xTask ) ;
# 881 "../../../../../../external/freertos/source/include/task.h"
UBaseType_t uxTaskPriorityGet( TaskHandle_t xTask ) ;







UBaseType_t uxTaskPriorityGetFromISR( TaskHandle_t xTask ) ;
# 907 "../../../../../../external/freertos/source/include/task.h"
eTaskState eTaskGetState( TaskHandle_t xTask ) ;
# 963 "../../../../../../external/freertos/source/include/task.h"
void vTaskGetInfo( TaskHandle_t xTask, TaskStatus_t *pxTaskStatus, BaseType_t xGetFreeStackSpace, eTaskState eState ) ;
# 1005 "../../../../../../external/freertos/source/include/task.h"
void vTaskPrioritySet( TaskHandle_t xTask, UBaseType_t uxNewPriority ) ;
# 1056 "../../../../../../external/freertos/source/include/task.h"
void vTaskSuspend( TaskHandle_t xTaskToSuspend ) ;
# 1105 "../../../../../../external/freertos/source/include/task.h"
void vTaskResume( TaskHandle_t xTaskToResume ) ;
# 1134 "../../../../../../external/freertos/source/include/task.h"
BaseType_t xTaskResumeFromISR( TaskHandle_t xTaskToResume ) ;
# 1167 "../../../../../../external/freertos/source/include/task.h"
void vTaskStartScheduler( void ) ;
# 1223 "../../../../../../external/freertos/source/include/task.h"
void vTaskEndScheduler( void ) ;
# 1274 "../../../../../../external/freertos/source/include/task.h"
void vTaskSuspendAll( void ) ;
# 1328 "../../../../../../external/freertos/source/include/task.h"
BaseType_t xTaskResumeAll( void ) ;
# 1343 "../../../../../../external/freertos/source/include/task.h"
TickType_t xTaskGetTickCount( void ) ;
# 1359 "../../../../../../external/freertos/source/include/task.h"
TickType_t xTaskGetTickCountFromISR( void ) ;
# 1373 "../../../../../../external/freertos/source/include/task.h"
UBaseType_t uxTaskGetNumberOfTasks( void ) ;
# 1386 "../../../../../../external/freertos/source/include/task.h"
char *pcTaskGetName( TaskHandle_t xTaskToQuery ) ;
# 1402 "../../../../../../external/freertos/source/include/task.h"
TaskHandle_t xTaskGetHandle( const char *pcNameToQuery ) ;
# 1423 "../../../../../../external/freertos/source/include/task.h"
UBaseType_t uxTaskGetStackHighWaterMark( TaskHandle_t xTask ) ;
# 1476 "../../../../../../external/freertos/source/include/task.h"
BaseType_t xTaskCallApplicationTaskHook( TaskHandle_t xTask, void *pvParameter ) ;
# 1485 "../../../../../../external/freertos/source/include/task.h"
TaskHandle_t xTaskGetIdleTaskHandle( void ) ;
# 1584 "../../../../../../external/freertos/source/include/task.h"
UBaseType_t uxTaskGetSystemState( TaskStatus_t * const pxTaskStatusArray, const UBaseType_t uxArraySize, uint32_t * const pulTotalRunTime ) ;
# 1631 "../../../../../../external/freertos/source/include/task.h"
void vTaskList( char * pcWriteBuffer ) ;
# 1685 "../../../../../../external/freertos/source/include/task.h"
void vTaskGetRunTimeStats( char *pcWriteBuffer ) ;
# 1766 "../../../../../../external/freertos/source/include/task.h"
BaseType_t xTaskGenericNotify( TaskHandle_t xTaskToNotify, uint32_t ulValue, eNotifyAction eAction, uint32_t *pulPreviousNotificationValue ) ;
# 1857 "../../../../../../external/freertos/source/include/task.h"
BaseType_t xTaskGenericNotifyFromISR( TaskHandle_t xTaskToNotify, uint32_t ulValue, eNotifyAction eAction, uint32_t *pulPreviousNotificationValue, BaseType_t *pxHigherPriorityTaskWoken ) ;
# 1934 "../../../../../../external/freertos/source/include/task.h"
BaseType_t xTaskNotifyWait( uint32_t ulBitsToClearOnEntry, uint32_t ulBitsToClearOnExit, uint32_t *pulNotificationValue, TickType_t xTicksToWait ) ;
# 2035 "../../../../../../external/freertos/source/include/task.h"
void vTaskNotifyGiveFromISR( TaskHandle_t xTaskToNotify, BaseType_t *pxHigherPriorityTaskWoken ) ;
# 2104 "../../../../../../external/freertos/source/include/task.h"
uint32_t ulTaskNotifyTake( BaseType_t xClearCountOnExit, TickType_t xTicksToWait ) ;
# 2120 "../../../../../../external/freertos/source/include/task.h"
BaseType_t xTaskNotifyStateClear( TaskHandle_t xTask );
# 2141 "../../../../../../external/freertos/source/include/task.h"
BaseType_t xTaskIncrementTick( void ) ;
# 2174 "../../../../../../external/freertos/source/include/task.h"
void vTaskPlaceOnEventList( List_t * const pxEventList, const TickType_t xTicksToWait ) ;
void vTaskPlaceOnUnorderedEventList( List_t * pxEventList, const TickType_t xItemValue, const TickType_t xTicksToWait ) ;
# 2188 "../../../../../../external/freertos/source/include/task.h"
void vTaskPlaceOnEventListRestricted( List_t * const pxEventList, TickType_t xTicksToWait, const BaseType_t xWaitIndefinitely ) ;
# 2214 "../../../../../../external/freertos/source/include/task.h"
BaseType_t xTaskRemoveFromEventList( const List_t * const pxEventList ) ;
void vTaskRemoveFromUnorderedEventList( ListItem_t * pxEventListItem, const TickType_t xItemValue ) ;
# 2225 "../../../../../../external/freertos/source/include/task.h"
void vTaskSwitchContext( void ) ;





TickType_t uxTaskResetEventItemValue( void ) ;




TaskHandle_t xTaskGetCurrentTaskHandle( void ) ;




void vTaskSetTimeOutState( TimeOut_t * const pxTimeOut ) ;





BaseType_t xTaskCheckForTimeOut( TimeOut_t * const pxTimeOut, TickType_t * const pxTicksToWait ) ;





void vTaskMissedYield( void ) ;





BaseType_t xTaskGetSchedulerState( void ) ;





BaseType_t xTaskPriorityInherit( TaskHandle_t const pxMutexHolder ) ;





BaseType_t xTaskPriorityDisinherit( TaskHandle_t const pxMutexHolder ) ;
# 2281 "../../../../../../external/freertos/source/include/task.h"
void vTaskPriorityDisinheritAfterTimeout( TaskHandle_t const pxMutexHolder, UBaseType_t uxHighestPriorityWaitingTask ) ;




UBaseType_t uxTaskGetTaskNumber( TaskHandle_t xTask ) ;





void vTaskSetTaskNumber( TaskHandle_t xTask, const UBaseType_t uxHandle ) ;
# 2302 "../../../../../../external/freertos/source/include/task.h"
void vTaskStepTick( const TickType_t xTicksToJump ) ;
# 2318 "../../../../../../external/freertos/source/include/task.h"
eSleepModeStatus eTaskConfirmSleepModeStatus( void ) ;





void *pvTaskIncrementMutexHeldCount( void ) ;





void vTaskInternalSetTimeOutState( TimeOut_t * const pxTimeOut ) ;
# 10 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h" 2



static const nrf_drv_spi_t spi0 = { 1, { .spim = { .p_reg = ((NRF_SPIM_Type *) 0x40004000UL), .drv_inst_idx = NRFX_SPIM1_INST_IDX, } }, 
# 13 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h" 3 4
                                 1 
# 13 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h"
                                 };
static const nrf_drv_spi_t spi1 = { 2, { .spim = { .p_reg = ((NRF_SPIM_Type *) 0x40023000UL), .drv_inst_idx = NRFX_SPIM2_INST_IDX, } }, 
# 14 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h" 3 4
                                 1 
# 14 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h"
                                 };
static volatile 
# 15 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h" 3 4
               _Bool 
# 15 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h"
                    spi0_xfer_done;
static volatile 
# 16 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h" 3 4
               _Bool 
# 16 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h"
                    spi1_xfer_done;


static uint8_t m_tx_buf[] = "0b11111000";
static uint8_t m_rx_buf[1];
static uint8_t m_length;
# 89 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h"

# 89 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h" 3 4
_Bool 
# 89 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h"
    lm_init(int spiChannel0, int spiChannel1, TaskHandle_t* handle);
void lm_spi0_event_handler(nrf_drv_spi_evt_t const * p_event,
                       void * p_context);
void lm_spi_send();

void lm_setSingleLedColor(int x, int y, int color);
void lm_setLedColor(int color);

void lm_ledColorBuilder(int c, uint8_t *led);
char lm_oneZeroTranslation(
# 98 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h" 3 4
                          _Bool 
# 98 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_lm.h"
                               one);
int lm_colorBuilder(char r, char g, char b);

void lm_waitForDataSent();
# 5 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.h" 2


# 1 "../../../../../../external/freertos/source/include/timers.h" 1
# 39 "../../../../../../external/freertos/source/include/timers.h"
# 1 "../../../../../../external/freertos/source/include/task.h" 1
# 40 "../../../../../../external/freertos/source/include/timers.h" 2
# 77 "../../../../../../external/freertos/source/include/timers.h"
typedef void * TimerHandle_t;




typedef void (*TimerCallbackFunction_t)( TimerHandle_t xTimer );





typedef void (*PendedFunction_t)( void *, uint32_t );
# 228 "../../../../../../external/freertos/source/include/timers.h"
 TimerHandle_t xTimerCreate( const char * const pcTimerName,
        const TickType_t xTimerPeriodInTicks,
        const UBaseType_t uxAutoReload,
        void * const pvTimerID,
        TimerCallbackFunction_t pxCallbackFunction ) ;
# 386 "../../../../../../external/freertos/source/include/timers.h"
void *pvTimerGetTimerID( const TimerHandle_t xTimer ) ;
# 407 "../../../../../../external/freertos/source/include/timers.h"
void vTimerSetTimerID( TimerHandle_t xTimer, void *pvNewID ) ;
# 444 "../../../../../../external/freertos/source/include/timers.h"
BaseType_t xTimerIsTimerActive( TimerHandle_t xTimer ) ;







TaskHandle_t xTimerGetTimerDaemonTaskHandle( void ) ;
# 1187 "../../../../../../external/freertos/source/include/timers.h"
BaseType_t xTimerPendFunctionCallFromISR( PendedFunction_t xFunctionToPend, void *pvParameter1, uint32_t ulParameter2, BaseType_t *pxHigherPriorityTaskWoken ) ;
# 1221 "../../../../../../external/freertos/source/include/timers.h"
BaseType_t xTimerPendFunctionCall( PendedFunction_t xFunctionToPend, void *pvParameter1, uint32_t ulParameter2, TickType_t xTicksToWait ) ;
# 1232 "../../../../../../external/freertos/source/include/timers.h"
const char * pcTimerGetName( TimerHandle_t xTimer ) ;
# 1243 "../../../../../../external/freertos/source/include/timers.h"
TickType_t xTimerGetPeriod( TimerHandle_t xTimer ) ;
# 1258 "../../../../../../external/freertos/source/include/timers.h"
TickType_t xTimerGetExpiryTime( TimerHandle_t xTimer ) ;





BaseType_t xTimerCreateTimerTask( void ) ;
BaseType_t xTimerGenericCommand( TimerHandle_t xTimer, const BaseType_t xCommandID, const TickType_t xOptionalValue, BaseType_t * const pxHigherPriorityTaskWoken, const TickType_t xTicksToWait ) ;
# 8 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.h" 2
# 1 "../../../../../../components/ble/peer_manager/peer_manager.h" 1
# 65 "../../../../../../components/ble/peer_manager/peer_manager.h"
# 1 "../../../../../../components/softdevice/s140/headers/ble.h" 1
# 55 "../../../../../../components/softdevice/s140/headers/ble.h"
# 1 "../../../../../../components/softdevice/s140/headers/ble_err.h" 1
# 56 "../../../../../../components/softdevice/s140/headers/ble.h" 2
# 1 "../../../../../../components/softdevice/s140/headers/ble_gap.h" 1
# 51 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
# 1 "../../../../../../components/softdevice/s140/headers/ble_hci.h" 1
# 52 "../../../../../../components/softdevice/s140/headers/ble_gap.h" 2
# 1 "../../../../../../components/softdevice/s140/headers/ble_ranges.h" 1
# 53 "../../../../../../components/softdevice/s140/headers/ble_gap.h" 2
# 1 "../../../../../../components/softdevice/s140/headers/ble_types.h" 1
# 186 "../../../../../../components/softdevice/s140/headers/ble_types.h"
typedef struct
{
  uint8_t uuid128[16];
} ble_uuid128_t;


typedef struct
{
  uint16_t uuid;
  uint8_t type;
} ble_uuid_t;


typedef struct
{
  uint8_t *p_data;
  uint16_t len;
} ble_data_t;
# 54 "../../../../../../components/softdevice/s140/headers/ble_gap.h" 2
# 65 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
enum BLE_GAP_SVCS
{
  SD_BLE_GAP_ADDR_SET = 0x6C,
  SD_BLE_GAP_ADDR_GET = 0x6C + 1,
  SD_BLE_GAP_WHITELIST_SET = 0x6C + 2,
  SD_BLE_GAP_DEVICE_IDENTITIES_SET = 0x6C + 3,
  SD_BLE_GAP_PRIVACY_SET = 0x6C + 4,
  SD_BLE_GAP_PRIVACY_GET = 0x6C + 5,
  SD_BLE_GAP_ADV_SET_CONFIGURE = 0x6C + 6,
  SD_BLE_GAP_ADV_START = 0x6C + 7,
  SD_BLE_GAP_ADV_STOP = 0x6C + 8,
  SD_BLE_GAP_CONN_PARAM_UPDATE = 0x6C + 9,
  SD_BLE_GAP_DISCONNECT = 0x6C + 10,
  SD_BLE_GAP_TX_POWER_SET = 0x6C + 11,
  SD_BLE_GAP_APPEARANCE_SET = 0x6C + 12,
  SD_BLE_GAP_APPEARANCE_GET = 0x6C + 13,
  SD_BLE_GAP_PPCP_SET = 0x6C + 14,
  SD_BLE_GAP_PPCP_GET = 0x6C + 15,
  SD_BLE_GAP_DEVICE_NAME_SET = 0x6C + 16,
  SD_BLE_GAP_DEVICE_NAME_GET = 0x6C + 17,
  SD_BLE_GAP_AUTHENTICATE = 0x6C + 18,
  SD_BLE_GAP_SEC_PARAMS_REPLY = 0x6C + 19,
  SD_BLE_GAP_AUTH_KEY_REPLY = 0x6C + 20,
  SD_BLE_GAP_LESC_DHKEY_REPLY = 0x6C + 21,
  SD_BLE_GAP_KEYPRESS_NOTIFY = 0x6C + 22,
  SD_BLE_GAP_LESC_OOB_DATA_GET = 0x6C + 23,
  SD_BLE_GAP_LESC_OOB_DATA_SET = 0x6C + 24,
  SD_BLE_GAP_ENCRYPT = 0x6C + 25,
  SD_BLE_GAP_SEC_INFO_REPLY = 0x6C + 26,
  SD_BLE_GAP_CONN_SEC_GET = 0x6C + 27,
  SD_BLE_GAP_RSSI_START = 0x6C + 28,
  SD_BLE_GAP_RSSI_STOP = 0x6C + 29,
  SD_BLE_GAP_SCAN_START = 0x6C + 30,
  SD_BLE_GAP_SCAN_STOP = 0x6C + 31,
  SD_BLE_GAP_CONNECT = 0x6C + 32,
  SD_BLE_GAP_CONNECT_CANCEL = 0x6C + 33,
  SD_BLE_GAP_RSSI_GET = 0x6C + 34,
  SD_BLE_GAP_PHY_UPDATE = 0x6C + 35,
  SD_BLE_GAP_DATA_LENGTH_UPDATE = 0x6C + 36,
  SD_BLE_GAP_QOS_CHANNEL_SURVEY_START = 0x6C + 37,
  SD_BLE_GAP_QOS_CHANNEL_SURVEY_STOP = 0x6C + 38,
};




enum BLE_GAP_EVTS
{
  BLE_GAP_EVT_CONNECTED = 0x10,
  BLE_GAP_EVT_DISCONNECTED = 0x10 + 1,
  BLE_GAP_EVT_CONN_PARAM_UPDATE = 0x10 + 2,
  BLE_GAP_EVT_SEC_PARAMS_REQUEST = 0x10 + 3,
  BLE_GAP_EVT_SEC_INFO_REQUEST = 0x10 + 4,
  BLE_GAP_EVT_PASSKEY_DISPLAY = 0x10 + 5,
  BLE_GAP_EVT_KEY_PRESSED = 0x10 + 6,
  BLE_GAP_EVT_AUTH_KEY_REQUEST = 0x10 + 7,
  BLE_GAP_EVT_LESC_DHKEY_REQUEST = 0x10 + 8,
  BLE_GAP_EVT_AUTH_STATUS = 0x10 + 9,
  BLE_GAP_EVT_CONN_SEC_UPDATE = 0x10 + 10,
  BLE_GAP_EVT_TIMEOUT = 0x10 + 11,
  BLE_GAP_EVT_RSSI_CHANGED = 0x10 + 12,
  BLE_GAP_EVT_ADV_REPORT = 0x10 + 13,
  BLE_GAP_EVT_SEC_REQUEST = 0x10 + 14,
  BLE_GAP_EVT_CONN_PARAM_UPDATE_REQUEST = 0x10 + 15,
  BLE_GAP_EVT_SCAN_REQ_REPORT = 0x10 + 16,
  BLE_GAP_EVT_PHY_UPDATE_REQUEST = 0x10 + 17,
  BLE_GAP_EVT_PHY_UPDATE = 0x10 + 18,
  BLE_GAP_EVT_DATA_LENGTH_UPDATE_REQUEST = 0x10 + 19,
  BLE_GAP_EVT_DATA_LENGTH_UPDATE = 0x10 + 20,
  BLE_GAP_EVT_QOS_CHANNEL_SURVEY_REPORT = 0x10 + 21,
  BLE_GAP_EVT_ADV_SET_TERMINATED = 0x10 + 22,
};




enum BLE_GAP_OPTS
{
  BLE_GAP_OPT_CH_MAP = 0x20,
  BLE_GAP_OPT_LOCAL_CONN_LATENCY = 0x20 + 1,
  BLE_GAP_OPT_PASSKEY = 0x20 + 2,
  BLE_GAP_OPT_COMPAT_MODE_1 = 0x20 + 3,
  BLE_GAP_OPT_AUTH_PAYLOAD_TIMEOUT = 0x20 + 4,
  BLE_GAP_OPT_SLAVE_LATENCY_DISABLE = 0x20 + 5,
};





enum BLE_GAP_CFGS
{
  BLE_GAP_CFG_ROLE_COUNT = 0x40,
  BLE_GAP_CFG_DEVICE_NAME = 0x40 + 1,
};



enum BLE_GAP_TX_POWER_ROLES
{
  BLE_GAP_TX_POWER_ROLE_ADV = 1,
  BLE_GAP_TX_POWER_ROLE_SCAN_INIT = 2,
  BLE_GAP_TX_POWER_ROLE_CONN = 3,
};
# 667 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
typedef struct
{
  uint8_t type;
  uint8_t anonymous : 1;



  uint8_t include_tx_power : 1;


} ble_gap_adv_properties_t;



typedef struct
{
  uint16_t connectable : 1;
  uint16_t scannable : 1;
  uint16_t directed : 1;
  uint16_t scan_response : 1;
  uint16_t extended_pdu : 1;
  uint16_t status : 2;
  uint16_t reserved : 9;
} ble_gap_adv_report_type_t;


typedef struct
{
  uint16_t aux_offset;
  uint8_t aux_phy;
} ble_gap_aux_pointer_t;


typedef struct
{
  uint8_t addr_id_peer : 1;

  uint8_t addr_type : 7;
  uint8_t addr[(6)];

} ble_gap_addr_t;
# 721 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
typedef struct
{
  uint16_t min_conn_interval;
  uint16_t max_conn_interval;
  uint16_t slave_latency;
  uint16_t conn_sup_timeout;
} ble_gap_conn_params_t;
# 740 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
typedef struct
{
  uint8_t sm : 4;
  uint8_t lv : 4;

} ble_gap_conn_sec_mode_t;



typedef struct
{
  ble_gap_conn_sec_mode_t sec_mode;
  uint8_t encr_key_size;
} ble_gap_conn_sec_t;


typedef struct
{
  uint8_t irk[16];
} ble_gap_irk_t;







typedef uint8_t ble_gap_ch_mask_t[5];



typedef struct
{
  ble_gap_adv_properties_t properties;
  ble_gap_addr_t const *p_peer_addr;
# 788 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
  uint32_t interval;



  uint16_t duration;


  uint8_t max_adv_evts;
# 805 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
  ble_gap_ch_mask_t channel_mask;


  uint8_t filter_policy;
  uint8_t primary_phy;





  uint8_t secondary_phy;
# 825 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
  uint8_t set_id:4;



  uint8_t scan_req_notification:1;





} ble_gap_adv_params_t;
# 848 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
typedef struct
{
  ble_data_t adv_data;



  ble_data_t scan_rsp_data;



} ble_gap_adv_data_t;



typedef struct
{
  uint8_t extended : 1;





  uint8_t report_incomplete_evts : 1;







  uint8_t active : 1;

  uint8_t filter_policy : 2;



  uint8_t scan_phys;
# 900 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
  uint16_t interval;
  uint16_t window;
  uint16_t timeout;
  ble_gap_ch_mask_t channel_mask;



} ble_gap_scan_params_t;
# 927 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
typedef struct
{
  uint8_t privacy_mode;
  uint8_t private_addr_type;
  uint16_t private_addr_cycle_s;
  ble_gap_irk_t *p_device_irk;


} ble_gap_privacy_params_t;
# 946 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
typedef struct
{
  uint8_t tx_phys;
  uint8_t rx_phys;
} ble_gap_phys_t;


typedef struct
{
  uint8_t enc : 1;
  uint8_t id : 1;
  uint8_t sign : 1;
  uint8_t link : 1;
} ble_gap_sec_kdist_t;



typedef struct
{
  uint8_t bond : 1;
  uint8_t mitm : 1;
  uint8_t lesc : 1;
  uint8_t keypress : 1;
  uint8_t io_caps : 3;
  uint8_t oob : 1;




  uint8_t min_key_size;
  uint8_t max_key_size;
  ble_gap_sec_kdist_t kdist_own;
  ble_gap_sec_kdist_t kdist_peer;
} ble_gap_sec_params_t;



typedef struct
{
  uint8_t ltk[16];
  uint8_t lesc : 1;
  uint8_t auth : 1;
  uint8_t ltk_len : 6;
} ble_gap_enc_info_t;



typedef struct
{
  uint16_t ediv;
  uint8_t rand[8];
} ble_gap_master_id_t;



typedef struct
{
  uint8_t csrk[16];
} ble_gap_sign_info_t;



typedef struct
{
  uint8_t pk[64];
} ble_gap_lesc_p256_pk_t;



typedef struct
{
  uint8_t key[32];
} ble_gap_lesc_dhkey_t;



typedef struct
{
  ble_gap_addr_t addr;
  uint8_t r[16];
  uint8_t c[16];
} ble_gap_lesc_oob_data_t;



typedef struct
{
  ble_gap_addr_t peer_addr;

  uint8_t role;
  ble_gap_conn_params_t conn_params;
  uint8_t adv_handle;

  ble_gap_adv_data_t adv_data;



} ble_gap_evt_connected_t;



typedef struct
{
  uint8_t reason;
} ble_gap_evt_disconnected_t;



typedef struct
{
  ble_gap_conn_params_t conn_params;
} ble_gap_evt_conn_param_update_t;


typedef struct
{
  ble_gap_phys_t peer_preferred_phys;
} ble_gap_evt_phy_update_request_t;


typedef struct
{
  uint8_t status;
  uint8_t tx_phy;
  uint8_t rx_phy;
} ble_gap_evt_phy_update_t;


typedef struct
{
  ble_gap_sec_params_t peer_params;
} ble_gap_evt_sec_params_request_t;



typedef struct
{
  ble_gap_addr_t peer_addr;
  ble_gap_master_id_t master_id;
  uint8_t enc_info : 1;
  uint8_t id_info : 1;
  uint8_t sign_info : 1;
} ble_gap_evt_sec_info_request_t;



typedef struct
{
  uint8_t passkey[6];
  uint8_t match_request : 1;


} ble_gap_evt_passkey_display_t;


typedef struct
{
  uint8_t kp_not;
} ble_gap_evt_key_pressed_t;



typedef struct
{
  uint8_t key_type;
} ble_gap_evt_auth_key_request_t;


typedef struct
{
  ble_gap_lesc_p256_pk_t *p_pk_peer;

  uint8_t oobd_req :1;
} ble_gap_evt_lesc_dhkey_request_t;





typedef struct
{
  uint8_t lv1 : 1;
  uint8_t lv2 : 1;
  uint8_t lv3 : 1;
  uint8_t lv4 : 1;
} ble_gap_sec_levels_t;



typedef struct
{
  ble_gap_enc_info_t enc_info;
  ble_gap_master_id_t master_id;
} ble_gap_enc_key_t;



typedef struct
{
  ble_gap_irk_t id_info;
  ble_gap_addr_t id_addr_info;
} ble_gap_id_key_t;



typedef struct
{
  ble_gap_enc_key_t *p_enc_key;
  ble_gap_id_key_t *p_id_key;
  ble_gap_sign_info_t *p_sign_key;
  ble_gap_lesc_p256_pk_t *p_pk;

} ble_gap_sec_keys_t;



typedef struct
{
  ble_gap_sec_keys_t keys_own;
  ble_gap_sec_keys_t keys_peer;
} ble_gap_sec_keyset_t;



typedef struct
{
  uint16_t max_tx_octets;
  uint16_t max_rx_octets;
  uint16_t max_tx_time_us;
  uint16_t max_rx_time_us;
} ble_gap_data_length_params_t;



typedef struct
{
  uint16_t tx_payload_limited_octets;
  uint16_t rx_payload_limited_octets;
  uint16_t tx_rx_time_limited_us;
} ble_gap_data_length_limitation_t;



typedef struct
{
  uint8_t auth_status;
  uint8_t error_src : 2;
  uint8_t bonded : 1;
  uint8_t lesc : 1;
  ble_gap_sec_levels_t sm1_levels;
  ble_gap_sec_levels_t sm2_levels;
  ble_gap_sec_kdist_t kdist_own;
  ble_gap_sec_kdist_t kdist_peer;
} ble_gap_evt_auth_status_t;



typedef struct
{
  ble_gap_conn_sec_t conn_sec;
} ble_gap_evt_conn_sec_update_t;



typedef struct
{
  uint8_t src;
  union
  {
    ble_data_t adv_report_buffer;

  } params;
} ble_gap_evt_timeout_t;



typedef struct
{
  int8_t rssi;

  uint8_t ch_index;
} ble_gap_evt_rssi_changed_t;


typedef struct
{
  uint8_t reason;

  uint8_t adv_handle;
  uint8_t num_completed_adv_events;

  ble_gap_adv_data_t adv_data;


} ble_gap_evt_adv_set_terminated_t;
# 1250 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
typedef struct
{
  ble_gap_adv_report_type_t type;
  ble_gap_addr_t peer_addr;


  ble_gap_addr_t direct_addr;
# 1265 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
  uint8_t primary_phy;

  uint8_t secondary_phy;


  int8_t tx_power;



  int8_t rssi;

  uint8_t ch_index;
  uint8_t set_id;

  uint16_t data_id:12;


  ble_data_t data;



  ble_gap_aux_pointer_t aux_pointer;


} ble_gap_evt_adv_report_t;



typedef struct
{
  uint8_t bond : 1;
  uint8_t mitm : 1;
  uint8_t lesc : 1;
  uint8_t keypress : 1;
} ble_gap_evt_sec_request_t;



typedef struct
{
  ble_gap_conn_params_t conn_params;
} ble_gap_evt_conn_param_update_request_t;



typedef struct
{
  uint8_t adv_handle;
  int8_t rssi;

  ble_gap_addr_t peer_addr;

} ble_gap_evt_scan_req_report_t;



typedef struct
{
  ble_gap_data_length_params_t peer_params;
} ble_gap_evt_data_length_update_request_t;


typedef struct
{
  ble_gap_data_length_params_t effective_params;
} ble_gap_evt_data_length_update_t;



typedef struct
{
  int8_t channel_energy[(40)];



} ble_gap_evt_qos_channel_survey_report_t;


typedef struct
{
  uint16_t conn_handle;
  union
  {
    ble_gap_evt_connected_t connected;
    ble_gap_evt_disconnected_t disconnected;
    ble_gap_evt_conn_param_update_t conn_param_update;
    ble_gap_evt_sec_params_request_t sec_params_request;
    ble_gap_evt_sec_info_request_t sec_info_request;
    ble_gap_evt_passkey_display_t passkey_display;
    ble_gap_evt_key_pressed_t key_pressed;
    ble_gap_evt_auth_key_request_t auth_key_request;
    ble_gap_evt_lesc_dhkey_request_t lesc_dhkey_request;
    ble_gap_evt_auth_status_t auth_status;
    ble_gap_evt_conn_sec_update_t conn_sec_update;
    ble_gap_evt_timeout_t timeout;
    ble_gap_evt_rssi_changed_t rssi_changed;
    ble_gap_evt_adv_report_t adv_report;
    ble_gap_evt_adv_set_terminated_t adv_set_terminated;
    ble_gap_evt_sec_request_t sec_request;
    ble_gap_evt_conn_param_update_request_t conn_param_update_request;
    ble_gap_evt_scan_req_report_t scan_req_report;
    ble_gap_evt_phy_update_request_t phy_update_request;
    ble_gap_evt_phy_update_t phy_update;
    ble_gap_evt_data_length_update_request_t data_length_update_request;
    ble_gap_evt_data_length_update_t data_length_update;
    ble_gap_evt_qos_channel_survey_report_t qos_channel_survey_report;
  } params;
} ble_gap_evt_t;
# 1383 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
typedef struct
{
  uint8_t conn_count;

  uint16_t event_length;




} ble_gap_conn_cfg_t;
# 1407 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
typedef struct
{
  uint8_t adv_set_count;
  uint8_t periph_role_count;
  uint8_t central_role_count;
  uint8_t central_sec_count;
  uint8_t qos_channel_survey_role_available:1;

} ble_gap_cfg_role_count_t;
# 1446 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
typedef struct
{
  ble_gap_conn_sec_mode_t write_perm;
  uint8_t vloc:2;
  uint8_t *p_value;
  uint16_t current_len;
  uint16_t max_len;
} ble_gap_cfg_device_name_t;



typedef union
{
  ble_gap_cfg_role_count_t role_count_cfg;
  ble_gap_cfg_device_name_t device_name_cfg;
} ble_gap_cfg_t;
# 1487 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
typedef struct
{
  uint16_t conn_handle;
  uint8_t ch_map[5];
} ble_gap_opt_ch_map_t;
# 1516 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
typedef struct
{
  uint16_t conn_handle;
  uint16_t requested_latency;
  uint16_t * p_actual_latency;
} ble_gap_opt_local_conn_latency_t;
# 1535 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
typedef struct
{
  uint16_t conn_handle;
  uint8_t disable : 1;
} ble_gap_opt_slave_latency_disable_t;
# 1552 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
typedef struct
{
  uint8_t const * p_passkey;
} ble_gap_opt_passkey_t;
# 1573 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
typedef struct
{
   uint8_t enable : 1;
} ble_gap_opt_compat_mode_1_t;
# 1598 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
typedef struct
{
  uint16_t conn_handle;
  uint16_t auth_payload_timeout;
} ble_gap_opt_auth_payload_timeout_t;


typedef union
{
  ble_gap_opt_ch_map_t ch_map;
  ble_gap_opt_local_conn_latency_t local_conn_latency;
  ble_gap_opt_passkey_t passkey;
  ble_gap_opt_compat_mode_1_t compat_mode_1;
  ble_gap_opt_auth_payload_timeout_t auth_payload_timeout;
  ble_gap_opt_slave_latency_disable_t slave_latency_disable;
} ble_gap_opt_t;
# 1648 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1648 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1648 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1648 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1648 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_addr_set(ble_gap_addr_t const *p_addr) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_ADDR_SET) : "r0" ); }
# 1648 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1648 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 1661 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1661 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1661 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1661 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1661 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_addr_get(ble_gap_addr_t *p_addr) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_ADDR_GET) : "r0" ); }
# 1661 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1661 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 1687 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1687 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1687 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1687 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1687 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_whitelist_set(ble_gap_addr_t const * const * pp_wl_addrs, uint8_t len) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_WHITELIST_SET) : "r0" ); }
# 1687 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1687 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 1718 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1718 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1718 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1718 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1718 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_device_identities_set(ble_gap_id_key_t const * const * pp_id_keys, ble_gap_irk_t const * const * pp_local_irks, uint8_t len) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_DEVICE_IDENTITIES_SET) : "r0" ); }
# 1718 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1718 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 1742 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1742 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1742 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1742 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1742 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_privacy_set(ble_gap_privacy_params_t const *p_privacy_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_PRIVACY_SET) : "r0" ); }
# 1742 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1742 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 1756 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1756 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1756 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1756 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1756 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_privacy_get(ble_gap_privacy_params_t *p_privacy_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_PRIVACY_GET) : "r0" ); }
# 1756 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1756 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 1803 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1803 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1803 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1803 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1803 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_adv_set_configure(uint8_t *p_adv_handle, ble_gap_adv_data_t const *p_adv_data, ble_gap_adv_params_t const *p_adv_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_ADV_SET_CONFIGURE) : "r0" ); }
# 1803 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1803 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 1846 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1846 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1846 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1846 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1846 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_adv_start(uint8_t adv_handle, uint8_t conn_cfg_tag) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_ADV_START) : "r0" ); }
# 1846 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1846 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 1862 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1862 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1862 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1862 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1862 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_adv_stop(uint8_t adv_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_ADV_STOP) : "r0" ); }
# 1862 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1862 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 1900 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1900 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1900 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1900 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1900 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_conn_param_update(uint16_t conn_handle, ble_gap_conn_params_t const *p_conn_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_CONN_PARAM_UPDATE) : "r0" ); }
# 1900 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1900 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 1924 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1924 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1924 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1924 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1924 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_disconnect(uint16_t conn_handle, uint8_t hci_status_code) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_DISCONNECT) : "r0" ); }
# 1924 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1924 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 1949 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1949 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1949 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1949 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1949 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_tx_power_set(uint8_t role, uint16_t handle, int8_t tx_power) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_TX_POWER_SET) : "r0" ); }
# 1949 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1949 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 1959 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1959 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1959 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1959 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1959 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_appearance_set(uint16_t appearance) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_APPEARANCE_SET) : "r0" ); }
# 1959 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1959 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 1969 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1969 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1969 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1969 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1969 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_appearance_get(uint16_t *p_appearance) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_APPEARANCE_GET) : "r0" ); }
# 1969 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1969 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 1980 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1980 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1980 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1980 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1980 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_ppcp_set(ble_gap_conn_params_t const *p_conn_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_PPCP_SET) : "r0" ); }
# 1980 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1980 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 1990 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1990 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1990 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 1990 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1990 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_ppcp_get(ble_gap_conn_params_t *p_conn_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_PPCP_GET) : "r0" ); }
# 1990 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1990 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2008 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2008 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2008 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2008 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2008 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_device_name_set(ble_gap_conn_sec_mode_t const *p_write_perm, uint8_t const *p_dev_name, uint16_t len) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_DEVICE_NAME_SET) : "r0" ); }
# 2008 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2008 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2025 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2025 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2025 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2025 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2025 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_device_name_get(uint8_t *p_dev_name, uint16_t *p_len) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_DEVICE_NAME_GET) : "r0" ); }
# 2025 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2025 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2075 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2075 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2075 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2075 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2075 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_authenticate(uint16_t conn_handle, ble_gap_sec_params_t const *p_sec_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_AUTHENTICATE) : "r0" ); }
# 2075 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2075 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2134 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2134 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2134 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2134 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2134 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_sec_params_reply(uint16_t conn_handle, uint8_t sec_status, ble_gap_sec_params_t const *p_sec_params, ble_gap_sec_keyset_t const *p_sec_keyset) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_SEC_PARAMS_REPLY) : "r0" ); }
# 2134 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2134 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2168 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2168 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2168 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2168 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2168 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_auth_key_reply(uint16_t conn_handle, uint8_t key_type, uint8_t const *p_key) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_AUTH_KEY_REPLY) : "r0" ); }
# 2168 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2168 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2202 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2202 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2202 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2202 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2202 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_lesc_dhkey_reply(uint16_t conn_handle, ble_gap_lesc_dhkey_t const *p_dhkey) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_LESC_DHKEY_REPLY) : "r0" ); }
# 2202 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2202 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2221 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2221 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2221 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2221 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2221 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_keypress_notify(uint16_t conn_handle, uint8_t kp_not) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_KEYPRESS_NOTIFY) : "r0" ); }
# 2221 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2221 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2242 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2242 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2242 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2242 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2242 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_lesc_oob_data_get(uint16_t conn_handle, ble_gap_lesc_p256_pk_t const *p_pk_own, ble_gap_lesc_oob_data_t *p_oobd_own) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_LESC_OOB_DATA_GET) : "r0" ); }
# 2242 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2242 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2270 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2270 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2270 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2270 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2270 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_lesc_oob_data_set(uint16_t conn_handle, ble_gap_lesc_oob_data_t const *p_oobd_own, ble_gap_lesc_oob_data_t const *p_oobd_peer) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_LESC_OOB_DATA_SET) : "r0" ); }
# 2270 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2270 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2299 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2299 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2299 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2299 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2299 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_encrypt(uint16_t conn_handle, ble_gap_master_id_t const *p_master_id, ble_gap_enc_info_t const *p_enc_info) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_ENCRYPT) : "r0" ); }
# 2299 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2299 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2322 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2322 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2322 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2322 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2322 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_sec_info_reply(uint16_t conn_handle, ble_gap_enc_info_t const *p_enc_info, ble_gap_irk_t const *p_id_info, ble_gap_sign_info_t const *p_sign_info) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_SEC_INFO_REPLY) : "r0" ); }
# 2322 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2322 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2334 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2334 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2334 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2334 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2334 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_conn_sec_get(uint16_t conn_handle, ble_gap_conn_sec_t *p_conn_sec) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_CONN_SEC_GET) : "r0" ); }
# 2334 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2334 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2360 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2360 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2360 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2360 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2360 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_rssi_start(uint16_t conn_handle, uint8_t threshold_dbm, uint8_t skip_count) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_RSSI_START) : "r0" ); }
# 2360 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2360 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2379 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2379 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2379 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2379 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2379 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_rssi_stop(uint16_t conn_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_RSSI_STOP) : "r0" ); }
# 2379 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2379 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2401 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2401 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2401 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2401 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2401 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_rssi_get(uint16_t conn_handle, int8_t *p_rssi, uint8_t *p_ch_index) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_RSSI_GET) : "r0" ); }
# 2401 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2401 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2457 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2457 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2457 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2457 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2457 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_scan_start(ble_gap_scan_params_t const *p_scan_params, ble_data_t const * p_adv_report_buffer) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_SCAN_START) : "r0" ); }
# 2457 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2457 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2472 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2472 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2472 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2472 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2472 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_scan_stop(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_SCAN_STOP) : "r0" ); }
# 2472 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2472 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2511 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2511 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2511 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2511 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2511 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_connect(ble_gap_addr_t const *p_peer_addr, ble_gap_scan_params_t const *p_scan_params, ble_gap_conn_params_t const *p_conn_params, uint8_t conn_cfg_tag) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_CONNECT) : "r0" ); }
# 2511 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2511 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2523 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2523 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2523 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2523 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2523 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_connect_cancel(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_CONNECT_CANCEL) : "r0" ); }
# 2523 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2523 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2583 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2583 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2583 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2583 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2583 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_phy_update(uint16_t conn_handle, ble_gap_phys_t const *p_gap_phys) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_PHY_UPDATE) : "r0" ); }
# 2583 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2583 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2618 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2618 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2618 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2618 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2618 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_data_length_update(uint16_t conn_handle, ble_gap_data_length_params_t const *p_dl_params, ble_gap_data_length_limitation_t *p_dl_limitation) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_DATA_LENGTH_UPDATE) : "r0" ); }
# 2618 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2618 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 2650 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2650 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2650 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2650 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2650 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_qos_channel_survey_start(uint32_t interval_us) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_QOS_CHANNEL_SURVEY_START) : "r0" ); }
# 2650 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2650 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;







# 2657 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2657 "../../../../../../components/softdevice/s140/headers/ble_gap.h"

# 2657 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2657 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_qos_channel_survey_stop(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_QOS_CHANNEL_SURVEY_STOP) : "r0" ); }
# 2657 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2657 "../../../../../../components/softdevice/s140/headers/ble_gap.h"
 ;
# 57 "../../../../../../components/softdevice/s140/headers/ble.h" 2
# 1 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h" 1
# 85 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
enum BLE_L2CAP_SVCS
{
  SD_BLE_L2CAP_CH_SETUP = 0xB8 + 0,
  SD_BLE_L2CAP_CH_RELEASE = 0xB8 + 1,
  SD_BLE_L2CAP_CH_RX = 0xB8 + 2,
  SD_BLE_L2CAP_CH_TX = 0xB8 + 3,
  SD_BLE_L2CAP_CH_FLOW_CONTROL = 0xB8 + 4,
};


enum BLE_L2CAP_EVTS
{
  BLE_L2CAP_EVT_CH_SETUP_REQUEST = 0x70 + 0,

  BLE_L2CAP_EVT_CH_SETUP_REFUSED = 0x70 + 1,

  BLE_L2CAP_EVT_CH_SETUP = 0x70 + 2,

  BLE_L2CAP_EVT_CH_RELEASED = 0x70 + 3,

  BLE_L2CAP_EVT_CH_SDU_BUF_RELEASED = 0x70 + 4,

  BLE_L2CAP_EVT_CH_CREDIT = 0x70 + 5,

  BLE_L2CAP_EVT_CH_RX = 0x70 + 6,

  BLE_L2CAP_EVT_CH_TX = 0x70 + 7,

};
# 174 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
typedef struct
{
  uint16_t rx_mps;


  uint16_t tx_mps;


  uint8_t rx_queue_size;

  uint8_t tx_queue_size;

  uint8_t ch_count;




} ble_l2cap_conn_cfg_t;


typedef struct
{
  uint16_t rx_mtu;


  uint16_t rx_mps;



  ble_data_t sdu_buf;




} ble_l2cap_ch_rx_params_t;


typedef struct
{
  ble_l2cap_ch_rx_params_t rx_params;
  uint16_t le_psm;

  uint16_t status;


} ble_l2cap_ch_setup_params_t;


typedef struct
{
  uint16_t tx_mtu;

  uint16_t peer_mps;

  uint16_t tx_mps;



  uint16_t credits;
} ble_l2cap_ch_tx_params_t;


typedef struct
{
  ble_l2cap_ch_tx_params_t tx_params;
  uint16_t le_psm;
} ble_l2cap_evt_ch_setup_request_t;


typedef struct
{
  uint8_t source;
  uint16_t status;
} ble_l2cap_evt_ch_setup_refused_t;


typedef struct
{
  ble_l2cap_ch_tx_params_t tx_params;
} ble_l2cap_evt_ch_setup_t;


typedef struct
{
  ble_data_t sdu_buf;



} ble_l2cap_evt_ch_sdu_buf_released_t;


typedef struct
{
  uint16_t credits;
} ble_l2cap_evt_ch_credit_t;


typedef struct
{
  uint16_t sdu_len;
  ble_data_t sdu_buf;



} ble_l2cap_evt_ch_rx_t;


typedef struct
{
  ble_data_t sdu_buf;
} ble_l2cap_evt_ch_tx_t;


typedef struct
{
  uint16_t conn_handle;
  uint16_t local_cid;

  union
  {
    ble_l2cap_evt_ch_setup_request_t ch_setup_request;
    ble_l2cap_evt_ch_setup_refused_t ch_setup_refused;
    ble_l2cap_evt_ch_setup_t ch_setup;
    ble_l2cap_evt_ch_sdu_buf_released_t ch_sdu_buf_released;
    ble_l2cap_evt_ch_credit_t credit;
    ble_l2cap_evt_ch_rx_t rx;
    ble_l2cap_evt_ch_tx_t tx;
  } params;
} ble_l2cap_evt_t;
# 349 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"

# 349 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
#pragma GCC diagnostic push
# 349 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"

# 349 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 349 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_l2cap_ch_setup(uint16_t conn_handle, uint16_t *p_local_cid, ble_l2cap_ch_setup_params_t const *p_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_L2CAP_CH_SETUP) : "r0" ); }
# 349 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
#pragma GCC diagnostic pop
# 349 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
 ;
# 372 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"

# 372 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
#pragma GCC diagnostic push
# 372 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"

# 372 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 372 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_l2cap_ch_release(uint16_t conn_handle, uint16_t local_cid) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_L2CAP_CH_RELEASE) : "r0" ); }
# 372 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
#pragma GCC diagnostic pop
# 372 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
 ;
# 406 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"

# 406 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
#pragma GCC diagnostic push
# 406 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"

# 406 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 406 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_l2cap_ch_rx(uint16_t conn_handle, uint16_t local_cid, ble_data_t const *p_sdu_buf) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_L2CAP_CH_RX) : "r0" ); }
# 406 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
#pragma GCC diagnostic pop
# 406 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
 ;
# 451 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"

# 451 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
#pragma GCC diagnostic push
# 451 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"

# 451 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 451 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_l2cap_ch_tx(uint16_t conn_handle, uint16_t local_cid, ble_data_t const *p_sdu_buf) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_L2CAP_CH_TX) : "r0" ); }
# 451 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
#pragma GCC diagnostic pop
# 451 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
 ;
# 495 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"

# 495 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
#pragma GCC diagnostic push
# 495 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"

# 495 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 495 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_l2cap_ch_flow_control(uint16_t conn_handle, uint16_t local_cid, uint16_t credits, uint16_t *p_credits) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_L2CAP_CH_FLOW_CONTROL) : "r0" ); }
# 495 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
#pragma GCC diagnostic pop
# 495 "../../../../../../components/softdevice/s140/headers/ble_l2cap.h"
 ;
# 58 "../../../../../../components/softdevice/s140/headers/ble.h" 2
# 1 "../../../../../../components/softdevice/s140/headers/ble_gatt.h" 1
# 189 "../../../../../../components/softdevice/s140/headers/ble_gatt.h"
typedef struct
{
  uint16_t att_mtu;






} ble_gatt_conn_cfg_t;


typedef struct
{

  uint8_t broadcast :1;
  uint8_t read :1;
  uint8_t write_wo_resp :1;
  uint8_t write :1;
  uint8_t notify :1;
  uint8_t indicate :1;
  uint8_t auth_signed_wr :1;
} ble_gatt_char_props_t;


typedef struct
{

  uint8_t reliable_wr :1;
  uint8_t wr_aux :1;
} ble_gatt_char_ext_props_t;
# 59 "../../../../../../components/softdevice/s140/headers/ble.h" 2
# 1 "../../../../../../components/softdevice/s140/headers/ble_gattc.h" 1
# 65 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
enum BLE_GATTC_SVCS
{
  SD_BLE_GATTC_PRIMARY_SERVICES_DISCOVER = 0x9B,
  SD_BLE_GATTC_RELATIONSHIPS_DISCOVER,
  SD_BLE_GATTC_CHARACTERISTICS_DISCOVER,
  SD_BLE_GATTC_DESCRIPTORS_DISCOVER,
  SD_BLE_GATTC_ATTR_INFO_DISCOVER,
  SD_BLE_GATTC_CHAR_VALUE_BY_UUID_READ,
  SD_BLE_GATTC_READ,
  SD_BLE_GATTC_CHAR_VALUES_READ,
  SD_BLE_GATTC_WRITE,
  SD_BLE_GATTC_HV_CONFIRM,
  SD_BLE_GATTC_EXCHANGE_MTU_REQUEST,
};




enum BLE_GATTC_EVTS
{
  BLE_GATTC_EVT_PRIM_SRVC_DISC_RSP = 0x30,
  BLE_GATTC_EVT_REL_DISC_RSP,
  BLE_GATTC_EVT_CHAR_DISC_RSP,
  BLE_GATTC_EVT_DESC_DISC_RSP,
  BLE_GATTC_EVT_ATTR_INFO_DISC_RSP,
  BLE_GATTC_EVT_CHAR_VAL_BY_UUID_READ_RSP,
  BLE_GATTC_EVT_READ_RSP,
  BLE_GATTC_EVT_CHAR_VALS_READ_RSP,
  BLE_GATTC_EVT_WRITE_RSP,
  BLE_GATTC_EVT_HVX,
  BLE_GATTC_EVT_EXCHANGE_MTU_RSP,
  BLE_GATTC_EVT_TIMEOUT,
  BLE_GATTC_EVT_WRITE_CMD_TX_COMPLETE
};
# 129 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
typedef struct
{
  uint8_t write_cmd_tx_queue_size;

} ble_gattc_conn_cfg_t;


typedef struct
{
  uint16_t start_handle;
  uint16_t end_handle;
} ble_gattc_handle_range_t;



typedef struct
{
  ble_uuid_t uuid;
  ble_gattc_handle_range_t handle_range;
} ble_gattc_service_t;



typedef struct
{
  uint16_t handle;
  ble_gattc_service_t included_srvc;
} ble_gattc_include_t;



typedef struct
{
  ble_uuid_t uuid;
  ble_gatt_char_props_t char_props;
  uint8_t char_ext_props : 1;
  uint16_t handle_decl;
  uint16_t handle_value;
} ble_gattc_char_t;



typedef struct
{
  uint16_t handle;
  ble_uuid_t uuid;
} ble_gattc_desc_t;



typedef struct
{
  uint8_t write_op;
  uint8_t flags;
  uint16_t handle;
  uint16_t offset;
  uint16_t len;
  uint8_t const *p_value;
} ble_gattc_write_params_t;


typedef struct
{
  uint16_t handle;
  ble_uuid_t uuid;
} ble_gattc_attr_info16_t;


typedef struct
{
  uint16_t handle;
  ble_uuid128_t uuid;
} ble_gattc_attr_info128_t;


typedef struct
{
  uint16_t count;
  ble_gattc_service_t services[1];

} ble_gattc_evt_prim_srvc_disc_rsp_t;


typedef struct
{
  uint16_t count;
  ble_gattc_include_t includes[1];

} ble_gattc_evt_rel_disc_rsp_t;


typedef struct
{
  uint16_t count;
  ble_gattc_char_t chars[1];

} ble_gattc_evt_char_disc_rsp_t;


typedef struct
{
  uint16_t count;
  ble_gattc_desc_t descs[1];

} ble_gattc_evt_desc_disc_rsp_t;


typedef struct
{
  uint16_t count;
  uint8_t format;
  union {
    ble_gattc_attr_info16_t attr_info16[1];


    ble_gattc_attr_info128_t attr_info128[1];


  } info;
} ble_gattc_evt_attr_info_disc_rsp_t;


typedef struct
{
  uint16_t handle;
  uint8_t *p_value;
} ble_gattc_handle_value_t;


typedef struct
{
  uint16_t count;
  uint16_t value_len;
  uint8_t handle_value[1];


} ble_gattc_evt_char_val_by_uuid_read_rsp_t;


typedef struct
{
  uint16_t handle;
  uint16_t offset;
  uint16_t len;
  uint8_t data[1];

} ble_gattc_evt_read_rsp_t;


typedef struct
{
  uint16_t len;
  uint8_t values[1];

} ble_gattc_evt_char_vals_read_rsp_t;


typedef struct
{
  uint16_t handle;
  uint8_t write_op;
  uint16_t offset;
  uint16_t len;
  uint8_t data[1];

} ble_gattc_evt_write_rsp_t;


typedef struct
{
  uint16_t handle;
  uint8_t type;
  uint16_t len;
  uint8_t data[1];

} ble_gattc_evt_hvx_t;


typedef struct
{
  uint16_t server_rx_mtu;
} ble_gattc_evt_exchange_mtu_rsp_t;


typedef struct
{
  uint8_t src;
} ble_gattc_evt_timeout_t;


typedef struct
{
  uint8_t count;
} ble_gattc_evt_write_cmd_tx_complete_t;


typedef struct
{
  uint16_t conn_handle;
  uint16_t gatt_status;
  uint16_t error_handle;
  union
  {
    ble_gattc_evt_prim_srvc_disc_rsp_t prim_srvc_disc_rsp;
    ble_gattc_evt_rel_disc_rsp_t rel_disc_rsp;
    ble_gattc_evt_char_disc_rsp_t char_disc_rsp;
    ble_gattc_evt_desc_disc_rsp_t desc_disc_rsp;
    ble_gattc_evt_char_val_by_uuid_read_rsp_t char_val_by_uuid_read_rsp;
    ble_gattc_evt_read_rsp_t read_rsp;
    ble_gattc_evt_char_vals_read_rsp_t char_vals_read_rsp;
    ble_gattc_evt_write_rsp_t write_rsp;
    ble_gattc_evt_hvx_t hvx;
    ble_gattc_evt_exchange_mtu_rsp_t exchange_mtu_rsp;
    ble_gattc_evt_timeout_t timeout;
    ble_gattc_evt_attr_info_disc_rsp_t attr_info_disc_rsp;
    ble_gattc_evt_write_cmd_tx_complete_t write_cmd_tx_complete;
  } params;
} ble_gattc_evt_t;
# 379 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 379 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 379 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 379 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 379 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_primary_services_discover(uint16_t conn_handle, uint16_t start_handle, ble_uuid_t const *p_srvc_uuid) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_PRIMARY_SERVICES_DISCOVER) : "r0" ); }
# 379 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 379 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 ;
# 406 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 406 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 406 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 406 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 406 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_relationships_discover(uint16_t conn_handle, ble_gattc_handle_range_t const *p_handle_range) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_RELATIONSHIPS_DISCOVER) : "r0" ); }
# 406 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 406 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 ;
# 435 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 435 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 435 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 435 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 435 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_characteristics_discover(uint16_t conn_handle, ble_gattc_handle_range_t const *p_handle_range) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_CHARACTERISTICS_DISCOVER) : "r0" ); }
# 435 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 435 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 ;
# 461 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 461 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 461 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 461 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 461 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_descriptors_discover(uint16_t conn_handle, ble_gattc_handle_range_t const *p_handle_range) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_DESCRIPTORS_DISCOVER) : "r0" ); }
# 461 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 461 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 ;
# 488 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 488 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 488 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 488 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 488 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_char_value_by_uuid_read(uint16_t conn_handle, ble_uuid_t const *p_uuid, ble_gattc_handle_range_t const *p_handle_range) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_CHAR_VALUE_BY_UUID_READ) : "r0" ); }
# 488 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 488 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 ;
# 515 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 515 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 515 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 515 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 515 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_read(uint16_t conn_handle, uint16_t handle, uint16_t offset) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_READ) : "r0" ); }
# 515 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 515 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 ;
# 541 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 541 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 541 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 541 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 541 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_char_values_read(uint16_t conn_handle, uint16_t const *p_handles, uint16_t handle_count) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_CHAR_VALUES_READ) : "r0" ); }
# 541 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 541 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 ;
# 588 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 588 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 588 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 588 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 588 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_write(uint16_t conn_handle, ble_gattc_write_params_t const *p_write_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_WRITE) : "r0" ); }
# 588 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 588 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 ;
# 606 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 606 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 606 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 606 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 606 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_hv_confirm(uint16_t conn_handle, uint16_t handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_HV_CONFIRM) : "r0" ); }
# 606 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 606 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 ;
# 624 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 624 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 624 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 624 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 624 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_attr_info_discover(uint16_t conn_handle, ble_gattc_handle_range_t const * p_handle_range) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_ATTR_INFO_DISCOVER) : "r0" ); }
# 624 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 624 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 ;
# 657 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 657 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 657 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"

# 657 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 657 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_exchange_mtu_request(uint16_t conn_handle, uint16_t client_rx_mtu) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_EXCHANGE_MTU_REQUEST) : "r0" ); }
# 657 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 657 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
 ;
# 682 "../../../../../../components/softdevice/s140/headers/ble_gattc.h"
static inline uint32_t sd_ble_gattc_evt_char_val_by_uuid_read_rsp_iter(ble_gattc_evt_t *p_gattc_evt, ble_gattc_handle_value_t *p_iter);





static inline uint32_t sd_ble_gattc_evt_char_val_by_uuid_read_rsp_iter(ble_gattc_evt_t *p_gattc_evt, ble_gattc_handle_value_t *p_iter)
{
  uint32_t value_len = p_gattc_evt->params.char_val_by_uuid_read_rsp.value_len;
  uint8_t *p_first = p_gattc_evt->params.char_val_by_uuid_read_rsp.handle_value;
  uint8_t *p_next = p_iter->p_value ? p_iter->p_value + value_len : p_first;

  if ((p_next - p_first) / (sizeof(uint16_t) + value_len) < p_gattc_evt->params.char_val_by_uuid_read_rsp.count)
  {
    p_iter->handle = (uint16_t)p_next[1] << 8 | p_next[0];
    p_iter->p_value = p_next + sizeof(uint16_t);
    return ((0x0) + 0);
  }
  else
  {
    return ((0x0) + 5);
  }
}
# 60 "../../../../../../components/softdevice/s140/headers/ble.h" 2
# 1 "../../../../../../components/softdevice/s140/headers/ble_gatts.h" 1
# 68 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
enum BLE_GATTS_SVCS
{
  SD_BLE_GATTS_SERVICE_ADD = 0xA8,
  SD_BLE_GATTS_INCLUDE_ADD,
  SD_BLE_GATTS_CHARACTERISTIC_ADD,
  SD_BLE_GATTS_DESCRIPTOR_ADD,
  SD_BLE_GATTS_VALUE_SET,
  SD_BLE_GATTS_VALUE_GET,
  SD_BLE_GATTS_HVX,
  SD_BLE_GATTS_SERVICE_CHANGED,
  SD_BLE_GATTS_RW_AUTHORIZE_REPLY,
  SD_BLE_GATTS_SYS_ATTR_SET,
  SD_BLE_GATTS_SYS_ATTR_GET,
  SD_BLE_GATTS_INITIAL_USER_HANDLE_GET,
  SD_BLE_GATTS_ATTR_GET,
  SD_BLE_GATTS_EXCHANGE_MTU_REPLY
};




enum BLE_GATTS_EVTS
{
  BLE_GATTS_EVT_WRITE = 0x50,
  BLE_GATTS_EVT_RW_AUTHORIZE_REQUEST,
  BLE_GATTS_EVT_SYS_ATTR_MISSING,
  BLE_GATTS_EVT_HVC,
  BLE_GATTS_EVT_SC_CONFIRM,
  BLE_GATTS_EVT_EXCHANGE_MTU_REQUEST,
  BLE_GATTS_EVT_TIMEOUT,
  BLE_GATTS_EVT_HVN_TX_COMPLETE
};





enum BLE_GATTS_CFGS
{
  BLE_GATTS_CFG_SERVICE_CHANGED = 0xA0,
  BLE_GATTS_CFG_ATTR_TAB_SIZE,
};
# 208 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
typedef struct
{
  uint8_t hvn_tx_queue_size;

} ble_gatts_conn_cfg_t;


typedef struct
{
  ble_gap_conn_sec_mode_t read_perm;
  ble_gap_conn_sec_mode_t write_perm;
  uint8_t vlen :1;
  uint8_t vloc :2;
  uint8_t rd_auth :1;
  uint8_t wr_auth :1;
} ble_gatts_attr_md_t;



typedef struct
{
  ble_uuid_t const *p_uuid;
  ble_gatts_attr_md_t const *p_attr_md;
  uint16_t init_len;
  uint16_t init_offs;
  uint16_t max_len;
  uint8_t *p_value;


} ble_gatts_attr_t;


typedef struct
{
  uint16_t len;
  uint16_t offset;
  uint8_t *p_value;


} ble_gatts_value_t;



typedef struct
{
  uint8_t format;
  int8_t exponent;
  uint16_t unit;
  uint8_t name_space;
  uint16_t desc;
} ble_gatts_char_pf_t;



typedef struct
{
  ble_gatt_char_props_t char_props;
  ble_gatt_char_ext_props_t char_ext_props;
  uint8_t const *p_char_user_desc;
  uint16_t char_user_desc_max_size;
  uint16_t char_user_desc_size;
  ble_gatts_char_pf_t const *p_char_pf;
  ble_gatts_attr_md_t const *p_user_desc_md;
  ble_gatts_attr_md_t const *p_cccd_md;
  ble_gatts_attr_md_t const *p_sccd_md;
} ble_gatts_char_md_t;



typedef struct
{
  uint16_t value_handle;
  uint16_t user_desc_handle;
  uint16_t cccd_handle;
  uint16_t sccd_handle;
} ble_gatts_char_handles_t;



typedef struct
{
  uint16_t handle;
  uint8_t type;
  uint16_t offset;
  uint16_t *p_len;
  uint8_t const *p_data;
} ble_gatts_hvx_params_t;


typedef struct
{
  uint16_t gatt_status;
  uint8_t update : 1;


  uint16_t offset;
  uint16_t len;
  uint8_t const *p_data;
} ble_gatts_authorize_params_t;


typedef struct
{
  uint8_t type;
  union {
    ble_gatts_authorize_params_t read;
    ble_gatts_authorize_params_t write;
  } params;
} ble_gatts_rw_authorize_reply_params_t;


typedef struct
{
  uint8_t service_changed : 1;
} ble_gatts_cfg_service_changed_t;
# 331 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
typedef struct
{
  uint32_t attr_tab_size;
} ble_gatts_cfg_attr_tab_size_t;


typedef union
{
  ble_gatts_cfg_service_changed_t service_changed;
  ble_gatts_cfg_attr_tab_size_t attr_tab_size;
} ble_gatts_cfg_t;



typedef struct
{
  uint16_t handle;
  ble_uuid_t uuid;
  uint8_t op;
  uint8_t auth_required;
  uint16_t offset;
  uint16_t len;
  uint8_t data[1];

} ble_gatts_evt_write_t;


typedef struct
{
  uint16_t handle;
  ble_uuid_t uuid;
  uint16_t offset;
} ble_gatts_evt_read_t;


typedef struct
{
  uint8_t type;
  union {
    ble_gatts_evt_read_t read;
    ble_gatts_evt_write_t write;
  } request;
} ble_gatts_evt_rw_authorize_request_t;


typedef struct
{
  uint8_t hint;
} ble_gatts_evt_sys_attr_missing_t;



typedef struct
{
  uint16_t handle;
} ble_gatts_evt_hvc_t;


typedef struct
{
  uint16_t client_rx_mtu;
} ble_gatts_evt_exchange_mtu_request_t;


typedef struct
{
  uint8_t src;
} ble_gatts_evt_timeout_t;


typedef struct
{
  uint8_t count;
} ble_gatts_evt_hvn_tx_complete_t;


typedef struct
{
  uint16_t conn_handle;
  union
  {
    ble_gatts_evt_write_t write;
    ble_gatts_evt_rw_authorize_request_t authorize_request;
    ble_gatts_evt_sys_attr_missing_t sys_attr_missing;
    ble_gatts_evt_hvc_t hvc;
    ble_gatts_evt_exchange_mtu_request_t exchange_mtu_request;
    ble_gatts_evt_timeout_t timeout;
    ble_gatts_evt_hvn_tx_complete_t hvn_tx_complete;
  } params;
} ble_gatts_evt_t;
# 446 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 446 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 446 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 446 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 446 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_service_add(uint8_t type, ble_uuid_t const *p_uuid, uint16_t *p_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_SERVICE_ADD) : "r0" ); }
# 446 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 446 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 ;
# 472 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 472 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 472 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 472 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 472 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_include_add(uint16_t service_handle, uint16_t inc_srvc_handle, uint16_t *p_include_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_INCLUDE_ADD) : "r0" ); }
# 472 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 472 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 ;
# 501 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 501 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 501 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 501 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 501 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_characteristic_add(uint16_t service_handle, ble_gatts_char_md_t const *p_char_md, ble_gatts_attr_t const *p_attr_char_value, ble_gatts_char_handles_t *p_handles) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_CHARACTERISTIC_ADD) : "r0" ); }
# 501 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 501 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 ;
# 524 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 524 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 524 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 524 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 524 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_descriptor_add(uint16_t char_handle, ble_gatts_attr_t const *p_attr, uint16_t *p_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_DESCRIPTOR_ADD) : "r0" ); }
# 524 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 524 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 ;
# 547 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 547 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 547 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 547 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 547 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_value_set(uint16_t conn_handle, uint16_t handle, ble_gatts_value_t *p_value) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_VALUE_SET) : "r0" ); }
# 547 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 547 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 ;
# 571 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 571 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 571 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 571 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 571 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_value_get(uint16_t conn_handle, uint16_t handle, ble_gatts_value_t *p_value) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_VALUE_GET) : "r0" ); }
# 571 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 571 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 ;
# 636 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 636 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 636 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 636 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 636 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_hvx(uint16_t conn_handle, ble_gatts_hvx_params_t const *p_hvx_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_HVX) : "r0" ); }
# 636 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 636 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 ;
# 672 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 672 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 672 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 672 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 672 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_service_changed(uint16_t conn_handle, uint16_t start_handle, uint16_t end_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_SERVICE_CHANGED) : "r0" ); }
# 672 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 672 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 ;
# 705 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 705 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 705 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 705 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 705 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_rw_authorize_reply(uint16_t conn_handle, ble_gatts_rw_authorize_reply_params_t const *p_rw_authorize_reply_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_RW_AUTHORIZE_REPLY) : "r0" ); }
# 705 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 705 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 ;
# 749 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 749 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 749 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 749 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 749 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_sys_attr_set(uint16_t conn_handle, uint8_t const *p_sys_attr_data, uint16_t len, uint32_t flags) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_SYS_ATTR_SET) : "r0" ); }
# 749 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 749 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 ;
# 782 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 782 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 782 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 782 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 782 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_sys_attr_get(uint16_t conn_handle, uint8_t *p_sys_attr_data, uint16_t *p_len, uint32_t flags) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_SYS_ATTR_GET) : "r0" ); }
# 782 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 782 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 ;
# 792 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 792 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 792 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 792 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 792 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_initial_user_handle_get(uint16_t *p_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_INITIAL_USER_HANDLE_GET) : "r0" ); }
# 792 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 792 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 ;
# 805 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 805 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 805 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 805 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 805 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_attr_get(uint16_t handle, ble_uuid_t * p_uuid, ble_gatts_attr_md_t * p_md) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_ATTR_GET) : "r0" ); }
# 805 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 805 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 ;
# 835 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 835 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 835 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"

# 835 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 835 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_exchange_mtu_reply(uint16_t conn_handle, uint16_t server_rx_mtu) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_EXCHANGE_MTU_REPLY) : "r0" ); }
# 835 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 835 "../../../../../../components/softdevice/s140/headers/ble_gatts.h"
 ;
# 61 "../../../../../../components/softdevice/s140/headers/ble.h" 2
# 72 "../../../../../../components/softdevice/s140/headers/ble.h"
enum BLE_COMMON_SVCS
{
  SD_BLE_ENABLE = 0x60,
  SD_BLE_EVT_GET,
  SD_BLE_UUID_VS_ADD,
  SD_BLE_UUID_DECODE,
  SD_BLE_UUID_ENCODE,
  SD_BLE_VERSION_GET,
  SD_BLE_USER_MEM_REPLY,
  SD_BLE_OPT_SET,
  SD_BLE_OPT_GET,
  SD_BLE_CFG_SET,
};




enum BLE_COMMON_EVTS
{
  BLE_EVT_USER_MEM_REQUEST = 0x01 + 0,
  BLE_EVT_USER_MEM_RELEASE = 0x01 + 1,
};





enum BLE_CONN_CFGS
{
    BLE_CONN_CFG_GAP = 0x20 + 0,
    BLE_CONN_CFG_GATTC = 0x20 + 1,
    BLE_CONN_CFG_GATTS = 0x20 + 2,
    BLE_CONN_CFG_GATT = 0x20 + 3,
    BLE_CONN_CFG_L2CAP = 0x20 + 4,
};





enum BLE_COMMON_CFGS
{
  BLE_COMMON_CFG_VS_UUID = 0x01,
};




enum BLE_COMMON_OPTS
{
  BLE_COMMON_OPT_PA_LNA = 0x01 + 0,
  BLE_COMMON_OPT_CONN_EVT_EXT = 0x01 + 1,
};
# 173 "../../../../../../components/softdevice/s140/headers/ble.h"
typedef struct
{
  uint8_t *p_mem;
  uint16_t len;
} ble_user_mem_block_t;


typedef struct
{
  uint8_t type;
} ble_evt_user_mem_request_t;


typedef struct
{
  uint8_t type;
  ble_user_mem_block_t mem_block;
} ble_evt_user_mem_release_t;


typedef struct
{
  uint16_t conn_handle;
  union
  {
    ble_evt_user_mem_request_t user_mem_request;
    ble_evt_user_mem_release_t user_mem_release;
  } params;
} ble_common_evt_t;


typedef struct
{
  uint16_t evt_id;
  uint16_t evt_len;
} ble_evt_hdr_t;


typedef struct
{
  ble_evt_hdr_t header;
  union
  {
    ble_common_evt_t common_evt;
    ble_gap_evt_t gap_evt;
    ble_gattc_evt_t gattc_evt;
    ble_gatts_evt_t gatts_evt;
    ble_l2cap_evt_t l2cap_evt;
  } evt;
} ble_evt_t;





typedef struct
{
  uint8_t version_number;
  uint16_t company_id;
  uint16_t subversion_number;
} ble_version_t;




typedef struct
{
     uint8_t enable :1;
     uint8_t active_high :1;
     uint8_t gpio_pin :6;
} ble_pa_lna_cfg_t;
# 258 "../../../../../../components/softdevice/s140/headers/ble.h"
typedef struct
{
   ble_pa_lna_cfg_t pa_cfg;
   ble_pa_lna_cfg_t lna_cfg;

   uint8_t ppi_ch_id_set;
   uint8_t ppi_ch_id_clr;
   uint8_t gpiote_ch_id;
} ble_common_opt_pa_lna_t;
# 279 "../../../../../../components/softdevice/s140/headers/ble.h"
typedef struct
{
   uint8_t enable : 1;
} ble_common_opt_conn_evt_ext_t;


typedef union
{
  ble_common_opt_pa_lna_t pa_lna;
  ble_common_opt_conn_evt_ext_t conn_evt_ext;
} ble_common_opt_t;


typedef union
{
  ble_common_opt_t common_opt;
  ble_gap_opt_t gap_opt;
} ble_opt_t;
# 315 "../../../../../../components/softdevice/s140/headers/ble.h"
typedef struct
{
  uint8_t conn_cfg_tag;



  union {
    ble_gap_conn_cfg_t gap_conn_cfg;
    ble_gattc_conn_cfg_t gattc_conn_cfg;
    ble_gatts_conn_cfg_t gatts_conn_cfg;
    ble_gatt_conn_cfg_t gatt_conn_cfg;
    ble_l2cap_conn_cfg_t l2cap_conn_cfg;
  } params;
} ble_conn_cfg_t;






typedef struct
{
  uint8_t vs_uuid_count;


} ble_common_cfg_vs_uuid_t;


typedef union
{
  ble_common_cfg_vs_uuid_t vs_uuid_cfg;
} ble_common_cfg_t;


typedef union
{
  ble_conn_cfg_t conn_cfg;
  ble_common_cfg_t common_cfg;
  ble_gap_cfg_t gap_cfg;
  ble_gatts_cfg_t gatts_cfg;
} ble_cfg_t;
# 394 "../../../../../../components/softdevice/s140/headers/ble.h"

# 394 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic push
# 394 "../../../../../../components/softdevice/s140/headers/ble.h"

# 394 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 394 "../../../../../../components/softdevice/s140/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_enable(uint32_t * p_app_ram_base) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_ENABLE) : "r0" ); }
# 394 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic pop
# 394 "../../../../../../components/softdevice/s140/headers/ble.h"
 ;
# 430 "../../../../../../components/softdevice/s140/headers/ble.h"

# 430 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic push
# 430 "../../../../../../components/softdevice/s140/headers/ble.h"

# 430 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 430 "../../../../../../components/softdevice/s140/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_cfg_set(uint32_t cfg_id, ble_cfg_t const * p_cfg, uint32_t app_ram_base) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_CFG_SET) : "r0" ); }
# 430 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic pop
# 430 "../../../../../../components/softdevice/s140/headers/ble.h"
 ;
# 468 "../../../../../../components/softdevice/s140/headers/ble.h"

# 468 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic push
# 468 "../../../../../../components/softdevice/s140/headers/ble.h"

# 468 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 468 "../../../../../../components/softdevice/s140/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_evt_get(uint8_t *p_dest, uint16_t *p_len) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_EVT_GET) : "r0" ); }
# 468 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic pop
# 468 "../../../../../../components/softdevice/s140/headers/ble.h"
 ;
# 497 "../../../../../../components/softdevice/s140/headers/ble.h"

# 497 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic push
# 497 "../../../../../../components/softdevice/s140/headers/ble.h"

# 497 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 497 "../../../../../../components/softdevice/s140/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_uuid_vs_add(ble_uuid128_t const *p_vs_uuid, uint8_t *p_uuid_type) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_UUID_VS_ADD) : "r0" ); }
# 497 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic pop
# 497 "../../../../../../components/softdevice/s140/headers/ble.h"
 ;
# 518 "../../../../../../components/softdevice/s140/headers/ble.h"

# 518 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic push
# 518 "../../../../../../components/softdevice/s140/headers/ble.h"

# 518 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 518 "../../../../../../components/softdevice/s140/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_uuid_decode(uint8_t uuid_le_len, uint8_t const *p_uuid_le, ble_uuid_t *p_uuid) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_UUID_DECODE) : "r0" ); }
# 518 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic pop
# 518 "../../../../../../components/softdevice/s140/headers/ble.h"
 ;
# 533 "../../../../../../components/softdevice/s140/headers/ble.h"

# 533 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic push
# 533 "../../../../../../components/softdevice/s140/headers/ble.h"

# 533 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 533 "../../../../../../components/softdevice/s140/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_uuid_encode(ble_uuid_t const *p_uuid, uint8_t *p_uuid_le_len, uint8_t *p_uuid_le) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_UUID_ENCODE) : "r0" ); }
# 533 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic pop
# 533 "../../../../../../components/softdevice/s140/headers/ble.h"
 ;
# 546 "../../../../../../components/softdevice/s140/headers/ble.h"

# 546 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic push
# 546 "../../../../../../components/softdevice/s140/headers/ble.h"

# 546 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 546 "../../../../../../components/softdevice/s140/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_version_get(ble_version_t *p_version) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_VERSION_GET) : "r0" ); }
# 546 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic pop
# 546 "../../../../../../components/softdevice/s140/headers/ble.h"
 ;
# 572 "../../../../../../components/softdevice/s140/headers/ble.h"

# 572 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic push
# 572 "../../../../../../components/softdevice/s140/headers/ble.h"

# 572 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 572 "../../../../../../components/softdevice/s140/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_user_mem_reply(uint16_t conn_handle, ble_user_mem_block_t const *p_block) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_USER_MEM_REPLY) : "r0" ); }
# 572 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic pop
# 572 "../../../../../../components/softdevice/s140/headers/ble.h"
 ;
# 592 "../../../../../../components/softdevice/s140/headers/ble.h"

# 592 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic push
# 592 "../../../../../../components/softdevice/s140/headers/ble.h"

# 592 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 592 "../../../../../../components/softdevice/s140/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_opt_set(uint32_t opt_id, ble_opt_t const *p_opt) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_OPT_SET) : "r0" ); }
# 592 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic pop
# 592 "../../../../../../components/softdevice/s140/headers/ble.h"
 ;
# 611 "../../../../../../components/softdevice/s140/headers/ble.h"

# 611 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic push
# 611 "../../../../../../components/softdevice/s140/headers/ble.h"

# 611 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 611 "../../../../../../components/softdevice/s140/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_opt_get(uint32_t opt_id, ble_opt_t *p_opt) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_OPT_GET) : "r0" ); }
# 611 "../../../../../../components/softdevice/s140/headers/ble.h"
#pragma GCC diagnostic pop
# 611 "../../../../../../components/softdevice/s140/headers/ble.h"
 ;
# 66 "../../../../../../components/ble/peer_manager/peer_manager.h" 2
# 1 "../../../../../../components/softdevice/s140/headers/ble_gap.h" 1
# 67 "../../../../../../components/ble/peer_manager/peer_manager.h" 2
# 1 "../../../../../../components/ble/peer_manager/peer_manager_types.h" 1
# 55 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
# 1 "../../../../../../components/softdevice/s140/headers/ble_hci.h" 1
# 56 "../../../../../../components/ble/peer_manager/peer_manager_types.h" 2
# 1 "../../../../../../components/ble/common/ble_gatt_db.h" 1
# 52 "../../../../../../components/ble/common/ble_gatt_db.h"
# 1 "../../../../../../components/softdevice/s140/headers/ble_gattc.h" 1
# 53 "../../../../../../components/ble/common/ble_gatt_db.h" 2
# 65 "../../../../../../components/ble/common/ble_gatt_db.h"
typedef struct
{
    ble_gattc_char_t characteristic;
    uint16_t cccd_handle;
    uint16_t ext_prop_handle;
    uint16_t user_desc_handle;
    uint16_t report_ref_handle;
} ble_gatt_db_char_t;




typedef struct
{
    ble_uuid_t srv_uuid;
    uint8_t char_count;
    ble_gattc_handle_range_t handle_range;
    ble_gatt_db_char_t charateristics[6];
} ble_gatt_db_srv_t;
# 57 "../../../../../../components/ble/peer_manager/peer_manager_types.h" 2
# 68 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
typedef uint16_t pm_peer_id_t;



typedef uint32_t pm_prepare_token_t;



typedef uint32_t pm_store_token_t;





typedef uint16_t pm_sec_error_code_t;
# 132 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
typedef enum
{
    PM_PEER_DATA_ID_FIRST = 0,
    PM_PEER_DATA_ID_BONDING = 7,
    PM_PEER_DATA_ID_SERVICE_CHANGED_PENDING = 1,
    PM_PEER_DATA_ID_GATT_LOCAL = 8,
    PM_PEER_DATA_ID_GATT_REMOTE = 5,
    PM_PEER_DATA_ID_PEER_RANK = 6,
    PM_PEER_DATA_ID_APPLICATION = 4,
    PM_PEER_DATA_ID_LAST = 9,
    PM_PEER_DATA_ID_INVALID = 0xFF,
} pm_peer_data_id_t;




typedef enum
{
    PM_CONN_SEC_PROCEDURE_ENCRYPTION,
    PM_CONN_SEC_PROCEDURE_BONDING,
    PM_CONN_SEC_PROCEDURE_PAIRING,
} pm_conn_sec_procedure_t;




typedef struct
{
    
# 160 "../../../../../../components/ble/peer_manager/peer_manager_types.h" 3 4
   _Bool 
# 160 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
        allow_repairing;
} pm_conn_sec_config_t;




typedef struct
{
    uint8_t own_role;
    ble_gap_id_key_t peer_ble_id;
    ble_gap_enc_key_t peer_ltk;
    ble_gap_enc_key_t own_ltk;
} pm_peer_data_bonding_t;




typedef struct
{
    uint32_t flags;
    uint16_t len;
    uint8_t data[1];
} pm_peer_data_local_gatt_db_t;
# 201 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
typedef ble_gap_privacy_params_t pm_privacy_params_t;




typedef enum
{
    PM_EVT_BONDED_PEER_CONNECTED,
    PM_EVT_CONN_SEC_START,
    PM_EVT_CONN_SEC_SUCCEEDED,
    PM_EVT_CONN_SEC_FAILED,
    PM_EVT_CONN_SEC_CONFIG_REQ,
    PM_EVT_CONN_SEC_PARAMS_REQ,
    PM_EVT_STORAGE_FULL,
    PM_EVT_ERROR_UNEXPECTED,
    PM_EVT_PEER_DATA_UPDATE_SUCCEEDED,
    PM_EVT_PEER_DATA_UPDATE_FAILED,
    PM_EVT_PEER_DELETE_SUCCEEDED,
    PM_EVT_PEER_DELETE_FAILED,
    PM_EVT_PEERS_DELETE_SUCCEEDED,
    PM_EVT_PEERS_DELETE_FAILED,
    PM_EVT_LOCAL_DB_CACHE_APPLIED,
    PM_EVT_LOCAL_DB_CACHE_APPLY_FAILED,
    PM_EVT_SERVICE_CHANGED_IND_SENT,
    PM_EVT_SERVICE_CHANGED_IND_CONFIRMED,
    PM_EVT_SLAVE_SECURITY_REQ,
    PM_EVT_FLASH_GARBAGE_COLLECTED,
} pm_evt_id_t;




typedef struct
{
    pm_conn_sec_procedure_t procedure;
} pm_conn_sec_start_evt_t;




typedef struct
{
    pm_conn_sec_procedure_t procedure;
    
# 244 "../../../../../../components/ble/peer_manager/peer_manager_types.h" 3 4
   _Bool 
# 244 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
                           data_stored;
} pm_conn_secured_evt_t;




typedef struct
{
    pm_conn_sec_procedure_t procedure;
    pm_sec_error_code_t error;
    uint8_t error_src;
} pm_conn_secure_failed_evt_t;




typedef struct
{
    ble_gap_sec_params_t const * p_peer_params;
    void const * p_context;
} pm_conn_sec_params_req_evt_t;




typedef enum
{
    PM_PEER_DATA_OP_UPDATE,
    PM_PEER_DATA_OP_DELETE,
} pm_peer_data_op_t;




typedef struct
{
    pm_peer_data_id_t data_id;
    pm_peer_data_op_t action;
    pm_store_token_t token;
    uint8_t flash_changed : 1;
} pm_peer_data_update_succeeded_evt_t;




typedef struct
{
    pm_peer_data_id_t data_id;
    pm_peer_data_op_t action;
    pm_store_token_t token;
    ret_code_t error;
} pm_peer_data_update_failed_t;




typedef struct
{
    ret_code_t error;
} pm_failure_evt_t;




typedef struct
{
    
# 310 "../../../../../../components/ble/peer_manager/peer_manager_types.h" 3 4
   _Bool 
# 310 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
        bond;
    
# 311 "../../../../../../components/ble/peer_manager/peer_manager_types.h" 3 4
   _Bool 
# 311 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
        mitm;
} pm_evt_slave_security_req_t;






typedef struct
{
    pm_evt_id_t evt_id;
    uint16_t conn_handle;
    pm_peer_id_t peer_id;
    union
    {
        pm_conn_sec_start_evt_t conn_sec_start;
        pm_conn_secured_evt_t conn_sec_succeeded;
        pm_conn_secure_failed_evt_t conn_sec_failed;
        pm_conn_sec_params_req_evt_t conn_sec_params_req;
        pm_peer_data_update_succeeded_evt_t peer_data_update_succeeded;
        pm_peer_data_update_failed_t peer_data_update_failed;
        pm_failure_evt_t peer_delete_failed;
        pm_failure_evt_t peers_delete_failed_evt;
        pm_failure_evt_t error_unexpected;
        pm_evt_slave_security_req_t slave_security_req;
    } params;
} pm_evt_t;
# 346 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
typedef void (*pm_evt_handler_t)(pm_evt_t const * p_event);
# 68 "../../../../../../components/ble/peer_manager/peer_manager.h" 2
# 1 "../../../../../../components/ble/peer_manager/peer_database.h" 1
# 45 "../../../../../../components/ble/peer_manager/peer_database.h"
# 1 "../../../../../../components/ble/peer_manager/peer_manager_internal.h" 1
# 63 "../../../../../../components/ble/peer_manager/peer_manager_internal.h"
struct semicolon_swallower;





typedef struct
{
    uint16_t length_words;
    pm_peer_data_id_t data_id;
    union
    {
        pm_peer_data_bonding_t * p_bonding_data;
        uint32_t * p_peer_rank;
        
# 77 "../../../../../../components/ble/peer_manager/peer_manager_internal.h" 3 4
       _Bool 
# 77 "../../../../../../components/ble/peer_manager/peer_manager_internal.h"
                                    * p_service_changed_pending;
        pm_peer_data_local_gatt_db_t * p_local_gatt_db;
        ble_gatt_db_srv_t * p_remote_gatt_db;
        uint8_t * p_application_data;
        void * p_all_data;
    };
} pm_peer_data_t;






typedef struct
{
    uint16_t length_words;
    pm_peer_data_id_t data_id;
    union
    {
        pm_peer_data_bonding_t const * p_bonding_data;
        uint32_t const * p_peer_rank;
        
# 98 "../../../../../../components/ble/peer_manager/peer_manager_internal.h" 3 4
       _Bool 
# 98 "../../../../../../components/ble/peer_manager/peer_manager_internal.h"
                                    const * p_service_changed_pending;
        pm_peer_data_local_gatt_db_t const * p_local_gatt_db;
        ble_gatt_db_srv_t const * p_remote_gatt_db;
        uint8_t const * p_application_data;
        void const * p_all_data;
    };
} pm_peer_data_const_t;

struct semicolon_swallower;






typedef pm_peer_data_const_t pm_peer_data_flash_t;
# 122 "../../../../../../components/ble/peer_manager/peer_manager_internal.h"
typedef void (*pm_evt_handler_internal_t)(pm_evt_t * p_event);
# 46 "../../../../../../components/ble/peer_manager/peer_database.h" 2
# 70 "../../../../../../components/ble/peer_manager/peer_database.h"
ret_code_t pdb_init(void);







pm_peer_id_t pdb_peer_allocate(void);
# 90 "../../../../../../components/ble/peer_manager/peer_database.h"
ret_code_t pdb_peer_free(pm_peer_id_t peer_id);
# 107 "../../../../../../components/ble/peer_manager/peer_database.h"
ret_code_t pdb_peer_data_ptr_get(pm_peer_id_t peer_id,
                                 pm_peer_data_id_t data_id,
                                 pm_peer_data_flash_t * const p_peer_data);
# 143 "../../../../../../components/ble/peer_manager/peer_database.h"
ret_code_t pdb_write_buf_get(pm_peer_id_t peer_id,
                             pm_peer_data_id_t data_id,
                             uint32_t n_bufs,
                             pm_peer_data_t * p_peer_data);
# 164 "../../../../../../components/ble/peer_manager/peer_database.h"
ret_code_t pdb_write_buf_release(pm_peer_id_t peer_id, pm_peer_data_id_t data_id);
# 182 "../../../../../../components/ble/peer_manager/peer_database.h"
ret_code_t pdb_write_buf_store_prepare(pm_peer_id_t peer_id, pm_peer_data_id_t data_id);
# 202 "../../../../../../components/ble/peer_manager/peer_database.h"
ret_code_t pdb_write_buf_store(pm_peer_id_t peer_id,
                               pm_peer_data_id_t data_id,
                               pm_peer_id_t new_peer_id);
# 219 "../../../../../../components/ble/peer_manager/peer_database.h"
ret_code_t pdb_clear(pm_peer_id_t peer_id, pm_peer_data_id_t data_id);







uint32_t pdb_n_peers(void);
# 242 "../../../../../../components/ble/peer_manager/peer_database.h"
pm_peer_id_t pdb_next_peer_id_get(pm_peer_id_t prev_peer_id);
# 257 "../../../../../../components/ble/peer_manager/peer_database.h"
pm_peer_id_t pdb_next_deleted_peer_id_get(pm_peer_id_t prev_peer_id);
# 275 "../../../../../../components/ble/peer_manager/peer_database.h"
ret_code_t pdb_peer_data_load(pm_peer_id_t peer_id,
                              pm_peer_data_id_t data_id,
                              pm_peer_data_t * const p_peer_data);
# 294 "../../../../../../components/ble/peer_manager/peer_database.h"
ret_code_t pdb_raw_store(pm_peer_id_t peer_id,
                         pm_peer_data_const_t * p_peer_data,
                         pm_store_token_t * p_store_token);
# 69 "../../../../../../components/ble/peer_manager/peer_manager.h" 2
# 78 "../../../../../../components/ble/peer_manager/peer_manager.h"
typedef struct
{
    uint8_t connected : 1;
    uint8_t encrypted : 1;
    uint8_t mitm_protected : 1;
    uint8_t bonded : 1;
} pm_conn_sec_status_t;
# 95 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_init(void);
# 109 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_register(pm_evt_handler_t event_handler);
# 127 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_sec_params_set(ble_gap_sec_params_t * p_sec_params);
# 174 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_conn_secure(uint16_t conn_handle, 
# 174 "../../../../../../components/ble/peer_manager/peer_manager.h" 3 4
                                               _Bool 
# 174 "../../../../../../components/ble/peer_manager/peer_manager.h"
                                                    force_repairing);
# 187 "../../../../../../components/ble/peer_manager/peer_manager.h"
void pm_conn_sec_config_reply(uint16_t conn_handle, pm_conn_sec_config_t * p_conn_sec_config);
# 206 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_conn_sec_params_reply(uint16_t conn_handle,
                                    ble_gap_sec_params_t * p_sec_params,
                                    void const * p_context);
# 224 "../../../../../../components/ble/peer_manager/peer_manager.h"
void pm_local_database_has_changed(void);
# 237 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_conn_sec_status_get(uint16_t conn_handle, pm_conn_sec_status_t * p_conn_sec_status);
# 253 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_lesc_public_key_set(ble_gap_lesc_p256_pk_t * p_public_key);
# 278 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_whitelist_set(pm_peer_id_t const * p_peers,
                            uint32_t peer_cnt);
# 313 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_whitelist_get(ble_gap_addr_t * p_addrs,
                            uint32_t * p_addr_cnt,
                            ble_gap_irk_t * p_irks,
                            uint32_t * p_irk_cnt);
# 337 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_device_identities_list_set(pm_peer_id_t const * p_peers,
                                         uint32_t peer_cnt);
# 370 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_id_addr_set(ble_gap_addr_t const * p_addr);
# 385 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_id_addr_get(ble_gap_addr_t * p_addr);
# 407 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_privacy_set(pm_privacy_params_t const * p_privacy_params);
# 421 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_privacy_get(pm_privacy_params_t * p_privacy_params);
# 433 "../../../../../../components/ble/peer_manager/peer_manager.h"

# 433 "../../../../../../components/ble/peer_manager/peer_manager.h" 3 4
_Bool 
# 433 "../../../../../../components/ble/peer_manager/peer_manager.h"
    pm_address_resolve(ble_gap_addr_t const * p_addr, ble_gap_irk_t const * p_irk);
# 446 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_conn_handle_get(pm_peer_id_t peer_id, uint16_t * p_conn_handle);
# 459 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_peer_id_get(uint16_t conn_handle, pm_peer_id_t * p_peer_id);
# 484 "../../../../../../components/ble/peer_manager/peer_manager.h"
pm_peer_id_t pm_next_peer_id_get(pm_peer_id_t prev_peer_id);
# 493 "../../../../../../components/ble/peer_manager/peer_manager.h"
uint32_t pm_peer_count(void);
# 527 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_peer_data_load(pm_peer_id_t peer_id,
                             pm_peer_data_id_t data_id,
                             void * p_data,
                             uint16_t * p_len);



ret_code_t pm_peer_data_bonding_load(pm_peer_id_t peer_id,
                                     pm_peer_data_bonding_t * p_data);



ret_code_t pm_peer_data_remote_db_load(pm_peer_id_t peer_id,
                                       ble_gatt_db_srv_t * p_data,
                                       uint16_t * p_len);



ret_code_t pm_peer_data_app_data_load(pm_peer_id_t peer_id,
                                      void * p_data,
                                      uint16_t * p_len);
# 583 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_peer_data_store(pm_peer_id_t peer_id,
                              pm_peer_data_id_t data_id,
                              void const * p_data,
                              uint16_t len,
                              pm_store_token_t * p_token);



ret_code_t pm_peer_data_bonding_store(pm_peer_id_t peer_id,
                                      pm_peer_data_bonding_t const * p_data,
                                      pm_store_token_t * p_token);



ret_code_t pm_peer_data_remote_db_store(pm_peer_id_t peer_id,
                                        ble_gatt_db_srv_t const * p_data,
                                        uint16_t len,
                                        pm_store_token_t * p_token);



ret_code_t pm_peer_data_app_data_store(pm_peer_id_t peer_id,
                                       void const * p_data,
                                       uint16_t len,
                                       pm_store_token_t * p_token);
# 636 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_peer_data_delete(pm_peer_id_t peer_id, pm_peer_data_id_t data_id);
# 660 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_peer_new(pm_peer_id_t * p_new_peer_id,
                       pm_peer_data_bonding_t * p_bonding_data,
                       pm_store_token_t * p_token);
# 682 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_peer_delete(pm_peer_id_t peer_id);
# 701 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_peers_delete(void);
# 734 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_peer_ranks_get(pm_peer_id_t * p_highest_ranked_peer,
                             uint32_t * p_highest_rank,
                             pm_peer_id_t * p_lowest_ranked_peer,
                             uint32_t * p_lowest_rank);
# 768 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_peer_rank_highest(pm_peer_id_t peer_id);
# 9 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.h" 2
# 1 "../../../../../../external/freertos/source/include/semphr.h" 1
# 36 "../../../../../../external/freertos/source/include/semphr.h"
# 1 "../../../../../../external/freertos/source/include/queue.h" 1
# 47 "../../../../../../external/freertos/source/include/queue.h"
typedef void * QueueHandle_t;






typedef void * QueueSetHandle_t;






typedef void * QueueSetMemberHandle_t;
# 649 "../../../../../../external/freertos/source/include/queue.h"
BaseType_t xQueueGenericSend( QueueHandle_t xQueue, const void * const pvItemToQueue, TickType_t xTicksToWait, const BaseType_t xCopyPosition ) ;
# 743 "../../../../../../external/freertos/source/include/queue.h"
BaseType_t xQueuePeek( QueueHandle_t xQueue, void * const pvBuffer, TickType_t xTicksToWait ) ;
# 776 "../../../../../../external/freertos/source/include/queue.h"
BaseType_t xQueuePeekFromISR( QueueHandle_t xQueue, void * const pvBuffer ) ;
# 867 "../../../../../../external/freertos/source/include/queue.h"
BaseType_t xQueueReceive( QueueHandle_t xQueue, void * const pvBuffer, TickType_t xTicksToWait ) ;
# 882 "../../../../../../external/freertos/source/include/queue.h"
UBaseType_t uxQueueMessagesWaiting( const QueueHandle_t xQueue ) ;
# 899 "../../../../../../external/freertos/source/include/queue.h"
UBaseType_t uxQueueSpacesAvailable( const QueueHandle_t xQueue ) ;
# 913 "../../../../../../external/freertos/source/include/queue.h"
void vQueueDelete( QueueHandle_t xQueue ) ;
# 1294 "../../../../../../external/freertos/source/include/queue.h"
BaseType_t xQueueGenericSendFromISR( QueueHandle_t xQueue, const void * const pvItemToQueue, BaseType_t * const pxHigherPriorityTaskWoken, const BaseType_t xCopyPosition ) ;
BaseType_t xQueueGiveFromISR( QueueHandle_t xQueue, BaseType_t * const pxHigherPriorityTaskWoken ) ;
# 1384 "../../../../../../external/freertos/source/include/queue.h"
BaseType_t xQueueReceiveFromISR( QueueHandle_t xQueue, void * const pvBuffer, BaseType_t * const pxHigherPriorityTaskWoken ) ;





BaseType_t xQueueIsQueueEmptyFromISR( const QueueHandle_t xQueue ) ;
BaseType_t xQueueIsQueueFullFromISR( const QueueHandle_t xQueue ) ;
UBaseType_t uxQueueMessagesWaitingFromISR( const QueueHandle_t xQueue ) ;
# 1403 "../../../../../../external/freertos/source/include/queue.h"
BaseType_t xQueueCRSendFromISR( QueueHandle_t xQueue, const void *pvItemToQueue, BaseType_t xCoRoutinePreviouslyWoken );
BaseType_t xQueueCRReceiveFromISR( QueueHandle_t xQueue, void *pvBuffer, BaseType_t *pxTaskWoken );
BaseType_t xQueueCRSend( QueueHandle_t xQueue, const void *pvItemToQueue, TickType_t xTicksToWait );
BaseType_t xQueueCRReceive( QueueHandle_t xQueue, void *pvBuffer, TickType_t xTicksToWait );






QueueHandle_t xQueueCreateMutex( const uint8_t ucQueueType ) ;
QueueHandle_t xQueueCreateMutexStatic( const uint8_t ucQueueType, StaticQueue_t *pxStaticQueue ) ;
QueueHandle_t xQueueCreateCountingSemaphore( const UBaseType_t uxMaxCount, const UBaseType_t uxInitialCount ) ;
QueueHandle_t xQueueCreateCountingSemaphoreStatic( const UBaseType_t uxMaxCount, const UBaseType_t uxInitialCount, StaticQueue_t *pxStaticQueue ) ;
BaseType_t xQueueSemaphoreTake( QueueHandle_t xQueue, TickType_t xTicksToWait ) ;
void* xQueueGetMutexHolder( QueueHandle_t xSemaphore ) ;
void* xQueueGetMutexHolderFromISR( QueueHandle_t xSemaphore ) ;





BaseType_t xQueueTakeMutexRecursive( QueueHandle_t xMutex, TickType_t xTicksToWait ) ;
BaseType_t xQueueGiveMutexRecursive( QueueHandle_t pxMutex ) ;
# 1457 "../../../../../../external/freertos/source/include/queue.h"
 void vQueueAddToRegistry( QueueHandle_t xQueue, const char *pcName ) ;
# 1471 "../../../../../../external/freertos/source/include/queue.h"
 void vQueueUnregisterQueue( QueueHandle_t xQueue ) ;
# 1486 "../../../../../../external/freertos/source/include/queue.h"
 const char *pcQueueGetName( QueueHandle_t xQueue ) ;
# 1495 "../../../../../../external/freertos/source/include/queue.h"
 QueueHandle_t xQueueGenericCreate( const UBaseType_t uxQueueLength, const UBaseType_t uxItemSize, const uint8_t ucQueueType ) ;
# 1555 "../../../../../../external/freertos/source/include/queue.h"
QueueSetHandle_t xQueueCreateSet( const UBaseType_t uxEventQueueLength ) ;
# 1579 "../../../../../../external/freertos/source/include/queue.h"
BaseType_t xQueueAddToSet( QueueSetMemberHandle_t xQueueOrSemaphore, QueueSetHandle_t xQueueSet ) ;
# 1598 "../../../../../../external/freertos/source/include/queue.h"
BaseType_t xQueueRemoveFromSet( QueueSetMemberHandle_t xQueueOrSemaphore, QueueSetHandle_t xQueueSet ) ;
# 1634 "../../../../../../external/freertos/source/include/queue.h"
QueueSetMemberHandle_t xQueueSelectFromSet( QueueSetHandle_t xQueueSet, const TickType_t xTicksToWait ) ;




QueueSetMemberHandle_t xQueueSelectFromSetFromISR( QueueSetHandle_t xQueueSet ) ;


void vQueueWaitForMessageRestricted( QueueHandle_t xQueue, TickType_t xTicksToWait, const BaseType_t xWaitIndefinitely ) ;
BaseType_t xQueueGenericReset( QueueHandle_t xQueue, BaseType_t xNewQueue ) ;
void vQueueSetQueueNumber( QueueHandle_t xQueue, UBaseType_t uxQueueNumber ) ;
UBaseType_t uxQueueGetQueueNumber( QueueHandle_t xQueue ) ;
uint8_t ucQueueGetQueueType( QueueHandle_t xQueue ) ;
# 37 "../../../../../../external/freertos/source/include/semphr.h" 2

typedef QueueHandle_t SemaphoreHandle_t;
# 10 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.h" 2
# 1 "../../../../../../components/libraries/delay/nrf_delay.h" 1
# 64 "../../../../../../components/libraries/delay/nrf_delay.h"
static inline void nrf_delay_ms(uint32_t ms_time)
{
    if (ms_time == 0)
    {
        return;
    }

    do {
        nrfx_coredep_delay_us(1000);
    } while (--ms_time);
}
# 11 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.h" 2
# 1 "./g_lib/g_gpiote.h" 1



# 1 "../../../../../../modules/nrfx/hal/nrf_gpiote.h" 1
# 67 "../../../../../../modules/nrfx/hal/nrf_gpiote.h"
typedef enum
{
  NRF_GPIOTE_POLARITY_LOTOHI = (1UL),
  NRF_GPIOTE_POLARITY_HITOLO = (2UL),
  NRF_GPIOTE_POLARITY_TOGGLE = (3UL)
} nrf_gpiote_polarity_t;






typedef enum
{
  NRF_GPIOTE_INITIAL_VALUE_LOW = (0UL),
  NRF_GPIOTE_INITIAL_VALUE_HIGH = (1UL)
} nrf_gpiote_outinit_t;




typedef enum
{
    NRF_GPIOTE_TASKS_OUT_0 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_OUT[0]),
    NRF_GPIOTE_TASKS_OUT_1 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_OUT[1]),
    NRF_GPIOTE_TASKS_OUT_2 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_OUT[2]),
    NRF_GPIOTE_TASKS_OUT_3 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_OUT[3]),

    NRF_GPIOTE_TASKS_OUT_4 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_OUT[4]),
    NRF_GPIOTE_TASKS_OUT_5 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_OUT[5]),
    NRF_GPIOTE_TASKS_OUT_6 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_OUT[6]),
    NRF_GPIOTE_TASKS_OUT_7 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_OUT[7]),


    NRF_GPIOTE_TASKS_SET_0 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_SET[0]),
    NRF_GPIOTE_TASKS_SET_1 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_SET[1]),
    NRF_GPIOTE_TASKS_SET_2 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_SET[2]),
    NRF_GPIOTE_TASKS_SET_3 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_SET[3]),
    NRF_GPIOTE_TASKS_SET_4 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_SET[4]),
    NRF_GPIOTE_TASKS_SET_5 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_SET[5]),
    NRF_GPIOTE_TASKS_SET_6 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_SET[6]),
    NRF_GPIOTE_TASKS_SET_7 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_SET[7]),


    NRF_GPIOTE_TASKS_CLR_0 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_CLR[0]),
    NRF_GPIOTE_TASKS_CLR_1 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_CLR[1]),
    NRF_GPIOTE_TASKS_CLR_2 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_CLR[2]),
    NRF_GPIOTE_TASKS_CLR_3 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_CLR[3]),
    NRF_GPIOTE_TASKS_CLR_4 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_CLR[4]),
    NRF_GPIOTE_TASKS_CLR_5 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_CLR[5]),
    NRF_GPIOTE_TASKS_CLR_6 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_CLR[6]),
    NRF_GPIOTE_TASKS_CLR_7 = __builtin_offsetof (NRF_GPIOTE_Type, TASKS_CLR[7]),


} nrf_gpiote_tasks_t;




typedef enum
{
    NRF_GPIOTE_EVENTS_IN_0 = __builtin_offsetof (NRF_GPIOTE_Type, EVENTS_IN[0]),
    NRF_GPIOTE_EVENTS_IN_1 = __builtin_offsetof (NRF_GPIOTE_Type, EVENTS_IN[1]),
    NRF_GPIOTE_EVENTS_IN_2 = __builtin_offsetof (NRF_GPIOTE_Type, EVENTS_IN[2]),
    NRF_GPIOTE_EVENTS_IN_3 = __builtin_offsetof (NRF_GPIOTE_Type, EVENTS_IN[3]),

    NRF_GPIOTE_EVENTS_IN_4 = __builtin_offsetof (NRF_GPIOTE_Type, EVENTS_IN[4]),
    NRF_GPIOTE_EVENTS_IN_5 = __builtin_offsetof (NRF_GPIOTE_Type, EVENTS_IN[5]),
    NRF_GPIOTE_EVENTS_IN_6 = __builtin_offsetof (NRF_GPIOTE_Type, EVENTS_IN[6]),
    NRF_GPIOTE_EVENTS_IN_7 = __builtin_offsetof (NRF_GPIOTE_Type, EVENTS_IN[7]),

    NRF_GPIOTE_EVENTS_PORT = __builtin_offsetof (NRF_GPIOTE_Type, EVENTS_PORT),

} nrf_gpiote_events_t;





typedef enum
{
    NRF_GPIOTE_INT_IN0_MASK = (0x1UL << (0UL)),
    NRF_GPIOTE_INT_IN1_MASK = (0x1UL << (1UL)),
    NRF_GPIOTE_INT_IN2_MASK = (0x1UL << (2UL)),
    NRF_GPIOTE_INT_IN3_MASK = (0x1UL << (3UL)),

    NRF_GPIOTE_INT_IN4_MASK = (0x1UL << (4UL)),
    NRF_GPIOTE_INT_IN5_MASK = (0x1UL << (5UL)),
    NRF_GPIOTE_INT_IN6_MASK = (0x1UL << (6UL)),
    NRF_GPIOTE_INT_IN7_MASK = (0x1UL << (7UL)),

    NRF_GPIOTE_INT_PORT_MASK = (int)(0x1UL << (31UL)),
} nrf_gpiote_int_t;
# 176 "../../../../../../modules/nrfx/hal/nrf_gpiote.h"
static inline void nrf_gpiote_task_set(nrf_gpiote_tasks_t task);
# 185 "../../../../../../modules/nrfx/hal/nrf_gpiote.h"
static inline uint32_t nrf_gpiote_task_addr_get(nrf_gpiote_tasks_t task);






static inline 
# 192 "../../../../../../modules/nrfx/hal/nrf_gpiote.h" 3 4
               _Bool 
# 192 "../../../../../../modules/nrfx/hal/nrf_gpiote.h"
                    nrf_gpiote_event_is_set(nrf_gpiote_events_t event);






static inline void nrf_gpiote_event_clear(nrf_gpiote_events_t event);
# 208 "../../../../../../modules/nrfx/hal/nrf_gpiote.h"
static inline uint32_t nrf_gpiote_event_addr_get(nrf_gpiote_events_t event);





static inline void nrf_gpiote_int_enable(uint32_t mask);





static inline void nrf_gpiote_int_disable(uint32_t mask);







static inline uint32_t nrf_gpiote_int_is_enabled(uint32_t mask);





static inline void nrf_gpiote_event_enable(uint32_t idx);





static inline void nrf_gpiote_event_disable(uint32_t idx);







static inline void nrf_gpiote_event_configure(uint32_t idx, uint32_t pin,
                                                nrf_gpiote_polarity_t polarity);







static inline uint32_t nrf_gpiote_event_pin_get(uint32_t idx);







static inline nrf_gpiote_polarity_t nrf_gpiote_event_polarity_get(uint32_t idx);





static inline void nrf_gpiote_task_enable(uint32_t idx);





static inline void nrf_gpiote_task_disable(uint32_t idx);
# 287 "../../../../../../modules/nrfx/hal/nrf_gpiote.h"
static inline void nrf_gpiote_task_configure(uint32_t idx, uint32_t pin,
                                               nrf_gpiote_polarity_t polarity,
                                               nrf_gpiote_outinit_t init_val);






static inline void nrf_gpiote_task_force(uint32_t idx, nrf_gpiote_outinit_t init_val);





static inline void nrf_gpiote_te_default(uint32_t idx);


static inline void nrf_gpiote_task_set(nrf_gpiote_tasks_t task)
{
    *(volatile uint32_t *)((uint32_t)((NRF_GPIOTE_Type *) 0x40006000UL) + task) = 0x1UL;
}

static inline uint32_t nrf_gpiote_task_addr_get(nrf_gpiote_tasks_t task)
{
    return ((uint32_t)((NRF_GPIOTE_Type *) 0x40006000UL) + task);
}

static inline 
# 315 "../../../../../../modules/nrfx/hal/nrf_gpiote.h" 3 4
               _Bool 
# 315 "../../../../../../modules/nrfx/hal/nrf_gpiote.h"
                    nrf_gpiote_event_is_set(nrf_gpiote_events_t event)
{
    return (*(uint32_t *)nrf_gpiote_event_addr_get(event) == 0x1UL) ? 
# 317 "../../../../../../modules/nrfx/hal/nrf_gpiote.h" 3 4
                                                                     1 
# 317 "../../../../../../modules/nrfx/hal/nrf_gpiote.h"
                                                                          : 
# 317 "../../../../../../modules/nrfx/hal/nrf_gpiote.h" 3 4
                                                                            0
# 317 "../../../../../../modules/nrfx/hal/nrf_gpiote.h"
                                                                                 ;
}

static inline void nrf_gpiote_event_clear(nrf_gpiote_events_t event)
{
    *(uint32_t *)nrf_gpiote_event_addr_get(event) = 0;

    volatile uint32_t dummy = *((volatile uint32_t *)nrf_gpiote_event_addr_get(event));
    (void)dummy;

}

static inline uint32_t nrf_gpiote_event_addr_get(nrf_gpiote_events_t event)
{
    return ((uint32_t)((NRF_GPIOTE_Type *) 0x40006000UL) + event);
}

static inline void nrf_gpiote_int_enable(uint32_t mask)
{
    ((NRF_GPIOTE_Type *) 0x40006000UL)->INTENSET = mask;
}

static inline void nrf_gpiote_int_disable(uint32_t mask)
{
    ((NRF_GPIOTE_Type *) 0x40006000UL)->INTENCLR = mask;
}

static inline uint32_t nrf_gpiote_int_is_enabled(uint32_t mask)
{
    return (((NRF_GPIOTE_Type *) 0x40006000UL)->INTENSET & mask);
}

static inline void nrf_gpiote_event_enable(uint32_t idx)
{
   ((NRF_GPIOTE_Type *) 0x40006000UL)->CONFIG[idx] |= (1UL);
}

static inline void nrf_gpiote_event_disable(uint32_t idx)
{
   ((NRF_GPIOTE_Type *) 0x40006000UL)->CONFIG[idx] &= ~(1UL);
}

static inline void nrf_gpiote_event_configure(uint32_t idx, uint32_t pin, nrf_gpiote_polarity_t polarity)
{
  ((NRF_GPIOTE_Type *) 0x40006000UL)->CONFIG[idx] &= ~(((0x1UL << (13UL)) | (0x1FUL << (8UL))) | (0x3UL << (16UL)));
  ((NRF_GPIOTE_Type *) 0x40006000UL)->CONFIG[idx] |= ((pin << (8UL)) & ((0x1UL << (13UL)) | (0x1FUL << (8UL)))) |
                              ((polarity << (16UL)) & (0x3UL << (16UL)));
}

static inline uint32_t nrf_gpiote_event_pin_get(uint32_t idx)
{
    return ((((NRF_GPIOTE_Type *) 0x40006000UL)->CONFIG[idx] & ((0x1UL << (13UL)) | (0x1FUL << (8UL)))) >> (8UL));
}

static inline nrf_gpiote_polarity_t nrf_gpiote_event_polarity_get(uint32_t idx)
{
    return (nrf_gpiote_polarity_t)((((NRF_GPIOTE_Type *) 0x40006000UL)->CONFIG[idx] & (0x3UL << (16UL))) >> (16UL));
}

static inline void nrf_gpiote_task_enable(uint32_t idx)
{
    uint32_t final_config = ((NRF_GPIOTE_Type *) 0x40006000UL)->CONFIG[idx] | (3UL);
# 389 "../../../../../../modules/nrfx/hal/nrf_gpiote.h"
    ((NRF_GPIOTE_Type *) 0x40006000UL)->CONFIG[idx] = final_config;
}

static inline void nrf_gpiote_task_disable(uint32_t idx)
{
    ((NRF_GPIOTE_Type *) 0x40006000UL)->CONFIG[idx] &= ~(3UL);
}

static inline void nrf_gpiote_task_configure(uint32_t idx, uint32_t pin,
                                                nrf_gpiote_polarity_t polarity,
                                                nrf_gpiote_outinit_t init_val)
{
  ((NRF_GPIOTE_Type *) 0x40006000UL)->CONFIG[idx] &= ~(((0x1UL << (13UL)) | (0x1FUL << (8UL))) |
                               (0x3UL << (16UL)) |
                               (0x1UL << (20UL)));

  ((NRF_GPIOTE_Type *) 0x40006000UL)->CONFIG[idx] |= ((pin << (8UL)) & ((0x1UL << (13UL)) | (0x1FUL << (8UL)))) |
                             ((polarity << (16UL)) & (0x3UL << (16UL))) |
                             ((init_val << (20UL)) & (0x1UL << (20UL)));
}

static inline void nrf_gpiote_task_force(uint32_t idx, nrf_gpiote_outinit_t init_val)
{
    ((NRF_GPIOTE_Type *) 0x40006000UL)->CONFIG[idx] = (((NRF_GPIOTE_Type *) 0x40006000UL)->CONFIG[idx] & ~(0x1UL << (20UL)))
                              | ((init_val << (20UL)) & (0x1UL << (20UL)));
}

static inline void nrf_gpiote_te_default(uint32_t idx)
{
    ((NRF_GPIOTE_Type *) 0x40006000UL)->CONFIG[idx] = 0;
}
# 5 "./g_lib/g_gpiote.h" 2
# 1 "./g_lib/g_lib_touch_panel.h" 1




# 1 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 1
# 46 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
# 1 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h" 1
# 45 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h"
# 1 "../../../../../../modules/nrfx/hal/nrf_twim.h" 1
# 60 "../../../../../../modules/nrfx/hal/nrf_twim.h"
typedef enum
{

    NRF_TWIM_TASK_STARTRX = __builtin_offsetof (NRF_TWIM_Type, TASKS_STARTRX),
    NRF_TWIM_TASK_STARTTX = __builtin_offsetof (NRF_TWIM_Type, TASKS_STARTTX),
    NRF_TWIM_TASK_STOP = __builtin_offsetof (NRF_TWIM_Type, TASKS_STOP),
    NRF_TWIM_TASK_SUSPEND = __builtin_offsetof (NRF_TWIM_Type, TASKS_SUSPEND),
    NRF_TWIM_TASK_RESUME = __builtin_offsetof (NRF_TWIM_Type, TASKS_RESUME)

} nrf_twim_task_t;




typedef enum
{

    NRF_TWIM_EVENT_STOPPED = __builtin_offsetof (NRF_TWIM_Type, EVENTS_STOPPED),
    NRF_TWIM_EVENT_ERROR = __builtin_offsetof (NRF_TWIM_Type, EVENTS_ERROR),
    NRF_TWIM_EVENT_SUSPENDED = 0x148,
    NRF_TWIM_EVENT_RXSTARTED = __builtin_offsetof (NRF_TWIM_Type, EVENTS_RXSTARTED),
    NRF_TWIM_EVENT_TXSTARTED = __builtin_offsetof (NRF_TWIM_Type, EVENTS_TXSTARTED),
    NRF_TWIM_EVENT_LASTRX = __builtin_offsetof (NRF_TWIM_Type, EVENTS_LASTRX),
    NRF_TWIM_EVENT_LASTTX = __builtin_offsetof (NRF_TWIM_Type, EVENTS_LASTTX)

} nrf_twim_event_t;




typedef enum
{
    NRF_TWIM_SHORT_LASTTX_STARTRX_MASK = (0x1UL << (7UL)),
    NRF_TWIM_SHORT_LASTTX_SUSPEND_MASK = (0x1UL << (8UL)),
    NRF_TWIM_SHORT_LASTTX_STOP_MASK = (0x1UL << (9UL)),
    NRF_TWIM_SHORT_LASTRX_STARTTX_MASK = (0x1UL << (10UL)),
    NRF_TWIM_SHORT_LASTRX_STOP_MASK = (0x1UL << (12UL)),
    NRF_TWIM_ALL_SHORTS_MASK = (0x1UL << (7UL)) |
                                         (0x1UL << (8UL)) |
                                         (0x1UL << (9UL)) |
                                         (0x1UL << (10UL)) |
                                         (0x1UL << (12UL))
} nrf_twim_short_mask_t;




typedef enum
{
    NRF_TWIM_INT_STOPPED_MASK = (0x1UL << (1UL)),
    NRF_TWIM_INT_ERROR_MASK = (0x1UL << (9UL)),
    NRF_TWIM_INT_SUSPENDED_MASK = (0x1UL << (18UL)),
    NRF_TWIM_INT_RXSTARTED_MASK = (0x1UL << (19UL)),
    NRF_TWIM_INT_TXSTARTED_MASK = (0x1UL << (20UL)),
    NRF_TWIM_INT_LASTRX_MASK = (0x1UL << (23UL)),
    NRF_TWIM_INT_LASTTX_MASK = (0x1UL << (24UL)),
    NRF_TWIM_ALL_INTS_MASK = (0x1UL << (1UL)) |
                                  (0x1UL << (9UL)) |
                                  (0x1UL << (18UL)) |
                                  (0x1UL << (19UL)) |
                                  (0x1UL << (20UL)) |
                                  (0x1UL << (23UL)) |
                                  (0x1UL << (24UL))
} nrf_twim_int_mask_t;




typedef enum
{
    NRF_TWIM_FREQ_100K = (0x01980000UL),
    NRF_TWIM_FREQ_250K = (0x04000000UL),
    NRF_TWIM_FREQ_400K = (0x06400000UL)
} nrf_twim_frequency_t;




typedef enum
{
    NRF_TWIM_ERROR_ADDRESS_NACK = (0x1UL << (1UL)),
    NRF_TWIM_ERROR_DATA_NACK = (0x1UL << (2UL))
} nrf_twim_error_t;
# 151 "../../../../../../modules/nrfx/hal/nrf_twim.h"
static inline void nrf_twim_task_trigger(NRF_TWIM_Type * p_reg,
                                           nrf_twim_task_t task);
# 162 "../../../../../../modules/nrfx/hal/nrf_twim.h"
static inline uint32_t * nrf_twim_task_address_get(NRF_TWIM_Type * p_reg,
                                                     nrf_twim_task_t task);







static inline void nrf_twim_event_clear(NRF_TWIM_Type * p_reg,
                                          nrf_twim_event_t event);
# 183 "../../../../../../modules/nrfx/hal/nrf_twim.h"
static inline 
# 183 "../../../../../../modules/nrfx/hal/nrf_twim.h" 3 4
               _Bool 
# 183 "../../../../../../modules/nrfx/hal/nrf_twim.h"
                    nrf_twim_event_check(NRF_TWIM_Type * p_reg,
                                          nrf_twim_event_t event);
# 194 "../../../../../../modules/nrfx/hal/nrf_twim.h"
static inline uint32_t * nrf_twim_event_address_get(NRF_TWIM_Type * p_reg,
                                                      nrf_twim_event_t event);







static inline void nrf_twim_shorts_enable(NRF_TWIM_Type * p_reg,
                                            uint32_t shorts_mask);







static inline void nrf_twim_shorts_disable(NRF_TWIM_Type * p_reg,
                                             uint32_t shorts_mask);







static inline void nrf_twim_int_enable(NRF_TWIM_Type * p_reg,
                                         uint32_t int_mask);







static inline void nrf_twim_int_disable(NRF_TWIM_Type * p_reg,
                                          uint32_t int_mask);
# 242 "../../../../../../modules/nrfx/hal/nrf_twim.h"
static inline 
# 242 "../../../../../../modules/nrfx/hal/nrf_twim.h" 3 4
               _Bool 
# 242 "../../../../../../modules/nrfx/hal/nrf_twim.h"
                    nrf_twim_int_enable_check(NRF_TWIM_Type * p_reg,
                                               nrf_twim_int_mask_t int_mask);






static inline void nrf_twim_enable(NRF_TWIM_Type * p_reg);






static inline void nrf_twim_disable(NRF_TWIM_Type * p_reg);
# 267 "../../../../../../modules/nrfx/hal/nrf_twim.h"
static inline void nrf_twim_pins_set(NRF_TWIM_Type * p_reg,
                                       uint32_t scl_pin,
                                       uint32_t sda_pin);







static inline void nrf_twim_frequency_set(NRF_TWIM_Type * p_reg,
                                            nrf_twim_frequency_t frequency);
# 289 "../../../../../../modules/nrfx/hal/nrf_twim.h"
static inline uint32_t nrf_twim_errorsrc_get_and_clear(NRF_TWIM_Type * p_reg);







static inline void nrf_twim_address_set(NRF_TWIM_Type * p_reg,
                                          uint8_t address);
# 307 "../../../../../../modules/nrfx/hal/nrf_twim.h"
static inline void nrf_twim_tx_buffer_set(NRF_TWIM_Type * p_reg,
                                            uint8_t const * p_buffer,
                                            size_t length);
# 318 "../../../../../../modules/nrfx/hal/nrf_twim.h"
static inline void nrf_twim_rx_buffer_set(NRF_TWIM_Type * p_reg,
                                            uint8_t * p_buffer,
                                            size_t length);

static inline void nrf_twim_shorts_set(NRF_TWIM_Type * p_reg,
                                         uint32_t shorts_mask);

static inline size_t nrf_twim_txd_amount_get(NRF_TWIM_Type * p_reg);

static inline size_t nrf_twim_rxd_amount_get(NRF_TWIM_Type * p_reg);






static inline void nrf_twim_tx_list_enable(NRF_TWIM_Type * p_reg);






static inline void nrf_twim_tx_list_disable(NRF_TWIM_Type * p_reg);






static inline void nrf_twim_rx_list_enable(NRF_TWIM_Type * p_reg);






static inline void nrf_twim_rx_list_disable(NRF_TWIM_Type * p_reg);



static inline void nrf_twim_task_trigger(NRF_TWIM_Type * p_reg,
                                           nrf_twim_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

static inline uint32_t * nrf_twim_task_address_get(NRF_TWIM_Type * p_reg,
                                                     nrf_twim_task_t task)
{
    return (uint32_t *)((uint8_t *)p_reg + (uint32_t)task);
}

static inline void nrf_twim_event_clear(NRF_TWIM_Type * p_reg,
                                          nrf_twim_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;

    volatile uint32_t dummy = *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event));
    (void)dummy;

}

static inline 
# 381 "../../../../../../modules/nrfx/hal/nrf_twim.h" 3 4
               _Bool 
# 381 "../../../../../../modules/nrfx/hal/nrf_twim.h"
                    nrf_twim_event_check(NRF_TWIM_Type * p_reg,
                                          nrf_twim_event_t event)
{
    return (
# 384 "../../../../../../modules/nrfx/hal/nrf_twim.h" 3 4
           _Bool
# 384 "../../../../../../modules/nrfx/hal/nrf_twim.h"
               )*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

static inline uint32_t * nrf_twim_event_address_get(NRF_TWIM_Type * p_reg,
                                                      nrf_twim_event_t event)
{
    return (uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

static inline void nrf_twim_shorts_enable(NRF_TWIM_Type * p_reg,
                                            uint32_t shorts_mask)
{
    p_reg->SHORTS |= shorts_mask;
}

static inline void nrf_twim_shorts_disable(NRF_TWIM_Type * p_reg,
                                             uint32_t shorts_mask)
{
    p_reg->SHORTS &= ~(shorts_mask);
}

static inline void nrf_twim_int_enable(NRF_TWIM_Type * p_reg,
                                         uint32_t int_mask)
{
    p_reg->INTENSET = int_mask;
}

static inline void nrf_twim_int_disable(NRF_TWIM_Type * p_reg,
                                          uint32_t int_mask)
{
    p_reg->INTENCLR = int_mask;
}

static inline 
# 417 "../../../../../../modules/nrfx/hal/nrf_twim.h" 3 4
               _Bool 
# 417 "../../../../../../modules/nrfx/hal/nrf_twim.h"
                    nrf_twim_int_enable_check(NRF_TWIM_Type * p_reg,
                                               nrf_twim_int_mask_t int_mask)
{
    return (
# 420 "../../../../../../modules/nrfx/hal/nrf_twim.h" 3 4
           _Bool
# 420 "../../../../../../modules/nrfx/hal/nrf_twim.h"
               )(p_reg->INTENSET & int_mask);
}

static inline void nrf_twim_enable(NRF_TWIM_Type * p_reg)
{
    p_reg->ENABLE = ((6UL) << (0UL));
}

static inline void nrf_twim_disable(NRF_TWIM_Type * p_reg)
{
    p_reg->ENABLE = ((0UL) << (0UL));
}

static inline void nrf_twim_pins_set(NRF_TWIM_Type * p_reg,
                                       uint32_t scl_pin,
                                       uint32_t sda_pin)
{
    p_reg->PSEL.SCL = scl_pin;
    p_reg->PSEL.SDA = sda_pin;
}

static inline void nrf_twim_frequency_set(NRF_TWIM_Type * p_reg,
                                            nrf_twim_frequency_t frequency)
{
    p_reg->FREQUENCY = frequency;
}

static inline uint32_t nrf_twim_errorsrc_get_and_clear(NRF_TWIM_Type * p_reg)
{
    uint32_t error_source = p_reg->ERRORSRC;


    p_reg->ERRORSRC = error_source;

    return error_source;
}

static inline void nrf_twim_address_set(NRF_TWIM_Type * p_reg,
                                          uint8_t address)
{
    p_reg->ADDRESS = address;
}

static inline void nrf_twim_tx_buffer_set(NRF_TWIM_Type * p_reg,
                                            uint8_t const * p_buffer,
                                            size_t length)
{
    p_reg->TXD.PTR = (uint32_t)p_buffer;
    p_reg->TXD.MAXCNT = length;
}

static inline void nrf_twim_rx_buffer_set(NRF_TWIM_Type * p_reg,
                                            uint8_t * p_buffer,
                                            size_t length)
{
    p_reg->RXD.PTR = (uint32_t)p_buffer;
    p_reg->RXD.MAXCNT = length;
}

static inline void nrf_twim_shorts_set(NRF_TWIM_Type * p_reg,
                                         uint32_t shorts_mask)
{
    p_reg->SHORTS = shorts_mask;
}

static inline size_t nrf_twim_txd_amount_get(NRF_TWIM_Type * p_reg)
{
    return p_reg->TXD.AMOUNT;
}

static inline size_t nrf_twim_rxd_amount_get(NRF_TWIM_Type * p_reg)
{
    return p_reg->RXD.AMOUNT;
}

static inline void nrf_twim_tx_list_enable(NRF_TWIM_Type * p_reg)
{
    p_reg->TXD.LIST = 1;
}

static inline void nrf_twim_tx_list_disable(NRF_TWIM_Type * p_reg)
{
    p_reg->TXD.LIST = 0;
}

static inline void nrf_twim_rx_list_enable(NRF_TWIM_Type * p_reg)
{
    p_reg->RXD.LIST = 1;
}

static inline void nrf_twim_rx_list_disable(NRF_TWIM_Type * p_reg)
{
    p_reg->RXD.LIST = 0;
}
# 46 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h" 2
# 61 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h"
typedef struct
{
    NRF_TWIM_Type * p_twim;
    uint8_t drv_inst_idx;
} nrfx_twim_t;
# 76 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h"
enum {

    NRFX_TWIM0_INST_IDX,




    NRFX_TWIM_ENABLED_COUNT
};




typedef struct
{
    uint32_t scl;
    uint32_t sda;
    nrf_twim_frequency_t frequency;
    uint8_t interrupt_priority;
    
# 95 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h" 3 4
   _Bool 
# 95 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h"
                        hold_bus_uninit;
} nrfx_twim_config_t;
# 120 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h"
typedef enum
{
    NRFX_TWIM_EVT_DONE,
    NRFX_TWIM_EVT_ADDRESS_NACK,
    NRFX_TWIM_EVT_DATA_NACK
} nrfx_twim_evt_type_t;




typedef enum
{
    NRFX_TWIM_XFER_TX,
    NRFX_TWIM_XFER_RX,
    NRFX_TWIM_XFER_TXRX,
    NRFX_TWIM_XFER_TXTX
} nrfx_twim_xfer_type_t;




typedef struct
{
    nrfx_twim_xfer_type_t type;
    uint8_t address;
    size_t primary_length;
    size_t secondary_length;
    uint8_t * p_primary_buf;
    uint8_t * p_secondary_buf;
} nrfx_twim_xfer_desc_t;
# 195 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h"
typedef struct
{
    nrfx_twim_evt_type_t type;
    nrfx_twim_xfer_desc_t xfer_desc;
} nrfx_twim_evt_t;




typedef void (* nrfx_twim_evt_handler_t)(nrfx_twim_evt_t const * p_event,
                                         void * p_context);
# 222 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h"
nrfx_err_t nrfx_twim_init(nrfx_twim_t const * p_instance,
                          nrfx_twim_config_t const * p_config,
                          nrfx_twim_evt_handler_t event_handler,
                          void * p_context);






void nrfx_twim_uninit(nrfx_twim_t const * p_instance);






void nrfx_twim_enable(nrfx_twim_t const * p_instance);






void nrfx_twim_disable(nrfx_twim_t const * p_instance);
# 276 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h"
nrfx_err_t nrfx_twim_tx(nrfx_twim_t const * p_instance,
                        uint8_t address,
                        uint8_t const * p_data,
                        size_t length,
                        
# 280 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h" 3 4
                       _Bool 
# 280 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h"
                                           no_stop);
# 302 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h"
nrfx_err_t nrfx_twim_rx(nrfx_twim_t const * p_instance,
                        uint8_t address,
                        uint8_t * p_data,
                        size_t length);
# 357 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h"
nrfx_err_t nrfx_twim_xfer(nrfx_twim_t const * p_instance,
                          nrfx_twim_xfer_desc_t const * p_xfer_desc,
                          uint32_t flags);
# 369 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h"

# 369 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h" 3 4
_Bool 
# 369 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h"
    nrfx_twim_is_busy(nrfx_twim_t const * p_instance);
# 383 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h"
uint32_t nrfx_twim_start_task_get(nrfx_twim_t const * p_instance, nrfx_twim_xfer_type_t xfer_type);
# 395 "../../../../../../modules/nrfx/drivers/include/nrfx_twim.h"
uint32_t nrfx_twim_stopped_event_get(nrfx_twim_t const * p_instance);


void SPIM0_SPIS0_TWIM0_TWIS0_SPI0_TWI0_IRQHandler(void);
void SPIM1_SPIS1_TWIM1_TWIS1_SPI1_TWI1_IRQHandler(void);
# 47 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 2
# 63 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
# 1 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h" 1
# 45 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h"
# 1 "../../../../../../modules/nrfx/hal/nrf_twi.h" 1
# 60 "../../../../../../modules/nrfx/hal/nrf_twi.h"
typedef enum
{

    NRF_TWI_TASK_STARTRX = __builtin_offsetof (NRF_TWI_Type, TASKS_STARTRX),
    NRF_TWI_TASK_STARTTX = __builtin_offsetof (NRF_TWI_Type, TASKS_STARTTX),
    NRF_TWI_TASK_STOP = __builtin_offsetof (NRF_TWI_Type, TASKS_STOP),
    NRF_TWI_TASK_SUSPEND = __builtin_offsetof (NRF_TWI_Type, TASKS_SUSPEND),
    NRF_TWI_TASK_RESUME = __builtin_offsetof (NRF_TWI_Type, TASKS_RESUME)

} nrf_twi_task_t;




typedef enum
{

    NRF_TWI_EVENT_STOPPED = __builtin_offsetof (NRF_TWI_Type, EVENTS_STOPPED),
    NRF_TWI_EVENT_RXDREADY = __builtin_offsetof (NRF_TWI_Type, EVENTS_RXDREADY),
    NRF_TWI_EVENT_TXDSENT = __builtin_offsetof (NRF_TWI_Type, EVENTS_TXDSENT),
    NRF_TWI_EVENT_ERROR = __builtin_offsetof (NRF_TWI_Type, EVENTS_ERROR),
    NRF_TWI_EVENT_BB = __builtin_offsetof (NRF_TWI_Type, EVENTS_BB),
    NRF_TWI_EVENT_SUSPENDED = __builtin_offsetof (NRF_TWI_Type, EVENTS_SUSPENDED)

} nrf_twi_event_t;




typedef enum
{
    NRF_TWI_SHORT_BB_SUSPEND_MASK = (0x1UL << (0UL)),
    NRF_TWI_SHORT_BB_STOP_MASK = (0x1UL << (1UL)),
    NRF_TWI_ALL_SHORTS_MASK = (0x1UL << (0UL)) |
                                    (0x1UL << (1UL))
} nrf_twi_short_mask_t;




typedef enum
{
    NRF_TWI_INT_STOPPED_MASK = (0x1UL << (1UL)),
    NRF_TWI_INT_RXDREADY_MASK = (0x1UL << (2UL)),
    NRF_TWI_INT_TXDSENT_MASK = (0x1UL << (7UL)),
    NRF_TWI_INT_ERROR_MASK = (0x1UL << (9UL)),
    NRF_TWI_INT_BB_MASK = (0x1UL << (14UL)),
    NRF_TWI_INT_SUSPENDED_MASK = (0x1UL << (18UL)),
    NRF_TWI_ALL_INTS_MASK = (0x1UL << (1UL)) |
                                  (0x1UL << (2UL)) |
                                  (0x1UL << (7UL)) |
                                  (0x1UL << (9UL)) |
                                  (0x1UL << (14UL)) |
                                  (0x1UL << (18UL))
} nrf_twi_int_mask_t;




typedef enum
{
    NRF_TWI_ERROR_ADDRESS_NACK = (0x1UL << (1UL)),
    NRF_TWI_ERROR_DATA_NACK = (0x1UL << (2UL)),
    NRF_TWI_ERROR_OVERRUN = (0x1UL << (0UL))


} nrf_twi_error_t;




typedef enum
{
    NRF_TWI_FREQ_100K = (0x01980000UL),
    NRF_TWI_FREQ_250K = (0x04000000UL),
    NRF_TWI_FREQ_400K = (0x06680000UL)
} nrf_twi_frequency_t;
# 145 "../../../../../../modules/nrfx/hal/nrf_twi.h"
static inline void nrf_twi_task_trigger(NRF_TWI_Type * p_reg,
                                          nrf_twi_task_t task);
# 156 "../../../../../../modules/nrfx/hal/nrf_twi.h"
static inline uint32_t * nrf_twi_task_address_get(NRF_TWI_Type * p_reg,
                                                    nrf_twi_task_t task);







static inline void nrf_twi_event_clear(NRF_TWI_Type * p_reg,
                                         nrf_twi_event_t event);
# 177 "../../../../../../modules/nrfx/hal/nrf_twi.h"
static inline 
# 177 "../../../../../../modules/nrfx/hal/nrf_twi.h" 3 4
               _Bool 
# 177 "../../../../../../modules/nrfx/hal/nrf_twi.h"
                    nrf_twi_event_check(NRF_TWI_Type * p_reg,
                                         nrf_twi_event_t event);
# 188 "../../../../../../modules/nrfx/hal/nrf_twi.h"
static inline uint32_t * nrf_twi_event_address_get(NRF_TWI_Type * p_reg,
                                                     nrf_twi_event_t event);







static inline void nrf_twi_shorts_enable(NRF_TWI_Type * p_reg,
                                           uint32_t shorts_mask);







static inline void nrf_twi_shorts_disable(NRF_TWI_Type * p_reg,
                                            uint32_t shorts_mask);







static inline void nrf_twi_int_enable(NRF_TWI_Type * p_reg,
                                        uint32_t int_mask);







static inline void nrf_twi_int_disable(NRF_TWI_Type * p_reg,
                                         uint32_t int_mask);
# 236 "../../../../../../modules/nrfx/hal/nrf_twi.h"
static inline 
# 236 "../../../../../../modules/nrfx/hal/nrf_twi.h" 3 4
               _Bool 
# 236 "../../../../../../modules/nrfx/hal/nrf_twi.h"
                    nrf_twi_int_enable_check(NRF_TWI_Type * p_reg,
                                              nrf_twi_int_mask_t int_mask);






static inline void nrf_twi_enable(NRF_TWI_Type * p_reg);






static inline void nrf_twi_disable(NRF_TWI_Type * p_reg);
# 261 "../../../../../../modules/nrfx/hal/nrf_twi.h"
static inline void nrf_twi_pins_set(NRF_TWI_Type * p_reg,
                                      uint32_t scl_pin,
                                      uint32_t sda_pin);







static inline void nrf_twi_frequency_set(NRF_TWI_Type * p_reg,
                                           nrf_twi_frequency_t frequency);
# 283 "../../../../../../modules/nrfx/hal/nrf_twi.h"
static inline uint32_t nrf_twi_errorsrc_get_and_clear(NRF_TWI_Type * p_reg);







static inline void nrf_twi_address_set(NRF_TWI_Type * p_reg, uint8_t address);
# 300 "../../../../../../modules/nrfx/hal/nrf_twi.h"
static inline uint8_t nrf_twi_rxd_get(NRF_TWI_Type * p_reg);







static inline void nrf_twi_txd_set(NRF_TWI_Type * p_reg, uint8_t data);

static inline void nrf_twi_shorts_set(NRF_TWI_Type * p_reg,
                                        uint32_t shorts_mask);



static inline void nrf_twi_task_trigger(NRF_TWI_Type * p_reg,
                                          nrf_twi_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

static inline uint32_t * nrf_twi_task_address_get(NRF_TWI_Type * p_reg,
                                                    nrf_twi_task_t task)
{
    return (uint32_t *)((uint8_t *)p_reg + (uint32_t)task);
}

static inline void nrf_twi_event_clear(NRF_TWI_Type * p_reg,
                                         nrf_twi_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;

    volatile uint32_t dummy = *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event));
    (void)dummy;

}

static inline 
# 337 "../../../../../../modules/nrfx/hal/nrf_twi.h" 3 4
               _Bool 
# 337 "../../../../../../modules/nrfx/hal/nrf_twi.h"
                    nrf_twi_event_check(NRF_TWI_Type * p_reg,
                                         nrf_twi_event_t event)
{
    return (
# 340 "../../../../../../modules/nrfx/hal/nrf_twi.h" 3 4
           _Bool
# 340 "../../../../../../modules/nrfx/hal/nrf_twi.h"
               )*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

static inline uint32_t * nrf_twi_event_address_get(NRF_TWI_Type * p_reg,
                                                     nrf_twi_event_t event)
{
    return (uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

static inline void nrf_twi_shorts_enable(NRF_TWI_Type * p_reg,
                                           uint32_t shorts_mask)
{
    p_reg->SHORTS |= shorts_mask;
}

static inline void nrf_twi_shorts_disable(NRF_TWI_Type * p_reg,
                                            uint32_t shorts_mask)
{
    p_reg->SHORTS &= ~(shorts_mask);
}

static inline void nrf_twi_int_enable(NRF_TWI_Type * p_reg,
                                        uint32_t int_mask)
{
    p_reg->INTENSET = int_mask;
}

static inline void nrf_twi_int_disable(NRF_TWI_Type * p_reg,
                                         uint32_t int_mask)
{
    p_reg->INTENCLR = int_mask;
}

static inline 
# 373 "../../../../../../modules/nrfx/hal/nrf_twi.h" 3 4
               _Bool 
# 373 "../../../../../../modules/nrfx/hal/nrf_twi.h"
                    nrf_twi_int_enable_check(NRF_TWI_Type * p_reg,
                                              nrf_twi_int_mask_t int_mask)
{
    return (
# 376 "../../../../../../modules/nrfx/hal/nrf_twi.h" 3 4
           _Bool
# 376 "../../../../../../modules/nrfx/hal/nrf_twi.h"
               )(p_reg->INTENSET & int_mask);
}

static inline void nrf_twi_enable(NRF_TWI_Type * p_reg)
{
    p_reg->ENABLE = ((5UL) << (0UL));
}

static inline void nrf_twi_disable(NRF_TWI_Type * p_reg)
{
    p_reg->ENABLE = ((0UL) << (0UL));
}

static inline void nrf_twi_pins_set(NRF_TWI_Type * p_reg,
                                      uint32_t scl_pin,
                                      uint32_t sda_pin)
{

    p_reg->PSEL.SCL = scl_pin;





    p_reg->PSEL.SDA = sda_pin;



}

static inline void nrf_twi_frequency_set(NRF_TWI_Type * p_reg,
                                           nrf_twi_frequency_t frequency)
{
    p_reg->FREQUENCY = frequency;
}

static inline uint32_t nrf_twi_errorsrc_get_and_clear(NRF_TWI_Type * p_reg)
{
    uint32_t error_source = p_reg->ERRORSRC;


    p_reg->ERRORSRC = error_source;

    return error_source;
}

static inline void nrf_twi_address_set(NRF_TWI_Type * p_reg, uint8_t address)
{
    p_reg->ADDRESS = address;
}

static inline uint8_t nrf_twi_rxd_get(NRF_TWI_Type * p_reg)
{
    return (uint8_t)p_reg->RXD;
}

static inline void nrf_twi_txd_set(NRF_TWI_Type * p_reg, uint8_t data)
{
    p_reg->TXD = data;
}

static inline void nrf_twi_shorts_set(NRF_TWI_Type * p_reg,
                                        uint32_t shorts_mask)
{
    p_reg->SHORTS = shorts_mask;
}
# 46 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h" 2
# 61 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h"
typedef struct
{
    NRF_TWI_Type * p_twi;
    uint8_t drv_inst_idx;
} nrfx_twi_t;
# 76 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h"
enum {






    NRFX_TWI_ENABLED_COUNT
};




typedef struct
{
    uint32_t scl;
    uint32_t sda;
    nrf_twi_frequency_t frequency;
    uint8_t interrupt_priority;
    
# 95 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h" 3 4
   _Bool 
# 95 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h"
                       hold_bus_uninit;
} nrfx_twi_config_t;
# 116 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h"
typedef enum
{
    NRFX_TWI_EVT_DONE,
    NRFX_TWI_EVT_ADDRESS_NACK,
    NRFX_TWI_EVT_DATA_NACK
} nrfx_twi_evt_type_t;




typedef enum
{
    NRFX_TWI_XFER_TX,
    NRFX_TWI_XFER_RX,
    NRFX_TWI_XFER_TXRX,
    NRFX_TWI_XFER_TXTX
} nrfx_twi_xfer_type_t;




typedef struct
{
    nrfx_twi_xfer_type_t type;
    uint8_t address;
    size_t primary_length;
    size_t secondary_length;
    uint8_t * p_primary_buf;
    uint8_t * p_secondary_buf;
} nrfx_twi_xfer_desc_t;
# 191 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h"
typedef struct
{
    nrfx_twi_evt_type_t type;
    nrfx_twi_xfer_desc_t xfer_desc;
} nrfx_twi_evt_t;




typedef void (* nrfx_twi_evt_handler_t)(nrfx_twi_evt_t const * p_event,
                                        void * p_context);
# 218 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h"
nrfx_err_t nrfx_twi_init(nrfx_twi_t const * p_instance,
                         nrfx_twi_config_t const * p_config,
                         nrfx_twi_evt_handler_t event_handler,
                         void * p_context);






void nrfx_twi_uninit(nrfx_twi_t const * p_instance);






void nrfx_twi_enable(nrfx_twi_t const * p_instance);






void nrfx_twi_disable(nrfx_twi_t const * p_instance);
# 264 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h"
nrfx_err_t nrfx_twi_tx(nrfx_twi_t const * p_instance,
                       uint8_t address,
                       uint8_t const * p_data,
                       size_t length,
                       
# 268 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h" 3 4
                      _Bool 
# 268 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h"
                                         no_stop);
# 288 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h"
nrfx_err_t nrfx_twi_rx(nrfx_twi_t const * p_instance,
                       uint8_t address,
                       uint8_t * p_data,
                       size_t length);
# 324 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h"
nrfx_err_t nrfx_twi_xfer(nrfx_twi_t const * p_instance,
                         nrfx_twi_xfer_desc_t const * p_xfer_desc,
                         uint32_t flags);
# 336 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h"

# 336 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h" 3 4
_Bool 
# 336 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h"
    nrfx_twi_is_busy(nrfx_twi_t const * p_instance);
# 345 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h"
size_t nrfx_twi_data_count_get(nrfx_twi_t const * const p_instance);
# 357 "../../../../../../modules/nrfx/drivers/include/nrfx_twi.h"
uint32_t nrfx_twi_stopped_event_get(nrfx_twi_t const * p_instance);

void SPIM0_SPIS0_TWIM0_TWIS0_SPI0_TWI0_IRQHandler(void);
void SPIM1_SPIS1_TWIM1_TWIS1_SPI1_TWI1_IRQHandler(void);
# 64 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 2
# 101 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
typedef struct
{
    uint8_t inst_idx;
    union
    {

        nrfx_twim_t twim;


        nrfx_twi_t twi;

    } u;
    
# 113 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
   _Bool 
# 113 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
           use_easy_dma;
} nrf_drv_twi_t;
# 139 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
typedef enum
{
    NRF_DRV_TWI_FREQ_100K = NRF_TWI_FREQ_100K ,
    NRF_DRV_TWI_FREQ_250K = NRF_TWI_FREQ_250K ,
    NRF_DRV_TWI_FREQ_400K = NRF_TWI_FREQ_400K
} nrf_drv_twi_frequency_t;




typedef struct
{
    uint32_t scl;
    uint32_t sda;
    nrf_drv_twi_frequency_t frequency;
    uint8_t interrupt_priority;
    
# 155 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
   _Bool 
# 155 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
                           clear_bus_init;
    
# 156 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
   _Bool 
# 156 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
                           hold_bus_uninit;
} nrf_drv_twi_config_t;
# 182 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
typedef enum
{
    NRF_DRV_TWI_EVT_DONE,
    NRF_DRV_TWI_EVT_ADDRESS_NACK,
    NRF_DRV_TWI_EVT_DATA_NACK
} nrf_drv_twi_evt_type_t;




typedef enum
{
    NRF_DRV_TWI_XFER_TX,
    NRF_DRV_TWI_XFER_RX,
    NRF_DRV_TWI_XFER_TXRX,
    NRF_DRV_TWI_XFER_TXTX
} nrf_drv_twi_xfer_type_t;




typedef struct
{
    nrf_drv_twi_xfer_type_t type;
    uint8_t address;
    uint8_t primary_length;
    uint8_t secondary_length;
    uint8_t * p_primary_buf;
    uint8_t * p_secondary_buf;
} nrf_drv_twi_xfer_desc_t;
# 257 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
typedef struct
{
    nrf_drv_twi_evt_type_t type;
    nrf_drv_twi_xfer_desc_t xfer_desc;
} nrf_drv_twi_evt_t;




typedef void (* nrf_drv_twi_evt_handler_t)(nrf_drv_twi_evt_t const * p_event,
                                           void * p_context);
# 284 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
ret_code_t nrf_drv_twi_init(nrf_drv_twi_t const * p_instance,
                            nrf_drv_twi_config_t const * p_config,
                            nrf_drv_twi_evt_handler_t event_handler,
                            void * p_context);






static inline
void nrf_drv_twi_uninit(nrf_drv_twi_t const * p_instance);






static inline
void nrf_drv_twi_enable(nrf_drv_twi_t const * p_instance);






static inline
void nrf_drv_twi_disable(nrf_drv_twi_t const * p_instance);
# 334 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
static inline
ret_code_t nrf_drv_twi_tx(nrf_drv_twi_t const * p_instance,
                          uint8_t address,
                          uint8_t const * p_data,
                          uint8_t length,
                          
# 339 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
                         _Bool 
# 339 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
                                               no_stop);
# 359 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
static inline
ret_code_t nrf_drv_twi_rx(nrf_drv_twi_t const * p_instance,
                          uint8_t address,
                          uint8_t * p_data,
                          uint8_t length);
# 414 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
static inline
ret_code_t nrf_drv_twi_xfer(nrf_drv_twi_t const * p_instance,
                            nrf_drv_twi_xfer_desc_t const * p_xfer_desc,
                            uint32_t flags);
# 427 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
static inline

# 428 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
_Bool 
# 428 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
    nrf_drv_twi_is_busy(nrf_drv_twi_t const * p_instance);
# 439 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
static inline
uint32_t nrf_drv_twi_data_count_get(nrf_drv_twi_t const * const p_instance);
# 453 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
static inline
uint32_t nrf_drv_twi_start_task_get(nrf_drv_twi_t const * p_instance, nrf_drv_twi_xfer_type_t xfer_type);
# 466 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
static inline
uint32_t nrf_drv_twi_stopped_event_get(nrf_drv_twi_t const * p_instance);
# 495 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
static inline
void nrf_drv_twi_uninit(nrf_drv_twi_t const * p_instance)
{
    if (
# 498 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
       1
# 498 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
                           )
    {
        nrfx_twim_uninit(&p_instance->u.twim);
    }
    else if ((!
# 502 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
            1
# 502 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
            ))
    {
        nrfx_twi_uninit(&p_instance->u.twi);
    }
}

static inline
void nrf_drv_twi_enable(nrf_drv_twi_t const * p_instance)
{
    if (
# 511 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
       1
# 511 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
                           )
    {
        nrfx_twim_enable(&p_instance->u.twim);
    }
    else if ((!
# 515 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
            1
# 515 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
            ))
    {
        nrfx_twi_enable(&p_instance->u.twi);
    }
}

static inline
void nrf_drv_twi_disable(nrf_drv_twi_t const * p_instance)
{
    if (
# 524 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
       1
# 524 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
                           )
    {
        nrfx_twim_disable(&p_instance->u.twim);
    }
    else if ((!
# 528 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
            1
# 528 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
            ))
    {
        nrfx_twi_disable(&p_instance->u.twi);
    }
}

static inline
ret_code_t nrf_drv_twi_tx(nrf_drv_twi_t const * p_instance,
                          uint8_t address,
                          uint8_t const * p_data,
                          uint8_t length,
                          
# 539 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
                         _Bool 
# 539 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
                                               no_stop)
{
    ret_code_t result = 0;
    if (
# 542 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
       1
# 542 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
                           )
    {
        result = nrfx_twim_tx(&p_instance->u.twim,
                                address, p_data, length, no_stop);
    }
    else if ((!
# 547 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
            1
# 547 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
            ))
    {
        result = nrfx_twi_tx(&p_instance->u.twi,
                               address, p_data, length, no_stop);
    }
    return result;
}

static inline
ret_code_t nrf_drv_twi_rx(nrf_drv_twi_t const * p_instance,
                          uint8_t address,
                          uint8_t * p_data,
                          uint8_t length)
{
    ret_code_t result = 0;
    if (
# 562 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
       1
# 562 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
                           )
    {
        result = nrfx_twim_rx(&p_instance->u.twim,
                                address, p_data, length);
    }
    else if ((!
# 567 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
            1
# 567 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
            ))
    {
        result = nrfx_twi_rx(&p_instance->u.twi,
                               address, p_data, length);
    }
    return result;
}

static inline
ret_code_t nrf_drv_twi_xfer(nrf_drv_twi_t const * p_instance,
                            nrf_drv_twi_xfer_desc_t const * p_xfer_desc,
                            uint32_t flags)
{
    ret_code_t result = 0;
    if (
# 581 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
       1
# 581 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
                           )
    {

        nrfx_twim_xfer_desc_t const twim_xfer_desc =
        {
            .type = (nrfx_twim_xfer_type_t)p_xfer_desc->type,
            .address = p_xfer_desc->address,
            .primary_length = p_xfer_desc->primary_length,
            .secondary_length = p_xfer_desc->secondary_length,
            .p_primary_buf = p_xfer_desc->p_primary_buf,
            .p_secondary_buf = p_xfer_desc->p_secondary_buf,
        };
        result = nrfx_twim_xfer(&p_instance->u.twim, &twim_xfer_desc, flags);

    }
    else if ((!
# 596 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
            1
# 596 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
            ))
    {

        nrfx_twi_xfer_desc_t const twi_xfer_desc =
        {
            .type = (nrfx_twi_xfer_type_t)p_xfer_desc->type,
            .address = p_xfer_desc->address,
            .primary_length = p_xfer_desc->primary_length,
            .secondary_length = p_xfer_desc->secondary_length,
            .p_primary_buf = p_xfer_desc->p_primary_buf,
            .p_secondary_buf = p_xfer_desc->p_secondary_buf,
        };
        result = nrfx_twi_xfer(&p_instance->u.twi, &twi_xfer_desc, flags);

    }
    return result;
}

static inline

# 615 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
_Bool 
# 615 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
    nrf_drv_twi_is_busy(nrf_drv_twi_t const * p_instance)
{
    
# 617 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
   _Bool 
# 617 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
        result = 0;
    if (
# 618 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
       1
# 618 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
                           )
    {
        result = nrfx_twim_is_busy(&p_instance->u.twim);
    }
    else if ((!
# 622 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
            1
# 622 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
            ))
    {
        result = nrfx_twi_is_busy(&p_instance->u.twi);
    }
    return result;
}

static inline
uint32_t nrf_drv_twi_data_count_get(nrf_drv_twi_t const * const p_instance)
{
    uint32_t result = 0;
    if (
# 633 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
       1
# 633 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
                           )
    {
        if (0) { if (
# 635 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
       0
# 635 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
       ) { } else { assert_nrf_callback((uint16_t)635, (uint8_t *)"../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"); } };
        result = 0;
    }
    else if ((!
# 638 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
            1
# 638 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
            ))
    {
        result = nrfx_twi_data_count_get(&p_instance->u.twi);
    }
    return result;
}

static inline
uint32_t nrf_drv_twi_start_task_get(nrf_drv_twi_t const * p_instance,
                                    nrf_drv_twi_xfer_type_t xfer_type)
{
    uint32_t result = 0;
    if (
# 650 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
       1
# 650 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
                           )
    {
        result = nrfx_twim_start_task_get(&p_instance->u.twim,
                                          (nrfx_twim_xfer_type_t)xfer_type);
    }
    else if ((!
# 655 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
            1
# 655 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
            ))
    {
        if (0) { if (
# 657 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
       0
# 657 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
       ) { } else { assert_nrf_callback((uint16_t)657, (uint8_t *)"../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"); } };
        result = 0;
    }
    return result;
}

static inline
uint32_t nrf_drv_twi_stopped_event_get(nrf_drv_twi_t const * p_instance)
{
    uint32_t result = 0;
    if (
# 667 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
       1
# 667 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
                           )
    {
        result = nrfx_twim_stopped_event_get(&p_instance->u.twim);
    }
    else if ((!
# 671 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h" 3 4
            1
# 671 "../../../../../../integration/nrfx/legacy/nrf_drv_twi.h"
            ))
    {
        result = nrfx_twi_stopped_event_get(&p_instance->u.twi);
    }
    return result;
}
# 6 "./g_lib/g_lib_touch_panel.h" 2
# 1 "./g_lib/g_gpiote.h" 1
# 7 "./g_lib/g_lib_touch_panel.h" 2
# 1 "./g_lib/g_twim.h" 1
# 9 "./g_lib/g_twim.h"
static const nrf_drv_twi_t m_twi = { 0, { .twim = { .p_twim = ((NRF_TWIM_Type *) 0x40003000UL), .drv_inst_idx = NRFX_TWIM0_INST_IDX, } }, 
# 9 "./g_lib/g_twim.h" 3 4
                                  1 
# 9 "./g_lib/g_twim.h"
                                  };






void twi_init ();
# 8 "./g_lib/g_lib_touch_panel.h" 2
# 1 "./g_lib/g_gpio.h" 1



# 1 "../../../../../../modules/nrfx/hal/nrf_gpio.h" 1
# 76 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
typedef enum
{
    NRF_GPIO_PIN_DIR_INPUT = (0UL),
    NRF_GPIO_PIN_DIR_OUTPUT = (1UL)
} nrf_gpio_pin_dir_t;




typedef enum
{
    NRF_GPIO_PIN_INPUT_CONNECT = (0UL),
    NRF_GPIO_PIN_INPUT_DISCONNECT = (1UL)
} nrf_gpio_pin_input_t;




typedef enum
{
    NRF_GPIO_PIN_NOPULL = (0UL),
    NRF_GPIO_PIN_PULLDOWN = (1UL),
    NRF_GPIO_PIN_PULLUP = (3UL),
} nrf_gpio_pin_pull_t;




typedef enum
{
    NRF_GPIO_PIN_S0S1 = (0UL),
    NRF_GPIO_PIN_H0S1 = (1UL),
    NRF_GPIO_PIN_S0H1 = (2UL),
    NRF_GPIO_PIN_H0H1 = (3UL),
    NRF_GPIO_PIN_D0S1 = (4UL),
    NRF_GPIO_PIN_D0H1 = (5UL),
    NRF_GPIO_PIN_S0D1 = (6UL),
    NRF_GPIO_PIN_H0D1 = (7UL),
} nrf_gpio_pin_drive_t;




typedef enum
{
    NRF_GPIO_PIN_NOSENSE = (0UL),
    NRF_GPIO_PIN_SENSE_LOW = (3UL),
    NRF_GPIO_PIN_SENSE_HIGH = (2UL),
} nrf_gpio_pin_sense_t;
# 137 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_range_cfg_output(uint32_t pin_range_start, uint32_t pin_range_end);
# 152 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_range_cfg_input(uint32_t pin_range_start,
                                              uint32_t pin_range_end,
                                              nrf_gpio_pin_pull_t pull_config);
# 168 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_cfg(
    uint32_t pin_number,
    nrf_gpio_pin_dir_t dir,
    nrf_gpio_pin_input_t input,
    nrf_gpio_pin_pull_t pull,
    nrf_gpio_pin_drive_t drive,
    nrf_gpio_pin_sense_t sense);
# 184 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_cfg_output(uint32_t pin_number);
# 195 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_cfg_input(uint32_t pin_number, nrf_gpio_pin_pull_t pull_config);






static inline void nrf_gpio_cfg_default(uint32_t pin_number);







static inline void nrf_gpio_cfg_watcher(uint32_t pin_number);







static inline void nrf_gpio_input_disconnect(uint32_t pin_number);
# 229 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_cfg_sense_input(uint32_t pin_number,
                                              nrf_gpio_pin_pull_t pull_config,
                                              nrf_gpio_pin_sense_t sense_config);
# 240 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_cfg_sense_set(uint32_t pin_number, nrf_gpio_pin_sense_t sense_config);
# 249 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_pin_dir_set(uint32_t pin_number, nrf_gpio_pin_dir_t direction);
# 258 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_pin_set(uint32_t pin_number);
# 268 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_pin_clear(uint32_t pin_number);
# 278 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_pin_toggle(uint32_t pin_number);
# 292 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_pin_write(uint32_t pin_number, uint32_t value);
# 304 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline uint32_t nrf_gpio_pin_read(uint32_t pin_number);
# 313 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline uint32_t nrf_gpio_pin_out_read(uint32_t pin_number);
# 322 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline nrf_gpio_pin_sense_t nrf_gpio_pin_sense_get(uint32_t pin_number);
# 331 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_port_dir_output_set(NRF_GPIO_Type * p_reg, uint32_t out_mask);
# 340 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_port_dir_input_set(NRF_GPIO_Type * p_reg, uint32_t in_mask);
# 349 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_port_dir_write(NRF_GPIO_Type * p_reg, uint32_t dir_mask);
# 358 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline uint32_t nrf_gpio_port_dir_read(NRF_GPIO_Type const * p_reg);
# 367 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline uint32_t nrf_gpio_port_in_read(NRF_GPIO_Type const * p_reg);
# 376 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline uint32_t nrf_gpio_port_out_read(NRF_GPIO_Type const * p_reg);
# 385 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_port_out_write(NRF_GPIO_Type * p_reg, uint32_t value);
# 394 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_port_out_set(NRF_GPIO_Type * p_reg, uint32_t set_mask);
# 403 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_port_out_clear(NRF_GPIO_Type * p_reg, uint32_t clr_mask);
# 412 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_ports_read(uint32_t start_port, uint32_t length, uint32_t * p_masks);
# 422 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_latches_read(uint32_t start_port, uint32_t length,
                                           uint32_t * p_masks);
# 432 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline uint32_t nrf_gpio_pin_latch_get(uint32_t pin_number);







static inline void nrf_gpio_pin_latch_clear(uint32_t pin_number);
# 453 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline NRF_GPIO_Type * nrf_gpio_pin_port_decode(uint32_t * p_pin)
{
    if (0) { if (*p_pin < (32 + 16)) { } else { assert_nrf_callback((uint16_t)455, (uint8_t *)"../../../../../../modules/nrfx/hal/nrf_gpio.h"); } };




    if (*p_pin < 32)
    {
        return ((NRF_GPIO_Type *) 0x50000000UL);
    }
    else
    {
        *p_pin = *p_pin & (32 - 1);
        return ((NRF_GPIO_Type *) 0x50000300UL);
    }

}


static inline void nrf_gpio_range_cfg_output(uint32_t pin_range_start, uint32_t pin_range_end)
{

    for (; pin_range_start <= pin_range_end; pin_range_start++)
    {
        nrf_gpio_cfg_output(pin_range_start);
    }
}


static inline void nrf_gpio_range_cfg_input(uint32_t pin_range_start,
                                              uint32_t pin_range_end,
                                              nrf_gpio_pin_pull_t pull_config)
{

    for (; pin_range_start <= pin_range_end; pin_range_start++)
    {
        nrf_gpio_cfg_input(pin_range_start, pull_config);
    }
}


static inline void nrf_gpio_cfg(
    uint32_t pin_number,
    nrf_gpio_pin_dir_t dir,
    nrf_gpio_pin_input_t input,
    nrf_gpio_pin_pull_t pull,
    nrf_gpio_pin_drive_t drive,
    nrf_gpio_pin_sense_t sense)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    reg->PIN_CNF[pin_number] = ((uint32_t)dir << (0UL))
                               | ((uint32_t)input << (1UL))
                               | ((uint32_t)pull << (2UL))
                               | ((uint32_t)drive << (8UL))
                               | ((uint32_t)sense << (16UL));
}


static inline void nrf_gpio_cfg_output(uint32_t pin_number)
{
    nrf_gpio_cfg(
        pin_number,
        NRF_GPIO_PIN_DIR_OUTPUT,
        NRF_GPIO_PIN_INPUT_DISCONNECT,
        NRF_GPIO_PIN_NOPULL,
        NRF_GPIO_PIN_S0S1,
        NRF_GPIO_PIN_NOSENSE);
}


static inline void nrf_gpio_cfg_input(uint32_t pin_number, nrf_gpio_pin_pull_t pull_config)
{
    nrf_gpio_cfg(
        pin_number,
        NRF_GPIO_PIN_DIR_INPUT,
        NRF_GPIO_PIN_INPUT_CONNECT,
        pull_config,
        NRF_GPIO_PIN_S0S1,
        NRF_GPIO_PIN_NOSENSE);
}


static inline void nrf_gpio_cfg_default(uint32_t pin_number)
{
    nrf_gpio_cfg(
        pin_number,
        NRF_GPIO_PIN_DIR_INPUT,
        NRF_GPIO_PIN_INPUT_DISCONNECT,
        NRF_GPIO_PIN_NOPULL,
        NRF_GPIO_PIN_S0S1,
        NRF_GPIO_PIN_NOSENSE);
}


static inline void nrf_gpio_cfg_watcher(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    uint32_t cnf = reg->PIN_CNF[pin_number] & ~(0x1UL << (1UL));

    reg->PIN_CNF[pin_number] = cnf | ((0UL) << (1UL));
}


static inline void nrf_gpio_input_disconnect(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    uint32_t cnf = reg->PIN_CNF[pin_number] & ~(0x1UL << (1UL));

    reg->PIN_CNF[pin_number] = cnf | ((1UL) << (1UL));
}


static inline void nrf_gpio_cfg_sense_input(uint32_t pin_number,
                                              nrf_gpio_pin_pull_t pull_config,
                                              nrf_gpio_pin_sense_t sense_config)
{
    nrf_gpio_cfg(
        pin_number,
        NRF_GPIO_PIN_DIR_INPUT,
        NRF_GPIO_PIN_INPUT_CONNECT,
        pull_config,
        NRF_GPIO_PIN_S0S1,
        sense_config);
}


static inline void nrf_gpio_cfg_sense_set(uint32_t pin_number, nrf_gpio_pin_sense_t sense_config)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);


    reg->PIN_CNF[pin_number] &= ~(0x3UL << (16UL));
    reg->PIN_CNF[pin_number] |= (sense_config << (16UL));
}


static inline void nrf_gpio_pin_dir_set(uint32_t pin_number, nrf_gpio_pin_dir_t direction)
{
    if (direction == NRF_GPIO_PIN_DIR_INPUT)
    {
        nrf_gpio_cfg(
            pin_number,
            NRF_GPIO_PIN_DIR_INPUT,
            NRF_GPIO_PIN_INPUT_CONNECT,
            NRF_GPIO_PIN_NOPULL,
            NRF_GPIO_PIN_S0S1,
            NRF_GPIO_PIN_NOSENSE);
    }
    else
    {
        NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);
        reg->DIRSET = (1UL << pin_number);
    }
}


static inline void nrf_gpio_pin_set(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    nrf_gpio_port_out_set(reg, 1UL << pin_number);
}


static inline void nrf_gpio_pin_clear(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    nrf_gpio_port_out_clear(reg, 1UL << pin_number);
}


static inline void nrf_gpio_pin_toggle(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);
    uint32_t pins_state = reg->OUT;

    reg->OUTSET = (~pins_state & (1UL << pin_number));
    reg->OUTCLR = (pins_state & (1UL << pin_number));
}


static inline void nrf_gpio_pin_write(uint32_t pin_number, uint32_t value)
{
    if (value == 0)
    {
        nrf_gpio_pin_clear(pin_number);
    }
    else
    {
        nrf_gpio_pin_set(pin_number);
    }
}


static inline uint32_t nrf_gpio_pin_read(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    return ((nrf_gpio_port_in_read(reg) >> pin_number) & 1UL);
}


static inline uint32_t nrf_gpio_pin_out_read(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    return ((nrf_gpio_port_out_read(reg) >> pin_number) & 1UL);
}


static inline nrf_gpio_pin_sense_t nrf_gpio_pin_sense_get(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    return (nrf_gpio_pin_sense_t)((reg->PIN_CNF[pin_number] &
                                   (0x3UL << (16UL))) >> (16UL));
}


static inline void nrf_gpio_port_dir_output_set(NRF_GPIO_Type * p_reg, uint32_t out_mask)
{
    p_reg->DIRSET = out_mask;
}


static inline void nrf_gpio_port_dir_input_set(NRF_GPIO_Type * p_reg, uint32_t in_mask)
{
    p_reg->DIRCLR = in_mask;
}


static inline void nrf_gpio_port_dir_write(NRF_GPIO_Type * p_reg, uint32_t value)
{
    p_reg->DIR = value;
}


static inline uint32_t nrf_gpio_port_dir_read(NRF_GPIO_Type const * p_reg)
{
    return p_reg->DIR;
}


static inline uint32_t nrf_gpio_port_in_read(NRF_GPIO_Type const * p_reg)
{
    return p_reg->IN;
}


static inline uint32_t nrf_gpio_port_out_read(NRF_GPIO_Type const * p_reg)
{
    return p_reg->OUT;
}


static inline void nrf_gpio_port_out_write(NRF_GPIO_Type * p_reg, uint32_t value)
{
    p_reg->OUT = value;
}


static inline void nrf_gpio_port_out_set(NRF_GPIO_Type * p_reg, uint32_t set_mask)
{
    p_reg->OUTSET = set_mask;
}


static inline void nrf_gpio_port_out_clear(NRF_GPIO_Type * p_reg, uint32_t clr_mask)
{
    p_reg->OUTCLR = clr_mask;
}


static inline void nrf_gpio_ports_read(uint32_t start_port, uint32_t length, uint32_t * p_masks)
{
    NRF_GPIO_Type * gpio_regs[2] = {((NRF_GPIO_Type *) 0x50000000UL), ((NRF_GPIO_Type *) 0x50000300UL)};

    if (0) { if (start_port + length <= 2) { } else { assert_nrf_callback((uint16_t)735, (uint8_t *)"../../../../../../modules/nrfx/hal/nrf_gpio.h"); } };
    uint32_t i;

    for (i = start_port; i < (start_port + length); i++)
    {
        *p_masks = nrf_gpio_port_in_read(gpio_regs[i]);
        p_masks++;
    }
}



static inline void nrf_gpio_latches_read(uint32_t start_port, uint32_t length, uint32_t * p_masks)
{
    NRF_GPIO_Type * gpio_regs[2] = {((NRF_GPIO_Type *) 0x50000000UL), ((NRF_GPIO_Type *) 0x50000300UL)};
    uint32_t i;

    for (i = start_port; i < (start_port + length); i++)
    {
        *p_masks = gpio_regs[i]->LATCH;
        p_masks++;
    }
}


static inline uint32_t nrf_gpio_pin_latch_get(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    return (reg->LATCH & (1 << pin_number)) ? 1 : 0;
}


static inline void nrf_gpio_pin_latch_clear(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    reg->LATCH = (1 << pin_number);
}
# 5 "./g_lib/g_gpio.h" 2
# 1 "./g_lib/g_lib_touch_panel.h" 1
# 6 "./g_lib/g_gpio.h" 2




void gpio_init_TP();
# 9 "./g_lib/g_lib_touch_panel.h" 2
# 34 "./g_lib/g_lib_touch_panel.h"
typedef enum{
 PUTDOWN = 0,
 PUTUP = 1,
 CONTACT = 2,
 RESERVED = 3
} touchpoint_event;

typedef struct{
 touchpoint_event event;
 uint8_t touch_id;
 uint16_t pos_x;
 uint16_t pos_y;
} touchpoint_t;


typedef struct{
 uint8_t number_of_touchpoints;
 touchpoint_t touchpoint[5];

} touchpoints_t;
# 63 "./g_lib/g_lib_touch_panel.h"
ret_code_t touchpanel_get_values_of_touches(touchpoints_t* touchpoints, nrf_drv_twi_t* m_twi);
# 73 "./g_lib/g_lib_touch_panel.h"
void touchpanel_parse_touches(touchpoints_t* touchpoints, uint8_t* to_parse);
# 84 "./g_lib/g_lib_touch_panel.h"
uint8_t touchpanel_get_pressed_buttons();
# 95 "./g_lib/g_lib_touch_panel.h"
ret_code_t touchpanel_send_cmd(nrf_drv_twi_t* m_twi, uint8_t reg_address, uint8_t* data);
# 106 "./g_lib/g_lib_touch_panel.h"
ret_code_t touchpanel_get_register_value(nrf_drv_twi_t* m_twi, uint8_t reg_address, uint8_t* data);




void touchpanel_init();
# 6 "./g_lib/g_gpiote.h" 2




void gpiote_init_TP();




void GPIOTE_IRQHandler(void);
# 12 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.h" 2
# 1 "./g_lib/g_lib_touch_panel.h" 1
# 13 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.h" 2


void game_initTasks();
void game_initLedMatrix();
void game_initTouchScreen();
void GPIOTE_IRQHandler(void);

typedef struct gameData{
  int gameState;
}gameData;
# 2 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c" 2

BaseType_t xGMainReturned;
TaskHandle_t xGMainHandle = 
# 4 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c" 3 4
                           0
# 4 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c"
                               ;
BaseType_t xDisplayManagerReturned;
TaskHandle_t xDisplayManagerHandle = 
# 6 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c" 3 4
                                    0
# 6 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c"
                                        ;
BaseType_t xTouchPanelReturned;
TaskHandle_t xTouchPanelHandle = 
# 8 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c" 3 4
                                0
# 8 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c"
                                    ;
BaseType_t xSoundManagerReturned;
TaskHandle_t xSoundManagerHandle = 
# 10 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c" 3 4
                                  0
# 10 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c"
                                      ;
gameData gData;


int alpha[36][2][30] = {
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, -1}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8, -1}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, -1}, {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 9, 10, 1, 8, 9, 2, 8, 9, 2, 3, 4, 5, 6, 7, 8, -1}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, -1}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8, -1}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, -1}, {1, 2, 3, 4, 5, 6, 7, 8, -1}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, -1}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, -1}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, -1}, {1, 2, 3, 4, 5, 6, 7, 8, 8, 9, 8, 9, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, -1}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}},
    {{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4}, {1, 2, 3, 4, 5, 6, 7, 8, 1, 8, 9, 0, 8, 9, 1, 5, 6, 8, 9, 5, 6, 7, 8}}
};

int alphaWidth[36] = {5, 5, 5, 5, 5, 5, 5, 5, 1, 3, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};

void game_initLedMatrix() {
  lm_init(1, 2, &xDisplayManagerHandle);
}

void game_initTouchScreen() {
  touchpanel_init();
}

void game_splashScreen() {
  const TickType_t xDelay = 500 / ( ( TickType_t ) 1000.0 / 1024.0 );
  const TickType_t xDelay2 = 1500 / ( ( TickType_t ) 1000.0 / 1024.0 );
  TickType_t xLastWakeTime;
  xLastWakeTime = xTaskGetTickCount();
  lm_setLedColor(lm_colorBuilder(4, 4, 4));
  int letterNumber = 5;
  int offsetX = 7;
  int offsetY = 5;
  int text[] = {6, 20, 8, 3, 14};

  int j = 0, i = 0;
  for (i = 0; i < letterNumber; i++) {
    for (j = 0; j < 30; j++) {
    xLastWakeTime = xTaskGetTickCount();
      if ((alpha[text[i]][0][j] == -1) || (alpha[text[i]][1][j] == -1)) {
        break;
      }
      int singleOffset = !((alpha[text[i]][0][j] + offsetX) % 2);
      lm_setSingleLedColor(alpha[text[i]][0][j] + offsetX, alpha[text[i]][1][j] + offsetY - singleOffset, lm_colorBuilder(i * 3, j * 3, 50));

      lm_spi_send();

      nrf_delay_ms(100);
    }
    offsetX += alphaWidth[text[i]] + 1;
  }

}



void vGameMain(void *pvParameters) {



  gameData *gData = (gameData *)pvParameters;
  uint32_t ulNotifiedValue;
  TickType_t xLastWakeTime;
  const TickType_t xDelay = 10000 / ( ( TickType_t ) 1000.0 / 1024.0 );
  while (gData->gameState == 1) {
    xLastWakeTime = xTaskGetTickCount();
    xTaskNotifyWait(0x00,
        0xff,
        &ulNotifiedValue,

        0);

    if ((ulNotifiedValue & 0xff) != 0) {
      printf(" buttons pressed : %x\n", ulNotifiedValue);
    }
    xTaskGenericNotify( ( &xDisplayManagerHandle ), ( 0x1 ), ( eSetBits ), 
# 114 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c" 3 4
   0 
# 114 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c"
   );
    vTaskDelayUntil(&xLastWakeTime, 500);
  }







  vTaskDelete(
# 124 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c" 3 4
             0
# 124 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c"
                 );
}

void vDisplayManager(void *pvParameters) {



  gameData *gData = (gameData *)pvParameters;
  uint32_t ulNotifiedValue;
  TickType_t xLastWakeTime;

  game_splashScreen();
  while ((ulNotifiedValue & 0x02) == 0) {
    xTaskNotifyWait(0x00,
        0x2,
        &ulNotifiedValue,
        ( TickType_t ) 0xffffffffUL);
  }
  const TickType_t xDelay = 50 / ( ( TickType_t ) 1000.0 / 1024.0 );
  for (;;) {
    if (gData->gameState == 1) {
      ulNotifiedValue = 0;
      while ((ulNotifiedValue & 0x01) == 0) {

        xTaskNotifyWait(0x00,
            0x1,
            &ulNotifiedValue,

            ( TickType_t ) 0xffffffffUL);
      }
      xLastWakeTime = xTaskGetTickCount();
# 165 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c"
      lm_spi_send();
      while ((ulNotifiedValue & 0x02) == 0) {

        xTaskNotifyWait(0x00,
            0x2,
            &ulNotifiedValue,

            ( TickType_t ) 0xffffffffUL);
      }
      vTaskDelayUntil(&xLastWakeTime, xDelay);
    }
  }






  vTaskDelete(
# 183 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c" 3 4
             0
# 183 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c"
                 );
}

void vTouchPanel(void *pvParameters) {


  gameData *gData = (gameData *)pvParameters;
  while (gData->gameState == 1) {
    ulTaskNotifyTake(( ( BaseType_t ) 1 ),
        ( TickType_t ) 0xffffffffUL);
    xTaskGenericNotifyFromISR( ( &xGMainHandle ), ( (uint8_t)touchpanel_get_pressed_buttons() ), ( eSetBits ), 
# 193 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c" 3 4
   0
# 193 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c"
   , ( ( ( BaseType_t ) 0 ) ) );
  }







  vTaskDelete(
# 202 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c" 3 4
             0
# 202 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c"
                 );
}

void vSoundManager(void *pvParameters) {


  gameData *gData = (gameData *)pvParameters;
  uint32_t ulNotifiedValue;

  while (gData->gameState == 1) {





    xTaskNotifyWait(0x00,
        0xff,
        &ulNotifiedValue,

        ( TickType_t ) 0xffffffffUL);



    if ((ulNotifiedValue & 0x01) != 0) {

    }

    if ((ulNotifiedValue & 0x02) != 0) {

    }

    if ((ulNotifiedValue & 0x04) != 0) {

    }

    if ((ulNotifiedValue & 0x08) != 0) {

    }

    if ((ulNotifiedValue & 0x10) != 0) {

    }

    if ((ulNotifiedValue & 0x20) != 0) {

    }

    if ((ulNotifiedValue & 0x40) != 0) {

    }

    if ((ulNotifiedValue & 0x80) != 0) {

    }
  }







  vTaskDelete(
# 264 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c" 3 4
             0
# 264 "C:\\Users\\shinra\\CHIC-pocs\\Pierre\\nRF5_SDK_15.0.0_a53641a\\examples\\ble_peripheral\\ble_app_hrs_freertos\\pca10056\\s140\\ses\\p_lib\\p_game.c"
                 );
}



void game_initTasks() {
  game_initLedMatrix();
  game_initTouchScreen();
  gData.gameState = 1;

  xGMainReturned = xTaskCreate(
      vGameMain,
      "GameMain",
      40,
      &gData,
      4,
      &xGMainHandle);

  if (xGMainReturned != ( ( ( BaseType_t ) 1 ) )) {
    printf("error creating a task");
    vTaskDelete(xGMainHandle);
  }

  xDisplayManagerReturned = xTaskCreate(
      vDisplayManager,
      "DisplayManager",
      256,
      &gData,
      3,
      &xDisplayManagerHandle);

  if (xDisplayManagerReturned != ( ( ( BaseType_t ) 1 ) )) {
    printf("error creating a task");
    vTaskDelete(xDisplayManagerHandle);
  }

  xTouchPanelReturned = xTaskCreate(
      vTouchPanel,
      "TouchPanel",
      30,
      &gData,
      2,
      &xTouchPanelHandle);

  if (xTouchPanelReturned != ( ( ( BaseType_t ) 1 ) )) {
    printf("error creating a task");
    vTaskDelete(xTouchPanelHandle);
  }

  xSoundManagerReturned = xTaskCreate(
      vSoundManager,
      "SoundManager",
      15,
      &gData,
      1,
      &xSoundManagerHandle);

  if (xSoundManagerReturned != ( ( ( BaseType_t ) 1 ) )) {
    printf("error creating a task");
    vTaskDelete(xSoundManagerHandle);
  }
}


void GPIOTE_IRQHandler(void) {
  if (nrf_gpiote_event_is_set(NRF_GPIOTE_EVENTS_IN_0)) {
    vTaskNotifyGiveFromISR(xTouchPanelHandle, ( ( BaseType_t ) 0 ));
    nrf_gpiote_event_clear(NRF_GPIOTE_EVENTS_IN_0);
  }
}
