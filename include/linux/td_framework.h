/*
 * Copyright (c) 2013, TripNDroid Mobile Engineering
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

/* cpufreq sleep min/max */
#define TDF_FREQ_SLEEP_MAX	384000
#define TDF_FREQ_SLEEP_MIN	144000

#define TDF_FREQ_MAX		1728000
#define TDF_FREQ_MIN		144000

#define TDF_FREQ_PWRSAVE_MAX	1080000

/* output debug info to kmsg, adds some heavy overhead! */
#ifdef CONFIG_TDF_DEBUG
#define TDF_DEBUG
#define TDF_SUSPEND_DEBUG
#endif
