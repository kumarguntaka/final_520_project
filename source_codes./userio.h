#ifndef USERIO_H_
#define USERIO_H_

#include "xstatus.h"
#include "xgpio.h"

#define BTN_SW_CHANNEL	 1	/* Channel 1 of the GPIO Device */
#define LED_CHANNEL	 2	/* Channel 2 of the GPIO Device */
#define BTN_SW_INTERRUPT XGPIO_IR_CH1_MASK  /* Channel 1 Interrupt Mask */

#define BTNU_MASK 	0x0002
#define BTNR_MASK 	0x0008
#define BTND_MASK 	0x0010
#define BTNL_MASK 	0x0004
#define BTNC_MASK 	0x0001
//#define SWS_MASK	0x00FF
#define BTNS_SWS_MASK 0x001F

#define LEDS_MASK	0xFF

#define RETURN_ON_FAILURE(x) if ((x) != XST_SUCCESS) return XST_FAILURE;

XStatus fnInitUserIO(XGpio *psGpio);
void fnUserIOIsr(void *pvInst);

#endif /* USERIO_H_ */
