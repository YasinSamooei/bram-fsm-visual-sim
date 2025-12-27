/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *STD_STANDARD;
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
static const char *ng3 = "Function sl_to_char ended without a return statement";
static const char *ng4 = "F:/bram_fsm_proj/tb_top_bram_fsm.vhd";

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


char *work_a_2268434601_3553469787_sub_594608298_3396091961(char *t1, char *t2, char *t3, char *t4)
{
    char t5[512];
    char t6[24];
    char t14[8];
    char t22[16];
    char t49[16];
    char t66[8];
    char t77[16];
    char *t0;
    char *t7;
    unsigned int t8;
    int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    int t20;
    unsigned int t21;
    char *t23;
    int t24;
    char *t25;
    int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t48;
    char *t50;
    unsigned int t51;
    int t52;
    char *t53;
    char *t54;
    int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    char *t69;
    unsigned char t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned char t75;
    unsigned char t76;
    int t78;
    int t79;
    int t80;
    int t81;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 + 3);
    t10 = (t9 / 4);
    t11 = (t5 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = t10;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    t19 = *((int *)t18);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t21 = (t21 + 1);
    t21 = (t21 * 1U);
    t17 = (t11 + 56U);
    t23 = *((char **)t17);
    t24 = *((int *)t23);
    t17 = (t22 + 0U);
    t25 = (t17 + 0U);
    *((int *)t25) = 1;
    t25 = (t17 + 4U);
    *((int *)t25) = t24;
    t25 = (t17 + 8U);
    *((int *)t25) = 1;
    t26 = (t24 - 1);
    t27 = (t26 * 1);
    t27 = (t27 + 1);
    t25 = (t17 + 12U);
    *((unsigned int *)t25) = t27;
    t25 = (t5 + 124U);
    t28 = ((STD_STANDARD) + 1008);
    t29 = (t25 + 88U);
    *((char **)t29) = t28;
    t30 = xsi_get_memory(t21);
    t31 = (t25 + 56U);
    *((char **)t31) = t30;
    xsi_type_set_default_value(t28, t30, t22);
    t32 = (t25 + 64U);
    *((char **)t32) = t22;
    t33 = (t25 + 80U);
    *((unsigned int *)t33) = t21;
    t34 = (t25 + 136U);
    *((char **)t34) = t30;
    t35 = (t25 + 124U);
    *((int *)t35) = 0;
    t36 = (t25 + 128U);
    t37 = (t22 + 12U);
    t27 = *((unsigned int *)t37);
    t38 = (t27 - 1);
    *((int *)t36) = t38;
    t39 = (t25 + 120U);
    t41 = (t21 > 2147483644);
    if (t41 == 1)
        goto LAB2;

LAB3:    t42 = (t21 + 3);
    t43 = (t42 / 16);
    t40 = t43;

LAB4:    *((unsigned int *)t39) = t40;
    t44 = (t4 + 12U);
    t45 = *((unsigned int *)t44);
    t46 = (t45 - 1);
    t47 = (0 - t46);
    t48 = (t47 * -1);
    t48 = (t48 + 1);
    t48 = (t48 * 1U);
    t50 = (t4 + 12U);
    t51 = *((unsigned int *)t50);
    t52 = (t51 - 1);
    t53 = (t49 + 0U);
    t54 = (t53 + 0U);
    *((int *)t54) = t52;
    t54 = (t53 + 4U);
    *((int *)t54) = 0;
    t54 = (t53 + 8U);
    *((int *)t54) = -1;
    t55 = (0 - t52);
    t56 = (t55 * -1);
    t56 = (t56 + 1);
    t54 = (t53 + 12U);
    *((unsigned int *)t54) = t56;
    t54 = (t5 + 268U);
    t57 = ((IEEE_P_2592010699) + 4024);
    t58 = (t54 + 88U);
    *((char **)t58) = t57;
    t59 = (char *)alloca(t48);
    t60 = (t54 + 56U);
    *((char **)t60) = t59;
    xsi_type_set_default_value(t57, t59, t49);
    t61 = (t54 + 64U);
    *((char **)t61) = t49;
    t62 = (t54 + 80U);
    *((unsigned int *)t62) = t48;
    t63 = (t5 + 388U);
    t64 = ((STD_STANDARD) + 384);
    t65 = (t63 + 88U);
    *((char **)t65) = t64;
    t67 = (t63 + 56U);
    *((char **)t67) = t66;
    xsi_type_set_default_value(t64, t66, 0);
    t68 = (t63 + 80U);
    *((unsigned int *)t68) = 4U;
    t69 = (t6 + 4U);
    t70 = (t3 != 0);
    if (t70 == 1)
        goto LAB6;

LAB5:    t71 = (t6 + 12U);
    *((char **)t71) = t4;
    t72 = (t54 + 56U);
    t73 = *((char **)t72);
    t72 = (t73 + 0);
    t74 = (t4 + 12U);
    t56 = *((unsigned int *)t74);
    t56 = (t56 * 1U);
    memcpy(t72, t3, t56);
    t7 = (t11 + 56U);
    t12 = *((char **)t7);
    t9 = *((int *)t12);
    t10 = 1;
    t19 = t9;

LAB7:    if (t10 <= t19)
        goto LAB8;

LAB10:    t7 = (t25 + 56U);
    t12 = *((char **)t7);
    t7 = (t22 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t12, t8);
    t13 = (t22 + 0U);
    t9 = *((int *)t13);
    t15 = (t22 + 4U);
    t10 = *((int *)t15);
    t16 = (t22 + 8U);
    t19 = *((int *)t16);
    t17 = (t2 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t9;
    t18 = (t17 + 4U);
    *((int *)t18) = t10;
    t18 = (t17 + 8U);
    *((int *)t18) = t19;
    t20 = (t10 - t9);
    t21 = (t20 * t19);
    t21 = (t21 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t21;

LAB1:    t7 = (t25 + 80);
    t9 = *((int *)t7);
    t12 = (t25 + 136U);
    t13 = *((char **)t12);
    xsi_put_memory(t9, t13);
    return t0;
LAB2:    t40 = 2147483647;
    goto LAB4;

LAB6:    *((char **)t69) = t3;
    goto LAB5;

LAB8:    t75 = (t10 == 1);
    if (t75 == 1)
        goto LAB14;

LAB15:    t70 = (unsigned char)0;

LAB16:    if (t70 != 0)
        goto LAB11;

LAB13:    t7 = (t54 + 56U);
    t12 = *((char **)t7);
    t7 = (t49 + 0U);
    t9 = *((int *)t7);
    t13 = (t4 + 12U);
    t8 = *((unsigned int *)t13);
    t20 = (t8 - 1);
    t21 = (t9 - t20);
    t15 = (t4 + 12U);
    t27 = *((unsigned int *)t15);
    t24 = (t27 - 4);
    t16 = (t49 + 4U);
    t26 = *((int *)t16);
    t17 = (t49 + 8U);
    t38 = *((int *)t17);
    xsi_vhdl_check_range_of_slice(t9, t26, t38, t20, t24, -1);
    t40 = (t21 * 1U);
    t41 = (0 + t40);
    t18 = (t12 + t41);
    t23 = (t4 + 12U);
    t42 = *((unsigned int *)t23);
    t46 = (t42 - 1);
    t28 = (t4 + 12U);
    t43 = *((unsigned int *)t28);
    t47 = (t43 - 4);
    t29 = (t77 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = t46;
    t30 = (t29 + 4U);
    *((int *)t30) = t47;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t52 = (t47 - t46);
    t45 = (t52 * -1);
    t45 = (t45 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t45;
    t55 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t18, t77);
    t30 = (t63 + 56U);
    t31 = *((char **)t30);
    t30 = (t31 + 0);
    *((int *)t30) = t55;
    t7 = (t54 + 56U);
    t12 = *((char **)t7);
    t7 = (t49 + 0U);
    t9 = *((int *)t7);
    t13 = (t4 + 12U);
    t8 = *((unsigned int *)t13);
    t20 = (t8 - 5);
    t21 = (t9 - t20);
    t15 = (t49 + 4U);
    t24 = *((int *)t15);
    t16 = (t49 + 8U);
    t26 = *((int *)t16);
    xsi_vhdl_check_range_of_slice(t9, t24, t26, t20, 0, -1);
    t27 = (t21 * 1U);
    t40 = (0 + t27);
    t17 = (t12 + t40);
    t18 = (t54 + 56U);
    t23 = *((char **)t18);
    t18 = (t23 + 0);
    t28 = (t4 + 12U);
    t41 = *((unsigned int *)t28);
    t38 = (t41 - 5);
    t46 = (0 - t38);
    t42 = (t46 * -1);
    t42 = (t42 + 1);
    t43 = (1U * t42);
    memcpy(t18, t17, t43);

LAB12:    t7 = (t63 + 56U);
    t12 = *((char **)t7);
    t9 = *((int *)t12);
    if (t9 == 0)
        goto LAB18;

LAB35:    if (t9 == 1)
        goto LAB19;

LAB36:    if (t9 == 2)
        goto LAB20;

LAB37:    if (t9 == 3)
        goto LAB21;

LAB38:    if (t9 == 4)
        goto LAB22;

LAB39:    if (t9 == 5)
        goto LAB23;

LAB40:    if (t9 == 6)
        goto LAB24;

LAB41:    if (t9 == 7)
        goto LAB25;

LAB42:    if (t9 == 8)
        goto LAB26;

LAB43:    if (t9 == 9)
        goto LAB27;

LAB44:    if (t9 == 10)
        goto LAB28;

LAB45:    if (t9 == 11)
        goto LAB29;

LAB46:    if (t9 == 12)
        goto LAB30;

LAB47:    if (t9 == 13)
        goto LAB31;

LAB48:    if (t9 == 14)
        goto LAB32;

LAB49:    if (t9 == 15)
        goto LAB33;

LAB50:
LAB34:    t7 = (t25 + 56U);
    t12 = *((char **)t7);
    t7 = (t22 + 0U);
    t9 = *((int *)t7);
    t13 = (t22 + 8U);
    t20 = *((int *)t13);
    t24 = (t10 - t9);
    t8 = (t24 * t20);
    t15 = (t22 + 4U);
    t26 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t9, t26, t20, t10);
    t21 = (1U * t8);
    t27 = (0 + t21);
    t16 = (t12 + t27);
    *((unsigned char *)t16) = (unsigned char)88;

LAB17:
LAB9:    if (t10 == t19)
        goto LAB10;

LAB52:    t9 = (t10 + 1);
    t10 = t9;
    goto LAB7;

LAB11:    t13 = (t54 + 56U);
    t15 = *((char **)t13);
    t13 = (t49 + 0U);
    t24 = *((int *)t13);
    t16 = (t4 + 12U);
    t21 = *((unsigned int *)t16);
    t26 = (t21 - 1);
    t27 = (t24 - t26);
    t17 = (t4 + 12U);
    t40 = *((unsigned int *)t17);
    t18 = (t4 + 12U);
    t41 = *((unsigned int *)t18);
    t38 = xsi_vhdl_mod(t41, 4);
    t46 = (t40 - t38);
    t23 = (t49 + 4U);
    t47 = *((int *)t23);
    t28 = (t49 + 8U);
    t52 = *((int *)t28);
    xsi_vhdl_check_range_of_slice(t24, t47, t52, t26, t46, -1);
    t42 = (t27 * 1U);
    t43 = (0 + t42);
    t29 = (t15 + t43);
    t30 = (t4 + 12U);
    t45 = *((unsigned int *)t30);
    t55 = (t45 - 1);
    t31 = (t4 + 12U);
    t48 = *((unsigned int *)t31);
    t32 = (t4 + 12U);
    t51 = *((unsigned int *)t32);
    t78 = xsi_vhdl_mod(t51, 4);
    t79 = (t48 - t78);
    t33 = (t77 + 0U);
    t34 = (t33 + 0U);
    *((int *)t34) = t55;
    t34 = (t33 + 4U);
    *((int *)t34) = t79;
    t34 = (t33 + 8U);
    *((int *)t34) = -1;
    t80 = (t79 - t55);
    t56 = (t80 * -1);
    t56 = (t56 + 1);
    t34 = (t33 + 12U);
    *((unsigned int *)t34) = t56;
    t81 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t29, t77);
    t34 = (t63 + 56U);
    t35 = *((char **)t34);
    t34 = (t35 + 0);
    *((int *)t34) = t81;
    goto LAB12;

LAB14:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t20 = xsi_vhdl_mod(t8, 4);
    t76 = (t20 != 0);
    t70 = t76;
    goto LAB16;

LAB18:    t7 = (t25 + 56U);
    t13 = *((char **)t7);
    t7 = (t22 + 0U);
    t20 = *((int *)t7);
    t15 = (t22 + 8U);
    t24 = *((int *)t15);
    t26 = (t10 - t20);
    t8 = (t26 * t24);
    t16 = (t22 + 4U);
    t38 = *((int *)t16);
    xsi_vhdl_check_range_of_index(t20, t38, t24, t10);
    t21 = (1U * t8);
    t27 = (0 + t21);
    t17 = (t13 + t27);
    *((unsigned char *)t17) = (unsigned char)48;
    goto LAB17;

LAB19:    t7 = (t25 + 56U);
    t12 = *((char **)t7);
    t7 = (t22 + 0U);
    t9 = *((int *)t7);
    t13 = (t22 + 8U);
    t20 = *((int *)t13);
    t24 = (t10 - t9);
    t8 = (t24 * t20);
    t15 = (t22 + 4U);
    t26 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t9, t26, t20, t10);
    t21 = (1U * t8);
    t27 = (0 + t21);
    t16 = (t12 + t27);
    *((unsigned char *)t16) = (unsigned char)49;
    goto LAB17;

LAB20:    t7 = (t25 + 56U);
    t12 = *((char **)t7);
    t7 = (t22 + 0U);
    t9 = *((int *)t7);
    t13 = (t22 + 8U);
    t20 = *((int *)t13);
    t24 = (t10 - t9);
    t8 = (t24 * t20);
    t15 = (t22 + 4U);
    t26 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t9, t26, t20, t10);
    t21 = (1U * t8);
    t27 = (0 + t21);
    t16 = (t12 + t27);
    *((unsigned char *)t16) = (unsigned char)50;
    goto LAB17;

LAB21:    t7 = (t25 + 56U);
    t12 = *((char **)t7);
    t7 = (t22 + 0U);
    t9 = *((int *)t7);
    t13 = (t22 + 8U);
    t20 = *((int *)t13);
    t24 = (t10 - t9);
    t8 = (t24 * t20);
    t15 = (t22 + 4U);
    t26 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t9, t26, t20, t10);
    t21 = (1U * t8);
    t27 = (0 + t21);
    t16 = (t12 + t27);
    *((unsigned char *)t16) = (unsigned char)51;
    goto LAB17;

LAB22:    t7 = (t25 + 56U);
    t12 = *((char **)t7);
    t7 = (t22 + 0U);
    t9 = *((int *)t7);
    t13 = (t22 + 8U);
    t20 = *((int *)t13);
    t24 = (t10 - t9);
    t8 = (t24 * t20);
    t15 = (t22 + 4U);
    t26 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t9, t26, t20, t10);
    t21 = (1U * t8);
    t27 = (0 + t21);
    t16 = (t12 + t27);
    *((unsigned char *)t16) = (unsigned char)52;
    goto LAB17;

LAB23:    t7 = (t25 + 56U);
    t12 = *((char **)t7);
    t7 = (t22 + 0U);
    t9 = *((int *)t7);
    t13 = (t22 + 8U);
    t20 = *((int *)t13);
    t24 = (t10 - t9);
    t8 = (t24 * t20);
    t15 = (t22 + 4U);
    t26 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t9, t26, t20, t10);
    t21 = (1U * t8);
    t27 = (0 + t21);
    t16 = (t12 + t27);
    *((unsigned char *)t16) = (unsigned char)53;
    goto LAB17;

LAB24:    t7 = (t25 + 56U);
    t12 = *((char **)t7);
    t7 = (t22 + 0U);
    t9 = *((int *)t7);
    t13 = (t22 + 8U);
    t20 = *((int *)t13);
    t24 = (t10 - t9);
    t8 = (t24 * t20);
    t15 = (t22 + 4U);
    t26 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t9, t26, t20, t10);
    t21 = (1U * t8);
    t27 = (0 + t21);
    t16 = (t12 + t27);
    *((unsigned char *)t16) = (unsigned char)54;
    goto LAB17;

LAB25:    t7 = (t25 + 56U);
    t12 = *((char **)t7);
    t7 = (t22 + 0U);
    t9 = *((int *)t7);
    t13 = (t22 + 8U);
    t20 = *((int *)t13);
    t24 = (t10 - t9);
    t8 = (t24 * t20);
    t15 = (t22 + 4U);
    t26 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t9, t26, t20, t10);
    t21 = (1U * t8);
    t27 = (0 + t21);
    t16 = (t12 + t27);
    *((unsigned char *)t16) = (unsigned char)55;
    goto LAB17;

LAB26:    t7 = (t25 + 56U);
    t12 = *((char **)t7);
    t7 = (t22 + 0U);
    t9 = *((int *)t7);
    t13 = (t22 + 8U);
    t20 = *((int *)t13);
    t24 = (t10 - t9);
    t8 = (t24 * t20);
    t15 = (t22 + 4U);
    t26 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t9, t26, t20, t10);
    t21 = (1U * t8);
    t27 = (0 + t21);
    t16 = (t12 + t27);
    *((unsigned char *)t16) = (unsigned char)56;
    goto LAB17;

LAB27:    t7 = (t25 + 56U);
    t12 = *((char **)t7);
    t7 = (t22 + 0U);
    t9 = *((int *)t7);
    t13 = (t22 + 8U);
    t20 = *((int *)t13);
    t24 = (t10 - t9);
    t8 = (t24 * t20);
    t15 = (t22 + 4U);
    t26 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t9, t26, t20, t10);
    t21 = (1U * t8);
    t27 = (0 + t21);
    t16 = (t12 + t27);
    *((unsigned char *)t16) = (unsigned char)57;
    goto LAB17;

LAB28:    t7 = (t25 + 56U);
    t12 = *((char **)t7);
    t7 = (t22 + 0U);
    t9 = *((int *)t7);
    t13 = (t22 + 8U);
    t20 = *((int *)t13);
    t24 = (t10 - t9);
    t8 = (t24 * t20);
    t15 = (t22 + 4U);
    t26 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t9, t26, t20, t10);
    t21 = (1U * t8);
    t27 = (0 + t21);
    t16 = (t12 + t27);
    *((unsigned char *)t16) = (unsigned char)65;
    goto LAB17;

LAB29:    t7 = (t25 + 56U);
    t12 = *((char **)t7);
    t7 = (t22 + 0U);
    t9 = *((int *)t7);
    t13 = (t22 + 8U);
    t20 = *((int *)t13);
    t24 = (t10 - t9);
    t8 = (t24 * t20);
    t15 = (t22 + 4U);
    t26 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t9, t26, t20, t10);
    t21 = (1U * t8);
    t27 = (0 + t21);
    t16 = (t12 + t27);
    *((unsigned char *)t16) = (unsigned char)66;
    goto LAB17;

LAB30:    t7 = (t25 + 56U);
    t12 = *((char **)t7);
    t7 = (t22 + 0U);
    t9 = *((int *)t7);
    t13 = (t22 + 8U);
    t20 = *((int *)t13);
    t24 = (t10 - t9);
    t8 = (t24 * t20);
    t15 = (t22 + 4U);
    t26 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t9, t26, t20, t10);
    t21 = (1U * t8);
    t27 = (0 + t21);
    t16 = (t12 + t27);
    *((unsigned char *)t16) = (unsigned char)67;
    goto LAB17;

LAB31:    t7 = (t25 + 56U);
    t12 = *((char **)t7);
    t7 = (t22 + 0U);
    t9 = *((int *)t7);
    t13 = (t22 + 8U);
    t20 = *((int *)t13);
    t24 = (t10 - t9);
    t8 = (t24 * t20);
    t15 = (t22 + 4U);
    t26 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t9, t26, t20, t10);
    t21 = (1U * t8);
    t27 = (0 + t21);
    t16 = (t12 + t27);
    *((unsigned char *)t16) = (unsigned char)68;
    goto LAB17;

LAB32:    t7 = (t25 + 56U);
    t12 = *((char **)t7);
    t7 = (t22 + 0U);
    t9 = *((int *)t7);
    t13 = (t22 + 8U);
    t20 = *((int *)t13);
    t24 = (t10 - t9);
    t8 = (t24 * t20);
    t15 = (t22 + 4U);
    t26 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t9, t26, t20, t10);
    t21 = (1U * t8);
    t27 = (0 + t21);
    t16 = (t12 + t27);
    *((unsigned char *)t16) = (unsigned char)69;
    goto LAB17;

LAB33:    t7 = (t25 + 56U);
    t12 = *((char **)t7);
    t7 = (t22 + 0U);
    t9 = *((int *)t7);
    t13 = (t22 + 8U);
    t20 = *((int *)t13);
    t24 = (t10 - t9);
    t8 = (t24 * t20);
    t15 = (t22 + 4U);
    t26 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t9, t26, t20, t10);
    t21 = (1U * t8);
    t27 = (0 + t21);
    t16 = (t12 + t27);
    *((unsigned char *)t16) = (unsigned char)70;
    goto LAB17;

LAB51:;
LAB53:;
}

unsigned char work_a_2268434601_3553469787_sub_2805990933_3396091961(char *t1, unsigned char t2)
{
    char t4[8];
    unsigned char t0;
    char *t5;
    char *t6;
    static char *nl0[] = {&&LAB5, &&LAB6, &&LAB3, &&LAB4, &&LAB7, &&LAB10, &&LAB8, &&LAB9, &&LAB11};

LAB0:    t5 = (t4 + 4U);
    *((unsigned char *)t5) = t2;
    t6 = (char *)((nl0) + t2);
    goto **((char **)t6);

LAB2:    xsi_error(ng3);
    t0 = 0;

LAB1:    return t0;
LAB3:    t0 = (unsigned char)48;
    goto LAB1;

LAB4:    t0 = (unsigned char)49;
    goto LAB1;

LAB5:    t0 = (unsigned char)85;
    goto LAB1;

LAB6:    t0 = (unsigned char)88;
    goto LAB1;

LAB7:    t0 = (unsigned char)90;
    goto LAB1;

LAB8:    t0 = (unsigned char)76;
    goto LAB1;

LAB9:    t0 = (unsigned char)72;
    goto LAB1;

LAB10:    t0 = (unsigned char)87;
    goto LAB1;

LAB11:    t0 = (unsigned char)45;
    goto LAB1;

LAB12:    t0 = (unsigned char)63;
    goto LAB1;

LAB13:    goto LAB2;

LAB14:    goto LAB2;

LAB15:    goto LAB2;

LAB16:    goto LAB2;

LAB17:    goto LAB2;

LAB18:    goto LAB2;

LAB19:    goto LAB2;

LAB20:    goto LAB2;

LAB21:    goto LAB2;

LAB22:    goto LAB2;

}

char *work_a_2268434601_3553469787_sub_384613578_3396091961(char *t1, char *t2, char *t3, char *t4)
{
    char t5[152];
    char t6[24];
    char t11[16];
    char *t0;
    char *t7;
    unsigned int t8;
    int t9;
    unsigned int t10;
    char *t12;
    unsigned int t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned char t35;
    char *t36;
    char *t37;
    unsigned int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    char *t43;
    int t44;
    char *t45;
    int t46;
    char *t47;
    int t48;
    int t49;
    char *t50;
    int t51;
    char *t52;
    int t53;
    int t54;
    unsigned int t55;
    char *t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned char t61;
    unsigned char t62;
    char *t63;
    char *t64;
    int t65;
    int t66;
    char *t67;
    int t68;
    int t69;
    unsigned int t70;
    char *t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;

LAB0:    t7 = (t4 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t10 = (t10 * 1U);
    t12 = (t4 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (t11 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((unsigned int *)t15) = t13;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (t13 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t15 = (t5 + 4U);
    t18 = ((STD_STANDARD) + 1008);
    t19 = (t15 + 88U);
    *((char **)t19) = t18;
    t20 = xsi_get_memory(t10);
    t21 = (t15 + 56U);
    *((char **)t21) = t20;
    xsi_type_set_default_value(t18, t20, t11);
    t22 = (t15 + 64U);
    *((char **)t22) = t11;
    t23 = (t15 + 80U);
    *((unsigned int *)t23) = t10;
    t24 = (t15 + 136U);
    *((char **)t24) = t20;
    t25 = (t15 + 124U);
    *((int *)t25) = 0;
    t26 = (t15 + 128U);
    t27 = (t11 + 12U);
    t17 = *((unsigned int *)t27);
    t28 = (t17 - 1);
    *((int *)t26) = t28;
    t29 = (t15 + 120U);
    t31 = (t10 > 2147483644);
    if (t31 == 1)
        goto LAB2;

LAB3:    t32 = (t10 + 3);
    t33 = (t32 / 16);
    t30 = t33;

LAB4:    *((unsigned int *)t29) = t30;
    t34 = (t6 + 4U);
    t35 = (t3 != 0);
    if (t35 == 1)
        goto LAB6;

LAB5:    t36 = (t6 + 12U);
    *((char **)t36) = t4;
    t37 = (t4 + 12U);
    t38 = *((unsigned int *)t37);
    t39 = (t38 - 1);
    t40 = 0;
    t41 = t39;

LAB7:    if (t40 <= t41)
        goto LAB8;

LAB10:    t7 = (t15 + 56U);
    t12 = *((char **)t7);
    t7 = (t11 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t12, t8);
    t14 = (t11 + 0U);
    t9 = *((int *)t14);
    t18 = (t11 + 4U);
    t16 = *((int *)t18);
    t19 = (t11 + 8U);
    t28 = *((int *)t19);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t9;
    t21 = (t20 + 4U);
    *((int *)t21) = t16;
    t21 = (t20 + 8U);
    *((int *)t21) = t28;
    t39 = (t16 - t9);
    t10 = (t39 * t28);
    t10 = (t10 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t10;

LAB1:    t7 = (t15 + 80);
    t9 = *((int *)t7);
    t12 = (t15 + 136U);
    t14 = *((char **)t12);
    xsi_put_memory(t9, t14);
    return t0;
LAB2:    t30 = 2147483647;
    goto LAB4;

LAB6:    *((char **)t34) = t3;
    goto LAB5;

LAB8:    t43 = (t4 + 0U);
    t44 = *((int *)t43);
    t45 = (t4 + 4U);
    t46 = *((int *)t45);
    t47 = (t4 + 8U);
    t48 = *((int *)t47);
    if (t44 > t46)
        goto LAB11;

LAB12:    if (t48 == -1)
        goto LAB16;

LAB17:    t42 = t46;

LAB13:    t49 = (t42 - t40);
    t50 = (t4 + 0U);
    t51 = *((int *)t50);
    t52 = (t4 + 8U);
    t53 = *((int *)t52);
    t54 = (t49 - t51);
    t55 = (t54 * t53);
    t56 = (t4 + 4U);
    t57 = *((int *)t56);
    xsi_vhdl_check_range_of_index(t51, t57, t53, t49);
    t58 = (1U * t55);
    t59 = (0 + t58);
    t60 = (t3 + t59);
    t61 = *((unsigned char *)t60);
    t62 = work_a_2268434601_3553469787_sub_2805990933_3396091961(t1, t61);
    t63 = (t15 + 56U);
    t64 = *((char **)t63);
    t65 = (t40 + 1);
    t63 = (t11 + 0U);
    t66 = *((int *)t63);
    t67 = (t11 + 8U);
    t68 = *((int *)t67);
    t69 = (t65 - t66);
    t70 = (t69 * t68);
    t71 = (t11 + 4U);
    t72 = *((int *)t71);
    xsi_vhdl_check_range_of_index(t66, t72, t68, t65);
    t73 = (1U * t70);
    t74 = (0 + t73);
    t75 = (t64 + t74);
    *((unsigned char *)t75) = t62;

LAB9:    if (t40 == t41)
        goto LAB10;

LAB18:    t9 = (t40 + 1);
    t40 = t9;
    goto LAB7;

LAB11:    if (t48 == 1)
        goto LAB14;

LAB15:    t42 = t44;
    goto LAB13;

LAB14:    t42 = t46;
    goto LAB13;

LAB16:    t42 = t44;
    goto LAB13;

LAB19:;
}

static void work_a_2268434601_3553469787_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;
    int64 t11;

LAB0:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(112, ng4);

LAB4:    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(118, ng4);

LAB18:    *((char **)t1) = &&LAB19;

LAB1:    return;
LAB5:    xsi_set_current_line(113, ng4);
    t2 = (t0 + 5904);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(114, ng4);
    t2 = (t0 + 3008U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 4520);
    xsi_process_wait(t2, t11);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    xsi_set_current_line(115, ng4);
    t2 = (t0 + 5904);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(116, ng4);
    t2 = (t0 + 3008U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 4520);
    xsi_process_wait(t2, t11);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB4;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    goto LAB2;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}

static void work_a_2268434601_3553469787_p_1(char *t0)
{
    char t12[16];
    char t18[16];
    char t20[16];
    char t26[16];
    char t28[16];
    char t32[16];
    char t36[16];
    char t41[16];
    char t43[16];
    char t47[16];
    char t52[16];
    char t64[16];
    char t66[16];
    char t69[16];
    char t74[16];
    char t76[16];
    char t80[16];
    char t84[16];
    char t89[16];
    char t91[16];
    char t95[16];
    char t99[16];
    char t104[16];
    char t106[16];
    char t111[16];
    char t116[16];
    char t118[16];
    char t124[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t21;
    char *t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t27;
    char *t29;
    char *t30;
    int t31;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t44;
    char *t45;
    int t46;
    int64 t48;
    char *t49;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    int t65;
    char *t67;
    char *t68;
    char *t70;
    char *t71;
    char *t73;
    char *t75;
    char *t77;
    char *t78;
    int t79;
    char *t81;
    char *t82;
    char *t83;
    char *t85;
    char *t86;
    char *t88;
    char *t90;
    char *t92;
    char *t93;
    int t94;
    char *t96;
    char *t97;
    char *t98;
    char *t100;
    char *t101;
    char *t103;
    char *t105;
    char *t107;
    char *t108;
    int t109;
    char *t110;
    char *t112;
    char *t113;
    char *t115;
    char *t117;
    char *t119;
    char *t120;
    int t121;
    char *t122;
    unsigned char t123;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;

LAB0:    xsi_set_current_line(126, ng4);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5776);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(127, ng4);
    t3 = (t0 + 3128U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 + 1);
    t3 = (t0 + 3128U);
    t7 = *((char **)t3);
    t3 = (t7 + 0);
    *((int *)t3) = t6;
    xsi_set_current_line(130, ng4);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(135, ng4);
    t1 = (t0 + 9381);
    t4 = ((STD_STANDARD) + 384);
    t7 = (t0 + 3128U);
    t13 = *((char **)t7);
    t5 = *((int *)t13);
    t7 = xsi_int_to_mem(t5);
    t14 = xsi_string_variable_get_image(t12, t4, t7);
    t16 = ((STD_STANDARD) + 1008);
    t17 = (t20 + 0U);
    t19 = (t17 + 0U);
    *((int *)t19) = 1;
    t19 = (t17 + 4U);
    *((int *)t19) = 6;
    t19 = (t17 + 8U);
    *((int *)t19) = 1;
    t6 = (6 - 1);
    t23 = (t6 * 1);
    t23 = (t23 + 1);
    t19 = (t17 + 12U);
    *((unsigned int *)t19) = t23;
    t15 = xsi_base_array_concat(t15, t18, t16, (char)97, t1, t20, (char)97, t14, t12, (char)101);
    t19 = (t0 + 9387);
    t24 = ((STD_STANDARD) + 1008);
    t25 = (t28 + 0U);
    t27 = (t25 + 0U);
    *((int *)t27) = 1;
    t27 = (t25 + 4U);
    *((int *)t27) = 6;
    t27 = (t25 + 8U);
    *((int *)t27) = 1;
    t31 = (6 - 1);
    t23 = (t31 * 1);
    t23 = (t23 + 1);
    t27 = (t25 + 12U);
    *((unsigned int *)t27) = t23;
    t22 = xsi_base_array_concat(t22, t26, t24, (char)97, t15, t18, (char)97, t19, t28, (char)101);
    t27 = (t0 + 1352U);
    t29 = *((char **)t27);
    t27 = (t0 + 9196U);
    t30 = work_a_2268434601_3553469787_sub_384613578_3396091961(t0, t32, t29, t27);
    t34 = ((STD_STANDARD) + 1008);
    t33 = xsi_base_array_concat(t33, t36, t34, (char)97, t22, t26, (char)97, t30, t32, (char)101);
    t35 = (t0 + 9393);
    t39 = ((STD_STANDARD) + 1008);
    t40 = (t43 + 0U);
    t42 = (t40 + 0U);
    *((int *)t42) = 1;
    t42 = (t40 + 4U);
    *((int *)t42) = 6;
    t42 = (t40 + 8U);
    *((int *)t42) = 1;
    t46 = (6 - 1);
    t23 = (t46 * 1);
    t23 = (t23 + 1);
    t42 = (t40 + 12U);
    *((unsigned int *)t42) = t23;
    t38 = xsi_base_array_concat(t38, t41, t39, (char)97, t33, t36, (char)97, t35, t43, (char)101);
    t42 = (t0 + 1512U);
    t44 = *((char **)t42);
    t2 = *((unsigned char *)t44);
    t8 = work_a_2268434601_3553469787_sub_2805990933_3396091961(t0, t2);
    t45 = ((STD_STANDARD) + 1008);
    t42 = xsi_base_array_concat(t42, t47, t45, (char)97, t38, t41, (char)99, t8, (char)101);
    t49 = (t0 + 9399);
    t53 = ((STD_STANDARD) + 1008);
    t54 = (t64 + 0U);
    t57 = (t54 + 0U);
    *((int *)t57) = 1;
    t57 = (t54 + 4U);
    *((int *)t57) = 8;
    t57 = (t54 + 8U);
    *((int *)t57) = 1;
    t65 = (8 - 1);
    t23 = (t65 * 1);
    t23 = (t23 + 1);
    t57 = (t54 + 12U);
    *((unsigned int *)t57) = t23;
    t51 = xsi_base_array_concat(t51, t52, t53, (char)97, t42, t47, (char)97, t49, t64, (char)101);
    t57 = (t0 + 1672U);
    t61 = *((char **)t57);
    t57 = (t0 + 9212U);
    t67 = work_a_2268434601_3553469787_sub_594608298_3396091961(t0, t66, t61, t57);
    t70 = ((STD_STANDARD) + 1008);
    t68 = xsi_base_array_concat(t68, t69, t70, (char)97, t51, t52, (char)97, t67, t66, (char)101);
    t71 = (t0 + 9407);
    t75 = ((STD_STANDARD) + 1008);
    t77 = (t76 + 0U);
    t78 = (t77 + 0U);
    *((int *)t78) = 1;
    t78 = (t77 + 4U);
    *((int *)t78) = 10;
    t78 = (t77 + 8U);
    *((int *)t78) = 1;
    t79 = (10 - 1);
    t23 = (t79 * 1);
    t23 = (t23 + 1);
    t78 = (t77 + 12U);
    *((unsigned int *)t78) = t23;
    t73 = xsi_base_array_concat(t73, t74, t75, (char)97, t68, t69, (char)97, t71, t76, (char)101);
    t78 = (t0 + 1832U);
    t81 = *((char **)t78);
    t78 = (t0 + 9228U);
    t82 = work_a_2268434601_3553469787_sub_594608298_3396091961(t0, t80, t81, t78);
    t85 = ((STD_STANDARD) + 1008);
    t83 = xsi_base_array_concat(t83, t84, t85, (char)97, t73, t74, (char)97, t82, t80, (char)101);
    t86 = (t0 + 9417);
    t90 = ((STD_STANDARD) + 1008);
    t92 = (t91 + 0U);
    t93 = (t92 + 0U);
    *((int *)t93) = 1;
    t93 = (t92 + 4U);
    *((int *)t93) = 11;
    t93 = (t92 + 8U);
    *((int *)t93) = 1;
    t94 = (11 - 1);
    t23 = (t94 * 1);
    t23 = (t23 + 1);
    t93 = (t92 + 12U);
    *((unsigned int *)t93) = t23;
    t88 = xsi_base_array_concat(t88, t89, t90, (char)97, t83, t84, (char)97, t86, t91, (char)101);
    t93 = (t0 + 1992U);
    t96 = *((char **)t93);
    t93 = (t0 + 9244U);
    t97 = work_a_2268434601_3553469787_sub_594608298_3396091961(t0, t95, t96, t93);
    t100 = ((STD_STANDARD) + 1008);
    t98 = xsi_base_array_concat(t98, t99, t100, (char)97, t88, t89, (char)97, t97, t95, (char)101);
    t101 = (t0 + 9428);
    t105 = ((STD_STANDARD) + 1008);
    t107 = (t106 + 0U);
    t108 = (t107 + 0U);
    *((int *)t108) = 1;
    t108 = (t107 + 4U);
    *((int *)t108) = 7;
    t108 = (t107 + 8U);
    *((int *)t108) = 1;
    t109 = (7 - 1);
    t23 = (t109 * 1);
    t23 = (t23 + 1);
    t108 = (t107 + 12U);
    *((unsigned int *)t108) = t23;
    t103 = xsi_base_array_concat(t103, t104, t105, (char)97, t98, t99, (char)97, t101, t106, (char)101);
    t108 = (t0 + 2152U);
    t110 = *((char **)t108);
    t9 = *((unsigned char *)t110);
    t10 = work_a_2268434601_3553469787_sub_2805990933_3396091961(t0, t9);
    t112 = ((STD_STANDARD) + 1008);
    t108 = xsi_base_array_concat(t108, t111, t112, (char)97, t103, t104, (char)99, t10, (char)101);
    t113 = (t0 + 9435);
    t117 = ((STD_STANDARD) + 1008);
    t119 = (t118 + 0U);
    t120 = (t119 + 0U);
    *((int *)t120) = 1;
    t120 = (t119 + 4U);
    *((int *)t120) = 6;
    t120 = (t119 + 8U);
    *((int *)t120) = 1;
    t121 = (6 - 1);
    t23 = (t121 * 1);
    t23 = (t23 + 1);
    t120 = (t119 + 12U);
    *((unsigned int *)t120) = t23;
    t115 = xsi_base_array_concat(t115, t116, t117, (char)97, t108, t111, (char)97, t113, t118, (char)101);
    t120 = (t0 + 2312U);
    t122 = *((char **)t120);
    t11 = *((unsigned char *)t122);
    t123 = work_a_2268434601_3553469787_sub_2805990933_3396091961(t0, t11);
    t125 = ((STD_STANDARD) + 1008);
    t120 = xsi_base_array_concat(t120, t124, t125, (char)97, t115, t116, (char)99, t123, (char)101);
    t126 = (t12 + 12U);
    t23 = *((unsigned int *)t126);
    t55 = (6U + t23);
    t56 = (t55 + 6U);
    t127 = (t32 + 12U);
    t58 = *((unsigned int *)t127);
    t58 = (t58 * 1U);
    t59 = (t56 + t58);
    t60 = (t59 + 6U);
    t62 = (t60 + 1U);
    t63 = (t62 + 8U);
    t128 = (t66 + 12U);
    t129 = *((unsigned int *)t128);
    t129 = (t129 * 1U);
    t130 = (t63 + t129);
    t131 = (t130 + 10U);
    t132 = (t80 + 12U);
    t133 = *((unsigned int *)t132);
    t133 = (t133 * 1U);
    t134 = (t131 + t133);
    t135 = (t134 + 11U);
    t136 = (t95 + 12U);
    t137 = *((unsigned int *)t136);
    t137 = (t137 * 1U);
    t138 = (t135 + t137);
    t139 = (t138 + 7U);
    t140 = (t139 + 1U);
    t141 = (t140 + 6U);
    t142 = (t141 + 1U);
    xsi_report(t120, t142, 0);

LAB6:    xsi_set_current_line(145, ng4);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 3248U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((unsigned char *)t1) = t2;
    goto LAB3;

LAB5:    xsi_set_current_line(131, ng4);
    t1 = (t0 + 9336);
    t13 = ((STD_STANDARD) + 384);
    t14 = (t0 + 3128U);
    t15 = *((char **)t14);
    t5 = *((int *)t15);
    t14 = xsi_int_to_mem(t5);
    t16 = xsi_string_variable_get_image(t12, t13, t14);
    t19 = ((STD_STANDARD) + 1008);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 1;
    t22 = (t21 + 4U);
    *((int *)t22) = 6;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t6 = (6 - 1);
    t23 = (t6 * 1);
    t23 = (t23 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t23;
    t17 = xsi_base_array_concat(t17, t18, t19, (char)97, t1, t20, (char)97, t16, t12, (char)101);
    t22 = (t0 + 9342);
    t27 = ((STD_STANDARD) + 1008);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 1;
    t30 = (t29 + 4U);
    *((int *)t30) = 30;
    t30 = (t29 + 8U);
    *((int *)t30) = 1;
    t31 = (30 - 1);
    t23 = (t31 * 1);
    t23 = (t23 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t23;
    t25 = xsi_base_array_concat(t25, t26, t27, (char)97, t17, t18, (char)97, t22, t28, (char)101);
    t30 = (t0 + 1992U);
    t33 = *((char **)t30);
    t30 = (t0 + 9244U);
    t34 = work_a_2268434601_3553469787_sub_594608298_3396091961(t0, t32, t33, t30);
    t37 = ((STD_STANDARD) + 1008);
    t35 = xsi_base_array_concat(t35, t36, t37, (char)97, t25, t26, (char)97, t34, t32, (char)101);
    t38 = (t0 + 9372);
    t42 = ((STD_STANDARD) + 1008);
    t44 = (t43 + 0U);
    t45 = (t44 + 0U);
    *((int *)t45) = 1;
    t45 = (t44 + 4U);
    *((int *)t45) = 9;
    t45 = (t44 + 8U);
    *((int *)t45) = 1;
    t46 = (9 - 1);
    t23 = (t46 * 1);
    t23 = (t23 + 1);
    t45 = (t44 + 12U);
    *((unsigned int *)t45) = t23;
    t40 = xsi_base_array_concat(t40, t41, t42, (char)97, t35, t36, (char)97, t38, t43, (char)101);
    t45 = ((STD_STANDARD) + 576);
    t48 = xsi_get_sim_current_time();
    t49 = xsi_int64_to_mem(t48);
    t50 = xsi_string_variable_get_image(t47, t45, t49);
    t53 = ((STD_STANDARD) + 1008);
    t51 = xsi_base_array_concat(t51, t52, t53, (char)97, t40, t41, (char)97, t50, t47, (char)101);
    t54 = (t12 + 12U);
    t23 = *((unsigned int *)t54);
    t55 = (6U + t23);
    t56 = (t55 + 30U);
    t57 = (t32 + 12U);
    t58 = *((unsigned int *)t57);
    t58 = (t58 * 1U);
    t59 = (t56 + t58);
    t60 = (t59 + 9U);
    t61 = (t47 + 12U);
    t62 = *((unsigned int *)t61);
    t63 = (t60 + t62);
    xsi_report(t51, t63, 0);
    goto LAB6;

LAB8:    t1 = (t0 + 3248U);
    t4 = *((char **)t1);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    t2 = t11;
    goto LAB10;

}

void work_a_2268434601_3553469787_sub_2922596938_2166916210(char *t0, char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t8[72];
    char t9[16];
    char t14[16];
    char t17[16];
    char t33[16];
    char t34[16];
    char t37[16];
    char t41[16];
    char t43[16];
    char t46[16];
    char t48[16];
    char t53[16];
    char t55[16];
    char t58[16];
    char t60[16];
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    char *t15;
    int t16;
    char *t18;
    int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t35;
    unsigned int t36;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t44;
    char *t45;
    char *t47;
    char *t49;
    char *t50;
    char *t52;
    char *t54;
    char *t56;
    char *t57;
    char *t59;
    char *t61;
    char *t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;

LAB0:    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 7;
    t11 = (t10 + 4U);
    *((int *)t11) = 0;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t12 = (0 - 7);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = (t14 + 0U);
    t15 = (t11 + 0U);
    *((int *)t15) = 7;
    t15 = (t11 + 4U);
    *((int *)t15) = 0;
    t15 = (t11 + 8U);
    *((int *)t15) = -1;
    t16 = (0 - 7);
    t13 = (t16 * -1);
    t13 = (t13 + 1);
    t15 = (t11 + 12U);
    *((unsigned int *)t15) = t13;
    t15 = (t17 + 0U);
    t18 = (t15 + 0U);
    *((int *)t18) = 1;
    t18 = (t15 + 4U);
    *((int *)t18) = 0;
    t18 = (t15 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - 1);
    t13 = (t19 * -1);
    t13 = (t13 + 1);
    t18 = (t15 + 12U);
    *((unsigned int *)t18) = t13;
    t18 = (t8 + 4U);
    t20 = (t2 != 0);
    if (t20 == 1)
        goto LAB3;

LAB2:    t21 = (t8 + 12U);
    *((char **)t21) = t9;
    t22 = (t8 + 20U);
    t23 = (t3 != 0);
    if (t23 == 1)
        goto LAB5;

LAB4:    t24 = (t8 + 28U);
    *((char **)t24) = t14;
    t25 = (t8 + 36U);
    t26 = (t4 != 0);
    if (t26 == 1)
        goto LAB7;

LAB6:    t27 = (t8 + 44U);
    *((char **)t27) = t17;
    t28 = (t8 + 52U);
    t29 = (t5 != 0);
    if (t29 == 1)
        goto LAB9;

LAB8:    t30 = (t8 + 60U);
    *((char **)t30) = t6;
    t31 = (t0 + 9441);
    xsi_report(t31, 40U, 0);
    t10 = (t0 + 9481);
    t31 = ((STD_STANDARD) + 1008);
    t32 = (t34 + 0U);
    t35 = (t32 + 0U);
    *((int *)t35) = 1;
    t35 = (t32 + 4U);
    *((int *)t35) = 11;
    t35 = (t32 + 8U);
    *((int *)t35) = 1;
    t12 = (11 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t35 = (t32 + 12U);
    *((unsigned int *)t35) = t13;
    t15 = xsi_base_array_concat(t15, t33, t31, (char)97, t10, t34, (char)97, t5, t6, (char)101);
    t35 = (t6 + 12U);
    t13 = *((unsigned int *)t35);
    t13 = (t13 * 1U);
    t36 = (11U + t13);
    xsi_report(t15, t36, 0);
    t10 = (t0 + 9492);
    t15 = work_a_2268434601_3553469787_sub_594608298_3396091961(t0, t33, t2, t9);
    t32 = ((STD_STANDARD) + 1008);
    t35 = (t37 + 0U);
    t38 = (t35 + 0U);
    *((int *)t38) = 1;
    t38 = (t35 + 4U);
    *((int *)t38) = 11;
    t38 = (t35 + 8U);
    *((int *)t38) = 1;
    t12 = (11 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t38 = (t35 + 12U);
    *((unsigned int *)t38) = t13;
    t31 = xsi_base_array_concat(t31, t34, t32, (char)97, t10, t37, (char)97, t15, t33, (char)101);
    t38 = (t0 + 9503);
    t42 = ((STD_STANDARD) + 1008);
    t44 = (t43 + 0U);
    t45 = (t44 + 0U);
    *((int *)t45) = 1;
    t45 = (t44 + 4U);
    *((int *)t45) = 9;
    t45 = (t44 + 8U);
    *((int *)t45) = 1;
    t16 = (9 - 1);
    t13 = (t16 * 1);
    t13 = (t13 + 1);
    t45 = (t44 + 12U);
    *((unsigned int *)t45) = t13;
    t40 = xsi_base_array_concat(t40, t41, t42, (char)97, t31, t34, (char)97, t38, t43, (char)101);
    t45 = work_a_2268434601_3553469787_sub_594608298_3396091961(t0, t46, t3, t14);
    t49 = ((STD_STANDARD) + 1008);
    t47 = xsi_base_array_concat(t47, t48, t49, (char)97, t40, t41, (char)97, t45, t46, (char)101);
    t50 = (t0 + 9512);
    t54 = ((STD_STANDARD) + 1008);
    t56 = (t55 + 0U);
    t57 = (t56 + 0U);
    *((int *)t57) = 1;
    t57 = (t56 + 4U);
    *((int *)t57) = 10;
    t57 = (t56 + 8U);
    *((int *)t57) = 1;
    t19 = (10 - 1);
    t13 = (t19 * 1);
    t13 = (t13 + 1);
    t57 = (t56 + 12U);
    *((unsigned int *)t57) = t13;
    t52 = xsi_base_array_concat(t52, t53, t54, (char)97, t47, t48, (char)97, t50, t55, (char)101);
    t57 = work_a_2268434601_3553469787_sub_384613578_3396091961(t0, t58, t4, t17);
    t61 = ((STD_STANDARD) + 1008);
    t59 = xsi_base_array_concat(t59, t60, t61, (char)97, t52, t53, (char)97, t57, t58, (char)101);
    t62 = (t33 + 12U);
    t13 = *((unsigned int *)t62);
    t13 = (t13 * 1U);
    t36 = (11U + t13);
    t63 = (t36 + 9U);
    t64 = (t46 + 12U);
    t65 = *((unsigned int *)t64);
    t65 = (t65 * 1U);
    t66 = (t63 + t65);
    t67 = (t66 + 10U);
    t68 = (t58 + 12U);
    t69 = *((unsigned int *)t68);
    t69 = (t69 * 1U);
    t70 = (t67 + t69);
    xsi_report(t59, t70, 0);
    t10 = (t0 + 992U);
    xsi_add_dynamic_wait(t1, t10, -1, -1);

LAB13:    t11 = (t1 + 224U);
    t11 = *((char **)t11);
    xsi_wp_set_status(t11, 1);
    t15 = (t1 + 88U);
    t31 = *((char **)t15);
    t32 = (t31 + 2480U);
    *((unsigned int *)t32) = 1U;
    t35 = (t1 + 88U);
    t38 = *((char **)t35);
    t39 = (t38 + 0U);
    getcontext(t39);
    t40 = (t1 + 88U);
    t42 = *((char **)t40);
    t44 = (t42 + 2480U);
    t13 = *((unsigned int *)t44);
    if (t13 == 1)
        goto LAB14;

LAB15:    t45 = (t1 + 88U);
    t47 = *((char **)t45);
    t49 = (t47 + 2480U);
    *((unsigned int *)t49) = 3U;

LAB11:
LAB12:    t50 = (t0 + 992U);
    t20 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t50, 0U, 0U);
    if (t20 == 1)
        goto LAB10;
    else
        goto LAB13;

LAB3:    *((char **)t18) = t2;
    goto LAB2;

LAB5:    *((char **)t22) = t3;
    goto LAB4;

LAB7:    *((char **)t25) = t4;
    goto LAB6;

LAB9:    *((char **)t28) = t5;
    goto LAB8;

LAB10:    xsi_remove_dynamic_wait(t1, t10);
    t10 = (t0 + 6032);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    t31 = (t15 + 56U);
    t32 = *((char **)t31);
    t35 = (t0 + 9212U);
    t38 = (t35 + 12U);
    t13 = *((unsigned int *)t38);
    t13 = (t13 * 1U);
    memcpy(t32, t2, t13);
    xsi_driver_first_trans_fast(t10);
    t10 = (t0 + 6096);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    t31 = (t15 + 56U);
    t32 = *((char **)t31);
    t35 = (t0 + 9228U);
    t38 = (t35 + 12U);
    t13 = *((unsigned int *)t38);
    t13 = (t13 * 1U);
    memcpy(t32, t3, t13);
    xsi_driver_first_trans_fast(t10);
    t10 = (t0 + 6160);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    t31 = (t15 + 56U);
    t32 = *((char **)t31);
    t35 = (t0 + 9196U);
    t38 = (t35 + 12U);
    t13 = *((unsigned int *)t38);
    t13 = (t13 * 1U);
    memcpy(t32, t4, t13);
    xsi_driver_first_trans_fast(t10);
    t10 = (t0 + 6224);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    t31 = (t15 + 56U);
    t32 = *((char **)t31);
    *((unsigned char *)t32) = (unsigned char)3;
    xsi_driver_first_trans_fast(t10);
    t10 = (t0 + 992U);
    xsi_add_dynamic_wait(t1, t10, -1, -1);

LAB19:    t11 = (t1 + 224U);
    t11 = *((char **)t11);
    xsi_wp_set_status(t11, 1);
    t15 = (t1 + 88U);
    t31 = *((char **)t15);
    t32 = (t31 + 2480U);
    *((unsigned int *)t32) = 1U;
    t35 = (t1 + 88U);
    t38 = *((char **)t35);
    t39 = (t38 + 0U);
    getcontext(t39);
    t40 = (t1 + 88U);
    t42 = *((char **)t40);
    t44 = (t42 + 2480U);
    t13 = *((unsigned int *)t44);
    if (t13 == 1)
        goto LAB20;

LAB21:    t45 = (t1 + 88U);
    t47 = *((char **)t45);
    t49 = (t47 + 2480U);
    *((unsigned int *)t49) = 3U;

LAB17:
LAB18:    t50 = (t0 + 992U);
    t20 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t50, 0U, 0U);
    if (t20 == 1)
        goto LAB16;
    else
        goto LAB19;

LAB14:    xsi_saveStackAndSuspend(t1);
    goto LAB15;

LAB16:    xsi_remove_dynamic_wait(t1, t10);
    t10 = (t0 + 6224);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    t31 = (t15 + 56U);
    t32 = *((char **)t31);
    *((unsigned char *)t32) = (unsigned char)2;
    xsi_driver_first_trans_fast(t10);
    t10 = (t0 + 9522);
    t15 = (t0 + 6160);
    t31 = (t15 + 56U);
    t32 = *((char **)t31);
    t35 = (t32 + 56U);
    t38 = *((char **)t35);
    t39 = (t0 + 9196U);
    t40 = (t39 + 12U);
    t13 = *((unsigned int *)t40);
    t13 = (t13 * 1U);
    memcpy(t38, t10, t13);
    xsi_driver_first_trans_fast(t15);
    t10 = (t0 + 9524);
    xsi_report(t10, 41U, 0);

LAB1:    return;
LAB20:    xsi_saveStackAndSuspend(t1);
    goto LAB21;

}

void work_a_2268434601_3553469787_sub_3389463493_2166916210(char *t0, char *t1)
{
    char t2[128];
    char t7[8];
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned char t33;
    int t34;
    int64 t35;

LAB0:    t4 = (t2 + 4U);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t4 + 88U);
    *((char **)t6) = t5;
    t8 = (t4 + 56U);
    *((char **)t8) = t7;
    *((int *)t7) = 0;
    t9 = (t4 + 80U);
    *((unsigned int *)t9) = 4U;

LAB2:    t11 = (t0 + 2312U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB6;

LAB7:    t10 = (unsigned char)0;

LAB8:    if (t10 != 0)
        goto LAB3;

LAB5:    t35 = (10 * 1000LL);
    xsi_process_wait(t1, t35);

LAB21:    t5 = (t1 + 88U);
    t6 = *((char **)t5);
    t8 = (t6 + 2480U);
    *((unsigned int *)t8) = 1U;
    t9 = (t1 + 88U);
    t11 = *((char **)t9);
    t12 = (t11 + 0U);
    getcontext(t12);
    t15 = (t1 + 88U);
    t18 = *((char **)t15);
    t19 = (t18 + 2480U);
    t28 = *((unsigned int *)t19);
    if (t28 == 1)
        goto LAB22;

LAB23:    t20 = (t1 + 88U);
    t21 = *((char **)t20);
    t22 = (t21 + 2480U);
    *((unsigned int *)t22) = 3U;

LAB19:
LAB20:
LAB18:
LAB1:    return;
LAB3:    t11 = (t0 + 992U);
    xsi_add_dynamic_wait(t1, t11, -1, -1);

LAB12:    t18 = (t1 + 224U);
    t18 = *((char **)t18);
    xsi_wp_set_status(t18, 1);
    t19 = (t1 + 88U);
    t20 = *((char **)t19);
    t21 = (t20 + 2480U);
    *((unsigned int *)t21) = 1U;
    t22 = (t1 + 88U);
    t23 = *((char **)t22);
    t24 = (t23 + 0U);
    getcontext(t24);
    t25 = (t1 + 88U);
    t26 = *((char **)t25);
    t27 = (t26 + 2480U);
    t28 = *((unsigned int *)t27);
    if (t28 == 1)
        goto LAB13;

LAB14:    t29 = (t1 + 88U);
    t30 = *((char **)t29);
    t31 = (t30 + 2480U);
    *((unsigned int *)t31) = 3U;

LAB10:
LAB11:    t32 = (t0 + 992U);
    t33 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t32, 0U, 0U);
    if (t33 == 1)
        goto LAB9;
    else
        goto LAB12;

LAB4:;
LAB6:    t11 = (t4 + 56U);
    t15 = *((char **)t11);
    t16 = *((int *)t15);
    t17 = (t16 < 20);
    t10 = t17;
    goto LAB8;

LAB9:    xsi_remove_dynamic_wait(t1, t11);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t16 = *((int *)t6);
    t34 = (t16 + 1);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    *((int *)t5) = t34;
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t16 = *((int *)t6);
    t10 = (t16 == 19);
    if (t10 != 0)
        goto LAB15;

LAB17:
LAB16:    goto LAB2;

LAB13:    xsi_saveStackAndSuspend(t1);
    goto LAB14;

LAB15:    t5 = (t0 + 9565);
    xsi_report(t5, 44U, (unsigned char)1);
    goto LAB16;

LAB22:    xsi_saveStackAndSuspend(t1);
    goto LAB23;

}

void work_a_2268434601_3553469787_sub_4293614437_2166916210(char *t0, char *t1, char *t2, char *t3, char *t4)
{
    char t5[248];
    char t6[40];
    char t7[16];
    char t14[8];
    char t20[8];
    char t43[16];
    char t44[16];
    char t46[16];
    char t47[16];
    char t48[16];
    char t52[16];
    char t60[16];
    char t61[16];
    char t63[16];
    char t64[16];
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned char t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t45;
    char *t49;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    int t62;
    char *t65;
    char *t66;
    char *t67;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 7;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t10 = (0 - 7);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t5 + 4U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t9 + 88U);
    *((char **)t13) = t12;
    t15 = (t9 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = 0;
    t16 = (t9 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t5 + 124U);
    t18 = ((STD_STANDARD) + 0);
    t19 = (t17 + 88U);
    *((char **)t19) = t18;
    t21 = (t17 + 56U);
    *((char **)t21) = t20;
    *((unsigned char *)t20) = (unsigned char)0;
    t22 = (t17 + 80U);
    *((unsigned int *)t22) = 1U;
    t23 = (t6 + 4U);
    t24 = (t2 != 0);
    if (t24 == 1)
        goto LAB3;

LAB2:    t25 = (t6 + 12U);
    *((char **)t25) = t7;
    t26 = (t6 + 20U);
    t27 = (t3 != 0);
    if (t27 == 1)
        goto LAB5;

LAB4:    t28 = (t6 + 28U);
    *((char **)t28) = t4;
    t29 = (t0 + 9609);
    xsi_report(t29, 25U, 0);

LAB6:    t8 = (t9 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t27 = (t10 < 15);
    if (t27 == 1)
        goto LAB10;

LAB11:    t24 = (unsigned char)0;

LAB12:    if (t24 != 0)
        goto LAB7;

LAB9:    t8 = (t17 + 56U);
    t12 = *((char **)t8);
    t24 = *((unsigned char *)t12);
    t27 = (!(t24));
    if (t27 != 0)
        goto LAB31;

LAB33:
LAB32:
LAB1:    return;
LAB3:    *((char **)t23) = t2;
    goto LAB2;

LAB5:    *((char **)t26) = t3;
    goto LAB4;

LAB7:    t8 = (t0 + 992U);
    xsi_add_dynamic_wait(t1, t8, -1, -1);

LAB16:    t15 = (t1 + 224U);
    t15 = *((char **)t15);
    xsi_wp_set_status(t15, 1);
    t16 = (t1 + 88U);
    t18 = *((char **)t16);
    t19 = (t18 + 2480U);
    *((unsigned int *)t19) = 1U;
    t21 = (t1 + 88U);
    t22 = *((char **)t21);
    t29 = (t22 + 0U);
    getcontext(t29);
    t30 = (t1 + 88U);
    t33 = *((char **)t30);
    t34 = (t33 + 2480U);
    t11 = *((unsigned int *)t34);
    if (t11 == 1)
        goto LAB17;

LAB18:    t35 = (t1 + 88U);
    t36 = *((char **)t35);
    t37 = (t36 + 2480U);
    *((unsigned int *)t37) = 3U;

LAB14:
LAB15:    t38 = (t0 + 992U);
    t39 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t38, 0U, 0U);
    if (t39 == 1)
        goto LAB13;
    else
        goto LAB16;

LAB8:;
LAB10:    t8 = (t17 + 56U);
    t13 = *((char **)t8);
    t31 = *((unsigned char *)t13);
    t32 = (!(t31));
    t24 = t32;
    goto LAB12;

LAB13:    xsi_remove_dynamic_wait(t1, t8);
    t8 = (t9 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t40 = (t10 + 1);
    t8 = (t9 + 56U);
    t13 = *((char **)t8);
    t8 = (t13 + 0);
    *((int *)t8) = t40;
    t8 = (t0 + 2152U);
    t12 = *((char **)t8);
    t24 = *((unsigned char *)t12);
    t27 = (t24 == (unsigned char)3);
    if (t27 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB6;

LAB17:    xsi_saveStackAndSuspend(t1);
    goto LAB18;

LAB19:    t8 = (t17 + 56U);
    t13 = *((char **)t8);
    t8 = (t13 + 0);
    *((unsigned char *)t8) = (unsigned char)1;
    t8 = (t0 + 1992U);
    t12 = *((char **)t8);
    t8 = (t0 + 9244U);
    t13 = (t8 + 12U);
    t11 = *((unsigned int *)t13);
    t11 = (t11 * 1U);
    t15 = (t7 + 12U);
    t41 = *((unsigned int *)t15);
    t41 = (t41 * 1U);
    t24 = 1;
    if (t11 == t41)
        goto LAB25;

LAB26:    t24 = 0;

LAB27:    if (t24 != 0)
        goto LAB22;

LAB24:    t8 = (t0 + 9668);
    t15 = ((STD_STANDARD) + 1008);
    t16 = (t44 + 0U);
    t18 = (t16 + 0U);
    *((int *)t18) = 1;
    t18 = (t16 + 4U);
    *((int *)t18) = 6;
    t18 = (t16 + 8U);
    *((int *)t18) = 1;
    t10 = (6 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t18 = (t16 + 12U);
    *((unsigned int *)t18) = t11;
    t13 = xsi_base_array_concat(t13, t43, t15, (char)97, t8, t44, (char)97, t3, t4, (char)101);
    t18 = (t0 + 9674);
    t22 = ((STD_STANDARD) + 1008);
    t29 = (t47 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 1;
    t30 = (t29 + 4U);
    *((int *)t30) = 15;
    t30 = (t29 + 8U);
    *((int *)t30) = 1;
    t40 = (15 - 1);
    t11 = (t40 * 1);
    t11 = (t11 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t11;
    t21 = xsi_base_array_concat(t21, t46, t22, (char)97, t13, t43, (char)97, t18, t47, (char)101);
    t30 = (t0 + 1992U);
    t33 = *((char **)t30);
    t30 = (t0 + 9244U);
    t34 = work_a_2268434601_3553469787_sub_594608298_3396091961(t0, t48, t33, t30);
    t36 = ((STD_STANDARD) + 1008);
    t35 = xsi_base_array_concat(t35, t52, t36, (char)97, t21, t46, (char)97, t34, t48, (char)101);
    t37 = (t0 + 9689);
    t50 = ((STD_STANDARD) + 1008);
    t51 = (t61 + 0U);
    t53 = (t51 + 0U);
    *((int *)t53) = 1;
    t53 = (t51 + 4U);
    *((int *)t53) = 13;
    t53 = (t51 + 8U);
    *((int *)t53) = 1;
    t62 = (13 - 1);
    t11 = (t62 * 1);
    t11 = (t11 + 1);
    t53 = (t51 + 12U);
    *((unsigned int *)t53) = t11;
    t49 = xsi_base_array_concat(t49, t60, t50, (char)97, t35, t52, (char)97, t37, t61, (char)101);
    t53 = work_a_2268434601_3553469787_sub_594608298_3396091961(t0, t63, t2, t7);
    t57 = ((STD_STANDARD) + 1008);
    t54 = xsi_base_array_concat(t54, t64, t57, (char)97, t49, t60, (char)97, t53, t63, (char)101);
    t65 = (t4 + 12U);
    t11 = *((unsigned int *)t65);
    t11 = (t11 * 1U);
    t41 = (6U + t11);
    t42 = (t41 + 15U);
    t66 = (t48 + 12U);
    t45 = *((unsigned int *)t66);
    t45 = (t45 * 1U);
    t55 = (t42 + t45);
    t56 = (t55 + 13U);
    t67 = (t63 + 12U);
    t58 = *((unsigned int *)t67);
    t58 = (t58 * 1U);
    t59 = (t56 + t58);
    xsi_report(t54, t59, (unsigned char)2);
    t8 = (t0 + 3368U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((unsigned char *)t8) = (unsigned char)0;
    t8 = (t0 + 3488U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t40 = (t10 + 1);
    t8 = (t0 + 3488U);
    t13 = *((char **)t8);
    t8 = (t13 + 0);
    *((int *)t8) = t40;

LAB23:    goto LAB20;

LAB22:    t19 = (t0 + 9634);
    t29 = ((STD_STANDARD) + 1008);
    t30 = (t44 + 0U);
    t33 = (t30 + 0U);
    *((int *)t33) = 1;
    t33 = (t30 + 4U);
    *((int *)t33) = 6;
    t33 = (t30 + 8U);
    *((int *)t33) = 1;
    t10 = (6 - 1);
    t45 = (t10 * 1);
    t45 = (t45 + 1);
    t33 = (t30 + 12U);
    *((unsigned int *)t33) = t45;
    t22 = xsi_base_array_concat(t22, t43, t29, (char)97, t19, t44, (char)97, t3, t4, (char)101);
    t33 = (t0 + 9640);
    t36 = ((STD_STANDARD) + 1008);
    t37 = (t47 + 0U);
    t38 = (t37 + 0U);
    *((int *)t38) = 1;
    t38 = (t37 + 4U);
    *((int *)t38) = 28;
    t38 = (t37 + 8U);
    *((int *)t38) = 1;
    t40 = (28 - 1);
    t45 = (t40 * 1);
    t45 = (t45 + 1);
    t38 = (t37 + 12U);
    *((unsigned int *)t38) = t45;
    t35 = xsi_base_array_concat(t35, t46, t36, (char)97, t22, t43, (char)97, t33, t47, (char)101);
    t38 = (t0 + 1992U);
    t49 = *((char **)t38);
    t38 = (t0 + 9244U);
    t50 = work_a_2268434601_3553469787_sub_594608298_3396091961(t0, t48, t49, t38);
    t53 = ((STD_STANDARD) + 1008);
    t51 = xsi_base_array_concat(t51, t52, t53, (char)97, t35, t46, (char)97, t50, t48, (char)101);
    t54 = (t4 + 12U);
    t45 = *((unsigned int *)t54);
    t45 = (t45 * 1U);
    t55 = (6U + t45);
    t56 = (t55 + 28U);
    t57 = (t48 + 12U);
    t58 = *((unsigned int *)t57);
    t58 = (t58 * 1U);
    t59 = (t56 + t58);
    xsi_report(t51, t59, 0);
    goto LAB23;

LAB25:    t42 = 0;

LAB28:    if (t42 < t11)
        goto LAB29;
    else
        goto LAB27;

LAB29:    t16 = (t12 + t42);
    t18 = (t2 + t42);
    if (*((unsigned char *)t16) != *((unsigned char *)t18))
        goto LAB26;

LAB30:    t42 = (t42 + 1);
    goto LAB28;

LAB31:    t8 = (t0 + 9702);
    t16 = ((STD_STANDARD) + 1008);
    t18 = (t44 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 1;
    t19 = (t18 + 4U);
    *((int *)t19) = 6;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t10 = (6 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t11;
    t15 = xsi_base_array_concat(t15, t43, t16, (char)97, t8, t44, (char)97, t3, t4, (char)101);
    t19 = (t0 + 9708);
    t29 = ((STD_STANDARD) + 1008);
    t30 = (t47 + 0U);
    t33 = (t30 + 0U);
    *((int *)t33) = 1;
    t33 = (t30 + 4U);
    *((int *)t33) = 34;
    t33 = (t30 + 8U);
    *((int *)t33) = 1;
    t40 = (34 - 1);
    t11 = (t40 * 1);
    t11 = (t11 + 1);
    t33 = (t30 + 12U);
    *((unsigned int *)t33) = t11;
    t22 = xsi_base_array_concat(t22, t46, t29, (char)97, t15, t43, (char)97, t19, t47, (char)101);
    t33 = (t4 + 12U);
    t11 = *((unsigned int *)t33);
    t11 = (t11 * 1U);
    t41 = (6U + t11);
    t42 = (t41 + 34U);
    xsi_report(t22, t42, (unsigned char)2);
    t8 = (t0 + 3368U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((unsigned char *)t8) = (unsigned char)0;
    t8 = (t0 + 3488U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t40 = (t10 + 1);
    t8 = (t0 + 3488U);
    t13 = *((char **)t8);
    t8 = (t13 + 0);
    *((int *)t8) = t40;
    goto LAB32;

}

static void work_a_2268434601_3553469787_p_2(char *t0)
{
    char t9[16];
    char t11[16];
    char t13[16];
    char t24[16];
    char t26[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    unsigned char t8;
    char *t10;
    char *t12;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned char t21;
    int t22;
    char *t23;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;

LAB0:    t1 = (t0 + 5208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(234, ng4);
    t2 = (t0 + 9742);
    xsi_report(t2, 42U, 0);
    xsi_set_current_line(235, ng4);
    t2 = (t0 + 9784);
    xsi_report(t2, 36U, 0);
    xsi_set_current_line(236, ng4);
    t2 = (t0 + 9820);
    xsi_report(t2, 42U, 0);
    xsi_set_current_line(237, ng4);
    t2 = (t0 + 9862);
    xsi_report(t2, 54U, 0);
    xsi_set_current_line(238, ng4);
    t2 = (t0 + 9916);
    xsi_report(t2, 42U, 0);
    xsi_set_current_line(241, ng4);
    t2 = (t0 + 9958);
    xsi_report(t2, 17U, 0);
    xsi_set_current_line(242, ng4);
    t2 = (t0 + 5968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(243, ng4);
    t7 = (25 * 1000LL);
    t2 = (t0 + 5016);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(244, ng4);

LAB10:    t2 = (t0 + 5792);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t4 = (t0 + 5792);
    *((int *)t4) = 0;
    xsi_set_current_line(245, ng4);
    t2 = (t0 + 5968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(246, ng4);
    t7 = (20 * 1000LL);
    t2 = (t0 + 5016);
    xsi_process_wait(t2, t7);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    t3 = (t0 + 992U);
    t8 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t8 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(247, ng4);
    t2 = (t0 + 9975);
    t4 = ((STD_STANDARD) + 576);
    t7 = xsi_get_sim_current_time();
    t5 = xsi_int64_to_mem(t7);
    t6 = xsi_string_variable_get_image(t9, t4, t5);
    t12 = ((STD_STANDARD) + 1008);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 23;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (23 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t10 = xsi_base_array_concat(t10, t11, t12, (char)97, t2, t13, (char)97, t6, t9, (char)101);
    t15 = (t9 + 12U);
    t17 = *((unsigned int *)t15);
    t18 = (23U + t17);
    xsi_report(t10, t18, 0);
    xsi_set_current_line(252, ng4);
    t2 = (t0 + 9998);
    xsi_report(t2, 34U, 0);
    xsi_set_current_line(253, ng4);
    t2 = (t0 + 5016);
    t3 = (t0 + 10032);
    t5 = (t0 + 10040);
    t10 = (t0 + 10048);
    t14 = (t0 + 10050);
    t19 = (t9 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 26;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t16 = (26 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t17;
    work_a_2268434601_3553469787_sub_2922596938_2166916210(t0, t2, t3, t5, t10, t14, t9);
    xsi_set_current_line(254, ng4);
    t2 = (t0 + 5016);
    work_a_2268434601_3553469787_sub_3389463493_2166916210(t0, t2);
    xsi_set_current_line(259, ng4);
    t2 = (t0 + 10076);
    xsi_report(t2, 34U, 0);
    xsi_set_current_line(260, ng4);
    t2 = (t0 + 5016);
    t3 = (t0 + 10110);
    t5 = (t0 + 10118);
    t10 = (t0 + 10126);
    t14 = (t0 + 10128);
    t19 = (t9 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 26;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t16 = (26 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t17;
    work_a_2268434601_3553469787_sub_2922596938_2166916210(t0, t2, t3, t5, t10, t14, t9);
    xsi_set_current_line(261, ng4);
    t2 = (t0 + 5016);
    work_a_2268434601_3553469787_sub_3389463493_2166916210(t0, t2);
    xsi_set_current_line(266, ng4);
    t2 = (t0 + 10154);
    xsi_report(t2, 47U, 0);
    xsi_set_current_line(267, ng4);
    t2 = (t0 + 5016);
    t3 = (t0 + 10201);
    t5 = (t0 + 10209);
    t10 = (t0 + 10217);
    t14 = (t0 + 10219);
    t19 = (t9 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 22;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t16 = (22 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t17;
    work_a_2268434601_3553469787_sub_2922596938_2166916210(t0, t2, t3, t5, t10, t14, t9);
    xsi_set_current_line(268, ng4);
    t2 = (t0 + 5016);
    t3 = (t0 + 10241);
    t5 = (t0 + 10249);
    t10 = (t9 + 0U);
    t12 = (t10 + 0U);
    *((int *)t12) = 1;
    t12 = (t10 + 4U);
    *((int *)t12) = 22;
    t12 = (t10 + 8U);
    *((int *)t12) = 1;
    t16 = (22 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t12 = (t10 + 12U);
    *((unsigned int *)t12) = t17;
    work_a_2268434601_3553469787_sub_4293614437_2166916210(t0, t2, t3, t5, t9);
    xsi_set_current_line(269, ng4);
    t2 = (t0 + 5016);
    work_a_2268434601_3553469787_sub_3389463493_2166916210(t0, t2);
    xsi_set_current_line(274, ng4);
    t2 = (t0 + 10271);
    xsi_report(t2, 47U, 0);
    xsi_set_current_line(275, ng4);
    t2 = (t0 + 5016);
    t3 = (t0 + 10318);
    t5 = (t0 + 10326);
    t10 = (t0 + 10334);
    t14 = (t0 + 10336);
    t19 = (t9 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 22;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t16 = (22 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t17;
    work_a_2268434601_3553469787_sub_2922596938_2166916210(t0, t2, t3, t5, t10, t14, t9);
    xsi_set_current_line(276, ng4);
    t2 = (t0 + 5016);
    t3 = (t0 + 10358);
    t5 = (t0 + 10366);
    t10 = (t9 + 0U);
    t12 = (t10 + 0U);
    *((int *)t12) = 1;
    t12 = (t10 + 4U);
    *((int *)t12) = 22;
    t12 = (t10 + 8U);
    *((int *)t12) = 1;
    t16 = (22 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t12 = (t10 + 12U);
    *((unsigned int *)t12) = t17;
    work_a_2268434601_3553469787_sub_4293614437_2166916210(t0, t2, t3, t5, t9);
    xsi_set_current_line(277, ng4);
    t2 = (t0 + 5016);
    work_a_2268434601_3553469787_sub_3389463493_2166916210(t0, t2);
    xsi_set_current_line(282, ng4);
    t2 = (t0 + 10388);
    xsi_report(t2, 48U, 0);
    xsi_set_current_line(283, ng4);
    t2 = (t0 + 5016);
    t3 = (t0 + 10436);
    t5 = (t0 + 10444);
    t10 = (t0 + 10452);
    t14 = (t0 + 10454);
    t19 = (t9 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 26;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t16 = (26 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t17;
    work_a_2268434601_3553469787_sub_2922596938_2166916210(t0, t2, t3, t5, t10, t14, t9);
    xsi_set_current_line(284, ng4);
    t2 = (t0 + 5016);
    work_a_2268434601_3553469787_sub_3389463493_2166916210(t0, t2);
    xsi_set_current_line(286, ng4);
    t2 = (t0 + 5016);
    t3 = (t0 + 10480);
    t5 = (t0 + 10488);
    t10 = (t0 + 10496);
    t14 = (t0 + 10498);
    t19 = (t9 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 22;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t16 = (22 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t17;
    work_a_2268434601_3553469787_sub_2922596938_2166916210(t0, t2, t3, t5, t10, t14, t9);
    xsi_set_current_line(287, ng4);
    t2 = (t0 + 5016);
    t3 = (t0 + 10520);
    t5 = (t0 + 10528);
    t10 = (t9 + 0U);
    t12 = (t10 + 0U);
    *((int *)t12) = 1;
    t12 = (t10 + 4U);
    *((int *)t12) = 22;
    t12 = (t10 + 8U);
    *((int *)t12) = 1;
    t16 = (22 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t12 = (t10 + 12U);
    *((unsigned int *)t12) = t17;
    work_a_2268434601_3553469787_sub_4293614437_2166916210(t0, t2, t3, t5, t9);
    xsi_set_current_line(288, ng4);
    t2 = (t0 + 5016);
    work_a_2268434601_3553469787_sub_3389463493_2166916210(t0, t2);
    xsi_set_current_line(293, ng4);
    t2 = (t0 + 10550);
    xsi_report(t2, 40U, 0);
    xsi_set_current_line(294, ng4);
    t2 = (t0 + 5016);
    t3 = (t0 + 10590);
    t5 = (t0 + 10598);
    t10 = (t0 + 10606);
    t14 = (t0 + 10608);
    t19 = (t9 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 32;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t16 = (32 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t17;
    work_a_2268434601_3553469787_sub_2922596938_2166916210(t0, t2, t3, t5, t10, t14, t9);
    xsi_set_current_line(295, ng4);
    t2 = (t0 + 5016);
    work_a_2268434601_3553469787_sub_3389463493_2166916210(t0, t2);
    xsi_set_current_line(297, ng4);
    t2 = (t0 + 5016);
    t3 = (t0 + 10640);
    t5 = (t0 + 10648);
    t10 = (t0 + 10656);
    t14 = (t0 + 10658);
    t19 = (t9 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 40;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t16 = (40 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t17;
    work_a_2268434601_3553469787_sub_2922596938_2166916210(t0, t2, t3, t5, t10, t14, t9);
    xsi_set_current_line(298, ng4);
    t2 = (t0 + 5016);
    t3 = (t0 + 10698);
    t5 = (t0 + 10706);
    t10 = (t9 + 0U);
    t12 = (t10 + 0U);
    *((int *)t12) = 1;
    t12 = (t10 + 4U);
    *((int *)t12) = 40;
    t12 = (t10 + 8U);
    *((int *)t12) = 1;
    t16 = (40 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t12 = (t10 + 12U);
    *((unsigned int *)t12) = t17;
    work_a_2268434601_3553469787_sub_4293614437_2166916210(t0, t2, t3, t5, t9);
    xsi_set_current_line(299, ng4);
    t2 = (t0 + 5016);
    work_a_2268434601_3553469787_sub_3389463493_2166916210(t0, t2);
    xsi_set_current_line(304, ng4);
    t2 = (t0 + 10746);
    xsi_report(t2, 34U, 0);
    xsi_set_current_line(305, ng4);
    t2 = (t0 + 5016);
    t3 = (t0 + 10780);
    t5 = (t0 + 10788);
    t10 = (t0 + 10796);
    t14 = (t0 + 10798);
    t19 = (t9 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 26;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t16 = (26 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t17;
    work_a_2268434601_3553469787_sub_2922596938_2166916210(t0, t2, t3, t5, t10, t14, t9);
    xsi_set_current_line(306, ng4);
    t2 = (t0 + 5016);
    work_a_2268434601_3553469787_sub_3389463493_2166916210(t0, t2);
    xsi_set_current_line(308, ng4);
    t2 = (t0 + 5016);
    t3 = (t0 + 10824);
    t5 = (t0 + 10832);
    t10 = (t0 + 10840);
    t14 = (t0 + 10842);
    t19 = (t9 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 22;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t16 = (22 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t17;
    work_a_2268434601_3553469787_sub_2922596938_2166916210(t0, t2, t3, t5, t10, t14, t9);
    xsi_set_current_line(309, ng4);
    t2 = (t0 + 5016);
    t3 = (t0 + 10864);
    t5 = (t0 + 10872);
    t10 = (t9 + 0U);
    t12 = (t10 + 0U);
    *((int *)t12) = 1;
    t12 = (t10 + 4U);
    *((int *)t12) = 22;
    t12 = (t10 + 8U);
    *((int *)t12) = 1;
    t16 = (22 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t12 = (t10 + 12U);
    *((unsigned int *)t12) = t17;
    work_a_2268434601_3553469787_sub_4293614437_2166916210(t0, t2, t3, t5, t9);
    xsi_set_current_line(310, ng4);
    t2 = (t0 + 5016);
    work_a_2268434601_3553469787_sub_3389463493_2166916210(t0, t2);
    xsi_set_current_line(315, ng4);
    t2 = (t0 + 10894);
    xsi_report(t2, 33U, 0);
    xsi_set_current_line(316, ng4);

LAB18:    t2 = (t0 + 5808);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    t4 = (t0 + 5808);
    *((int *)t4) = 0;
    xsi_set_current_line(317, ng4);
    t2 = (t0 + 10927);
    t4 = (t0 + 6032);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t10 = (t6 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(318, ng4);
    t2 = (t0 + 10935);
    t4 = (t0 + 6096);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t10 = (t6 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(319, ng4);
    t2 = (t0 + 10943);
    t4 = (t0 + 6160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t10 = (t6 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(320, ng4);
    t2 = (t0 + 6224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(321, ng4);

LAB22:    t2 = (t0 + 5824);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    t3 = (t0 + 992U);
    t8 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t8 == 1)
        goto LAB16;
    else
        goto LAB18;

LAB19:    goto LAB17;

LAB20:    t4 = (t0 + 5824);
    *((int *)t4) = 0;
    xsi_set_current_line(322, ng4);
    t2 = (t0 + 6224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(323, ng4);
    t2 = (t0 + 10945);
    t4 = (t0 + 6160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t10 = (t6 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(326, ng4);
    t7 = (30 * 1000LL);
    t2 = (t0 + 5016);
    xsi_process_wait(t2, t7);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    t3 = (t0 + 992U);
    t8 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t8 == 1)
        goto LAB20;
    else
        goto LAB22;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(327, ng4);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t21 = (t8 == (unsigned char)3);
    if (t21 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(330, ng4);
    t2 = (t0 + 11000);
    xsi_report(t2, 41U, 0);

LAB29:    xsi_set_current_line(336, ng4);
    t2 = (t0 + 11041);
    xsi_report(t2, 42U, 0);
    xsi_set_current_line(337, ng4);
    t2 = (t0 + 11083);
    xsi_report(t2, 13U, 0);
    xsi_set_current_line(338, ng4);
    t2 = (t0 + 11096);
    xsi_report(t2, 42U, 0);
    xsi_set_current_line(339, ng4);
    t2 = (t0 + 11138);
    t4 = ((STD_STANDARD) + 576);
    t7 = xsi_get_sim_current_time();
    t5 = xsi_int64_to_mem(t7);
    t6 = xsi_string_variable_get_image(t9, t4, t5);
    t12 = ((STD_STANDARD) + 1008);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 1;
    t15 = (t14 + 4U);
    *((int *)t15) = 17;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (17 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t10 = xsi_base_array_concat(t10, t11, t12, (char)97, t2, t13, (char)97, t6, t9, (char)101);
    t15 = (t9 + 12U);
    t17 = *((unsigned int *)t15);
    t18 = (17U + t17);
    xsi_report(t10, t18, 0);
    xsi_set_current_line(341, ng4);
    t2 = (t0 + 3368U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    if (t8 != 0)
        goto LAB31;

LAB33:    xsi_set_current_line(344, ng4);
    t2 = (t0 + 11180);
    t4 = ((STD_STANDARD) + 384);
    t5 = (t0 + 3488U);
    t6 = *((char **)t5);
    t16 = *((int *)t6);
    t5 = xsi_int_to_mem(t16);
    t10 = xsi_string_variable_get_image(t9, t4, t5);
    t14 = ((STD_STANDARD) + 1008);
    t15 = (t13 + 0U);
    t19 = (t15 + 0U);
    *((int *)t19) = 1;
    t19 = (t15 + 4U);
    *((int *)t19) = 8;
    t19 = (t15 + 8U);
    *((int *)t19) = 1;
    t22 = (8 - 1);
    t17 = (t22 * 1);
    t17 = (t17 + 1);
    t19 = (t15 + 12U);
    *((unsigned int *)t19) = t17;
    t12 = xsi_base_array_concat(t12, t11, t14, (char)97, t2, t13, (char)97, t10, t9, (char)101);
    t19 = (t0 + 11188);
    t25 = ((STD_STANDARD) + 1008);
    t27 = (t26 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 1;
    t28 = (t27 + 4U);
    *((int *)t28) = 16;
    t28 = (t27 + 8U);
    *((int *)t28) = 1;
    t29 = (16 - 1);
    t17 = (t29 * 1);
    t17 = (t17 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t17;
    t23 = xsi_base_array_concat(t23, t24, t25, (char)97, t12, t11, (char)97, t19, t26, (char)101);
    t28 = (t9 + 12U);
    t17 = *((unsigned int *)t28);
    t18 = (8U + t17);
    t30 = (t18 + 16U);
    xsi_report(t23, t30, 0);

LAB32:    xsi_set_current_line(347, ng4);
    t2 = (t0 + 11204);
    xsi_report(t2, 42U, 0);
    xsi_set_current_line(350, ng4);
    t7 = (100 * 1000LL);
    t2 = (t0 + 5016);
    xsi_process_wait(t2, t7);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(328, ng4);
    t2 = (t0 + 10947);
    xsi_report(t2, 53U, 0);
    goto LAB29;

LAB31:    xsi_set_current_line(342, ng4);
    t2 = (t0 + 11155);
    xsi_report(t2, 25U, 0);
    goto LAB32;

LAB34:    xsi_set_current_line(351, ng4);
    t2 = (t0 + 6288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(352, ng4);

LAB40:    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

LAB38:    goto LAB2;

LAB39:    goto LAB38;

LAB41:    goto LAB39;

}

static void work_a_2268434601_3553469787_p_3(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;

LAB0:    t1 = (t0 + 5456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(358, ng4);
    t3 = (2000 * 1000LL);
    t2 = (t0 + 5264);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(359, ng4);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t5 = *((unsigned char *)t4);
    t6 = (!(t5));
    if (t6 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(362, ng4);

LAB13:    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(360, ng4);
    t2 = (t0 + 11246);
    xsi_report(t2, 50U, (unsigned char)3);
    goto LAB9;

LAB11:    goto LAB2;

LAB12:    goto LAB11;

LAB14:    goto LAB12;

}


extern void work_a_2268434601_3553469787_init()
{
	static char *pe[] = {(void *)work_a_2268434601_3553469787_p_0,(void *)work_a_2268434601_3553469787_p_1,(void *)work_a_2268434601_3553469787_p_2,(void *)work_a_2268434601_3553469787_p_3};
	static char *se[] = {(void *)work_a_2268434601_3553469787_sub_594608298_3396091961,(void *)work_a_2268434601_3553469787_sub_2805990933_3396091961,(void *)work_a_2268434601_3553469787_sub_384613578_3396091961,(void *)work_a_2268434601_3553469787_sub_2922596938_2166916210,(void *)work_a_2268434601_3553469787_sub_3389463493_2166916210,(void *)work_a_2268434601_3553469787_sub_4293614437_2166916210};
	xsi_register_didat("work_a_2268434601_3553469787", "isim/tb_top_bram_fsm_isim_beh.exe.sim/work/a_2268434601_3553469787.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
