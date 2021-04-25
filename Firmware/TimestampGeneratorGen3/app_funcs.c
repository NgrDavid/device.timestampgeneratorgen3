#include "app_funcs.h"
#include "app_ios_and_regs.h"
#include "hwbp_core.h"


/************************************************************************/
/* Create pointers to functions                                         */
/************************************************************************/
extern AppRegs app_regs;

void (*app_func_rd_pointer[])(void) = {
	&app_read_REG_CONFIG,
	&app_read_REG_DEVICES_CONNECTED,
	&app_read_REG_REPEATER_STATUS,
	&app_read_REG_BATTERY_RATE,
	&app_read_REG_BATTERY,
	&app_read_REG_BATTERY_TH_LOW,
	&app_read_REG_BATTERY_TH_HIGH,
	&app_read_REG_BATTERY_CALIBRATION0,
	&app_read_REG_BATTERY_CALIBRATION1
};

bool (*app_func_wr_pointer[])(void*) = {
	&app_write_REG_CONFIG,
	&app_write_REG_DEVICES_CONNECTED,
	&app_write_REG_REPEATER_STATUS,
	&app_write_REG_BATTERY_RATE,
	&app_write_REG_BATTERY,
	&app_write_REG_BATTERY_TH_LOW,
	&app_write_REG_BATTERY_TH_HIGH,
	&app_write_REG_BATTERY_CALIBRATION0,
	&app_write_REG_BATTERY_CALIBRATION1
};


/************************************************************************/
/* REG_CONFIG                                                           */
/************************************************************************/
uint8_t battery_mode = 0;
uint8_t battery_cycle_state = 0;

void app_read_REG_CONFIG(void)
{
	app_regs.REG_CONFIG &= ~(B_START_CHARGE | B_START_DISCHARGE | B_START_BATTERY_CYCLE);
	app_regs.REG_CONFIG |= battery_mode;
}

bool app_write_REG_CONFIG(void *a)
{
	uint8_t reg = *((uint8_t*)a);
	
	if (reg & B_START_BATTERY_CYCLE) { battery_mode = B_START_BATTERY_CYCLE; battery_cycle_state = 0;}
	if (reg & B_START_DISCHARGE) {battery_mode = B_START_DISCHARGE;}
	if (reg & B_START_CHARGE) { battery_mode = B_START_CHARGE; }
	
	if (reg & B_STOPS_ANY) { battery_mode = 0; }

	app_regs.REG_CONFIG = reg;
	return true;
}


/************************************************************************/
/* REG_DEVICES_CONNECTED                                                */
/************************************************************************/
void app_read_REG_DEVICES_CONNECTED(void)
{
	//app_regs.REG_DEVICES_CONNECTED = 0;

}

bool app_write_REG_DEVICES_CONNECTED(void *a)
{
	uint8_t reg = *((uint8_t*)a);

	app_regs.REG_DEVICES_CONNECTED = reg;
	return true;
}


/************************************************************************/
/* REG_REPEATER_STATUS                                                  */
/************************************************************************/
void app_read_REG_REPEATER_STATUS(void)
{
	//app_regs.REG_REPEATER_STATUS = 0;

}

bool app_write_REG_REPEATER_STATUS(void *a)
{
	uint8_t reg = *((uint8_t*)a);

	app_regs.REG_REPEATER_STATUS = reg;
	return true;
}


/************************************************************************/
/* REG_BATTERY_RATE                                                     */
/************************************************************************/
void app_read_REG_BATTERY_RATE(void) {}
bool app_write_REG_BATTERY_RATE(void *a)
{
	uint8_t reg = *((uint8_t*)a);
	
	if (reg & ~GM_BATTERY_RATE) return false;

	app_regs.REG_BATTERY_RATE = reg;
	return true;
}


/************************************************************************/
/* REG_BATTERY                                                          */
/************************************************************************/
void app_read_REG_BATTERY(void)
{
	//app_regs.REG_BATTERY = 0;

}

bool app_write_REG_BATTERY(void *a)
{
	float reg = *((float*)a);

	app_regs.REG_BATTERY = reg;
	return true;
}


/************************************************************************/
/* REG_BATTERY_TH_LOW                                                   */
/************************************************************************/
void app_read_REG_BATTERY_TH_LOW(void)
{
	//app_regs.REG_BATTERY_TH_LOW = 0;

}

bool app_write_REG_BATTERY_TH_LOW(void *a)
{
	float reg = *((float*)a);

	app_regs.REG_BATTERY_TH_LOW = reg;
	return true;
}


/************************************************************************/
/* REG_BATTERY_TH_HIGH                                                  */
/************************************************************************/
void app_read_REG_BATTERY_TH_HIGH(void)
{
	//app_regs.REG_BATTERY_TH_HIGH = 0;

}

bool app_write_REG_BATTERY_TH_HIGH(void *a)
{
	float reg = *((float*)a);

	app_regs.REG_BATTERY_TH_HIGH = reg;
	return true;
}


/************************************************************************/
/* REG_BATTERY_CALIBRATION0                                             */
/************************************************************************/
void app_read_REG_BATTERY_CALIBRATION0(void)
{
	//app_regs.REG_BATTERY_CALIBRATION0 = 0;

}

bool app_write_REG_BATTERY_CALIBRATION0(void *a)
{
	uint16_t reg = *((uint16_t*)a);

	app_regs.REG_BATTERY_CALIBRATION0 = reg;
	return true;
}


/************************************************************************/
/* REG_BATTERY_CALIBRATION1                                             */
/************************************************************************/
void app_read_REG_BATTERY_CALIBRATION1(void)
{
	//app_regs.REG_BATTERY_CALIBRATION1 = 0;

}

bool app_write_REG_BATTERY_CALIBRATION1(void *a)
{
	uint16_t reg = *((uint16_t*)a);

	app_regs.REG_BATTERY_CALIBRATION1 = reg;
	return true;
}