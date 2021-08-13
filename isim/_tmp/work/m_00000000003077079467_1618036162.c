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
static const char *ng0 = "D:/XC3S400AN/final/Sun07111128_all/max.v";
static int ng1[] = {0, 0};



static void A14_0(char *t0)
{
    char t3[8];
    char t20[8];
    char t23[8];
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
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    t1 = (t0 + 1708U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1888);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
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

LAB11:    xsi_set_current_line(23, ng0);

LAB14:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 740U);
    t4 = *((char **)t2);
    t2 = (t4 + 4U);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(34, ng0);

LAB40:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1232);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 8, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1140);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 1140);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 8, 0LL);

LAB17:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(17, ng0);

LAB13:    xsi_set_current_line(18, ng0);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 1232);
    xsi_vlogvar_generic_wait_assign_value(t19, t18, 1, 0, 0, 8, 0LL);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1140);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 8, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(26, ng0);

LAB18:    xsi_set_current_line(27, ng0);
    t5 = (t0 + 828U);
    t6 = *((char **)t5);
    t5 = (t6 + 4U);
    t13 = *((unsigned int *)t5);
    t14 = (~(t13));
    t15 = *((unsigned int *)t6);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1232);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 1140);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 8, 0LL);

LAB21:    goto LAB17;

LAB19:    xsi_set_current_line(29, ng0);
    t12 = (t0 + 1232);
    t18 = (t12 + 32U);
    t19 = *((char **)t18);
    t21 = (t0 + 916U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t21 = (t23 + 4U);
    t24 = (t19 + 4U);
    t25 = (t22 + 4U);
    if (*((unsigned int *)t24) != 0)
        goto LAB23;

LAB22:    if (*((unsigned int *)t25) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t19) < *((unsigned int *)t22))
        goto LAB24;

LAB25:    memset(t20, 0, 8);
    t26 = (t20 + 4U);
    t27 = (t23 + 4U);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t27) != 0)
        goto LAB29;

LAB30:    t33 = (t20 + 4U);
    t34 = *((unsigned int *)t20);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB31;

LAB32:    t39 = *((unsigned int *)t20);
    t40 = (~(t39));
    t41 = *((unsigned int *)t33);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t33) > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t20) > 0)
        goto LAB37;

LAB38:    memcpy(t3, t44, 8);

LAB39:    t45 = (t0 + 1232);
    xsi_vlogvar_generic_wait_assign_value(t45, t3, 2, 0, 0, 8, 0LL);
    goto LAB21;

LAB23:    *((unsigned int *)t23) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t23) = 1;
    goto LAB25;

LAB27:    *((unsigned int *)t20) = 1;
    goto LAB30;

LAB29:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB30;

LAB31:    t37 = (t0 + 916U);
    t38 = *((char **)t37);
    goto LAB32;

LAB33:    t37 = (t0 + 1232);
    t43 = (t37 + 32U);
    t44 = *((char **)t43);
    goto LAB34;

LAB35:    xsi_vlog_unsigned_bit_combine(t3, 8, t38, 8, t44, 8);
    goto LAB39;

LAB37:    memcpy(t3, t38, 8);
    goto LAB39;

}


extern void work_m_00000000003077079467_1618036162_init()
{
	static char *pe[] = {(void *)A14_0};
	xsi_register_didat("work_m_00000000003077079467_1618036162", "isim/_tmp/work/m_00000000003077079467_1618036162.didat");
	xsi_register_executes(pe);
}
