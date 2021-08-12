/***********************************************************************
	Title:	USB Pinguino Bootloader
	File:	delay.h
	Descr.: Microsecond delay routine for MIPS processor
	Author:	R�gis Blanchot <rblanchot@gmail.com>

	This file is part of Pinguino (http://www.pinguino.cc)
	Released under the LGPL license (http://www.gnu.org/licenses/lgpl.html)
***********************************************************************/

#ifndef _DELAY_H_
#define _DELAY_H_

#include "typedefs.h"

void Delayus(UINT32);
#if (_TEST_ENABLE_)
void Delayms(UINT32);
#endif

#endif // _DELAY_H_
