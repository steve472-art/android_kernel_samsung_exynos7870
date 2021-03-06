/* linux/drivers/video/fbdev/exynos/decon_7870/panels/ea8061s_aid_dimming.h
 *
 * Header file for Samsung AID Dimming Driver.
 *
 * Copyright (c) 2013 Samsung Electronics
 * Minwoo Kim <minwoo7945.kim@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __EA8061S_AID_DIMMING_H__
#define __EA8061S_AID_DIMMING_H__

/* ea8061s j7x */
static signed char ctbl5nit_ea[30] = {0, 0, 0, 0, 0, 0, -8, 0, -3, -10, 0, -2, -11, 0, -1, -9, 0, 5, -4, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 2};
static signed char ctbl6nit_ea[30] = {0, 0, 0, 0, 0, 0, -9, 0, -2, -12, 0, -3, -8, 0, -1, -7, 0, 4, -4, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 2};
static signed char ctbl7nit_ea[30] = {0, 0, 0, 0, 0, 0, -9, 0, -3, -14, 0, -5, -7, 0, -1, -7, 0, 4, -3, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 2};
static signed char ctbl8nit_ea[30] = {0, 0, 0, 0, 0, 0, -10, 0, -3, -13, 0, -6, -8, 0, -2, -6, 0, 4, -2, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 2};
static signed char ctbl9nit_ea[30] = {0, 0, 0, 0, 0, 0, -10, 0, -2, -12, 0, -6, -8, 0, -2, -6, 0, 4, 0, 0, 2, 0, 0, 0, 1, 0, 1, 0, 0, 1};
static signed char ctbl10nit_ea[30] = {0, 0, 0, 0, 0, 0, -10, 0, -4, -12, 0, -3, -7, 0, -3, -6, 0, 4, -1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1};
static signed char ctbl11nit_ea[30] = {0, 0, 0, 0, 0, 0, -10, 0, -2, -11, 0, -2, -6, 0, -3, -5, 0, 4, -1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1};
static signed char ctbl12nit_ea[30] = {0, 0, 0, 0, 0, 0, -13, 0, -4, -9, 0, -2, -6, 0, -3, -4, 0, 4, -1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0};
static signed char ctbl13nit_ea[30] = {0, 0, 0, 0, 0, 0, -13, 0, -2, -9, 0, -3, -7, 0, -2, -4, 0, 4, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0};
static signed char ctbl14nit_ea[30] = {0, 0, 0, 0, 0, 0, -15, 0, -5, -9, 0, -3, -6, 0, -2, -4, 0, 4, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0};
static signed char ctbl15nit_ea[30] = {0, 0, 0, 0, 0, 0, -15, 0, -4, -8, 0, -3, -5, 0, -2, -4, 0, 4, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0};
static signed char ctbl16nit_ea[30] = {0, 0, 0, 0, 0, 0, -15, 0, -3, -7, 0, -3, -4, 0, -3, -4, 0, 4, 0, 0, 2, 0, 0, 0, 1, 0, 1, 0, 0, 0};
static signed char ctbl17nit_ea[30] = {0, 0, 0, 0, 0, 0, -15, 0, -3, -7, 0, -3, -4, 0, -3, -3, 0, 4, 0, 0, 2, 0, 0, 0, 1, 0, 1, 0, 0, 0};
static signed char ctbl19nit_ea[30] = {0, 0, 0, 0, 0, 0, -16, 0, -5, -8, 0, -3, -2, 0, -3, -3, 0, 4, 0, 0, 2, 0, 0, 0, 1, 0, 1, 0, 0, 0};
static signed char ctbl20nit_ea[30] = {0, 0, 0, 0, 0, 0, -17, 0, -4, -1, 0, -3, -5, 0, -3, -2, 0, 4, 1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl21nit_ea[30] = {0, 0, 0, 0, 0, 0, -10, 0, -6, -4, 0, -4, -5, 0, -4, -2, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1};
static signed char ctbl22nit_ea[30] = {0, 0, 0, 0, 0, 0, -10, 0, -10, -3, 0, -2, -5, 0, -4, -2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1};
static signed char ctbl24nit_ea[30] = {0, 0, 0, 0, 0, 0, -8, 0, -4, -3, 0, -1, -5, 0, -6, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1};
static signed char ctbl25nit_ea[30] = {0, 0, 0, 0, 0, 0, -7, 0, -6, -2, 0, -1, -6, 0, -6, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1};
static signed char ctbl27nit_ea[30] = {0, 0, 0, 0, 0, 0, -8, 0, -8, -1, 0, 1, -6, 0, -7, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1};
static signed char ctbl29nit_ea[30] = {0, 0, 0, 0, 0, 0, -8, 0, -8, -1, 0, 1, -6, 0, -7, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 1};
static signed char ctbl30nit_ea[30] = {0, 0, 0, 0, 0, 0, -8, 0, -11, -3, 0, 1, -5, 0, -7, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 1};
static signed char ctbl32nit_ea[30] = {0, 0, 0, 0, 0, 0, -11, 0, -15, -3, 0, -2, -3, 0, -4, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 1};
static signed char ctbl34nit_ea[30] = {0, 0, 0, 0, 0, 0, -10, 0, -13, -3, 0, -2, -3, 0, -4, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 1};
static signed char ctbl37nit_ea[30] = {0, 0, 0, 0, 0, 0, -9, 0, -13, -4, 0, -3, -4, 0, -5, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 1};
static signed char ctbl39nit_ea[30] = {0, 0, 0, 0, 0, 0, -9, 0, -11, -3, 0, -3, -4, 0, -5, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 1};
static signed char ctbl41nit_ea[30] = {0, 0, 0, 0, 0, 0, -10, 0, -10, -2, 0, -3, -4, 0, -5, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 1};
static signed char ctbl44nit_ea[30] = {0, 0, 0, 0, 0, 0, -10, 0, -9, -1, 0, -2, -4, 0, -5, 0, 0, 3, 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 1};
static signed char ctbl47nit_ea[30] = {0, 0, 0, 0, 0, 0, -9, 0, -7, -2, 0, -5, -4, 0, -5, 0, 0, 3, 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 1};
static signed char ctbl50nit_ea[30] = {0, 0, 0, 0, 0, 0, -9, 0, -8, -2, 0, -3, -3, 0, -4, 0, 0, 2, 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 1};
static signed char ctbl53nit_ea[30] = {0, 0, 0, 0, 0, 0, -10, 0, -10, 0, 0, -4, -3, 0, -4, 0, 0, 2, 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 1};
static signed char ctbl56nit_ea[30] = {0, 0, 0, 0, 0, 0, -10, 0, -10, 0, 0, -3, -3, 0, -4, 0, 0, 2, 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 1};
static signed char ctbl60nit_ea[30] = {0, 0, 0, 0, 0, 0, -8, 0, -8, -2, 0, -4, -3, 0, -4, 0, 0, 2, 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 1};
static signed char ctbl64nit_ea[30] = {0, 0, 0, 0, 0, 0, -8, 0, -10, -1, 0, -5, -3, 0, -4, 0, 0, 2, 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 1};
static signed char ctbl68nit_ea[30] = {0, 0, 0, 0, 0, 0, -8, 0, -8, -1, 0, -5, -3, 0, -4, 0, 0, 2, 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 1};
static signed char ctbl72nit_ea[30] = {0, 0, 0, 0, 0, 0, -9, 0, -8, -1, 0, -5, -3, 0, -4, 0, 0, 2, 0, 0, 1, -1, 0, -1, 0, 0, -1, 1, 0, 1};
static signed char ctbl77nit_ea[30] = {0, 0, 0, 0, 0, 0, -9, 0, -9, 0, 0, -2, -1, 0, -3, 1, 0, 3, -1, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 1};
static signed char ctbl82nit_ea[30] = {0, 0, 0, 0, 0, 0, -8, 0, -9, 0, 0, -2, -2, 0, -3, 1, 0, 3, -1, 0, 0, 0, 0, -1, 0, 0, -1, 1, 0, 1};
static signed char ctbl87nit_ea[30] = {0, 0, 0, 0, 0, 0, -8, 0, -8, 0, 0, -2, -1, 0, -3, 1, 0, 3, -1, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 1};
static signed char ctbl93nit_ea[30] = {0, 0, 0, 0, 0, 0, -9, 0, -8, 0, 0, -2, -2, 0, -3, 1, 0, 3, -1, 0, 0, -1, 0, -1, 0, 0, -1, 1, 0, 1};
static signed char ctbl98nit_ea[30] = {0, 0, 0, 0, 0, 0, -9, 0, -8, 0, 0, -2, -1, 0, -3, 1, 0, 3, -1, 0, 0, 0, 0, -1, 0, 0, -1, 1, 0, 1};
static signed char ctbl105nit_ea[30] = {0, 0, 0, 0, 0, 0, -7, 0, -6, 0, 0, -2, -1, 0, -3, -1, 0, 2, 0, 0, -1, 0, 0, 0, 0, 0, -1, 1, 0, 1};
static signed char ctbl111nit_ea[30] = {0, 0, 0, 0, 0, 0, -10, 0, -9, 0, 0, -2, -2, 0, -3, -1, 0, 2, 0, 0, -3, 0, 0, 2, 0, 0, 1, 1, 0, 1};
static signed char ctbl119nit_ea[30] = {0, 0, 0, 0, 0, 0, -10, 0, -7, 2, 0, -1, -2, 0, -3, -1, 0, 2, 0, 0, -3, 0, 0, 2, 0, 0, 1, 1, 0, 1};
static signed char ctbl126nit_ea[30] = {0, 0, 0, 0, 0, 0, -5, 0, -4, 2, 0, -2, -2, 0, -3, -1, 0, 2, 0, 0, -3, 0, 0, 2, 0, 0, 1, 1, 0, 1};
static signed char ctbl134nit_ea[30] = {0, 0, 0, 0, 0, 0, -5, 0, -1, 1, 0, -2, -2, 0, -3, -1, 0, 2, 0, 0, -3, 0, 0, 2, 0, 0, 1, 1, 0, 1};
static signed char ctbl143nit_ea[30] = {0, 0, 0, 0, 0, 0, -4, 0, 2, 0, 0, -4, -1, 0, -3, -1, 0, 2, 0, 0, -3, 0, 0, 2, 0, 0, 1, 1, 0, 1};
static signed char ctbl152nit_ea[30] = {0, 0, 0, 0, 0, 0, -3, 0, 3, 0, 0, -4, -1, 0, -3, -1, 0, 2, 0, 0, -3, 0, 0, 2, 0, 0, 1, 1, 0, 1};
static signed char ctbl162nit_ea[30] = {0, 0, 0, 0, 0, 0, -3, 0, 3, 0, 0, -4, -1, 0, -3, -1, 0, 2, 0, 0, -3, 0, 0, 2, 0, 0, 1, 1, 0, 1};
static signed char ctbl172nit_ea[30] = {0, 0, 0, 0, 0, 0, -3, 0, 3, 0, 0, -4, -1, 0, -3, -1, 0, 2, 0, 0, -3, 0, 0, 2, 0, 0, 1, 1, 0, 1};
static signed char ctbl183nit_ea[30] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl195nit_ea[30] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl207nit_ea[30] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl220nit_ea[30] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl234nit_ea[30] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl249nit_ea[30] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl265nit_ea[30] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl282nit_ea[30] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl300nit_ea[30] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl316nit_ea[30] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl333nit_ea[30] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl360nit_ea[30] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

static signed char elv_5nit_ea[6] = {0xB6, 0xCC, 0x84, 0x12, 0x0D, 0x1F};
static signed char elv_6nit_ea[6] = {0xB6, 0xCC, 0x84, 0x12, 0x0D, 0x1F};
static signed char elv_7nit_ea[6] = {0xB6, 0xCC, 0x84, 0x12, 0x0D, 0x1F};
static signed char elv_8nit_ea[6] = {0xB6, 0xCC, 0x84, 0x12, 0x0D, 0x1F};
static signed char elv_9nit_ea[6] = {0xB6, 0xCC, 0x84, 0x12, 0x0D, 0x1F};
static signed char elv_10nit_ea[6] = {0xB6, 0xCC, 0x84, 0x12, 0x0D, 0x1F};
static signed char elv_11nit_ea[6] = {0xB6, 0xCC, 0x84, 0x12, 0x0D, 0x1F};
static signed char elv_12nit_ea[6] = {0xB6, 0xCC, 0x84, 0x12, 0x0D, 0x1F};
static signed char elv_13nit_ea[6] = {0xB6, 0xCC, 0x84, 0x12, 0x0D, 0x1F};
static signed char elv_14nit_ea[6] = {0xB6, 0xCC, 0x84, 0x12, 0x0D, 0x1F};
static signed char elv_15nit_ea[6] = {0xB6, 0xCC, 0x84, 0x12, 0x0D, 0x1F};
static signed char elv_16nit_ea[6] = {0xB6, 0xCC, 0x84, 0x12, 0x0D, 0x1F};
static signed char elv_17nit_ea[6] = {0xB6, 0xCC, 0x84, 0x12, 0x0D, 0x1F};
static signed char elv_19nit_ea[6] = {0xB6, 0xCC, 0x84, 0x12, 0x0D, 0x1F};
static signed char elv_20nit_ea[6] = {0xB6, 0xCC, 0x84, 0x12, 0x0D, 0x1F};
static signed char elv_21nit_ea[6] = {0xB6, 0xCC, 0x89, 0x12, 0x16, 0x1B};
static signed char elv_22nit_ea[6] = {0xB6, 0xCC, 0x8A, 0x12, 0x14, 0x1A};
static signed char elv_24nit_ea[6] = {0xB6, 0xCC, 0x8C, 0x12, 0x13, 0x18};
static signed char elv_25nit_ea[6] = {0xB6, 0xCC, 0x8E, 0x12, 0x12, 0x17};
static signed char elv_27nit_ea[6] = {0xB6, 0xCC, 0x90, 0x12, 0x12, 0x15};
static signed char elv_29nit_ea[6] = {0xB6, 0xCC, 0x92, 0x12, 0x12, 0x13};
static signed char elv_30nit_ea[6] = {0xB6, 0xCC, 0x94, 0x00, 0x00, 0x00};
static signed char elv_32nit_ea[6] = {0xB6, 0xCC, 0x94, 0x00, 0x00, 0x00};
static signed char elv_34nit_ea[6] = {0xB6, 0xCC, 0x94, 0x00, 0x00, 0x00};
static signed char elv_37nit_ea[6] = {0xB6, 0xCC, 0x94, 0x00, 0x00, 0x00};
static signed char elv_39nit_ea[6] = {0xB6, 0xCC, 0x94, 0x00, 0x00, 0x00};
static signed char elv_41nit_ea[6] = {0xB6, 0xDC, 0x94, 0x00, 0x00, 0x00};
static signed char elv_44nit_ea[6] = {0xB6, 0xDC, 0x94, 0x00, 0x00, 0x00};
static signed char elv_47nit_ea[6] = {0xB6, 0xDC, 0x94, 0x00, 0x00, 0x00};
static signed char elv_50nit_ea[6] = {0xB6, 0xDC, 0x94, 0x00, 0x00, 0x00};
static signed char elv_53nit_ea[6] = {0xB6, 0xDC, 0x94, 0x00, 0x00, 0x00};
static signed char elv_56nit_ea[6] = {0xB6, 0xDC, 0x94, 0x00, 0x00, 0x00};
static signed char elv_60nit_ea[6] = {0xB6, 0xDC, 0x94, 0x00, 0x00, 0x00};
static signed char elv_64nit_ea[6] = {0xB6, 0xDC, 0x94, 0x00, 0x00, 0x00};
static signed char elv_68nit_ea[6] = {0xB6, 0xDC, 0x94, 0x00, 0x00, 0x00};
static signed char elv_72nit_ea[6] = {0xB6, 0xDC, 0x94, 0x00, 0x00, 0x00};
static signed char elv_77nit_ea[6] = {0xB6, 0xDC, 0x94, 0x00, 0x00, 0x00};
static signed char elv_82nit_ea[6] = {0xB6, 0xDC, 0x94, 0x00, 0x00, 0x00};
static signed char elv_87nit_ea[6] = {0xB6, 0xDC, 0x94, 0x00, 0x00, 0x00};
static signed char elv_93nit_ea[6] = {0xB6, 0xDC, 0x93, 0x00, 0x00, 0x00};
static signed char elv_98nit_ea[6] = {0xB6, 0xDC, 0x93, 0x00, 0x00, 0x00};
static signed char elv_105nit_ea[6] = {0xB6, 0xDC, 0x93, 0x00, 0x00, 0x00};
static signed char elv_111nit_ea[6] = {0xB6, 0xDC, 0x92, 0x00, 0x00, 0x00};
static signed char elv_119nit_ea[6] = {0xB6, 0xDC, 0x92, 0x00, 0x00, 0x00};
static signed char elv_126nit_ea[6] = {0xB6, 0xDC, 0x92, 0x00, 0x00, 0x00};
static signed char elv_134nit_ea[6] = {0xB6, 0xDC, 0x92, 0x00, 0x00, 0x00};
static signed char elv_143nit_ea[6] = {0xB6, 0xDC, 0x92, 0x00, 0x00, 0x00};
static signed char elv_152nit_ea[6] = {0xB6, 0xDC, 0x92, 0x00, 0x00, 0x00};
static signed char elv_162nit_ea[6] = {0xB6, 0xDC, 0x92, 0x00, 0x00, 0x00};
static signed char elv_172nit_ea[6] = {0xB6, 0xDC, 0x92, 0x00, 0x00, 0x00};
static signed char elv_183nit_ea[6] = {0xB6, 0xDC, 0x91, 0x00, 0x00, 0x00};
static signed char elv_195nit_ea[6] = {0xB6, 0xDC, 0x90, 0x00, 0x00, 0x00};
static signed char elv_207nit_ea[6] = {0xB6, 0xDC, 0x8F, 0x00, 0x00, 0x00};
static signed char elv_220nit_ea[6] = {0xB6, 0xDC, 0x8E, 0x00, 0x00, 0x00};
static signed char elv_234nit_ea[6] = {0xB6, 0xDC, 0x8D, 0x00, 0x00, 0x00};
static signed char elv_249nit_ea[6] = {0xB6, 0xDC, 0x8C, 0x00, 0x00, 0x00};
static signed char elv_265nit_ea[6] = {0xB6, 0xDC, 0x8B, 0x00, 0x00, 0x00};
static signed char elv_282nit_ea[6] = {0xB6, 0xDC, 0x8A, 0x00, 0x00, 0x00};
static signed char elv_300nit_ea[6] = {0xB6, 0xDC, 0x88, 0x00, 0x00, 0x00};
static signed char elv_316nit_ea[6] = {0xB6, 0xDC, 0x87, 0x00, 0x00, 0x00};
static signed char elv_333nit_ea[6] = {0xB6, 0xDC, 0x86, 0x00, 0x00, 0x00};
static signed char elv_360nit_ea[6] = {0xB6, 0xDC, 0x84, 0x00, 0x00, 0x00};

static signed char aid5_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0xE6};
static signed char aid6_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0xE1};
static signed char aid7_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0xD4};
static signed char aid8_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0xC8};
static signed char aid9_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0xC4};
static signed char aid10_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0xB7};
static signed char aid11_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0xB2};
static signed char aid12_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0xA4};
static signed char aid13_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0xA1};
static signed char aid14_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0x95};
static signed char aid15_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0x88};
static signed char aid16_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0x83};
static signed char aid17_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0x77};
static signed char aid19_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0x64};
static signed char aid20_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0x58};
static signed char aid21_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0x52};
static signed char aid22_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0x44};
static signed char aid24_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0x31};
static signed char aid25_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0x24};
static signed char aid27_ea[5] = {0xB2, 0x00, 0x00, 0x04, 0x09};
static signed char aid29_ea[5] = {0xB2, 0x00, 0x00, 0x03, 0xF5};
static signed char aid30_ea[5] = {0xB2, 0x00, 0x00, 0x03, 0xE7};
static signed char aid32_ea[5] = {0xB2, 0x00, 0x00, 0x03, 0xD4};
static signed char aid34_ea[5] = {0xB2, 0x00, 0x00, 0x03, 0xC2};
static signed char aid37_ea[5] = {0xB2, 0x00, 0x00, 0x03, 0xA2};
static signed char aid39_ea[5] = {0xB2, 0x00, 0x00, 0x03, 0x8F};
static signed char aid41_ea[5] = {0xB2, 0x00, 0x00, 0x03, 0x75};
static signed char aid44_ea[5] = {0xB2, 0x00, 0x00, 0x03, 0x54};
static signed char aid47_ea[5] = {0xB2, 0x00, 0x00, 0x03, 0x35};
static signed char aid50_ea[5] = {0xB2, 0x00, 0x00, 0x03, 0x15};
static signed char aid53_ea[5] = {0xB2, 0x00, 0x00, 0x02, 0xF6};
static signed char aid56_ea[5] = {0xB2, 0x00, 0x00, 0x02, 0xD6};
static signed char aid60_ea[5] = {0xB2, 0x00, 0x00, 0x02, 0xA5};
static signed char aid64_ea[5] = {0xB2, 0x00, 0x00, 0x02, 0x79};
static signed char aid68_ea[5] = {0xB2, 0x00, 0x00, 0x02, 0x4F};
static signed char aid72_ea[5] = {0xB2, 0x00, 0x00, 0x02, 0x32};
static signed char aid119_ea[5] = {0xB2, 0x00, 0x00, 0x01, 0xEA};
static signed char aid126_ea[5] = {0xB2, 0x00, 0x00, 0x01, 0xAE};
static signed char aid134_ea[5] = {0xB2, 0x00, 0x00, 0x01, 0x63};
static signed char aid143_ea[5] = {0xB2, 0x00, 0x00, 0x01, 0x23};
static signed char aid152_ea[5] = {0xB2, 0x00, 0x00, 0x00, 0xE5};
static signed char aid162_ea[5] = {0xB2, 0x00, 0x00, 0x00, 0x92};
static signed char aid172_ea[5] = {0xB2, 0x00, 0x00, 0x00, 0x44};
static signed char aid183_ea[5] = {0xB2, 0x00, 0x00, 0x00, 0x0C};

static unsigned char m_gray_5[] = {0, 18, 21, 24, 29, 38, 60, 97, 129, 157};
static unsigned char m_gray_6[] = {0, 16, 19, 22, 27, 36, 58, 97, 129, 157};
static unsigned char m_gray_7[] = {0, 15, 18, 21, 26, 35, 58, 97, 129, 157};
static unsigned char m_gray_8[] = {0, 14, 17, 20, 25, 35, 58, 97, 129, 157};
static unsigned char m_gray_9[] = {0, 14, 17, 20, 25, 35, 58, 97, 129, 157};
static unsigned char m_gray_10[] = {0, 13, 16, 20, 24, 34, 58, 97, 128, 157};
static unsigned char m_gray_11[] = {0, 13, 16, 19, 24, 34, 58, 97, 128, 157};
static unsigned char m_gray_12[] = {0, 12, 15, 19, 24, 34, 58, 97, 128, 157};
static unsigned char m_gray_13[] = {0, 12, 15, 18, 23, 34, 58, 97, 128, 157};
static unsigned char m_gray_14[] = {0, 11, 14, 18, 23, 34, 58, 97, 128, 157};
static unsigned char m_gray_15[] = {0, 11, 14, 18, 23, 34, 58, 97, 128, 157};
static unsigned char m_gray_16[] = {0, 10, 13, 17, 23, 33, 57, 97, 128, 157};
static unsigned char m_gray_17[] = {0, 10, 13, 17, 23, 33, 57, 97, 129, 157};
static unsigned char m_gray_19[] = {0, 9, 12, 17, 24, 33, 57, 97, 128, 157};
static unsigned char m_gray_20[] = {0, 9, 12, 18, 25, 33, 57, 97, 128, 157};
static unsigned char m_gray_21[] = {0, 11, 14, 18, 25, 34, 58, 97, 128, 157};
static unsigned char m_gray_22[] = {0, 11, 14, 19, 26, 34, 58, 97, 128, 157};
static unsigned char m_gray_24[] = {0, 12, 15, 19, 26, 34, 58, 97, 128, 157};
static unsigned char m_gray_25[] = {0, 12, 15, 19, 26, 35, 58, 97, 128, 157};
static unsigned char m_gray_27[] = {0, 12, 15, 19, 26, 35, 58, 97, 128, 157};
static unsigned char m_gray_29[] = {0, 13, 16, 20, 26, 35, 58, 97, 128, 157};
static unsigned char m_gray_30[] = {0, 13, 16, 20, 26, 35, 58, 97, 128, 157};
static unsigned char m_gray_32[] = {0, 12, 15, 20, 26, 35, 58, 97, 128, 157};
static unsigned char m_gray_34[] = {0, 12, 15, 20, 26, 35, 58, 97, 128, 157};
static unsigned char m_gray_37[] = {0, 11, 14, 19, 26, 34, 58, 97, 128, 157};
static unsigned char m_gray_39[] = {0, 11, 14, 19, 26, 34, 58, 97, 128, 157};
static unsigned char m_gray_41[] = {0, 11, 14, 19, 25, 34, 58, 97, 128, 157};
static unsigned char m_gray_44[] = {0, 11, 14, 19, 25, 34, 58, 96, 128, 157};
static unsigned char m_gray_47[] = {0, 10, 13, 18, 25, 34, 58, 96, 128, 157};
static unsigned char m_gray_50[] = {0, 10, 13, 18, 25, 34, 58, 96, 128, 157};
static unsigned char m_gray_53[] = {0, 9, 12, 18, 25, 34, 58, 96, 128, 157};
static unsigned char m_gray_56[] = {0, 9, 12, 18, 25, 34, 58, 96, 128, 157};
static unsigned char m_gray_60[] = {0, 9, 12, 18, 24, 34, 58, 96, 128, 157};
static unsigned char m_gray_64[] = {0, 8, 11, 18, 24, 34, 58, 96, 128, 157};
static unsigned char m_gray_68[] = {0, 8, 11, 18, 24, 34, 58, 96, 128, 157};
static unsigned char m_gray_72[] = {0, 8, 11, 18, 24, 34, 59, 99, 129, 159};
static unsigned char m_gray_77[] = {0, 7, 11, 18, 26, 36, 61, 102, 134, 164};
static unsigned char m_gray_82[] = {0, 7, 11, 18, 26, 37, 63, 105, 137, 168};
static unsigned char m_gray_87[] = {0, 7, 11, 18, 27, 38, 64, 107, 139, 172};
static unsigned char m_gray_93[] = {0, 6, 11, 19, 27, 38, 66, 110, 144, 177};
static unsigned char m_gray_98[] = {0, 6, 11, 19, 28, 39, 67, 112, 147, 181};
static unsigned char m_gray_105[] = {0, 6, 12, 20, 29, 40, 69, 114, 150, 186};
static unsigned char m_gray_111[] = {0, 6, 11, 20, 29, 40, 69, 117, 153, 190};
static unsigned char m_gray_119[] = {0, 6, 11, 19, 29, 40, 69, 116, 152, 190};
static unsigned char m_gray_126[] = {0, 6, 11, 19, 29, 40, 69, 116, 152, 190};
static unsigned char m_gray_134[] = {0, 5, 10, 19, 28, 40, 69, 116, 152, 190};
static unsigned char m_gray_143[] = {0, 5, 10, 19, 28, 40, 69, 116, 152, 190};
static unsigned char m_gray_152[] = {0, 5, 10, 19, 28, 40, 69, 116, 152, 190};
static unsigned char m_gray_162[] = {0, 5, 10, 19, 28, 40, 69, 116, 152, 190};
static unsigned char m_gray_172[] = {0, 5, 10, 19, 28, 40, 69, 116, 152, 190};
static unsigned char m_gray_183[] = {0, 5, 10, 19, 29, 41, 69, 117, 153, 192};
static unsigned char m_gray_195[] = {0, 5, 10, 20, 29, 42, 71, 120, 158, 197};
static unsigned char m_gray_207[] = {0, 5, 10, 20, 30, 43, 73, 122, 161, 202};
static unsigned char m_gray_220[] = {0, 5, 11, 21, 31, 44, 74, 125, 165, 207};
static unsigned char m_gray_234[] = {0, 5, 11, 21, 32, 45, 75, 128, 170, 213};
static unsigned char m_gray_249[] = {0, 5, 11, 21, 32, 46, 77, 131, 174, 218};
static unsigned char m_gray_265[] = {0, 5, 11, 21, 33, 48, 79, 135, 180, 224};
static unsigned char m_gray_282[] = {0, 5, 11, 22, 34, 49, 81, 138, 184, 230};
static unsigned char m_gray_300[] = {0, 4, 11, 22, 34, 49, 83, 142, 189, 236};
static unsigned char m_gray_316[] = {0, 4, 11, 23, 35, 50, 84, 145, 193, 241};
static unsigned char m_gray_333[] = {0, 3, 11, 23, 35, 51, 86, 148, 197, 246};
static unsigned char m_gray_360[] = {0, 3, 12, 24, 37, 53, 89, 153, 204, 255};
#endif

