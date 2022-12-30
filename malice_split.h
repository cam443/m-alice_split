 /* Copyright 2020 Imam Rafii 
  * 
  * This program is free software: you can redistribute it and/or modify 
  * it under the terms of the GNU General Public License as published by 
  * the Free Software Foundation, either version 2 of the License, or 
  * (at your option) any later version. 
  * 
  * This program is distributed in the hope that it will be useful, 
  * but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
  * GNU General Public License for more details. 
  * 
  * You should have received a copy of the GNU General Public License 
  * along with this program.  If not, see <http://www.gnu.org/licenses/>. 
  */
#pragma once

#include "quantum.h"

/*   LAYOUT
*/

/*#define LAYOUT( \
    L001, L002, L003, L004, L005, L006, L007, R001, R002, R003, R004, R005, R006,       R008, R009, \
    L101, L102, L103, L104, L105, L106, L107, R101, R102, R103, R104, R105, R106,       R108, R109, \
    L201, L202, L203, L204, L205, L206,       R201, R202, R203, R204, R205, R206, R207, R208, R209, \
    L301, L302, L303, L304, L305, L306,       R301, R302, R303, R304, R305, R306,       R308, R309, \
    L401, L402, L403, L404, L405, L406,       R401, R402, R403, R404, R405, R406, R407, R408,       \
    L501, L502, L503,       L505, L506,             R502, R503,       R505, R506, R507, R508, R509  \
    ) \
    { \
        { KC_NO,  KC_NO, L001,  L002,  L003,  L004,  L005,  L006,  L007 }, \
        { KC_NO,  KC_NO, L101,  L102,  L103,  L104,  L105,  L106,  L107 }, \
        { KC_NO,  KC_NO, L201,  L202,  L203,  L204,  L205,  L206,  KC_NO }, \
        { KC_NO,  KC_NO, L301,  L302,  L303,  L304,  L305,  L306,  KC_NO }, \
        { KC_NO,  KC_NO, L401,  L402,  L403,  L404,  L405,  L406,  KC_NO }, \
        { KC_NO,  KC_NO, L501,  L502,  L503,  KC_NO,  L505,  L506,  KC_NO }, \
        { R001,  R002,  R003,  R004,  R005,  R006,  KC_NO, R008,  R009 }, \
        { R101,  R102,  R103,  R104,  R105,  R106,  KC_NO, R108,  R109 }, \
        { R201,  R202,  R203,  R204,  R205,  R206,  R207,  R208,  R209 }, \
        { R301,  R302,  R303,  R304,  R305,  R306,  KC_NO, R308,  R309 }, \
        { R401,  R402,  R403,  R404,  R405,  R406,  R407,  R408,  KC_NO }, \
        { KC_NO,  R502,  R503,  KC_NO,  R505,  R506,  R507,  R508,  R509 } \
    }*/

#define LAYOUT( \
  K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012,       K014, K015, \
  K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112,       K114, K115, \
  K200, K201, K202, K203, K204, K205,       K207, K208, K209, K210, K211, K212, K213, K214, K215, \
  K300, K301, K302, K303, K304, K305,       K307, K308, K309, K310, K311, K312,       K314, K315, \
  K400, K401, K402, K403, K404, K405,       K407, K408, K409, K410, K411, K412, K413, K414,       \
  K500, K501, K502,       K504, K505,             K508, K509,       K511, K512, K513, K514, K515  \
) { \
  { KC_NO, KC_NO, K000,  K001,  K002,  K003,  K004,  K005,  K006 }, \
  { KC_NO, KC_NO, K100,  K101,  K102,  K103,  K104,  K105,  K106 }, \
  { KC_NO, KC_NO, K200,  K201,  K202,  K203,  K204,  K205,  KC_NO }, \
  { KC_NO, KC_NO, K300,  K301,  K302,  K303,  K304,  K305,  KC_NO }, \
  { KC_NO, KC_NO, K400,  K401,  K402,  K403,  K404,  K405,  KC_NO }, \
  { KC_NO, KC_NO, K500,  K501,  K502,  KC_NO, K504,  K505,  KC_NO }, \
  { K007,  K008,  K009,  K010,  K011,  K012,  KC_NO, K014,  K015 }, \
  { K107,  K108,  K109,  K110,  K111,  K112,  KC_NO, K114,  K115 }, \
  { K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  K215 }, \
  { K307,  K308,  K309,  K310,  K311,  K312,  KC_NO, K314,  K315 }, \
  { K407,  K408,  K409,  K410,  K411,  K412,  K413,  K414,  KC_NO }, \
  { KC_NO, K508,  K509,  KC_NO, K511,  K512,  K513,  K514,  K515 }  \
}
