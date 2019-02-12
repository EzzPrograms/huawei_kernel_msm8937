/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*-------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = 1.1
 *-----------------------------------------------------------------------*/

#ifndef _PANEL_SLA_TL20_VA_BOE_OTM1289_5P0_720P_VIDEO_H_

#define _PANEL_SLA_TL20_VA_BOE_OTM1289_5P0_720P_VIDEO_H_
/*-----------------------------------------------------------------------*/
/* HEADER files                                                          */
/*-----------------------------------------------------------------------*/
#include "panel.h"

#include "lcdkit_bias_ic_common.h"

#include "lcd_bl.h"

/*-----------------------------------------------------------------------*/
/* Panel configuration                                                   */
/*-----------------------------------------------------------------------*/
static struct panel_config sla_tl20_va_boe_otm1289_5p0_720p_video_panel_data = {
        "lcdkit_sla_tl20_va_boe_otm1289_5p0_720p_video", "dsi:0:", 
        "boe_otm1289_5p0_720p_video", 10, 0, "DISPLAY_1", 0, 406840000, 
        60, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel resolution                                                      */
/*-----------------------------------------------------------------------*/
static struct panel_resolution sla_tl20_va_boe_otm1289_5p0_720p_video_panel_res = {
        720, 1280, 50, 50, 8, 0, 20, 20, 10, 0, 0, 0, 0, 0, 0, 0, 0, 
        0 
};

/*-----------------------------------------------------------------------*/
/* Panel color information                                               */
/*-----------------------------------------------------------------------*/
static struct color_info sla_tl20_va_boe_otm1289_5p0_720p_video_color = {
        24, 0, 0x00, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel on/off command                                                  */
/*-----------------------------------------------------------------------*/
static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd0[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd1[] = {
    0x04, 0x00, 0x29, 0xC0,
    0xff, 0x12, 0x89, 0x01,
   };


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd2[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x80, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd3[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xff, 0x12, 0x89, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd4[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x90, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd5[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xff, 0xb0, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd6[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x80, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd7[] = {
    0x09, 0x00, 0x29, 0xC0,
    0xc0, 0x4a, 0x00, 0x10,
    0x10, 0x96, 0x01, 0x68,
    0x40, 0xFF, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd8[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x90, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd9[] = {
    0x04, 0x00, 0x29, 0xC0,
    0xc0, 0x3b, 0x01, 0x09,
   };


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd10[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x8c, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd11[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xc0, 0x00, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd12[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x80, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd13[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xc1, 0x33, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd14[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x85, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd15[] = {
    0x04, 0x00, 0x29, 0xC0,
    0xc5, 0x0a, 0x0a, 0x46,
   };


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd16[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd17[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xd8, 0x27, 0x27, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd18[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x84, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd19[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xC4, 0x02, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd20[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x93, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd21[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xC4, 0x04, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd22[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x96, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd23[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xF5, 0xE7, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd24[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0xA0, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd25[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xF5, 0x4A, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd26[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x8a, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd27[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xc0, 0x11, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd28[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x83, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd29[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xF5, 0x81, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd30[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x90, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd31[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xc4, 0x96, 0x05, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd32[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x80, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd33[] = {
    0x10, 0x00, 0x29, 0xC0,
    0xcb, 0x14, 0x14, 0x14,
    0x14, 0x14, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
   };


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd34[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x90, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd35[] = {
    0x08, 0x00, 0x29, 0xC0,
    0xcb, 0xFC, 0xFC, 0xFC,
    0x00, 0x14, 0x14, 0x14,
   };


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd36[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x80, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd37[] = {
    0x0F, 0x00, 0x29, 0xC0,
    0xcc, 0x02, 0x0A, 0x0C,
    0x0E, 0x10, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd38[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x90, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd39[] = {
    0x10, 0x00, 0x29, 0xC0,
    0xcc, 0x00, 0x00, 0x00,
    0x00, 0x1E, 0x1D, 0x06,
    0x01, 0x09, 0x0B, 0x0d,
    0x0F, 0x00, 0x00, 0x00,
   };


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd40[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0xa0, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd41[] = {
    0x0E, 0x00, 0x29, 0xC0,
    0xcc, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x1E,
    0x1D, 0x05, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd42[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0xb0, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd43[] = {
    0x0F, 0x00, 0x29, 0xC0,
    0xcc, 0x05, 0x0F, 0x0D,
    0x0B, 0x09, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd44[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0xc0, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd45[] = {
    0x10, 0x00, 0x29, 0xC0,
    0xcc, 0x00, 0x00, 0x00,
    0x00, 0x1D, 0x1E, 0x01,
    0x06, 0x10, 0x0E, 0x0C,
    0x0A, 0x00, 0x00, 0x00,
   };


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd46[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0xd0, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd47[] = {
    0x0E, 0x00, 0x29, 0xC0,
    0xcc, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x1D,
    0x1E, 0x02, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd48[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x80, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd49[] = {
    0x07, 0x00, 0x29, 0xC0,
    0xce, 0x87, 0x03, 0x10,
    0x86, 0x00, 0x00, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd50[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x90, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd51[] = {
    0x0A, 0x00, 0x29, 0xC0,
    0xce, 0x34, 0xff, 0x10,
    0x05, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd52[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0xa0, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd53[] = {
    0x10, 0x00, 0x29, 0xC0,
    0xce, 0x30, 0x83, 0x88,
    0x00, 0x20, 0x00, 0x82,
    0x87, 0x00, 0x81, 0x86,
    0x00, 0x80, 0x85, 0x00,
   };


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd54[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0xb0, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd55[] = {
    0x10, 0x00, 0x29, 0xC0,
    0xce, 0x30, 0x00, 0x84,
    0x00, 0x20, 0x00, 0x01,
    0x83, 0x00, 0x02, 0x82,
    0x00, 0x03, 0x81, 0x00,
   };


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd56[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0xE0, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd57[] = {
    0x09, 0x00, 0x29, 0xC0,
    0xCE, 0x0A, 0x04, 0xFC,
    0x00, 0x00, 0x0A, 0x04,
    0xFC, 0xFF, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd58[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0xF0, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd59[] = {
    0x07, 0x00, 0x29, 0xC0,
    0xCE, 0x01, 0x20, 0x01,
    0x01, 0x00, 0x00, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd60[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd61[] = {
    0x11, 0x00, 0x29, 0xC0,
    0xE1, 0x05, 0x1F, 0x2E,
    0x41, 0x4D, 0x6B, 0x6B,
    0x83, 0x71, 0x5B, 0x63,
    0x4A, 0x32, 0x1E, 0x10,
    0x01, 0xFF, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd62[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd63[] = {
    0x11, 0x00, 0x29, 0xC0,
    0xE2, 0x05, 0x1F, 0x2E,
    0x41, 0x4D, 0x6B, 0x6B,
    0x83, 0x71, 0x5B, 0x63,
    0x4A, 0x32, 0x1E, 0x10,
    0x01, 0xFF, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd64[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0xB3, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd65[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xCA, 0x04, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd66[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd67[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x91, 0x83, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd68[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd69[] = {
    0x04, 0x00, 0x29, 0xC0,
    0xff, 0xff, 0xff, 0xff,
   };


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd70[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x53, 0x2C, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd71[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x55, 0x01, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd72[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x11, 0x00, 0xFF, 0xFF};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd73[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x29, 0x00, 0xFF, 0xFF};




static struct mipi_dsi_cmd sla_tl20_va_boe_otm1289_5p0_720p_video_on_command[] = {
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd0, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd1, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd2, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd3, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd4, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd5, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd6, 0x00},
{0x10, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd7, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd8, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd9, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd10, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd11, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd12, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd13, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd14, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd15, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd16, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd17, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd18, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd19, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd20, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd21, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd22, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd23, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd24, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd25, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd26, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd27, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd28, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd29, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd30, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd31, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd32, 0x00},
{0x14, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd33, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd34, 0x00},
{0xc, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd35, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd36, 0x00},
{0x14, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd37, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd38, 0x00},
{0x14, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd39, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd40, 0x00},
{0x14, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd41, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd42, 0x00},
{0x14, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd43, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd44, 0x00},
{0x14, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd45, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd46, 0x00},
{0x14, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd47, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd48, 0x00},
{0xc, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd49, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd50, 0x00},
{0x10, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd51, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd52, 0x00},
{0x14, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd53, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd54, 0x00},
{0x14, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd55, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd56, 0x00},
{0x10, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd57, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd58, 0x00},
{0xc, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd59, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd60, 0x00},
{0x18, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd61, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd62, 0x00},
{0x18, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd63, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd64, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd65, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd66, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd67, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd68, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd69, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd70, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd71, 0x00},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd72, 0x78},
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_on_cmd73, 0x14}
};
#define SLA_TL20_VA_BOE_OTM1289_5P0_720P_VIDEO_ON_COMMAND 74


static char sla_tl20_va_boe_otm1289_5p0_720p_video_off_cmd0[] = {
    0x28, 0x00, 0x05, 0x80};


static char sla_tl20_va_boe_otm1289_5p0_720p_video_off_cmd1[] = {
    0x10, 0x00, 0x05, 0x80};




static struct mipi_dsi_cmd sla_tl20_va_boe_otm1289_5p0_720p_video_off_command[] = {
{0x4, sla_tl20_va_boe_otm1289_5p0_720p_video_off_cmd0, 0x20},
{0x4, sla_tl20_va_boe_otm1289_5p0_720p_video_off_cmd1, 0x78}
};
#define SLA_TL20_VA_BOE_OTM1289_5P0_720P_VIDEO_OFF_COMMAND 2


static struct command_state sla_tl20_va_boe_otm1289_5p0_720p_video_state = {
        0, 0 
};

/*-----------------------------------------------------------------------*/
/* Command mode panel                                                    */
/*-----------------------------------------------------------------------*/
static struct commandpanel_info sla_tl20_va_boe_otm1289_5p0_720p_video_command_panel = {
        0, 1, 1, 0, 0, 0x2c, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Video mode panel                                                      */
/*-----------------------------------------------------------------------*/
static struct videopanel_info sla_tl20_va_boe_otm1289_5p0_720p_video_video_panel = {
        1, 0, 0, 0, 1, 1, 2, 0, 0x9 
};

/*-----------------------------------------------------------------------*/
/* Lane configuration                                                    */
/*-----------------------------------------------------------------------*/
static struct lane_configuration sla_tl20_va_boe_otm1289_5p0_720p_video_lane_config = {
        4, 0, 1, 1, 1, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel timing                                                          */
/*-----------------------------------------------------------------------*/
static const uint32_t sla_tl20_va_boe_otm1289_5p0_720p_video_timings[]= {
        0x7A, 0x1A, 0x12, 0x00, 0x40, 0x42, 0x16, 0x1E, 0x14, 0x03, 0x04, 0x00 
};

static struct panel_timing sla_tl20_va_boe_otm1289_5p0_720p_video_timing_info = {
        0, 4, 0x04, 0x1A 
};

/*-----------------------------------------------------------------------*/
/* Panel reset sequence                                                  */
/*-----------------------------------------------------------------------*/
static struct panel_reset_sequence sla_tl20_va_boe_otm1289_5p0_720p_video_reset_seq = {
    { 1, 0, 1, }, { 20, 2, 20, }, 2
};

/*-----------------------------------------------------------------------*/
/* Backlight setting                                                     */
/*-----------------------------------------------------------------------*/
static struct backlight sla_tl20_va_boe_otm1289_5p0_720p_video_backlight = {
        2, 1, 255, 1, 2, 0 
};

/*-----------------------------------------------------------------------*/
/* Labibb setting                                                        */
/*-----------------------------------------------------------------------*/
static struct labibb_desc sla_tl20_va_boe_otm1289_5p0_720p_video_labibb = {
        0, 1, 5500000, 5500000, 5500000, 5500000, 20, 3, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* turn on backlight delay                                               */
/*-----------------------------------------------------------------------*/
int sla_tl20_va_boe_otm1289_5p0_720p_video_mdp_pipe_type  = MDSS_MDP_PIPE_TYPE_RGB;

int sla_tl20_va_boe_otm1289_5p0_720p_video_dsi_pll_type  = DSI_PLL_TYPE_28NM;

int sla_tl20_va_boe_otm1289_5p0_720p_video_mipi_signature  = 0xffff;

static const uint32_t sla_tl20_va_boe_otm1289_5p0_720p_video_regulator_setting[]= {
        0x03, 0x08, 0x07, 0x00, 0x20, 0x07, 0x01 
};

/*-----------------------------------------------------------------------*/
/* platform Config                                                       */
/*-----------------------------------------------------------------------*/
static struct lcdkit_platform_config sla_tl20_va_boe_otm1289_5p0_720p_video_panel_platform_config = {
        0, 0, 0, 0, 0x10002, 0x10000, 0x200, 0x20, 0, 0, 0, 60, 0, 
        0, 0, 46, 45, 0, 0, 0, 0, 0, 5500000, 5500000, 108, 0, 0, 0, 
        0, 1, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* misc Information                                                      */
/*-----------------------------------------------------------------------*/
static struct lcdkit_misc_info sla_tl20_va_boe_otm1289_5p0_720p_video_panel_misc_info = {
        0, 0, 0, 0x01, 0x02, 0x01, 0x02, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* delay ctrl                                                            */
/*-----------------------------------------------------------------------*/
static struct lcdkit_delay_ctrl sla_tl20_va_boe_otm1289_5p0_720p_video_panel_delay_ctrl = {
        0, 0, 0, 20, 20, 3, 0, 0, 0, 0, 0, 20, 0, 50 
};

static char sla_tl20_va_boe_otm1289_5p0_720p_video_backlight_cmd0[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x51, 0xFF, 0xFF, 0xFF};




static struct mipi_dsi_cmd sla_tl20_va_boe_otm1289_5p0_720p_video_backlight_command[] = {
{0x8, sla_tl20_va_boe_otm1289_5p0_720p_video_backlight_cmd0, 0x00}
};
#define SLA_TL20_VA_BOE_OTM1289_5P0_720P_VIDEO_BACKLIGHT_COMMAND 1



static struct lcd_bias_voltage_info * sla_tl20_va_boe_otm1289_5p0_720p_video_bias_ic_array[0];
 
#define SLA_TL20_VA_BOE_OTM1289_5P0_720P_VIDEO_BIAS_IC_ARRAY 0


static struct backlight_ic_info * sla_tl20_va_boe_otm1289_5p0_720p_video_backlight_ic_array[0];
 
#define SLA_TL20_VA_BOE_OTM1289_5P0_720P_VIDEO_BACKLIGHT_IC_ARRAY 0


#endif /*_PANEL_SLA_TL20_VA_BOE_OTM1289_5P0_720P_VIDEO_H_*/
