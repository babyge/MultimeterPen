/**
 *      __            ____
 *     / /__ _  __   / __/                      __  
 *    / //_/(_)/ /_ / /  ___   ____ ___  __ __ / /_ 
 *   / ,<  / // __/_\ \ / _ \ / __// _ \/ // // __/ 
 *  /_/|_|/_/ \__//___// .__//_/   \___/\_,_/ \__/  
 *                    /_/   github.com/KitSprout    
 * 
 *  @file    stm32l0_delay.c
 *  @author  KitSprout
 *  @brief   
 * 
 */

/* Includes --------------------------------------------------------------------------------*/
#include "stm32l0_delay.h"

/* Define ----------------------------------------------------------------------------------*/
/* Macro -----------------------------------------------------------------------------------*/
/* Typedef ---------------------------------------------------------------------------------*/
/* Variables -------------------------------------------------------------------------------*/
/* Prototypes ------------------------------------------------------------------------------*/
/* Functions -------------------------------------------------------------------------------*/

/**
 *  @brief  delay_nop
 */
void delay_nop( __IO uint32_t __n )
{
    while (__n--)
    {
        __nop();
    }
}

/**
 *  @brief  delay_us
 */
void delay_us( __IO uint32_t __us )
{
    while (__us--)
    {
        __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();
        __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();
        __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();
        __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();
        __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();
        __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();
        __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();
        __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();
        __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();
        __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();  __nop();
    }
}

/*************************************** END OF FILE ****************************************/