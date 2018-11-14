/* vim:set et sts=4 sw=4 fileencoding=utf-8: */
/* libhangul
 * Copyright (C) 2004 - 2009 Choe Hwanjin
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef libhangul_hangulinputcontext_def_h
#define libhangul_hangulinputcontext_def_h

static const HangulCombination hangul_combination_default_2 = {
    N_ELEMENTS(hangul_combination_table_default_2),
    (HangulCombinationItem*)hangul_combination_table_default_2
};

static const HangulCombination hangul_combination_default_3 = {
    N_ELEMENTS(hangul_combination_table_default_3),
    (HangulCombinationItem*)hangul_combination_table_default_3
};

static const HangulCombination hangul_combination_full = {
    N_ELEMENTS(hangul_combination_table_full),
    (HangulCombinationItem*)hangul_combination_table_full
};

static const HangulCombination hangul_combination_romaja = {
    N_ELEMENTS(hangul_combination_table_romaja),
    (HangulCombinationItem*)hangul_combination_table_romaja
};

static const HangulCombination hangul_combination_ahn = {
    N_ELEMENTS(hangul_combination_table_ahn),
    (HangulCombinationItem*)hangul_combination_table_ahn
};

static const HangulCombination hangul_combination_3moa_semoe_2014 = {
    N_ELEMENTS(hangul_combination_table_3moa_semoe_2014),
    (HangulCombinationItem*)hangul_combination_table_3moa_semoe_2014
};

static const HangulCombination hangul_combination_3moa_semoe_2015 = {
    N_ELEMENTS(hangul_combination_table_3moa_semoe_2015),
    (HangulCombinationItem*)hangul_combination_table_3moa_semoe_2015
};

static const HangulCombination hangul_combination_3moa_semoe_2016 = {
    N_ELEMENTS(hangul_combination_table_3moa_semoe_2016),
    (HangulCombinationItem*)hangul_combination_table_3moa_semoe_2016
};

static const HangulCombination hangul_combination_3moa_semoe_2017 = {
    N_ELEMENTS(hangul_combination_table_3moa_semoe_2017),
    (HangulCombinationItem*)hangul_combination_table_3moa_semoe_2017
};

static const HangulCombination hangul_combination_3moa_semoe_2018 = {
    N_ELEMENTS(hangul_combination_table_3moa_semoe_2018),
    (HangulCombinationItem*)hangul_combination_table_3moa_semoe_2018
};


static const HangulCombination hangul_combination_3_91_noshift = {
    N_ELEMENTS(hangul_combination_table_3_91_noshift),
    (HangulCombinationItem*)hangul_combination_table_3_91_noshift
};


static const HangulKeyboard hangul_keyboard_2 = {
    HANGUL_KEYBOARD_TYPE_JAMO,
    "2",
    N_("Dubeolsik KSX 5002"),
    (ucschar*)hangul_keyboard_table_2,
    &hangul_combination_default_2
};

static const HangulKeyboard hangul_keyboard_2noshift = {
    HANGUL_KEYBOARD_TYPE_JAMO,
    "2noshift",
    N_("Dubeolsik Noshift"),
    (ucschar*)hangul_keyboard_table_2,
    &hangul_combination_default_2
};

static const HangulKeyboard hangul_keyboard_2y = {
    HANGUL_KEYBOARD_TYPE_JAMO,
    "2y",
    N_("Dubeolsik Yetgeul"),
    (ucschar*)hangul_keyboard_table_2y,
    &hangul_combination_full
};

static const HangulKeyboard hangul_keyboard_2north9256 = {
    HANGUL_KEYBOARD_TYPE_JAMO,
    "2n9256",
    N_("Dubeolsik North 9256"),
    (ucschar*)hangul_keyboard_table_2north9256,
    &hangul_combination_default_2
};

static const HangulKeyboard hangul_keyboard_32 = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "32",
    N_("Sebeolsik Dubeol Layout"),
    (ucschar*)hangul_keyboard_table_32,
    &hangul_combination_default_2
};

static const HangulKeyboard hangul_keyboard_3_89 = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3-89",
    N_("Sebeolsik 3-89"),
    (ucschar*)hangul_keyboard_table_3_89,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3_90 = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3-90",
    N_("Sebeolsik 3-90"),
    (ucschar*)hangul_keyboard_table_390,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3_91_final = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3-91",
    N_("Sebeolsik 3-91 Final"),
    (ucschar*)hangul_keyboard_table_3final,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3_91_final_noshift = {
    HANGUL_KEYBOARD_TYPE_3FINALSUN,
    "3-91-noshift",
    N_("Sebeolsik 3-91 Final Noshift"),
    (ucschar*)hangul_keyboard_table_3_91_final_noshift,
    &hangul_combination_3_91_noshift
};

static const HangulKeyboard hangul_keyboard_3sun_1990 = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3sun-1990",
    N_("Sebeolsik Noshift 1990"),
    (ucschar*)hangul_keyboard_table_3sun,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3_93_yet = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3-93-yet",
    N_("Sebeolsik 3-93 Yetgeul"),
    (ucschar*)hangul_keyboard_table_3yet,
    &hangul_combination_full
};

static const HangulKeyboard hangul_keyboard_romaja = {
    HANGUL_KEYBOARD_TYPE_ROMAJA,
    "ro",
    N_("Romaja"),
    (ucschar*)hangul_keyboard_table_romaja,
    &hangul_combination_romaja
};

static const HangulKeyboard hangul_keyboard_ahn = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "ahn",
    N_("Ahnmatae"),
    (ucschar*)hangul_keyboard_table_ahn,
    &hangul_combination_ahn
};

static const HangulKeyboard hangul_keyboard_3ahnmatae = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3ahn",
    N_("Sebeolsik 3Ahnmatae"),
    (ucschar*)hangul_keyboard_table_3ahnmatae,
    &hangul_combination_ahn
};

static const HangulKeyboard hangul_keyboard_3_2011 = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3-2011",
    N_("Sebeolsik 3-2011"),
    (ucschar*)hangul_keyboard_table_3_2011,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3_2011_yet = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3-2011-yet",
    N_("Sebeolsik 3-2011 Yetgeul"),
    (ucschar*)hangul_keyboard_table_3_2011,
    &hangul_combination_full
};

static const HangulKeyboard hangul_keyboard_3_2012 = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3-2012",
    N_("Sebeolsik 3-2012"),
    (ucschar*)hangul_keyboard_table_3_2012,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3_2012_yet = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3-2012-yet",
    N_("Sebeolsik 3-2012 Yetgeul"),
    (ucschar*)hangul_keyboard_table_3_2012,
    &hangul_combination_full
};

static const HangulKeyboard hangul_keyboard_3_2014 = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3-2014",
    N_("Sebeolsik 3-2014"),
    (ucschar*)hangul_keyboard_table_3_2014,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3_2014_yet = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3-2014-yet",
    N_("Sebeolsik 3-2014 Yetgeul"),
    (ucschar*)hangul_keyboard_table_3_2014,
    &hangul_combination_full
};

static const HangulKeyboard hangul_keyboard_3_2015 = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3-2015",
    N_("Sebeolsik 3-2015"),
    (ucschar*)hangul_keyboard_table_3_2015,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3_2015_yet = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3-2015-yet",
    N_("Sebeolsik 3-2015 Yetgeul"),
    (ucschar*)hangul_keyboard_table_3_2015_yet,
    &hangul_combination_full
};

static const HangulKeyboard hangul_keyboard_3_2015_metal = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3-2015-metal",
    N_("Sebeolsik 3-2015M"),
    (ucschar*)hangul_keyboard_table_3_2015_metal,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3_2015_patal = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3-2015-patal",
    N_("Sebeolsik 3-2015P"),
    (ucschar*)hangul_keyboard_table_3_2015_patal,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3_2015_patal_yet = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3-2015-patal-yet",
    N_("Sebeolsik 3-2015P Yetgeul"),
    (ucschar*)hangul_keyboard_table_3_2015_patal,
    &hangul_combination_full
};

static const HangulKeyboard hangul_keyboard_3_p2 = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3-p2",
    N_("Sebeolsik 3-P2"),
    (ucschar*)hangul_keyboard_table_3_p2,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3_p3 = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3-p3",
    N_("Sebeolsik 3-P3"),
    (ucschar*)hangul_keyboard_table_3_p3,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3_14_proposal = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3-14-proposal",
    N_("Sebeolsik 3-14 Proposal"),
    (ucschar*)hangul_keyboard_table_3_14_proposal,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3moa_semoe_2014 = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3moa-semoe-2014",
    N_("Sebeolsik Semoe 2014"),
    (ucschar*)hangul_keyboard_table_3moa_semoe_2014,
    &hangul_combination_3moa_semoe_2014
};

static const HangulKeyboard hangul_keyboard_3moa_semoe_2015 = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3moa-semoe-2015",
    N_("Sebeolsik Semoe 2015"),
    (ucschar*)hangul_keyboard_table_3moa_semoe_2015,
    &hangul_combination_3moa_semoe_2015
};

static const HangulKeyboard hangul_keyboard_3moa_semoe_2016 = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3moa-semoe-2016",
    N_("Sebeolsik Semoe 2016"),
    (ucschar*)hangul_keyboard_table_3moa_semoe_2016,
    &hangul_combination_3moa_semoe_2016
};

static const HangulKeyboard hangul_keyboard_3moa_semoe_2017 = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3moa-semoe-2017",
    N_("Sebeolsik Semoe 2017"),
    (ucschar*)hangul_keyboard_table_3moa_semoe_2017,
    &hangul_combination_3moa_semoe_2017
};

static const HangulKeyboard hangul_keyboard_3moa_semoe_2018 = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3moa-semoe-2018",
    N_("Sebeolsik Semoe 2018"),
    (ucschar*)hangul_keyboard_table_3moa_semoe_2018,
    &hangul_combination_3moa_semoe_2018
};

static const HangulKeyboard hangul_keyboard_3sun_2014 = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3sun-2014",
    N_("Sebeolsik Noshift 2014"),
    (ucschar*)hangul_keyboard_table_3sun_2014,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3gimguk_38a_yet = {
    HANGUL_KEYBOARD_TYPE_JASO,
    "3gimguk-38a-yet",
    N_("Sebeolsik 3Gimguk-38A Yetgeul"),
    (ucschar*)hangul_keyboard_table_3gimguk_38A_yet,
    &hangul_combination_full
};

static const HangulKeyboard hangul_keyboard_3shin_1995 = {
    HANGUL_KEYBOARD_TYPE_JASO_SHIN,
    "3shin-1995",
    N_("Sebeolsik Shin 1995"),
    (ucschar*)hangul_keyboard_table_3shin_1995,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3shin_2003 = {
    HANGUL_KEYBOARD_TYPE_JASO_SHIN,
    "3shin-2003",
    N_("Sebeolsik Shin 2003"),
    (ucschar*)hangul_keyboard_table_3shin_2003,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3shin_2012 = {
    HANGUL_KEYBOARD_TYPE_JASO_SHIN,
    "3shin-2012",
    N_("Sebeolsik Shin 2012"),
    (ucschar*)hangul_keyboard_table_3shin_2012,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3shin_2015 = {
    HANGUL_KEYBOARD_TYPE_JASO_SHIN_SHIFT,
    "3shin-2015",
    N_("Sebeolsik Shin 2015"),
    (ucschar*)hangul_keyboard_table_3shin_2015,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3shin_m = {
    HANGUL_KEYBOARD_TYPE_JASO_SHIN_SHIFT,
    "3shin-m",
    N_("Sebeolsik Shin M"),
    (ucschar*)hangul_keyboard_table_3shin_m,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3shin_p = {
    HANGUL_KEYBOARD_TYPE_JASO_SHIN,
    "3shin-p",
    N_("Sebeolsik Shin P"),
    (ucschar*)hangul_keyboard_table_3shin_p,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3shin_p_yet = {
    HANGUL_KEYBOARD_TYPE_JASO_SHIN_YET,
    "3shin-p-yet",
    N_("Sebeolsik Shin P Yetgeul"),
    (ucschar*)hangul_keyboard_table_3shin_p,
    &hangul_combination_full
};

static const HangulKeyboard hangul_keyboard_3shin_p2 = {
    HANGUL_KEYBOARD_TYPE_JASO_SHIN,
    "3shin-p2",
    N_("Sebeolsik Shin P2"),
    (ucschar*)hangul_keyboard_table_3shin_p2,
    &hangul_combination_default_3
};

static const HangulKeyboard hangul_keyboard_3shin_p2_yet = {
    HANGUL_KEYBOARD_TYPE_JASO_SHIN_YET,
    "3shin-p2-yet",
    N_("Sebeolsik Shin P2 Yetgeul"),
    (ucschar*)hangul_keyboard_table_3shin_p2,
    &hangul_combination_full
};


static const HangulKeyboard* hangul_keyboards[] = {
    &hangul_keyboard_2,
    &hangul_keyboard_2noshift,
    &hangul_keyboard_2north9256,
    &hangul_keyboard_3_90,
    &hangul_keyboard_3_91_final,
    &hangul_keyboard_3_p3,
    &hangul_keyboard_3moa_semoe_2018,
    &hangul_keyboard_3sun_2014,
    &hangul_keyboard_3shin_p2,
    &hangul_keyboard_3shin_p2_yet,
    &hangul_keyboard_3_89,
    &hangul_keyboard_3_91_final_noshift,
    &hangul_keyboard_3_93_yet,
    &hangul_keyboard_32,
    &hangul_keyboard_2y,
    &hangul_keyboard_romaja,
    &hangul_keyboard_ahn,
    &hangul_keyboard_3ahnmatae,
    &hangul_keyboard_3_2011,
    &hangul_keyboard_3_2011_yet,
    &hangul_keyboard_3_2012,
    &hangul_keyboard_3_2012_yet,
    &hangul_keyboard_3_2014,
    &hangul_keyboard_3_2014_yet,
    &hangul_keyboard_3_2015,
    &hangul_keyboard_3_2015_yet,
    &hangul_keyboard_3_2015_metal,
    &hangul_keyboard_3_2015_patal,
    &hangul_keyboard_3_2015_patal_yet,
    &hangul_keyboard_3_p2,
    &hangul_keyboard_3_14_proposal,
    &hangul_keyboard_3moa_semoe_2014,
    &hangul_keyboard_3moa_semoe_2015,
    &hangul_keyboard_3moa_semoe_2016,
	&hangul_keyboard_3moa_semoe_2017,
    &hangul_keyboard_3sun_1990,
    &hangul_keyboard_3gimguk_38a_yet,
    &hangul_keyboard_3shin_1995,
    &hangul_keyboard_3shin_2003,
    &hangul_keyboard_3shin_2012,
    &hangul_keyboard_3shin_2015,
    &hangul_keyboard_3shin_m,
    &hangul_keyboard_3shin_p,
    &hangul_keyboard_3shin_p_yet,
};

// 세벌식 확장모드 글쇠
static const char sebeol_3_symbol_key[] = {'0', 'v', '8', 0x00};    //0:같은 기호 배열을 쓴다 // ㅗ, ㅜ
static const char sebeol_3yet_symbol_key[] = {'1', '/', '9', 0x00};  //1:다른 기호 배열을 쓴다// ㅗ, ㅜ
static const ucschar sebeol_3_symbol_value[] = {0x1169, 0x116e, 0x0000};  // ㅗ, ㅜ
static const char sebeol_3moa_symbol_key[] = {'2', 'J', 'K', 'L', ':', 0x00};   // J + [ K, L, : ] //2: 같은 기호배열을 쓰고 준비글쇠가 있다.
static const ucschar sebeol_3moa_symbol_value[] = {0x110b, 0x0000};   // 첫소리 ㅇ [J]
static const char sebeol_3shin_symbol_key[] = {'j', 'k', 'l', ';', 0x00};   // j + [ k, l, ;]
static const ucschar sebeol_3shin_symbol_value[] = {0x110b, 0x0000};   // 첫소리 ㅇ [j]
// 세벌식 옛한글
static const char sebeol_3yet_yetgeul_key[] = {'7', '8', 0x00};  // ㅖ, ㅢ  // 공병우 계열
static const ucschar sebeol_3yet_yetgeul_value[] = {0x1168, 0x1174, 0x0000};  // ㅖ, ㅢ  // 공병우 계열
// 세벌식 확장단계 표시
static const ucschar sebeol_3_ext_step[] = {0x00AE, 0x2460, 0x2461, 0x2462, 0x2463, 0x2464, 0x0000};// ®, ①, ②, ③, ④, ⑤
// 세벌식 겹홀소리 글쇠
static const char sebeol_3_moeum_key[] = {'8', '/', '9', 0x00};  // ㅡ,ㅗ, ㅜ  // 공병우 계열
static const char sebeol_3shin_moeum_key[] = {'I', 'O', 'P', 0x00};  // ㅡ, ㅗ, ㅜ  // 신광조 계열
static const char sebeol_3moa_semoe_2018_moeum_key[] = {'.', 'b', 0x00}; // ㅗ, ㅜ  // 신세기 계열 2018
static const char sebeol_3moa_semoe_2017_moeum_key[] = {'.', 'p', 0x00}; // ㅗ, ㅜ  // 신세기 계열 2017
static const char sebeol_3moa_semoe_2016_moeum_key[] = {'[', 'p', 0x00}; // ㅗ, ㅜ  // 신세기 계열 2016
static const char sebeol_3moa_semoe_moeum_key_deprecated[] = {'\'', 'p', 0x00}; // ㅗ, ㅜ  // 신세기 계열 2014, 2015
//static const char sebeol_3moa_semoe_2015_moeum_key[] = {';', 'p', 0x00}; // ㅗ, ㅜ  // 신세기 계열
static const ucschar sebeol_3_moeum_value[] = {0x1169, 0x116e, 0x1173, 0x0000};  // ㅗ, ㅜ, ㅡ


static const HangulCombination hangul_combination_3_2015 = {
    N_ELEMENTS(hangul_combination_table_3_3_2015),
    (HangulCombinationItem*)hangul_combination_table_3_3_2015
};

static const HangulCombination hangul_combination_3_2015_yet = {
    N_ELEMENTS(hangul_combination_table_full_3_2015_yet),
    (HangulCombinationItem*)hangul_combination_table_full_3_2015_yet
};

static const HangulCombination hangul_combination_3_14_proposal = {
    N_ELEMENTS(hangul_combination_table_3_3_14_proposal),
    (HangulCombinationItem*)hangul_combination_table_3_3_14_proposal
};

static const HangulCombination hangul_combination_3sun_2014 = {
    N_ELEMENTS(hangul_combination_table_3_3sun_2014),
    (HangulCombinationItem*)hangul_combination_table_3_3sun_2014
};

static const HangulCombination hangul_combination_3gimguk_38a_yet = {
    N_ELEMENTS(hangul_combination_table_full_3gimguk_38A_yet),
    (HangulCombinationItem*)hangul_combination_table_full_3gimguk_38A_yet
};

static const HangulCombination hangul_combination_3shin_2015 = {
    N_ELEMENTS(hangul_combination_table_3_3shin_2015),
    (HangulCombinationItem*)hangul_combination_table_3_3shin_2015
};

static const HangulCombination hangul_combination_3shin_p_yet = {
    N_ELEMENTS(hangul_combination_table_full_3shin_p),
    (HangulCombinationItem*)hangul_combination_table_full_3shin_p
};

static const HangulCombination hangul_combination_3shin_p2_yet = {
    N_ELEMENTS(hangul_combination_table_full_3shin_p),
    (HangulCombinationItem*)hangul_combination_table_full_3shin_p
};

static const HangulGalmadeuli hangul_replace_2_noshift = {
    N_ELEMENTS(hangul_replace_table_2_noshift),
    (HangulGalmadeuliItem*)hangul_replace_table_2_noshift
};

static const HangulGalmadeuli hangul_galmadeuli_3_2014 = {
    N_ELEMENTS(hangul_galmadeuli_table_3_2014),
    (HangulGalmadeuliItem*)hangul_galmadeuli_table_3_2014
};

static const HangulGalmadeuli hangul_galmadeuli_3_2015 = {
    N_ELEMENTS(hangul_galmadeuli_table_3_2015),
    (HangulGalmadeuliItem*)hangul_galmadeuli_table_3_2015
};

static const HangulGalmadeuli hangul_galmadeuli_3_2015_metal = {
    N_ELEMENTS(hangul_galmadeuli_table_3_2015_metal),
    (HangulGalmadeuliItem*)hangul_galmadeuli_table_3_2015_metal
};

static const HangulGalmadeuli hangul_galmadeuli_3_2015_patal = {
    N_ELEMENTS(hangul_galmadeuli_table_3_2015_patal),
    (HangulGalmadeuliItem*)hangul_galmadeuli_table_3_2015_patal
};

static const HangulGalmadeuli hangul_galmadeuli_3_p3 = {
    N_ELEMENTS(hangul_galmadeuli_table_3_p3),
    (HangulGalmadeuliItem*)hangul_galmadeuli_table_3_p3
};

static const HangulGalmadeuli hangul_galmadeuli_3_14_proposal = {
    N_ELEMENTS(hangul_galmadeuli_table_3_14_proposal),
    (HangulGalmadeuliItem*)hangul_galmadeuli_table_3_14_proposal
};

static const HangulGalmadeuli hangul_galmadeuli_3shin_1995 = {
    N_ELEMENTS(hangul_galmadeuli_table_3shin_1995),
    (HangulGalmadeuliItem*)hangul_galmadeuli_table_3shin_1995
};

static const HangulGalmadeuli hangul_galmadeuli_3shin_2003 = {
    N_ELEMENTS(hangul_galmadeuli_table_3shin_2003),
    (HangulGalmadeuliItem*)hangul_galmadeuli_table_3shin_2003
};

static const HangulGalmadeuli hangul_galmadeuli_3shin_2012 = {
    N_ELEMENTS(hangul_galmadeuli_table_3shin_2012),
    (HangulGalmadeuliItem*)hangul_galmadeuli_table_3shin_2012
};

static const HangulGalmadeuli hangul_galmadeuli_3shin_2015 = {
    N_ELEMENTS(hangul_galmadeuli_table_3shin_2015),
    (HangulGalmadeuliItem*)hangul_galmadeuli_table_3shin_2015
};

static const HangulGalmadeuli hangul_galmadeuli_3shin_m = {
    N_ELEMENTS(hangul_galmadeuli_table_3shin_m),
    (HangulGalmadeuliItem*)hangul_galmadeuli_table_3shin_m
};

static const HangulGalmadeuli hangul_galmadeuli_3shin_p = {
    N_ELEMENTS(hangul_galmadeuli_table_3shin_p),
    (HangulGalmadeuliItem*)hangul_galmadeuli_table_3shin_p
};

static const HangulGalmadeuli hangul_galmadeuli_3shin_p2 = {
    N_ELEMENTS(hangul_galmadeuli_table_3shin_p2),
    (HangulGalmadeuliItem*)hangul_galmadeuli_table_3shin_p2
};

static const HangulKeyboardAddon hangul_keyboard_addon_2noshift = {
    "2noshift", // id
    0x0000, // replace_it // ucschar // 0x0000 : FALSE , else : TRUE
    0x00, // flag
    NULL, // symbol_key
    NULL, // symbol_value
    NULL, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    NULL, // ext_step
    NULL, // moeum_key
    NULL, // moeum_value
    NULL, // combination_addon
    &hangul_replace_2_noshift // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_2north9256 = {
    "2n9256", // id
    0x0000, // replace_it // ucschar // 0x0000 : FALSE , else : TRUE
    0x00, // flag
    NULL, // symbol_key
    NULL, // symbol_value
    NULL, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    NULL, // ext_step
    NULL, // moeum_key
    NULL, // moeum_value
    NULL, // combination_addon
    &hangul_replace_2_noshift // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3_90 = {
    "3-90", // id
    0x119e, // replace_it // 아래아
    0x00, // flag
    NULL, // symbol_key
    NULL, // symbol_value
    NULL, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    NULL, // ext_step
    sebeol_3_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    NULL // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3_91 = {
    "3-91", // id
    0x119e, // replace_it // 아래아
    0x00, // flag
    NULL, // symbol_key
    NULL, // symbol_value
    NULL, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    NULL, // ext_step
    sebeol_3_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    NULL // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3_93_yet = {
    "3-93-yet", // id
    0x0000, // replace_it // FALSE
    0x00, // flag
    NULL, // symbol_key
    NULL, // symbol_value
    NULL, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    NULL, // ext_step
    sebeol_3_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    NULL // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3_2011 = {
    "3-2011", // id
    0x119e, // replace_it // 아래아
    0x01, // flag
    sebeol_3_symbol_key, // symbol_key
    NULL, // symbol_value
    &hangul_ascii_to_symbol_3_2011, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    NULL // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3_2011_yet = {
    "3-2011-yet", // id
    0x119e, // replace_it // 아래아
    0x01, // flag
    sebeol_3yet_symbol_key, // symbol_key
    NULL, // symbol_value
    &hangul_ascii_to_symbol_3_2011_yet, // (*symbolFunc)(int, int, int)
    sebeol_3yet_yetgeul_key, // yetgeul_key
    NULL, // yetgeul_value
    &hangul_ascii_to_hanguel_3_yet, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    NULL // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3_2012 = {
    "3-2012", // id
    0x119e, // replace_it // 아래아
    0x01, // flag
    sebeol_3_symbol_key, // symbol_key
    NULL, // symbol_value
    &hangul_ascii_to_symbol_3_2012, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    NULL // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3_2012_yet = {
    "3-2012-yet", // id
    0x119e, // replace_it // 아래아
    0x01, // flag
    sebeol_3yet_symbol_key, // symbol_key
    NULL, // symbol_value
    &hangul_ascii_to_symbol_3_2012_yet, // (*symbolFunc)(int, int, int)
    sebeol_3yet_yetgeul_key, // yetgeul_key
    NULL, // yetgeul_value
    &hangul_ascii_to_hanguel_3_yet, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    NULL // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3_2014 = {
    "3-2014", // id
    0x119e, // replace_it // 아래아
    0x0b, // flag
    sebeol_3yet_symbol_key, // symbol_key
    sebeol_3_symbol_value, // symbol_value
    &hangul_ascii_to_symbol_3_2012_yet, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    &hangul_galmadeuli_3_2014 // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3_2014_yet = {
    "3-2014-yet", // id
    0x119e, // replace_it // 아래아
    0x01, // flag
    sebeol_3yet_symbol_key, // symbol_key
    sebeol_3_symbol_value, // symbol_value
    &hangul_ascii_to_symbol_3_2012_yet, // (*symbolFunc)(int, int, int)
    sebeol_3yet_yetgeul_key, // yetgeul_key
    NULL, // yetgeul_value
    &hangul_ascii_to_hanguel_3_yet, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    NULL // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3_2015 = {
    "3-2015", // id
    0x0000, // replace_it // 아래아
    0x1a, // flag
    NULL, // symbol_key
    NULL, // symbol_value
    NULL, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    NULL, // ext_step
    sebeol_3_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    &hangul_combination_3_2015, // combination_addon
    &hangul_galmadeuli_3_2015 // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3_2015_yet = {
    "3-2015-yet", // id
    0x0000, // replace_it // FALSE
    0x00, // flag
    NULL, // symbol_key
    NULL, // symbol_value
    NULL, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    NULL, // ext_step
    sebeol_3_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    &hangul_combination_3_2015_yet, // combination_addon
    NULL // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3_2015_metal = {
    "3-2015-metal", // id
    0x0000, // replace_it // 아래아
    0x1a, // flag
    NULL, // symbol_key
    NULL, // symbol_value
    NULL, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    NULL, // ext_step
    sebeol_3_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    &hangul_combination_3_2015, // combination_addon
    &hangul_galmadeuli_3_2015_metal // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3_2015_patal = {
    "3-2015-patal", // id
    0x119e, // replace_it // 아래아
    0x0b, // flag
    sebeol_3yet_symbol_key, // symbol_key
    sebeol_3_symbol_value, // symbol_value
    &hangul_ascii_to_symbol_3_2012_yet, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    &hangul_galmadeuli_3_2015_patal // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3_p2 = {
    "3-p2", // id
    0x119e, // replace_it // 아래아
    0x1b, // flag
    sebeol_3yet_symbol_key, // symbol_key
    sebeol_3_symbol_value, // symbol_value
    &hangul_ascii_to_symbol_3_2012_yet, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    &hangul_galmadeuli_3_p3 // galmadeuli_addon // 3_p3 의 것을 쓴다
};

static const HangulKeyboardAddon hangul_keyboard_addon_3_p3 = {
    "3-p3", // id
    0x119e, // replace_it // 아래아
    0x1b, // flag
    sebeol_3yet_symbol_key, // symbol_key
    sebeol_3_symbol_value, // symbol_value
    &hangul_ascii_to_symbol_3_p3, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    &hangul_galmadeuli_3_p3 // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3_2015_patal_yet = {
    "3-2015-patal-yet", // id
    0x119e, // replace_it // 아래아
    0x01, // flag
    sebeol_3yet_symbol_key, // symbol_key
    sebeol_3_symbol_value, // symbol_value
    &hangul_ascii_to_symbol_3_2012_yet, // (*symbolFunc)(int, int, int)
    sebeol_3yet_yetgeul_key, // yetgeul_key
    NULL, // yetgeul_value
    &hangul_ascii_to_hanguel_3_yet, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    NULL // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3_14_proposal = {
    "3-14-proposal", // id
    0x0000, // replace_it // FALSE
    0x0a, // flag
    NULL, // symbol_key
    NULL, // symbol_value
    NULL, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    NULL, // ext_step
    sebeol_3_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    &hangul_combination_3_14_proposal, // combination_addon
    &hangul_galmadeuli_3_14_proposal // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3moa_semoe_2014 = {
    "3moa-semoe-2014", // id
    0x0000, // replace_it // FALSE
    0x00, // flag
    NULL, // symbol_key
    NULL, // symbol_value
    NULL, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    NULL, // ext_step
    sebeol_3moa_semoe_moeum_key_deprecated, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    NULL // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3moa_semoe_2015 = {
    "3moa-semoe-2015", // id
    0x0000, // replace_it // FALSE
    0x00, // flag
    NULL, // symbol_key
    NULL, // symbol_value
    NULL, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    NULL, // ext_step
    sebeol_3moa_semoe_moeum_key_deprecated, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    NULL // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3moa_semoe_2016 = {
    "3moa-semoe-2016", // id
    0x0000, // replace_it // FALSE
    0x01, // flag
    sebeol_3moa_symbol_key, // symbol_key
    NULL, // symbol_value
    &hangul_ascii_to_symbol_semoe, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3moa_semoe_2016_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    NULL // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3moa_semoe_2017 = {
    "3moa-semoe-2017", // id
    0x0000, // replace_it // FALSE
    0x01, // flag
    sebeol_3moa_symbol_key, // symbol_key
    NULL, // symbol_value
    &hangul_ascii_to_symbol_semoe, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3moa_semoe_2017_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    NULL // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3moa_semoe_2018 = {
    "3moa-semoe-2018", // id
    0x0000, // replace_it // FALSE
    0x01, // flag
    sebeol_3moa_symbol_key, // symbol_key
    NULL, // symbol_value
    &hangul_ascii_to_symbol_semoe, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3moa_semoe_2018_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    NULL // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3sun_2014 = {
    "3sun-2014", // id
    0x0000, // replace_it // FALSE
    0x00, // flag
    NULL, // symbol_key
    NULL, // symbol_value
    NULL, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    NULL, // ext_step
    sebeol_3_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    &hangul_combination_3sun_2014, // combination_addon
    NULL // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3gimguk_38a_yet = {
    "3gimguk-38a-yet", // id
    0x0000, // replace_it // FALSE
    0x00, // flag
    NULL, // symbol_key
    NULL, // symbol_value
    NULL, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    NULL, // ext_step
    NULL, // moeum_key
    NULL, // moeum_value
    &hangul_combination_3gimguk_38a_yet, // combination_addon
    NULL // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3shin_1995 = {
    "3shin-1995", // id
    0x0000, // replace_it // FALSE
    0x09, // flag // 갈마들이는 필수 기능이라 꺼지면 안된다
    sebeol_3shin_symbol_key, // symbol_key
    sebeol_3shin_symbol_value, // symbol_value
    &hangul_ascii_to_symbol_shin, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3shin_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    &hangul_galmadeuli_3shin_1995 // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3shin_2003 = {
    "3shin-2003", // id
    0x0000, // replace_it // FALSE
    0x09, // flag // 갈마들이는 필수 기능이라 꺼지면 안된다
    sebeol_3shin_symbol_key, // symbol_key
    sebeol_3shin_symbol_value, // symbol_value
    &hangul_ascii_to_symbol_shin, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3shin_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    &hangul_galmadeuli_3shin_2003 // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3shin_2012 = {
    "3shin-2012", // id
    0x119e, // replace_it // FALSE
    0x09, // flag // 갈마들이는 필수 기능이라 꺼지면 안된다
    sebeol_3shin_symbol_key, // symbol_key
    sebeol_3shin_symbol_value, // symbol_value
    &hangul_ascii_to_symbol_shin, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3shin_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    &hangul_galmadeuli_3shin_2012 // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3shin_2015 = {
    "3shin-2015", // id
    0x0000, // replace_it // FALSE
    0x09, // flag // 갈마들이는 필수 기능이라 꺼지면 안된다
    NULL, // symbol_key
    NULL, // symbol_value
    NULL, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    NULL, // ext_step
    sebeol_3shin_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    &hangul_combination_3shin_2015, // combination_addon
    &hangul_galmadeuli_3shin_2015 // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3shin_m = {
    "3shin-m", // id
    0x0000, // replace_it // FALSE
    0x09, // flag // 갈마들이는 필수 기능이라 꺼지면 안된다
    NULL, // symbol_key
    NULL, // symbol_value
    NULL, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    NULL, // ext_step
    sebeol_3shin_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    &hangul_galmadeuli_3shin_m // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3shin_p = {
    "3shin-p", // id
    0x0000, // replace_it // FALSE
    0x19, // flag // 갈마들이는 필수 기능이라 꺼지면 안된다
    sebeol_3shin_symbol_key, // symbol_key
    sebeol_3shin_symbol_value, // symbol_value
    &hangul_ascii_to_symbol_shin, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3shin_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    &hangul_galmadeuli_3shin_p // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3shin_p_yet = {
    "3shin-p-yet", // id
    0x0000, // replace_it // FALSE
    0x19, // flag // 갈마들이는 필수 기능이라 꺼지면 안된다
    sebeol_3shin_symbol_key, // symbol_key
    sebeol_3shin_symbol_value, // symbol_value
    &hangul_ascii_to_symbol_shin, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3shin_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    &hangul_combination_3shin_p_yet, // combination_addon
    &hangul_galmadeuli_3shin_p // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3shin_p2 = {
    "3shin-p2", // id
    0x0000, // replace_it // FALSE
    0x19, // flag // 갈마들이는 필수 기능이라 꺼지면 안된다
    sebeol_3shin_symbol_key, // symbol_key
    sebeol_3shin_symbol_value, // symbol_value
    &hangul_ascii_to_symbol_shin, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3shin_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    NULL, // combination_addon
    &hangul_galmadeuli_3shin_p2 // galmadeuli_addon
};

static const HangulKeyboardAddon hangul_keyboard_addon_3shin_p2_yet = {
    "3shin-p2-yet", // id
    0x0000, // replace_it // FALSE
    0x19, // flag // 갈마들이는 필수 기능이라 꺼지면 안된다
    sebeol_3shin_symbol_key, // symbol_key
    sebeol_3shin_symbol_value, // symbol_value
    &hangul_ascii_to_symbol_shin, // (*symbolFunc)(int, int, int)
    NULL, // yetgeul_key
    NULL, // yetgeul_value
    NULL, // (*yetgeulFunc)(int, int, int)
    sebeol_3_ext_step, // ext_step
    sebeol_3shin_moeum_key, // moeum_key
    sebeol_3_moeum_value, // moeum_value
    &hangul_combination_3shin_p2_yet, // combination_addon
    &hangul_galmadeuli_3shin_p2 // galmadeuli_addon
};


static const HangulKeyboardAddon* hangul_keyboard_addons[] = {
    &hangul_keyboard_addon_2noshift,
    &hangul_keyboard_addon_2north9256,
    &hangul_keyboard_addon_3_90,
    &hangul_keyboard_addon_3_91,
    &hangul_keyboard_addon_3_93_yet,
    &hangul_keyboard_addon_3_2011,
    &hangul_keyboard_addon_3_2011_yet,
    &hangul_keyboard_addon_3_2012,
    &hangul_keyboard_addon_3_2012_yet,
    &hangul_keyboard_addon_3_2014,
    &hangul_keyboard_addon_3_2014_yet,
    &hangul_keyboard_addon_3_2015,
    &hangul_keyboard_addon_3_2015_yet,
    &hangul_keyboard_addon_3_2015_metal,
    &hangul_keyboard_addon_3_2015_patal,
    &hangul_keyboard_addon_3_2015_patal_yet,
    &hangul_keyboard_addon_3_p2,
    &hangul_keyboard_addon_3_p3,
    &hangul_keyboard_addon_3_14_proposal,
    &hangul_keyboard_addon_3moa_semoe_2014,
    &hangul_keyboard_addon_3moa_semoe_2015,
    &hangul_keyboard_addon_3moa_semoe_2016,
    &hangul_keyboard_addon_3moa_semoe_2017,
	&hangul_keyboard_addon_3moa_semoe_2018,
    &hangul_keyboard_addon_3sun_2014,
    &hangul_keyboard_addon_3gimguk_38a_yet,
    &hangul_keyboard_addon_3shin_1995,
    &hangul_keyboard_addon_3shin_2003,
    &hangul_keyboard_addon_3shin_2012,
    &hangul_keyboard_addon_3shin_2015,
    &hangul_keyboard_addon_3shin_m,
    &hangul_keyboard_addon_3shin_p,
    &hangul_keyboard_addon_3shin_p_yet,
    &hangul_keyboard_addon_3shin_p2,
    &hangul_keyboard_addon_3shin_p2_yet,
};


/* keyboard */
static ucschar hangul_keyboard_get_value(const HangulKeyboard *keyboard, int key);
static int hangul_keyboard_get_type(const HangulKeyboard *keyboard);

/* combination */
static uint32_t hangul_combination_make_key(ucschar first, ucschar second);
static int hangul_combination_cmp(const void* p1, const void* p2);
ucschar hangul_combination_combine(const HangulCombination* combination,
			   ucschar first, ucschar second);

/* buffer */
static bool hangul_buffer_is_empty(HangulBuffer *buffer);
static bool hangul_buffer_has_choseong(HangulBuffer *buffer);
static bool hangul_buffer_has_jungseong(HangulBuffer *buffer);
static bool hangul_buffer_has_jongseong(HangulBuffer *buffer);

static void    hangul_buffer_push(HangulBuffer *buffer, ucschar ch);
static ucschar hangul_buffer_pop (HangulBuffer *buffer);
static ucschar hangul_buffer_peek(HangulBuffer *buffer);

static void    hangul_buffer_clear(HangulBuffer *buffer);
static int     hangul_buffer_get_string(HangulBuffer *buffer, ucschar*buf, int buflen);
static int     hangul_buffer_get_jamo_string(HangulBuffer *buffer, ucschar *buf, int buflen);
static int     hangul_jaso_to_string(ucschar cho, ucschar jung, ucschar jong,
		      ucschar *buf, int len);

static bool hangul_buffer_backspace(HangulBuffer *buffer);

/* input context */
static inline bool hangul_ic_push(HangulInputContext *hic, ucschar c);
static inline ucschar hangul_ic_pop(HangulInputContext *hic);
static inline ucschar hangul_ic_peek(HangulInputContext *hic);

static inline void hangul_ic_save_preedit_string(HangulInputContext *hic);
static inline void hangul_ic_append_commit_string(HangulInputContext *hic, ucschar ch);
static inline void hangul_ic_save_commit_string(HangulInputContext *hic);

static ucschar hangul_ic_choseong_to_jongseong(HangulInputContext* hic, ucschar cho);

static bool hangul_ic_process_jamo(HangulInputContext *hic, ucschar ch);
static bool hangul_ic_process_jaso(HangulInputContext *hic, ucschar ch);
static bool hangul_ic_process_romaja(HangulInputContext *hic, int ascii, ucschar ch);

/*** 3beol ***/
static bool hangul_ic_process_jamo_dubeol (HangulInputContext *hic, ucschar ch);
static bool hangul_ic_process_jaso_shin_sebeol (HangulInputContext *hic, int ascii, ucschar ch);
static bool hangul_ic_process_jaso_shin_sebeol_yet
                                                    (HangulInputContext *hic,
                                                    int ascii,
                                                    ucschar ch,
                                                    bool capslock);
static bool hangul_ic_process_jaso_sebeol (HangulInputContext *hic, int ascii, ucschar ch);
static bool hangul_ic_process_3finalsun(HangulInputContext *hic, int ascii, ucschar ch);
/************/

static const HangulKeyboard* hangul_ic_get_keyboard_by_id(const char* id);
/*** 3beol ***/
static inline bool hangul_is_right_oua (const HangulKeyboardAddon *keyboard_addon, int ascii, ucschar ch);
static inline int hangul_galmadeuli_cmp(const void* p1, const void* p2);
static inline ucschar hangul_galmadeuli_convert (const HangulGalmadeuli *galmadeuli, const ucschar ch);
static inline void hangul_buffer_push_extension_step(HangulBuffer *buffer, ucschar ch);
static inline int hangul_is_extension_symbol_key (const HangulKeyboardAddon *keyboard_addon, int ascii);
static inline int hangul_is_extension_yetgeul_key (const HangulKeyboardAddon *keyboard_addon, int ascii);
static inline bool hangul_is_extension_condition_sebeol_shin (HangulInputContext *hic);
static inline bool hangul_is_extension_condition_sebeol (HangulInputContext *hic, int ascii, int max_index);
static inline void hangul_is_extension_ready_sebeol (HangulInputContext *hic);
static inline bool hangul_is_flag_loose_order (const HangulKeyboardAddon *keyboard_addon);
static inline bool hangul_is_flag_right_ou (const HangulKeyboardAddon *keyboard_addon);
static inline bool hangul_is_flag_no_added_ggeut (const HangulKeyboardAddon *keyboard_addon);
static inline ucschar hangul_combination_search_table (const HangulInputContext *const hic, const ucschar ch);

static const HangulKeyboardAddon* hangul_ic_get_keyboard_addon_by_id(const char* id);
static unsigned int hangul_ic_get_n_keyboard_addons(void);
/************/

static void    hangul_ic_flush_internal(HangulInputContext *hic);


#endif /* libhangul_hangulinputcontext_def_h */
