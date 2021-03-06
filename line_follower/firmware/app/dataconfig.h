#ifndef _CONF_H
#define _CONF_H

#include "misc.h"

typedef struct {
    struct {
        int debug;
        int p, i, d;
    } cfg;    // could be written only by user, stored in eeprom
    struct {
        unsigned long ch[6];
        float pos;
    } data;    // could be written only by hardware
    struct {
    } status;    // could be written both by user and hardware
} DataConfig_t;

DataConfig_t* DC_Get(void);
void DC_Config(void);
void DC_Update(void);

#endif
