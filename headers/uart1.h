#define UART1_SR   *(unsigned char*)0x5230
#define UART_SR_TXE     (1<<7)
#define UART_SR_TC      (1<<6)
#define UART_SR_RXNE    (1<<5)
#define UART_SR_IDLE    (1<<4)
#define UART_SR_OR/LHE  (1<<3)
#define UART_SR_OR      (1<<3)
#define UART_SR_LHE     (1<<3)
#define UART_SR_NF      (1<<2)
#define UART_SR_FE      (1<<1)
#define UART_SR_PE      (1<<0)

#define UART1_DR   *(unsigned char*)0x5231
#define UART_DR_7 (1<<7)
#define UART_DR_6 (1<<6)
#define UART_DR_5 (1<<5)
#define UART_DR_4 (1<<4)
#define UART_DR_3 (1<<3)
#define UART_DR_2 (1<<2)
#define UART_DR_1 (1<<1)
#define UART_DR_1 (1<<0)

#define UART1_BRR1 *(unsigned char*)0x5232
#define UART_BRR1_DIV7 (1<<7)
#define UART_BRR1_DIV6 (1<<6)
#define UART_BRR1_DIV5 (1<<5)
#define UART_BRR1_DIV4 (1<<4)
#define UART_BRR1_DIV3 (1<<3)
#define UART_BRR1_DIV2 (1<<2)
#define UART_BRR1_DIV1 (1<<1)
#define UART_BRR1_DIV0 (1<<0) 

#define UART1_BRR2 *(unsigned char*)0x5233
#define UART_BRR1_DIV7 (1<<7)
#define UART_BRR1_DIV6 (1<<6)
#define UART_BRR1_DIV5 (1<<5)
#define UART_BRR1_DIV4 (1<<4)
#define UART_BRR1_DIV3 (1<<3)
#define UART_BRR1_DIV2 (1<<2)
#define UART_BRR1_DIV1 (1<<1)
#define UART_BRR1_DIV0 (1<<0)

#define UART1_CR1  *(unsigned char*)0x5234
#define UART_CR1_R8    (1<<7)
#define UART_CR1_T8    (1<<6)
#define UART_CR1_UARTD (1<<5)
#define UART_CR1_M     (1<<4)
#define UART_CR1_WAKE  (1<<3)
#define UART_CR1_PCEN  (1<<2)
#define UART_CR1_PS    (1<<1)
#define UART_CR1_PIEN  (1<<0)

#define UART1_CR2  *(unsigned char*)0x5235
#define UART_CR2_TIEN  (1<<7)
#define UART_CR2_TCIEN (1<<6)
#define UART_CR2_RIEN  (1<<5)
#define UART_CR2_ILIEN (1<<4)
#define UART_CR2_TEN   (1<<3)
#define UART_CR2_REN   (1<<2)
#define UART_CR2_RWU   (1<<1)
#define UART_CR2_SBK   (1<<0)

#define UART1_CR3  *(unsigned char*)0x5236
#define UART_CR3_LINEN (1<<6)
#define UART_CR3_STOP1 (1<<5)
#define UART_CR3_STOP0 (1<<4)
#define UART_CR3_CLKEN (1<<3)
#define UART_CR3_CPOL  (1<<2)
#define UART_CR3_CPHA  (1<<1)
#define UART_CR3_LBCL  (1<<0)

#define UART1_CR4  *(unsigned char*)0x5237
#define UART_CR4_LBDIEN (1<<6)
#define UART_CR4_LBDL (1<<5)
#define UART_CR4_LBDF (1<<4)
#define UART_CR4_ADD3 (1<<3)
#define UART_CR4_ADD2 (1<<2)
#define UART_CR4_ADD1 (1<<1)
#define UART_CR4_ADD0 (1<<0)

#define UART1_CR5  *(unsigned char*)0x5238
#define UART1_CR5_SCEN  (1<<5)
#define UART1_CR5_NACK  (1<<4)
#define UART1_CR5_HDSEL (1<<3)
#define UART1_CR5_IRLP  (1<<2)
#define UART1_CR5_IREN  (1<<1)

#define UART1_GTR  *(unsigned char*)0x5239
#define UART1_GTR_GT7(1<<7)
#define UART1_GTR_GT6(1<<6)
#define UART1_GTR_GT5(1<<5)
#define UART1_GTR_GT4(1<<4)
#define UART1_GTR_GT3(1<<3)
#define UART1_GTR_GT2(1<<2)
#define UART1_GTR_GT1(1<<1)
#define UART1_GTR_GT0(1<<0)

#define UART1_PSCR *(unsigned char*)0x523A
#define UART1_PSCR_7 (1<<7)
#define UART1_PSCR_6 (1<<6)
#define UART1_PSCR_5 (1<<5)
#define UART1_PSCR_4 (1<<4)
#define UART1_PSCR_3 (1<<3)
#define UART1_PSCR_2 (1<<2)
#define UART1_PSCR_1 (1<<1)
#define UART1_PSCR_0 (1<<0)