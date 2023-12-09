/*************************************************************/
/*************************************************************/
/**                                                         **/
/** LayerArchitect: MCAL                                    **/
/** File Name : RCC_Private.h                               **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/

#ifndef RCC_PRIVATE_H_
#define RCC_PRIVATE_H_

#define  RCC_TIMEOUT  50000u

#define RCC_CFGR_PLLMUL_MASK   0xFFC3FFFF
#define RCC_CFGR_PLLMUL_POS    18u

/******************************    AHB Peripheral Base Addresses    ******************************/

#define  RCC_BASE_ADDRESS    (RCC_Reg_t*)0x40021000U

#endif /* RCC_PRIVATE_H_ */
