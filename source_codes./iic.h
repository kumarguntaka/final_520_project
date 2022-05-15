#ifndef IIC_H_
#define IIC_H_

#include "xiic.h"

#define RETURN_ON_FAILURE(x) if ((x) != XST_SUCCESS) return XST_FAILURE;

typedef struct
{
	u8 rgbMac[6];
} macAddress_t;

XStatus fnInitIic(XIic *psIic);
XStatus fnReadMACAsync(XIic *psIic, macAddress_t *pMac, XStatus *pfMacReady);

#endif /* IIC_H_ */
