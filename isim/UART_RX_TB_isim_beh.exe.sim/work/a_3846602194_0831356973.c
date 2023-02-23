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
static const char *ng0 = "C:/Xilinx/projects/UART_RX/UART_RX_TB.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


void work_a_3846602194_0831356973_sub_3975008402_1212737304(char *t0, char *t1, char *t2, char *t3, unsigned int t4, unsigned int t5, char *t6)
{
    char t8[24];
    char t9[16];
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int64 t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;

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
    t11 = (t8 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t8 + 12U);
    *((char **)t15) = t9;
    t13 = (0 + t4);
    t16 = (t6 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_delta(t6, t13, 1, 0LL);
    t10 = (t0 + 1888U);
    t16 = *((char **)t10);
    t20 = *((int64 *)t16);
    xsi_process_wait(t1, t20);

LAB7:    t10 = (t1 + 88U);
    t17 = *((char **)t10);
    t18 = (t17 + 2480U);
    *((unsigned int *)t18) = 1U;
    t19 = (t1 + 88U);
    t21 = *((char **)t19);
    t22 = (t21 + 0U);
    getcontext(t22);
    t23 = (t1 + 88U);
    t24 = *((char **)t23);
    t25 = (t24 + 2480U);
    t13 = *((unsigned int *)t25);
    if (t13 == 1)
        goto LAB8;

LAB9:    t26 = (t1 + 88U);
    t27 = *((char **)t26);
    t28 = (t27 + 2480U);
    *((unsigned int *)t28) = 3U;

LAB5:
LAB6:
LAB4:    t12 = 0;
    t29 = 7;

LAB10:    if (t12 <= t29)
        goto LAB11;

LAB13:    t13 = (0 + t4);
    t10 = (t6 + 56U);
    t16 = *((char **)t10);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_delta(t6, t13, 1, 0LL);
    t10 = (t0 + 1888U);
    t16 = *((char **)t10);
    t20 = *((int64 *)t16);
    xsi_process_wait(t1, t20);

LAB24:    t10 = (t1 + 88U);
    t17 = *((char **)t10);
    t18 = (t17 + 2480U);
    *((unsigned int *)t18) = 1U;
    t19 = (t1 + 88U);
    t21 = *((char **)t19);
    t22 = (t21 + 0U);
    getcontext(t22);
    t23 = (t1 + 88U);
    t24 = *((char **)t23);
    t25 = (t24 + 2480U);
    t13 = *((unsigned int *)t25);
    if (t13 == 1)
        goto LAB25;

LAB26:    t26 = (t1 + 88U);
    t27 = *((char **)t26);
    t28 = (t27 + 2480U);
    *((unsigned int *)t28) = 3U;

LAB22:
LAB23:
LAB21:
LAB1:    return;
LAB3:    *((char **)t11) = t2;
    goto LAB2;

LAB8:    xsi_saveStackAndSuspend(t1);
    goto LAB9;

LAB11:    t10 = (t9 + 0U);
    t30 = *((int *)t10);
    t16 = (t9 + 8U);
    t31 = *((int *)t16);
    t32 = (t12 - t30);
    t13 = (t32 * t31);
    t17 = (t9 + 4U);
    t33 = *((int *)t17);
    xsi_vhdl_check_range_of_index(t30, t33, t31, t12);
    t34 = (1U * t13);
    t35 = (0 + t34);
    t18 = (t2 + t35);
    t14 = *((unsigned char *)t18);
    t36 = (0 + t4);
    t19 = (t6 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = t14;
    xsi_driver_first_trans_delta(t6, t36, 1, 0LL);
    t10 = (t0 + 1888U);
    t16 = *((char **)t10);
    t20 = *((int64 *)t16);
    xsi_process_wait(t1, t20);

LAB17:    t10 = (t1 + 88U);
    t17 = *((char **)t10);
    t18 = (t17 + 2480U);
    *((unsigned int *)t18) = 1U;
    t19 = (t1 + 88U);
    t21 = *((char **)t19);
    t22 = (t21 + 0U);
    getcontext(t22);
    t23 = (t1 + 88U);
    t24 = *((char **)t23);
    t25 = (t24 + 2480U);
    t13 = *((unsigned int *)t25);
    if (t13 == 1)
        goto LAB18;

LAB19:    t26 = (t1 + 88U);
    t27 = *((char **)t26);
    t28 = (t27 + 2480U);
    *((unsigned int *)t28) = 3U;

LAB15:
LAB16:
LAB14:
LAB12:    if (t12 == t29)
        goto LAB13;

LAB20:    t30 = (t12 + 1);
    t12 = t30;
    goto LAB10;

LAB18:    xsi_saveStackAndSuspend(t1);
    goto LAB19;

LAB25:    xsi_saveStackAndSuspend(t1);
    goto LAB26;

}

static void work_a_3846602194_0831356973_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    int64 t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(63, ng0);

LAB3:    t1 = (t0 + 1648U);
    t2 = *((char **)t1);
    t3 = *((int64 *)t2);
    t4 = (t3 / 2);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t6);
    t1 = (t0 + 3552);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_delta(t1, 0U, 1, t4);
    t12 = (t0 + 3552);
    xsi_driver_intertial_reject(t12, t4, t4);

LAB2:    t13 = (t0 + 3440);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3846602194_0831356973_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    char *t9;

LAB0:    t1 = (t0 + 3120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);

LAB6:    t2 = (t0 + 3456);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 3456);
    *((int *)t5) = 0;
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2928);
    t3 = (t0 + 5594);
    t6 = (t0 + 1312U);
    t7 = (t0 + 3616);
    work_a_3846602194_0831356973_sub_3975008402_1212737304(t0, t2, t3, t6, 0U, 0U, t7);
    xsi_set_current_line(70, ng0);

LAB10:    t2 = (t0 + 3472);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t5 = (t0 + 3472);
    *((int *)t5) = 0;
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 5602);
    t4 = 1;
    if (8U == 8U)
        goto LAB15;

LAB16:    t4 = 0;

LAB17:    if (t4 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 5645);
    xsi_report(t2, 37U, (unsigned char)0);

LAB13:    xsi_set_current_line(79, ng0);
    if ((unsigned char)0 == 0)
        goto LAB21;

LAB22:    goto LAB2;

LAB9:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(74, ng0);
    t9 = (t0 + 5610);
    xsi_report(t9, 35U, (unsigned char)0);
    goto LAB13;

LAB15:    t8 = 0;

LAB18:    if (t8 < 8U)
        goto LAB19;
    else
        goto LAB17;

LAB19:    t6 = (t3 + t8);
    t7 = (t2 + t8);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB16;

LAB20:    t8 = (t8 + 1);
    goto LAB18;

LAB21:    t2 = (t0 + 5682);
    xsi_report(t2, 14U, (unsigned char)3);
    goto LAB22;

}


extern void work_a_3846602194_0831356973_init()
{
	static char *pe[] = {(void *)work_a_3846602194_0831356973_p_0,(void *)work_a_3846602194_0831356973_p_1};
	static char *se[] = {(void *)work_a_3846602194_0831356973_sub_3975008402_1212737304};
	xsi_register_didat("work_a_3846602194_0831356973", "isim/UART_RX_TB_isim_beh.exe.sim/work/a_3846602194_0831356973.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
