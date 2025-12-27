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
static const char *ng0 = "F:/bram_fsm_proj/bram_sram.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1335487289_1516540902_p_0(char *t0)
{
    char t12[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    int t7;
    int t8;
    char *t9;
    int t10;
    int t11;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4760);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 4920);
    t4 = (t1 + 56U);
    t9 = *((char **)t4);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t3, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 5176);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t9 = (t4 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB14:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 2152U);
    t4 = *((char **)t1);
    t1 = (t0 + 7692U);
    t7 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t1);
    t8 = (t7 - 0);
    t19 = (t8 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t7);
    t20 = (8U * t19);
    t21 = (0 + t20);
    t9 = (t3 + t21);
    t13 = (t0 + 4984);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t22 = (t16 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t9, 8U);
    xsi_driver_first_trans_fast(t13);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(40, ng0);
    t7 = xsi_vhdl_pow(2, 8);
    t8 = (t7 - 1);
    t3 = (t0 + 9872);
    *((int *)t3) = 0;
    t9 = (t0 + 9876);
    *((int *)t9) = t8;
    t10 = 0;
    t11 = t8;

LAB8:    if (t10 <= t11)
        goto LAB9;

LAB11:    xsi_set_current_line(43, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t3 = t1;
    memset(t3, (unsigned char)2, 8U);
    t4 = (t0 + 4920);
    t9 = (t4 + 56U);
    t13 = *((char **)t9);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(44, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t3 = t1;
    memset(t3, (unsigned char)2, 8U);
    t4 = (t0 + 4984);
    t9 = (t4 + 56U);
    t13 = *((char **)t9);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(45, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t3 = t1;
    memset(t3, (unsigned char)2, 8U);
    t4 = (t0 + 5048);
    t9 = (t4 + 56U);
    t13 = *((char **)t9);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(46, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t3 = t1;
    memset(t3, (unsigned char)2, 8U);
    t4 = (t0 + 5112);
    t9 = (t4 + 56U);
    t13 = *((char **)t9);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 5176);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t9 = (t4 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB9:    xsi_set_current_line(41, ng0);
    t13 = (t0 + 9872);
    t14 = xsi_vhdl_mod(*((int *)t13), 256);
    t15 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t12, t14, 8);
    t16 = (t0 + 9872);
    t17 = *((int *)t16);
    t18 = (t17 - 0);
    t19 = (t18 * 1);
    t20 = (8U * t19);
    t21 = (0U + t20);
    t22 = (t0 + 4856);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t15, 8U);
    xsi_driver_first_trans_delta(t22, t21, 8U, 0LL);

LAB10:    t1 = (t0 + 9872);
    t10 = *((int *)t1);
    t3 = (t0 + 9876);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB11;

LAB12:    t7 = (t10 + 1);
    t10 = t7;
    t4 = (t0 + 9872);
    *((int *)t4) = t10;
    goto LAB8;

LAB13:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t1 = (t0 + 1512U);
    t9 = *((char **)t1);
    t1 = (t0 + 7612U);
    t7 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t9, t1);
    t8 = (t7 - 0);
    t19 = (t8 * 1);
    t20 = (8U * t19);
    t21 = (0U + t20);
    t13 = (t0 + 4856);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t22 = (t16 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t4, 8U);
    xsi_driver_first_trans_delta(t13, t21, 8U, 0LL);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 5048);
    t4 = (t1 + 56U);
    t9 = *((char **)t4);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t3, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = (t0 + 5112);
    t4 = (t1 + 56U);
    t9 = *((char **)t4);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t3, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 5176);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t9 = (t4 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

}

static void work_a_1335487289_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(68, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 5240);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4776);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1335487289_1516540902_init()
{
	static char *pe[] = {(void *)work_a_1335487289_1516540902_p_0,(void *)work_a_1335487289_1516540902_p_1};
	xsi_register_didat("work_a_1335487289_1516540902", "isim/tb_bram_fsm_simple_isim_beh.exe.sim/work/a_1335487289_1516540902.didat");
	xsi_register_executes(pe);
}
