#ifndef _APP_IOS_AND_REGS_H_
#define _APP_IOS_AND_REGS_H_
#include "cpu.h"

void init_ios(void);
/************************************************************************/
/* Definition of input pins                                             */
/************************************************************************/
// DEVICE_AT_4            Description: Device is connected to CLKOUT4
// DEVICE_AT_5            Description: Device is connected to CLKOUT5
// DEVICE_AT_2            Description: Device is connected to CLKOUT2
// POWER_GOOD             Description: Detects the presence of the USB power
// BUTTON                 Description: User's input button
// DEVICE_AT_0            Description: Device is connected to CLKOUT0
// DEVICE_AT_1            Description: Device is connected to CLKOUT1
// DEVICE_AT_3            Description: Device is connected to CLKOUT3

#define read_DEVICE_AT_4 read_io(PORTA, 2)      // DEVICE_AT_4
#define read_DEVICE_AT_5 read_io(PORTA, 3)      // DEVICE_AT_5
#define read_DEVICE_AT_2 read_io(PORTA, 4)      // DEVICE_AT_2
#define read_POWER_GOOD read_io(PORTB, 0)       // POWER_GOOD
#define read_BUTTON read_io(PORTB, 3)           // BUTTON
#define read_DEVICE_AT_0 read_io(PORTC, 6)      // DEVICE_AT_0
#define read_DEVICE_AT_1 read_io(PORTC, 7)      // DEVICE_AT_1
#define read_DEVICE_AT_3 read_io(PORTR, 0)      // DEVICE_AT_3

/************************************************************************/
/* Definition of output pins                                            */
/************************************************************************/
// BAT_READ               Description: 
// EN_SCREEN_BACKLIGHT    Description: 
// LED_CLK_4              Description: 
// LED_CLK_1              Description: 
// EN_CHARGE              Description: 
// EN_DISCHARGE           Description: 
// LED_CLK_0              Description: 
// LED_CLK_3              Description: 
// LED_CLK_2              Description: 
// LED_CLK_5              Description: 
// LED_POWER              Description: 
// EN_CLOCK_OUT           Description: 
// EN_CLOCK_IN            Description: 
// LED_REPEATER           Description: 
// LED_LOCK               Description: 
// LED_STATE              Description: 

/* BAT_READ */
#define set_BAT_READ set_io(PORTA, 1)
#define clr_BAT_READ clear_io(PORTA, 1)
#define tgl_BAT_READ toggle_io(PORTA, 1)
#define read_BAT_READ read_io(PORTA, 1)

/* EN_SCREEN_BACKLIGHT */
#define set_EN_SCREEN_BACKLIGHT set_io(PORTA, 5)
#define clr_EN_SCREEN_BACKLIGHT clear_io(PORTA, 5)
#define tgl_EN_SCREEN_BACKLIGHT toggle_io(PORTA, 5)
#define read_EN_SCREEN_BACKLIGHT read_io(PORTA, 5)

/* LED_CLK_4 */
#define set_LED_CLK_4 set_io(PORTA, 6)
#define clr_LED_CLK_4 clear_io(PORTA, 6)
#define tgl_LED_CLK_4 toggle_io(PORTA, 6)
#define read_LED_CLK_4 read_io(PORTA, 6)

/* LED_CLK_1 */
#define set_LED_CLK_1 set_io(PORTA, 7)
#define clr_LED_CLK_1 clear_io(PORTA, 7)
#define tgl_LED_CLK_1 toggle_io(PORTA, 7)
#define read_LED_CLK_1 read_io(PORTA, 7)

/* EN_CHARGE */
#define set_EN_CHARGE set_io(PORTB, 1)
#define clr_EN_CHARGE clear_io(PORTB, 1)
#define tgl_EN_CHARGE toggle_io(PORTB, 1)
#define read_EN_CHARGE read_io(PORTB, 1)

/* EN_DISCHARGE */
#define set_EN_DISCHARGE set_io(PORTB, 2)
#define clr_EN_DISCHARGE clear_io(PORTB, 2)
#define tgl_EN_DISCHARGE toggle_io(PORTB, 2)
#define read_EN_DISCHARGE read_io(PORTB, 2)

/* LED_CLK_0 */
#define set_LED_CLK_0 set_io(PORTC, 0)
#define clr_LED_CLK_0 clear_io(PORTC, 0)
#define tgl_LED_CLK_0 toggle_io(PORTC, 0)
#define read_LED_CLK_0 read_io(PORTC, 0)

/* LED_CLK_3 */
#define set_LED_CLK_3 set_io(PORTC, 1)
#define clr_LED_CLK_3 clear_io(PORTC, 1)
#define tgl_LED_CLK_3 toggle_io(PORTC, 1)
#define read_LED_CLK_3 read_io(PORTC, 1)

/* LED_CLK_2 */
#define set_LED_CLK_2 set_io(PORTC, 4)
#define clr_LED_CLK_2 clear_io(PORTC, 4)
#define tgl_LED_CLK_2 toggle_io(PORTC, 4)
#define read_LED_CLK_2 read_io(PORTC, 4)

/* LED_CLK_5 */
#define set_LED_CLK_5 set_io(PORTC, 5)
#define clr_LED_CLK_5 clear_io(PORTC, 5)
#define tgl_LED_CLK_5 toggle_io(PORTC, 5)
#define read_LED_CLK_5 read_io(PORTC, 5)

/* LED_POWER */
#define set_LED_POWER set_io(PORTD, 0)
#define clr_LED_POWER clear_io(PORTD, 0)
#define tgl_LED_POWER toggle_io(PORTD, 0)
#define read_LED_POWER read_io(PORTD, 0)

/* EN_CLOCK_OUT */
#define set_EN_CLOCK_OUT clear_io(PORTD, 1)
#define clr_EN_CLOCK_OUT set_io(PORTD, 1)
#define tgl_EN_CLOCK_OUT toggle_io(PORTD, 1)
#define read_EN_CLOCK_OUT read_io(PORTD, 1)

/* EN_CLOCK_IN */
#define set_EN_CLOCK_IN clear_io(PORTD, 2)
#define clr_EN_CLOCK_IN set_io(PORTD, 2)
#define tgl_EN_CLOCK_IN toggle_io(PORTD, 2)
#define read_EN_CLOCK_IN read_io(PORTD, 2)

/* LED_REPEATER */
#define set_LED_REPEATER set_io(PORTD, 3)
#define clr_LED_REPEATER clear_io(PORTD, 3)
#define tgl_LED_REPEATER toggle_io(PORTD, 3)
#define read_LED_REPEATER read_io(PORTD, 3)

/* LED_LOCK */
#define set_LED_LOCK set_io(PORTD, 4)
#define clr_LED_LOCK clear_io(PORTD, 4)
#define tgl_LED_LOCK toggle_io(PORTD, 4)
#define read_LED_LOCK read_io(PORTD, 4)

/* LED_STATE */
#define set_LED_STATE set_io(PORTD, 5)
#define clr_LED_STATE clear_io(PORTD, 5)
#define tgl_LED_STATE toggle_io(PORTD, 5)
#define read_LED_STATE read_io(PORTD, 5)


/************************************************************************/
/* Registers' structure                                                 */
/************************************************************************/
typedef struct
{
	uint8_t REG_CONFIG;
	uint8_t REG_DEVICES_CONNECTED;
	uint8_t REG_REPEATER_STATUS;
	uint8_t REG_BATTERY_RATE;
	float REG_BATTERY;
	float REG_BATTERY_TH_LOW;
	float REG_BATTERY_TH_HIGH;
	uint16_t REG_BATTERY_CALIBRATION0;
	uint16_t REG_BATTERY_CALIBRATION1;
} AppRegs;

/************************************************************************/
/* Registers' address                                                   */
/************************************************************************/
/* Registers */
#define ADD_REG_CONFIG                      32 // U8     Device's configuration
#define ADD_REG_DEVICES_CONNECTED           33 // U8     Reads if the port has a device connected to (bitmask)
#define ADD_REG_REPEATER_STATUS             34 // U8     Check if device is a repeater or spreading internal timestamp
#define ADD_REG_BATTERY_RATE                35 // U8     Configure how oftne the battery calue is sent to computer
#define ADD_REG_BATTERY                     36 // FLOAT  Reads the current battery charge
#define ADD_REG_BATTERY_TH_LOW              37 // FLOAT  Sets the low threshold from where the battery should start to be charged
#define ADD_REG_BATTERY_TH_HIGH             38 // FLOAT  Sets the high threshold from where the battery stops to be charged
#define ADD_REG_BATTERY_CALIBRATION0        39 // U16    
#define ADD_REG_BATTERY_CALIBRATION1        40 // U16    

/************************************************************************/
/* PWM Generator registers' memory limits                               */
/*                                                                      */
/* DON'T change the APP_REGS_ADD_MIN value !!!                          */
/* DON'T change these names !!!                                         */
/************************************************************************/
/* Memory limits */
#define APP_REGS_ADD_MIN                    0x20
#define APP_REGS_ADD_MAX                    0x28
#define APP_NBYTES_OF_REG_BANK              20

/************************************************************************/
/* Registers' bits                                                      */
/************************************************************************/
#define B_LOCK_TIMESTAMP                   (1<<0)       // Locks that timestamp generation
#define B_UNLOCK_TIMESTAMP                 (1<<1)       // Unlock the timestamp
#define B_START_BATTERY_CYCLE              (1<<2)       // Starts battery cycle to extend batteries life
#define B_START_CHARGE                     (1<<3)       // Starts to charge right away
#define B_START_DISCHARGE                  (1<<4)       // Starts to discharge right away
#define B_STOPS_ANY                        (1<<5)       // Stop any control of the battery and get back to normal function
#define B_REPEATER                         (1<<0)       // Device is a repeater
#define GM_BATTERY_RATE                    3            // Configures the rate at which the battery charge is sent
#define MSK_EACH_60SECONDS                 0            // Sent each minute
#define MSK_EACH_10SECONDS                 1            // Sent each 10 second
#define MSK_EACH_SECOND                    2            // Sent each second
#define MSK_NEVER                          3            // Not sent

#endif /* _APP_REGS_H_ */