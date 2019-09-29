/* AMD Jaguar gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 2019 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of either:

  * the GNU Lesser General Public License as published by the Free
    Software Foundation; either version 3 of the License, or (at your
    option) any later version.

or

  * the GNU General Public License as published by the Free Software
    Foundation; either version 2 of the License, or (at your option) any
    later version.

or both in parallel, as here.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received copies of the GNU General Public License and the
GNU Lesser General Public License along with the GNU MP Library.  If not,
see https://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 64
#define GMP_LIMB_BYTES 8

/* Disable use of slow functions.  FIXME: We should disable lib inclusion.  */
#undef HAVE_NATIVE_mpn_mul_2
#undef HAVE_NATIVE_mpn_addmul_2

/* 2050 MHz AMD Jaguar/Kabini */
/* FFT tuning limit = 0.5 M */
/* Generated by tuneup.c, 2019-09-27, gcc 8.3 */

#define MOD_1_NORM_THRESHOLD                 3
#define MOD_1_UNNORM_THRESHOLD               0  /* always */
#define MOD_1N_TO_MOD_1_1_THRESHOLD          4
#define MOD_1U_TO_MOD_1_1_THRESHOLD          3
#define MOD_1_1_TO_MOD_1_2_THRESHOLD        69
#define MOD_1_2_TO_MOD_1_4_THRESHOLD         0  /* never mpn_mod_1s_2p */
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD     10
#define USE_PREINV_DIVREM_1                  1  /* native */
#define DIV_QR_1_NORM_THRESHOLD              4
#define DIV_QR_1_UNNORM_THRESHOLD        MP_SIZE_T_MAX  /* never */
#define DIV_QR_2_PI2_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD                 0  /* always (native) */
#define BMOD_1_TO_MOD_1_THRESHOLD           15

#define DIV_1_VS_MUL_1_PERCENT             266

#define MUL_TOOM22_THRESHOLD                24
#define MUL_TOOM33_THRESHOLD                67
#define MUL_TOOM44_THRESHOLD               185
#define MUL_TOOM6H_THRESHOLD               274
#define MUL_TOOM8H_THRESHOLD               399

#define MUL_TOOM32_TO_TOOM43_THRESHOLD     129
#define MUL_TOOM32_TO_TOOM53_THRESHOLD     138
#define MUL_TOOM42_TO_TOOM53_THRESHOLD     124
#define MUL_TOOM42_TO_TOOM63_THRESHOLD     136
#define MUL_TOOM43_TO_TOOM54_THRESHOLD     106

#define SQR_BASECASE_THRESHOLD               0  /* always (native) */
#define SQR_TOOM2_THRESHOLD                 20
#define SQR_TOOM3_THRESHOLD                129
#define SQR_TOOM4_THRESHOLD                244
#define SQR_TOOM6_THRESHOLD                318
#define SQR_TOOM8_THRESHOLD                478

#define MULMID_TOOM42_THRESHOLD             20

#define MULMOD_BNM1_THRESHOLD               11
#define SQRMOD_BNM1_THRESHOLD               13

#define MUL_FFT_MODF_THRESHOLD             372  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    372, 5}, {     19, 6}, {     10, 5}, {     21, 6}, \
    {     21, 7}, {     11, 6}, {     23, 7}, {     12, 6}, \
    {     25, 7}, {     20, 8}, {     11, 7}, {     25, 8}, \
    {     13, 7}, {     28, 8}, {     15, 7}, {     31, 8}, \
    {     17, 7}, {     35, 8}, {     19, 7}, {     39, 8}, \
    {     21, 9}, {     11, 8}, {     27, 9}, {     15, 8}, \
    {     35, 9}, {     19, 8}, {     41, 9}, {     23, 8}, \
    {     47, 9}, {     27,10}, {     15, 9}, {     39,10}, \
    {     23, 9}, {     51,11}, {     15,10}, {     31, 9}, \
    {     67,10}, {     39, 9}, {     79,10}, {     47, 9}, \
    {     95,11}, {     31,10}, {     79,11}, {     47,10}, \
    {     95,12}, {     31,11}, {     63,10}, {    127, 9}, \
    {    255,10}, {    135,11}, {     79,10}, {    159, 9}, \
    {    319,11}, {     95,10}, {    191, 9}, {    383,11}, \
    {    111,12}, {     63,11}, {    127,10}, {    255, 9}, \
    {    511,10}, {    271,11}, {    143,10}, {    287, 9}, \
    {    575,10}, {    303, 9}, {    607,10}, {    319,12}, \
    {     95,11}, {    191,10}, {    383,11}, {    207,10}, \
    {    415,13}, {   8192,14}, {  16384,15}, {  32768,16}, \
    {  65536,17}, { 131072,18}, { 262144,19}, { 524288,20}, \
    {1048576,21}, {2097152,22}, {4194304,23}, {8388608,24} }
#define MUL_FFT_TABLE3_SIZE 84
#define MUL_FFT_THRESHOLD                 3712

#define SQR_FFT_MODF_THRESHOLD             340  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    340, 5}, {     19, 6}, {     10, 5}, {     21, 6}, \
    {     21, 7}, {     11, 6}, {     25, 7}, {     13, 6}, \
    {     27, 7}, {     14, 6}, {     29, 7}, {     21, 8}, \
    {     11, 7}, {     25, 8}, {     13, 7}, {     29, 8}, \
    {     15, 7}, {     31, 8}, {     21, 9}, {     11, 8}, \
    {     29, 9}, {     15, 8}, {     35, 9}, {     19, 8}, \
    {     41, 9}, {     23, 8}, {     47, 9}, {     27,10}, \
    {     15, 9}, {     39,10}, {     23, 9}, {     51,11}, \
    {     15,10}, {     31, 9}, {     63,10}, {     47,11}, \
    {     31,10}, {     79,11}, {     47,10}, {     95,12}, \
    {     31,11}, {     63,10}, {    127, 9}, {    255, 8}, \
    {    511,10}, {    135, 9}, {    271,11}, {     79, 9}, \
    {    319,11}, {     95,10}, {    191, 9}, {    383,10}, \
    {    207,12}, {     63,11}, {    127,10}, {    255, 9}, \
    {    511,10}, {    271, 9}, {    543,11}, {    143,10}, \
    {    287, 9}, {    575,10}, {    303, 9}, {    607,10}, \
    {    319, 9}, {    639,12}, {     95,11}, {    191,10}, \
    {    383,11}, {    207,10}, {    415,13}, {   8192,14}, \
    {  16384,15}, {  32768,16}, {  65536,17}, { 131072,18}, \
    { 262144,19}, { 524288,20}, {1048576,21}, {2097152,22}, \
    {4194304,23}, {8388608,24} }
#define SQR_FFT_TABLE3_SIZE 82
#define SQR_FFT_THRESHOLD                 2880

#define MULLO_BASECASE_THRESHOLD             0  /* always */
#define MULLO_DC_THRESHOLD                  62
#define MULLO_MUL_N_THRESHOLD             7246
#define SQRLO_BASECASE_THRESHOLD             8
#define SQRLO_DC_THRESHOLD                  54
#define SQRLO_SQR_THRESHOLD               5724

#define DC_DIV_QR_THRESHOLD                 60
#define DC_DIVAPPR_Q_THRESHOLD             185
#define DC_BDIV_QR_THRESHOLD                52
#define DC_BDIV_Q_THRESHOLD                101

#define INV_MULMOD_BNM1_THRESHOLD           46
#define INV_NEWTON_THRESHOLD               250
#define INV_APPR_THRESHOLD                 182

#define BINV_NEWTON_THRESHOLD              252
#define REDC_1_TO_REDC_2_THRESHOLD          67
#define REDC_2_TO_REDC_N_THRESHOLD           0  /* always */

#define MU_DIV_QR_THRESHOLD               1334
#define MU_DIVAPPR_Q_THRESHOLD            1308
#define MUPI_DIV_QR_THRESHOLD              106
#define MU_BDIV_QR_THRESHOLD              1017
#define MU_BDIV_Q_THRESHOLD               1341

#define POWM_SEC_TABLE  2,19,194,624,904,1811

#define GET_STR_DC_THRESHOLD                21
#define GET_STR_PRECOMPUTE_THRESHOLD        30
#define SET_STR_DC_THRESHOLD               248
#define SET_STR_PRECOMPUTE_THRESHOLD      1013

#define FAC_DSC_THRESHOLD                  172
#define FAC_ODD_THRESHOLD                   54

#define MATRIX22_STRASSEN_THRESHOLD         19
#define HGCD2_DIV1_METHOD                    1  /* 7.72% faster than 3 */
#define HGCD_THRESHOLD                      82
#define HGCD_APPR_THRESHOLD                 57
#define HGCD_REDUCE_THRESHOLD             2121
#define GCD_DC_THRESHOLD                   372
#define GCDEXT_DC_THRESHOLD                233
#define JACOBI_BASE_METHOD                   1  /* 4.13% faster than 4 */
