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
static int ng0[] = {255, 0};
static unsigned int ng1[] = {255U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static const char *ng5 = "D:/XC3S400AN/final/Sun07111128_all/AverageEn.v";
static int ng6[] = {0, 0};
static int ng7[] = {3, 0};



static void C25_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t9[8];
    char t10[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;

LAB0:    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1588);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t0 + 1004U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_rshift(t9, 32, t6, 14, t8, 4);
    t7 = ((char*)((ng0)));
    memset(t10, 0, 8);
    t11 = (t10 + 4U);
    t12 = (t9 + 4U);
    t13 = (t7 + 4U);
    if (*((unsigned int *)t12) != 0)
        goto LAB5;

LAB4:    if (*((unsigned int *)t13) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t9) > *((unsigned int *)t7))
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t14 = (t4 + 4U);
    t15 = (t10 + 4U);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t10);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB12:    t21 = (t4 + 4U);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB13;

LAB14:    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t21) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t35, 8);

LAB21:    t33 = (t0 + 2788);
    t36 = (t33 + 32U);
    t37 = *((char **)t36);
    t38 = (t37 + 40U);
    t39 = *((char **)t38);
    t40 = (t39 + 4U);
    t41 = 255U;
    t42 = t41;
    t43 = (t3 + 4U);
    t44 = *((unsigned int *)t3);
    t41 = (t41 & t44);
    t45 = *((unsigned int *)t43);
    t42 = (t42 & t45);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 & 4294967040U);
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 | t41);
    t48 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t48 & 4294967040U);
    t49 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t49 | t42);
    xsi_driver_vfirst_trans(t33, 0, 7);
    t50 = (t0 + 2720);
    *((int *)t50) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB12;

LAB13:    t25 = ((char*)((ng1)));
    goto LAB14;

LAB15:    t30 = (t0 + 1588);
    t31 = (t30 + 32U);
    t32 = *((char **)t31);
    t33 = (t0 + 1004U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_rshift(t35, 14, t32, 14, t34, 4);
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 14, t25, 14, t35, 14);
    goto LAB21;

LAB19:    memcpy(t3, t25, 8);
    goto LAB21;

}

static void C26_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 2284U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1680);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t8 + 4U);
    t10 = (t6 + 4U);
    t11 = (t7 + 4U);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB7;

LAB4:    if (t21 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t4 + 4U);
    t25 = (t8 + 4U);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t25) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4U);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 2824);
    t42 = (t41 + 32U);
    t43 = *((char **)t42);
    t44 = (t43 + 40U);
    t45 = *((char **)t44);
    t46 = (t45 + 4U);
    t47 = 1U;
    t48 = t47;
    t49 = (t3 + 4U);
    t50 = *((unsigned int *)t3);
    t47 = (t47 & t50);
    t51 = *((unsigned int *)t49);
    t48 = (t48 & t51);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 & 4294967294U);
    t53 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t53 | t47);
    t54 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t54 & 4294967294U);
    t55 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t55 | t48);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t56 = (t0 + 2728);
    *((int *)t56) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng3)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng4)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t35, 1, t40, 1);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void A28_2(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 2412U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng5);
    t2 = (t0 + 2736);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng5);

LAB5:    xsi_set_current_line(30, ng5);
    t3 = (t0 + 828U);
    t4 = *((char **)t3);
    t3 = (t4 + 4U);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(35, ng5);
    t2 = (t0 + 916U);
    t3 = *((char **)t2);
    t2 = (t3 + 4U);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(41, ng5);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1680);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 2, 0LL);

LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(31, ng5);

LAB9:    xsi_set_current_line(32, ng5);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 1680);
    xsi_vlogvar_generic_wait_assign_value(t11, t10, 1, 0, 0, 2, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(36, ng5);
    t4 = (t0 + 1680);
    t10 = (t4 + 32U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t14 = (t13 + 4U);
    t15 = (t11 + 4U);
    t16 = (t12 + 4U);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t16);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB16;

LAB13:    if (t26 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t13) = 1;

LAB16:    t29 = (t13 + 4U);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(39, ng5);
    t2 = (t0 + 1680);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 2, t10, 32);
    t11 = (t0 + 1680);
    xsi_vlogvar_generic_wait_assign_value(t11, t13, 2, 0, 0, 2, 0LL);

LAB19:    goto LAB12;

LAB15:    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(37, ng5);
    t35 = ((char*)((ng7)));
    t36 = (t0 + 1680);
    xsi_vlogvar_generic_wait_assign_value(t36, t35, 1, 0, 0, 2, 0LL);
    goto LAB19;

}

static void A43_3(char *t0)
{
    char t3[8];
    char t20[8];
    char t31[8];
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t32;

LAB0:    t1 = (t0 + 2540U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng5);
    t2 = (t0 + 2744);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng5);

LAB5:    xsi_set_current_line(45, ng5);
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

LAB11:    xsi_set_current_line(51, ng5);
    t2 = (t0 + 916U);
    t4 = *((char **)t2);
    t2 = (t4 + 4U);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(69, ng5);

LAB23:    xsi_set_current_line(70, ng5);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 1496);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 14, 0LL);
    xsi_set_current_line(71, ng5);
    t2 = (t0 + 1588);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 1588);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 14, 0LL);

LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(46, ng5);

LAB13:    xsi_set_current_line(47, ng5);
    t18 = ((char*)((ng6)));
    t19 = (t0 + 1496);
    xsi_vlogvar_generic_wait_assign_value(t19, t18, 1, 0, 0, 14, 0LL);
    xsi_set_current_line(48, ng5);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 1588);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 14, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(52, ng5);

LAB17:    xsi_set_current_line(53, ng5);
    t5 = (t0 + 828U);
    t6 = *((char **)t5);
    t5 = (t6 + 4U);
    t13 = *((unsigned int *)t5);
    t14 = (~(t13));
    t15 = *((unsigned int *)t6);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(60, ng5);

LAB22:    xsi_set_current_line(62, ng5);
    t2 = (t0 + 1588);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 1496);
    t12 = (t6 + 32U);
    t18 = *((char **)t12);
    memset(t20, 0, 8);
    t19 = (t20 + 4U);
    t21 = (t18 + 4U);
    t7 = *((unsigned int *)t18);
    t8 = (t7 >> 6);
    *((unsigned int *)t20) = t8;
    t9 = *((unsigned int *)t21);
    t10 = (t9 >> 6);
    *((unsigned int *)t19) = t10;
    t11 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t11 & 255U);
    t13 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t13 & 255U);
    t22 = ((char*)((ng4)));
    xsi_vlogtype_concat(t3, 14, 14, 2U, t22, 6, t20, 8);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 14, t5, 14, t3, 14);
    t23 = (t0 + 1588);
    xsi_vlogvar_generic_wait_assign_value(t23, t31, 2, 0, 0, 14, 0LL);
    xsi_set_current_line(63, ng5);
    t2 = (t0 + 1496);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 1404);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 14, 0LL);
    xsi_set_current_line(64, ng5);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 1496);
    xsi_vlogvar_generic_wait_assign_value(t4, t2, 1, 0, 0, 14, 0LL);

LAB20:    goto LAB16;

LAB18:    xsi_set_current_line(54, ng5);

LAB21:    xsi_set_current_line(56, ng5);
    t12 = (t0 + 1496);
    t18 = (t12 + 32U);
    t19 = *((char **)t18);
    t21 = (t0 + 740U);
    t22 = *((char **)t21);
    memset(t20, 0, 8);
    t21 = (t20 + 4U);
    t23 = (t22 + 4U);
    t24 = *((unsigned int *)t22);
    t25 = (t24 >> 0);
    *((unsigned int *)t20) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 0);
    *((unsigned int *)t21) = t27;
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t28 & 255U);
    t29 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t29 & 255U);
    t30 = ((char*)((ng4)));
    xsi_vlogtype_concat(t3, 14, 14, 2U, t30, 6, t20, 8);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 14, t19, 14, t3, 14);
    t32 = (t0 + 1496);
    xsi_vlogvar_generic_wait_assign_value(t32, t31, 2, 0, 0, 14, 0LL);
    xsi_set_current_line(57, ng5);
    t2 = (t0 + 1588);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 1588);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 14, 0LL);
    goto LAB20;

}


extern void work_m_00000000002172757869_0875951893_init()
{
	static char *pe[] = {(void *)C25_0,(void *)C26_1,(void *)A28_2,(void *)A43_3};
	xsi_register_didat("work_m_00000000002172757869_0875951893", "isim/_tmp/work/m_00000000002172757869_0875951893.didat");
	xsi_register_executes(pe);
}
