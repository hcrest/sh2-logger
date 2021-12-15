/*
 * Copyright 2021 CEVA, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License and
 * any applicable agreements you may have with CEVA, Inc.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FTDI_HAL_H
#define FTDI_HAL_H

#include "sh2_hal.h"
#ifndef _WIN32
#include <termios.h>
#endif

#ifdef _WIN32
sh2_Hal_t * ftdi_hal_init(unsigned deviceIdx);
sh2_Hal_t * ftdi_hal_dfu_init(unsigned deviceIdx);
#else
sh2_Hal_t * ftdi_hal_init(const char * device_filename);
sh2_Hal_t * ftdi_hal_dfu_init(const char * device_filename);
#endif

#endif // FTDI_HAL_H

