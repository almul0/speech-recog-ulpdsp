/*****************************************************************************/
/*                                                                           */
/* FILENAME                                                                  */
/*   oled.h                                                                  */
/*                                                                           */
/* DESCRIPTION                                                               */
/*   TMS320C5515 USB Stick.                                                  */
/*   Header file for OLED LCD display.                                       */
/*                                                                           */
/* REVISION                                                                  */
/*   Revision: 1.00                                                          */
/*   Author  : Richard Sikora                                                */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/* HISTORY                                                                   */
/*   Revision 1.00                                                           */
/*   20th September 2010. Created by Richard Sikora.                         */
/*                                                                           */
/*****************************************************************************/
/*
 * Copyright (C) 2010 Texas Instruments Incorporated - http://www.ti.com/
 *
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
*/

#ifndef OLED_H
#define OLED_H

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  int oled_init(void)                                                     *
 *                                                                          *
 *      Testing function for the OSD9616 display                            *
 *                                                                          *
 * ------------------------------------------------------------------------ */

int oled_init(void);

/*****************************************************************************/
/* oled_display_message()                                                    */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/* Parameter 1:  Pointer to string containing ascii message for topline.     */
/* Parameter 2:  Pointer to string containing ascii message for bottomline   */
/*                                                                           */
/* RETURNS: Nothing                                                          */
/*                                                                           */
/*****************************************************************************/

int oled_display_message(char * topline, char * bottomline);

/*****************************************************************************/
/* oled_display_bargraph()                                                   */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/* Parameter 1:  Pointer to array containing 96 16-bit input values.         */
/*                                                                           */
/* RETURNS: Nothing                                                          */
/*                                                                           */
/*****************************************************************************/

int oled_display_bargraph (int * message);

/*****************************************************************************/
/* oled_display_waveform()                                                   */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/* Parameter 1:  Pointer to array containing 96 16-bit input values.         */
/*                                                                           */
/* RETURNS: Nothing                                                          */
/*                                                                           */
/*****************************************************************************/


int oled_display_waveform (int * message);

/*****************************************************************************/
/* oled_display_picturew()                                                   */
/*---------------------------------------------------------------------------*/
/*                                                                           */
/* Parameter 1:  Pointer to array containing 96 16-bit input values.         */
/*                                                                           */
/* RETURNS: Nothing                                                          */
/*                                                                           */
/*****************************************************************************/


int oled_display_picture (int * message);

#endif

/*****************************************************************************/
/* End of oled.h                                                             */
/*****************************************************************************/
