/**************************************************************************//**
 * @file     user_define_func.h
 * @version  V3.00
 * @brief    NandLoader header file for user define function.
 *
 * SPDX-License-Identifier: Apache-2.0
 * @copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/

#ifndef _NANDLOADER_USER_DEFINE_FUNC_H
#define _NANDLOADER_USER_DEFINE_FUNC_H

/*-----------------------------------------------------------------------------------*/
/* This include file should keep empty if user define nothing for user_define_func() */
/*-----------------------------------------------------------------------------------*/

#ifdef __USER_DEFINE_FUNC

#include <string.h>
#include "wblib.h"
#include "turbowriter.h"
#include "N9H20_VPOST.h"

// for Nuvoton N9H20 Demo Board panel 320x240
#define PANEL_WIDTH     320
#define PANEL_HEIGHT    240

// got Logo image from memory address FB_ADDR
#define FB_ADDR         0x00500000

#endif  // end of #ifdef __USER_DEFINE_FUNC

#endif  // end of _NANDLOADER_USER_DEFINE_FUNC_H
