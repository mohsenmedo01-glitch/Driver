                                    /*     author : Mohamed Junior          */
                                /*          Date 20/10/2026            */
#ifndef RCC_Private_H_
#define RCC_Private_H_
#define BASE_ADDRESS_           0x4002 3800
#define RCC_CR_                 (*(volatile u32*)(0x40023800+0x00))
#define RCC_CFGR_               (*(volatile u32*)(0x40023800+0x08))
#define RCC_PLLCFGR_            (*(volatile u32*)(0x40023800+0x04))
#define RCC_AHB1ENR_            (*(volatile u32*)(0x40023800+0x30))
#define RCC_APB1ENR_            (*(volatile u32*)(0x40023800+0x40))
#define RCC_APB2ENR_            (*(volatile u32*)(0x40023800+0x44))
#endif