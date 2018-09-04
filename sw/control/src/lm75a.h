/*****************************************************************************
 *   eeprom.h:  Header file for the 24LC08 EEPROM
 *
 *   Copyright(C) 2009, Embedded Artists AB
 *   All rights reserved.
 *
******************************************************************************/
#ifndef __LM75A_H
#define __LM75A_H


void lm75a_init (void);
int16_t lm75a_readTemp(void);


#endif /* end __LM75A_H */
/****************************************************************************
**                            End Of File
*****************************************************************************/
