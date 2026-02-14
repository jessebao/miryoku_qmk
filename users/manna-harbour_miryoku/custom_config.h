// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define MIRYOKU_CLIPBOARD_WIN

// #define POINTING_DEVICE_AUTO_MOUSE_ENABLE
// #define AUTO_MOUSE_TIME 650
// #define AUTO_MOUSE_DELAY 250
// #define AUTO_MOUSE_DEBOUNCE 10
#define MIRYOKU_KLUDGE_THUMBCOMBOS
#define CHARYBDIS_DRAGSCROLL_REVERSE_Y

// maccel settings
#define POINTING_DEVICE_ACCEL_TAKEOFF 2.0      // lower/higher value = curve takes off more smoothly/abruptly
#define POINTING_DEVICE_ACCEL_GROWTH_RATE 0.25 // lower/higher value = curve reaches its upper limit slower/faster
#define POINTING_DEVICE_ACCEL_OFFSET 2.2       // lower/higher value = acceleration kicks in earlier/later
#define POINTING_DEVICE_ACCEL_LIMIT 0.2        // lower limit of accel curve (minimum acceleration factor)

#ifdef VIA_ENABLE
/* VIA configuration. */
#    define DYNAMIC_KEYMAP_LAYER_COUNT 12
#endif // VIA_ENABLE