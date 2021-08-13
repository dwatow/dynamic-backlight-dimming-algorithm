/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

/* This file is designed for use with ISim build 0x734844ce */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/XC3S400AN/final/Sun07111128_all/Avg_to_Enha_Buff.v";
static int ng1[] = {0, 0};



static void A18_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 1800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1980);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19, ng0);

LAB5:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 652U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t4 = (t3 + 4U);
    t6 = (t5 + 4U);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t6) == 0)
        goto LAB6;

LAB8:    *((unsigned int *)t3) = 1;
    *((unsigned int *)t4) = 1;

LAB9:    t12 = (t3 + 4U);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t3);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(27, ng0);

LAB14:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 740U);
    t4 = *((char **)t2);
    t2 = (t0 + 1140);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 828U);
    t4 = *((char **)t2);
    t2 = (t0 + 1232);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 14, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 916U);
    t4 = *((char **)t2);
    t2 = (t0 + 1324);
    xsi_vlogvar_generic_wait_assign_value(t2, t4, 2, 0, 0, 8, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(21, ng0);

LAB13:    xsi_set_current_line(22, ng0);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 1140);
    xsi_vlogvar_generic_wait_assign_value(t19, t18, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1232);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 14, 0LL);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1324);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 8, 0LL);
    goto LAB12;

}


extern void work_m_00000000001341103589_1300616529_init()
{
	static char *pe[] = {(void *)A18_0};
	xsi_register_didat("work_m_00000000001341103589_1300616529", "isim/_tmp/work/m_00000000001341103589_1300616529.didat");
	xsi_register_executes(pe);
}
