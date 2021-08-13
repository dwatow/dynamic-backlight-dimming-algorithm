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
static const char *ng0 = "D:/XC3S400AN/final/Sun07111128_all/RGB_to_Y.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {5, 0};
static int ng5[] = {9, 0};
static int ng6[] = {2, 0};
static int ng7[] = {4, 0};



static void C25_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;

LAB0:    t1 = (t0 + 2352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1876);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 652U);
    t6 = *((char **)t5);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t5 = (t4 + 4U);
    t11 = (t6 + 4U);
    t12 = (t7 + 4U);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    t34 = (t0 + 3120);
    t35 = (t34 + 32U);
    t36 = *((char **)t35);
    t37 = (t36 + 40U);
    t38 = *((char **)t37);
    t39 = (t38 + 4U);
    t40 = 1U;
    t41 = t40;
    t42 = (t7 + 4U);
    t43 = *((unsigned int *)t7);
    t40 = (t40 & t43);
    t44 = *((unsigned int *)t42);
    t41 = (t41 & t44);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t45 & 4294967294U);
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 | t40);
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 4294967294U);
    t48 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t48 | t41);
    xsi_driver_vfirst_trans(t34, 0, 0);
    t49 = (t0 + 3044);
    *((int *)t49) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t4 + 4U);
    t21 = (t6 + 4U);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB6;

}

static void C26_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;

LAB0:    t1 = (t0 + 2480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1876);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 1784);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t7);
    t11 = (t9 | t10);
    *((unsigned int *)t8) = t11;
    t12 = (t4 + 4U);
    t13 = (t7 + 4U);
    t14 = (t8 + 4U);
    t15 = *((unsigned int *)t12);
    t16 = *((unsigned int *)t13);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = (t0 + 3156);
    t37 = (t36 + 32U);
    t38 = *((char **)t37);
    t39 = (t38 + 40U);
    t40 = *((char **)t39);
    t41 = (t40 + 4U);
    t42 = 1U;
    t43 = t42;
    t44 = (t8 + 4U);
    t45 = *((unsigned int *)t8);
    t42 = (t42 & t45);
    t46 = *((unsigned int *)t44);
    t43 = (t43 & t46);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t47 & 4294967294U);
    t48 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t48 | t42);
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t49 & 4294967294U);
    t50 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t50 | t43);
    xsi_driver_vfirst_trans(t36, 0, 0);
    t51 = (t0 + 3052);
    *((int *)t51) = 1;

LAB1:    return;
LAB4:    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t20 | t21);
    t22 = (t4 + 4U);
    t23 = (t7 + 4U);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = *((unsigned int *)t23);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t31 = (t30 & t29);
    t32 = (~(t27));
    t33 = (~(t31));
    t34 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t34 & t32);
    t35 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t35 & t33);
    goto LAB6;

}

static void A28_2(char *t0)
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

LAB0:    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3060);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
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

LAB11:    xsi_set_current_line(33, ng0);

LAB14:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1600);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 2, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(30, ng0);

LAB13:    xsi_set_current_line(31, ng0);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 1600);
    xsi_vlogvar_generic_wait_assign_value(t19, t18, 2, 0, 0, 1, 0LL);
    goto LAB12;

}

static void A38_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 2736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3068);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1600);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 1692);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1692);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 1784);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1784);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t0 + 1876);
    xsi_vlogvar_generic_wait_assign_value(t5, t4, 2, 0, 0, 1, 0LL);
    goto LAB2;

}

static void A45_4(char *t0)
{
    char t3[8];
    char t20[8];
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
    char *t23;

LAB0:    t1 = (t0 + 2864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3076);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 916U);
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

LAB11:    xsi_set_current_line(56, ng0);

LAB14:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 740U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4U);
    t5 = (t4 + 4U);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 16);
    *((unsigned int *)t3) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 16);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t6 = ((char*)((ng4)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_multiply(t20, 32, t3, 32, t6, 32);
    t12 = (t0 + 1324);
    xsi_vlogvar_generic_wait_assign_value(t12, t20, 2, 0, 0, 11, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 740U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4U);
    t5 = (t4 + 4U);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 8);
    *((unsigned int *)t3) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 8);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t6 = ((char*)((ng5)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_multiply(t20, 32, t3, 32, t6, 32);
    t12 = (t0 + 1416);
    xsi_vlogvar_generic_wait_assign_value(t12, t20, 2, 0, 0, 12, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 740U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4U);
    t5 = (t4 + 4U);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    *((unsigned int *)t3) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t6 = ((char*)((ng6)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_multiply(t20, 32, t3, 32, t6, 32);
    t12 = (t0 + 1508);
    xsi_vlogvar_generic_wait_assign_value(t12, t20, 2, 0, 0, 9, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1324);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 1416);
    t12 = (t6 + 32U);
    t18 = *((char **)t12);
    memset(t3, 0, 8);
    xsi_vlog_unsigned_add(t3, 12, t5, 11, t18, 12);
    t19 = (t0 + 1508);
    t21 = (t19 + 32U);
    t22 = *((char **)t21);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 12, t3, 12, t22, 9);
    t23 = (t0 + 1232);
    xsi_vlogvar_generic_wait_assign_value(t23, t20, 2, 0, 0, 12, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1232);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng7)));
    memset(t3, 0, 8);
    xsi_vlog_unsigned_rshift(t3, 12, t5, 12, t6, 32);
    t12 = (t0 + 1140);
    xsi_vlogvar_generic_wait_assign_value(t12, t3, 2, 0, 0, 8, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(48, ng0);

LAB13:    xsi_set_current_line(49, ng0);
    t18 = ((char*)((ng3)));
    t19 = (t0 + 1324);
    xsi_vlogvar_generic_wait_assign_value(t19, t18, 1, 0, 0, 11, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1508);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 9, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1416);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 12, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1232);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 12, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1140);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 8, 0LL);
    goto LAB12;

}


extern void work_m_00000000000932478372_0903562393_init()
{
	static char *pe[] = {(void *)C25_0,(void *)C26_1,(void *)A28_2,(void *)A38_3,(void *)A45_4};
	xsi_register_didat("work_m_00000000000932478372_0903562393", "isim/_tmp/work/m_00000000000932478372_0903562393.didat");
	xsi_register_executes(pe);
}
