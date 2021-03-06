/*
 * voice_record.h
 *
 *  Created on: Dec 4, 2016
 *      Author: detroit
 */

#ifndef VOICE_RECORD_H_
#define VOICE_RECORD_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>


#define WIN_SAMPLES 400
#define WIN_STEP 160
#define DYN_RNG_ADJ 21844

typedef struct linkl{
    signed int dat[WIN_SAMPLES];
    int id;
    int complete;
    struct linkl *next;
} linkl;


extern linkl *link0;

void add_list();
void remove_list();
void write_list(int lista, int posicion, int dato, int flag);
int read_list(int lista, int posicion);
void rx_windowing(signed int rx, uint16_t reset);
int list_length();
void lowen_sf_dr_adj(unsigned int th_scale);

#endif /* VOICE_RECORD_H_ */
