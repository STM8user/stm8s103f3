#define TIM4_CR1  *(unsigned char*)0x5340
#define TIM4_CR1_ARPE (1<<7)
#define TIM4_CR1_OPM  (1<<3)
#define TIM4_CR1_URS  (1<<2)
#define TIM4_CR1_UDIS (1<<1)
#define TIM4_CR1_CEN  (1<<0)

#define TIM4_IER  *(unsigned char*)0x5343
#define TIM4_IER_UIE (1<<0)

#define TIM4_SR   *(unsigned char*)0x5344
#define TIM4_SR_UIF (1<<0)

#define TIM4_EGR  *(unsigned char*)0x5345
#define TIM4_EGR_UG (1<<0)

#define TIM4_CNTR *(unsigned char*)0x5346

#define TIM4_PSCR *(unsigned char*)0x5347

#define TIM4_ARR  *(unsigned char*)0x5348