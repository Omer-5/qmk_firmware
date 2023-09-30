// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once
// QWERTY                                                                                             ||                  
#define MIRYOKU_LAYER_BASE \
KC_Q,              KC_W,              KC_E,                 KC_R,              KC_T,                       KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),         LSFT_T(KC_F),      KC_G,                       KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),   \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,                 HYPR_T(KC_V),      KC_B,                       KC_N,               HYPR_T(KC_M),              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_CAPS),  LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),         LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP
//                                                                                                    ||                  


// COLEMAKDH 
#define MIRYOKU_EXTRA \
KC_Q,              KC_W,              KC_F,              KC_P,                      KC_B,              KC_J,              KC_L,                           KC_U,              KC_Y,              KC_QUOT,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),              KC_G,              KC_M,              LSFT_T(KC_N),                   LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      \
LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              HYPR_T(KC_D),              KC_V,              KC_K,              HYPR_T(KC_H),                   KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),    U_NP,              U_NP


// qmk compile -c -kb sofle -km manna-harbour_miryoku \
//   -e MIRYOKU_ALPHAS=QWERTY \
//   -e MIRYOKU_EXTRA=COLEMAKDH \
//   -e MIRYOKU_TAP=QWERTY \
//   -e MIRYOKU_NAV=VI \
//   -e MIRYOKU_CLIPBOARD=WIN
