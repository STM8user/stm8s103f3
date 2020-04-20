#define CLK_ICKR *(unsigned char*)0x50C0
#define CLK_ICKR_REGAH (1<<5)
#define CLK_ICKR_LSIRDY (1<<4)
#define CLK_ICKR_LSIEN (1<<3)
#define CLK_ICKR_FHWU (1<<2)
#define CLK_ICKR_HSIRDY (1<<1)
#define CLK_ICKR_HSIEN (1<<0)

#define CLK_ECKR *(unsigned char*)0x50C1
#define CLK_ECKR_HSERDY (1<<1)
#define CLK_ECKR_HSEEN (1<<0)

#define CLK_CMSR *(unsigned char*)0x50C3

#define CLK_SWR *(unsigned char*)0x50C4

#define CLK_SWCR *(unsigned char*)0x50C5
#define CLK_SWCR_SWIF (1<<3)
#define CLK_SWCR_SWIEN (1<<2)
#define CLK_SWCR_SWEN (1<<1)
#define CLK_SWCR_SWBSY (1<<0)

#define CLK_CKDIVR *(unsigned char*)0x50C6

#define CLK_PCKENR1 *(unsigned char*)0x50C7

#define CLK_CSSR *(unsigned char*)0x50C8
#define CLK_CSSR_CSSD (1<<3)
#define CLK_CSSR_CSSDIE (1<<2)
#define CLK_CSSR_AUX (1<<1)
#define CLK_CSSR_CSSEN (1<<0)

#define CLK_CCOR *(unsigned char*)0x50C9
#define CLK_CCOR_CCOBSY (1<<6)
#define CLK_CCOR_CCORDY (1<<5)
#define CLK_CCOR_CCOSEL3 (1<<4)   //CCOSEL[3:0]
#define CLK_CCOR_CCOSEL2 (1<<3)  //CCOSEL[3:0]
#define CLK_CCOR_CCOSEL1 (1<<2)  //CCOSEL[3:0]
#define CLK_CCOR_CCOSEL0 (1<<1)  //CCOSEL[3:0]
#define CLK_CCOR_CCOEN (1<<0)

#define CLK_PCKENR2 *(unsigned char*)0x50CA

#define CLK_HSITRIMR *(unsigned char*)0x50CB

#define CLK_SWIMCCR *(unsigned char*)0x50DC
#define CLK_SWIMCCR_SWIMCLK (1<<0)