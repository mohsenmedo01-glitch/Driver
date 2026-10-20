                                    /*     author : Mohamed Junior          */
                                /*          Date 20/10/2026            */
#ifndef BIT_MATH_h
#define BIT_MATH_h
#define SET_PIN(REG,BIT_NUM)   REG |=(1<<BIT_NUM)
#define CLR_BIT(REG,BIT_NUM)   REG &=~(1<<BIT_NUM)
#define TOG_BIT(REG,BIT_NUM)   REG ^|=(1<<BUT_NUM)
#define GET_BIT(REG, BIT)     (((REG) >> (BIT_NUM)) & 1U)

#endif 
