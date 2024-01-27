// Copyright 2023 m.ki (@telzo2000)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
#define MASTER_LEFT
#define SOFT_SERIAL_PIN GP0

#define I2C1_SCL_PIN GP27
#define I2C1_SDA_PIN GP26
#define I2C_DRIVER I2CD1
#define POINTING_DEVICE_ROTATION_180
#define PIMORONI_TRACKBALL_SCALE 10