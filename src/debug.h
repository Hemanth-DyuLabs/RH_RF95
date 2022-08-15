//#define DEBUG

/*
  du_debug.h - Debug functions
  Copyright (c) 2020-21 Dyulabs Pvt. Ltd.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
#ifndef _DU_DEBUG_H_
#define _DU_DEBUG_H_

#include <Arduino.h>

typedef enum
{
    DEBUG_FAIL = 0x01,
    DEBUG_CRITICAL,
    DEBUG_ERROR,
    DEBUG_WARNING,
    DEBUG_INFO,
    DEBUG_LOG,
    DEBUG_VER,
    DEBUG_OFF,
} snyj_debug;

/* LOG level for local debugging */
#define DEBUG_LEVEL DEBUG_LOG

#define ERROR 1
#define INFO 2
#define OTH 3


#define _SPRINT(level, fmt, ...)          \
    if (level <= DEBUG_LEVEL)             \
    {                                     \
        Serial.print(fmt, ##__VA_ARGS__); \
    }                                     \
    else                                  \
    {                                     \
    }

#define _SPRINTLN(level, fmt, ...)          \
    if (level <= DEBUG_LEVEL)               \
    {                                       \
        Serial.println(fmt, ##__VA_ARGS__); \
    }                                       \
    else                                    \
    {                                       \
    }

#define _SPRINTF(level, fmt, ...)          \
    if (level <= DEBUG_LEVEL)              \
    {                                      \
        Serial.printf(fmt, ##__VA_ARGS__); \
    }                                      \
    else                                   \
    {                                      \
    }

#define _SERIAL(rate)       \
    if (rate != 0)          \
    {                       \
        Serial.begin(rate); \
    }                       \
    else                    \
    {                       \
    }

#endif //_DU_DEBUG_H_
