#include "cpu.h"
#include "hwbp_core_types.h"
#include "app_ios_and_regs.h"
#include "app_funcs.h"
#include "hwbp_core.h"

#define F_CPU 32000000
#include <util/delay.h>

/************************************************************************/
/* Declare application registers                                        */
/************************************************************************/
extern AppRegs app_regs;

/************************************************************************/
/* Interrupts from Timers                                               */
/************************************************************************/
// ISR(TCC0_OVF_vect, ISR_NAKED)
// ISR(TCD0_OVF_vect, ISR_NAKED)
// ISR(TCE0_OVF_vect, ISR_NAKED)
// ISR(TCF0_OVF_vect, ISR_NAKED)
// 
// ISR(TCC0_CCA_vect, ISR_NAKED)
// ISR(TCD0_CCA_vect, ISR_NAKED)
// ISR(TCE0_CCA_vect, ISR_NAKED)
// ISR(TCF0_CCA_vect, ISR_NAKED)
// 
// ISR(TCD1_OVF_vect, ISR_NAKED)
// 
// ISR(TCD1_CCA_vect, ISR_NAKED)

/************************************************************************/ 
/* POWER_GOOD                                                           */
/************************************************************************/
ISR(PORTB_INT0_vect, ISR_NAKED)
{
	reti();
	if (read_POWER_GOOD)
	{
		if (core_bool_is_visual_enabled())
		{
			set_LED_POWER;
		}
	}
	else
	{
		clr_LED_POWER;
	}
	
	reti();
}

/************************************************************************/ 
/* BUTTON                                                               */
/************************************************************************/
ISR(PORTB_INT1_vect, ISR_NAKED)
{	
	reti();
	
	clr_LED_CLK_0; clr_LED_CLK_1; clr_LED_CLK_2; clr_LED_LOCK; clr_LED_POWER;
	clr_LED_CLK_3; clr_LED_CLK_4; clr_LED_CLK_5; clr_LED_REPEATER; clr_LED_STATE;
	
	clr_EN_CHARGE;
	clr_EN_DISCHARGE;
	
	clr_BAT_READ;
	
	set_EN_CHARGE;	// Make sure charge is enable to charge the device when in power down
	
	//SLEEP_CTRL = SLEEP_SMODE_PDOWN_gc | SLEEP_SEN_bm;
	//hwbp_app_enable_interrupts;
	//__asm volatile("sleep");
	//wdt_reset_device();
			
	reti();
}