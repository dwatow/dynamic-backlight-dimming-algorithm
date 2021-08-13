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
static const char *ng0 = "D:/XC3S400AN/final/Sun07111128_all/V_Dutys2.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {140520, 0};
static int ng6[] = {158120, 0};
static int ng7[] = {17550, 0};
static int ng8[] = {4, 0};
static int ng9[] = {2, 0};
static int ng10[] = {1, 0};
static unsigned int ng11[] = {2U, 0U};



static void A29_0(char *t0)
{
    char t12[8];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 2644U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3720);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 956U);
    t4 = *((char **)t3);
    t3 = (t4 + 4U);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2168);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t10 = (t12 + 4U);
    t11 = (t4 + 4U);
    t5 = *((unsigned int *)t4);
    t6 = (~(t5));
    *((unsigned int *)t12) = t6;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB10;

LAB9:    t14 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t14 & 1U);
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 1U);
    t16 = (t0 + 2168);
    xsi_vlogvar_generic_wait_assign_value(t16, t12, 2, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(32, ng0);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 2168);
    xsi_vlogvar_generic_wait_assign_value(t11, t10, 1, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    t7 = *((unsigned int *)t12);
    t8 = *((unsigned int *)t11);
    *((unsigned int *)t12) = (t7 | t8);
    t9 = *((unsigned int *)t10);
    t13 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t9 | t13);
    goto LAB9;

}

static void A37_1(char *t0)
{
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

LAB0:    t1 = (t0 + 2772U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3728);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 956U);
    t4 = *((char **)t3);
    t3 = (t4 + 4U);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2076);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t0 + 1984);
    xsi_vlogvar_generic_wait_assign_value(t10, t4, 2, 0, 0, 2, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(40, ng0);
    t10 = ((char*)((ng2)));
    t11 = (t0 + 1984);
    xsi_vlogvar_generic_wait_assign_value(t11, t10, 2, 0, 0, 2, 0LL);
    goto LAB8;

}

static void C45_2(char *t0)
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

LAB0:    t1 = (t0 + 2900U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2076);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
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

LAB20:    t41 = (t0 + 3820);
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
    t56 = (t0 + 3736);
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

LAB14:    t40 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t35, 1, t40, 1);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void C46_3(char *t0)
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

LAB0:    t1 = (t0 + 3028U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2076);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
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

LAB20:    t41 = (t0 + 3856);
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
    t56 = (t0 + 3744);
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

LAB14:    t40 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t35, 1, t40, 1);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void C48_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
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
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 3156U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1132U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t6 + 4U);
    t8 = (t5 + 4U);
    t9 = (t2 + 4U);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB7;

LAB4:    if (t19 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t4 + 4U);
    t23 = (t6 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4U);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t38, 8);

LAB20:    t39 = (t0 + 3892);
    t40 = (t39 + 32U);
    t41 = *((char **)t40);
    t42 = (t41 + 40U);
    t43 = *((char **)t42);
    t44 = (t43 + 4U);
    t45 = 262143U;
    t46 = t45;
    t47 = (t3 + 4U);
    t48 = *((unsigned int *)t3);
    t45 = (t45 & t48);
    t49 = *((unsigned int *)t47);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 & 4294705152U);
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 | t45);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 4294705152U);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t53 | t46);
    xsi_driver_vfirst_trans(t39, 0, 17);
    t54 = (t0 + 3752);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng5)));
    goto LAB13;

LAB14:    t38 = ((char*)((ng6)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t38, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}

static void C52_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
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
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 3284U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1132U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t6 + 4U);
    t8 = (t5 + 4U);
    t9 = (t2 + 4U);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB7;

LAB4:    if (t19 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t4 + 4U);
    t23 = (t6 + 4U);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4U);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t38, 8);

LAB20:    t39 = (t0 + 3928);
    t40 = (t39 + 32U);
    t41 = *((char **)t40);
    t42 = (t41 + 40U);
    t43 = *((char **)t42);
    t44 = (t43 + 4U);
    t45 = 262143U;
    t46 = t45;
    t47 = (t3 + 4U);
    t48 = *((unsigned int *)t3);
    t45 = (t45 & t48);
    t49 = *((unsigned int *)t47);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 & 4294705152U);
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 | t45);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 4294705152U);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t53 | t46);
    xsi_driver_vfirst_trans(t39, 0, 17);
    t54 = (t0 + 3760);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng7)));
    goto LAB13;

LAB14:    t38 = ((char*)((ng8)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t38, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}

static void A56_6(char *t0)
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

LAB0:    t1 = (t0 + 3412U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3768);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 956U);
    t4 = *((char **)t3);
    t3 = (t4 + 4U);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1220U);
    t3 = *((char **)t2);
    t2 = (t3 + 4U);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1308U);
    t3 = *((char **)t2);
    t2 = (t3 + 4U);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(74, ng0);

LAB18:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1800);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t0 + 1800);
    xsi_vlogvar_generic_wait_assign_value(t10, t4, 2, 0, 0, 18, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1892);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t0 + 1892);
    xsi_vlogvar_generic_wait_assign_value(t10, t4, 2, 0, 0, 18, 0LL);

LAB16:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(59, ng0);

LAB9:    xsi_set_current_line(60, ng0);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 1800);
    xsi_vlogvar_generic_wait_assign_value(t11, t10, 1, 0, 0, 18, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1892);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 18, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(64, ng0);

LAB13:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1800);
    t10 = (t4 + 32U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng9)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t11, 18, t12, 32);
    t14 = (t0 + 1800);
    xsi_vlogvar_generic_wait_assign_value(t14, t13, 2, 0, 0, 18, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1892);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 18, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(69, ng0);

LAB17:    xsi_set_current_line(70, ng0);
    t4 = ((char*)((ng1)));
    t10 = (t0 + 1800);
    xsi_vlogvar_generic_wait_assign_value(t10, t4, 1, 0, 0, 18, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1892);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = ((char*)((ng9)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 18, t10, 32);
    t11 = (t0 + 1892);
    xsi_vlogvar_generic_wait_assign_value(t11, t13, 2, 0, 0, 18, 0LL);
    goto LAB16;

}

static void A80_7(char *t0)
{
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 3540U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3776);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);

LAB5:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 1984);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);

LAB6:    t6 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t7 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t7 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t7 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t7 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(84, ng0);

LAB16:    xsi_set_current_line(86, ng0);
    t8 = ((char*)((ng1)));
    t9 = (t0 + 1708);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1044U);
    t3 = *((char **)t2);
    t2 = (t3 + 4U);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2076);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB19:    goto LAB15;

LAB9:    xsi_set_current_line(93, ng0);

LAB20:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1708);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1800);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = (t0 + 1396U);
    t8 = *((char **)t6);
    memset(t15, 0, 8);
    t6 = (t15 + 4U);
    t9 = (t4 + 4U);
    t16 = (t8 + 4U);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t17 = (t13 ^ t14);
    t18 = (t12 | t17);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB24;

LAB21:    if (t21 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t15) = 1;

LAB24:    t24 = (t15 + 4U);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t15);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2076);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB27:    goto LAB15;

LAB11:    xsi_set_current_line(102, ng0);

LAB28:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1708);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1044U);
    t3 = *((char **)t2);
    t2 = (t3 + 4U);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2076);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB31:    goto LAB15;

LAB13:    xsi_set_current_line(110, ng0);

LAB32:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1708);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1892);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = (t0 + 1484U);
    t8 = *((char **)t6);
    memset(t15, 0, 8);
    t6 = (t15 + 4U);
    t9 = (t4 + 4U);
    t16 = (t8 + 4U);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t16);
    t17 = (t13 ^ t14);
    t18 = (t12 | t17);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB36;

LAB33:    if (t21 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t15) = 1;

LAB36:    t24 = (t15 + 4U);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t15);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2076);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB39:    goto LAB15;

LAB17:    xsi_set_current_line(88, ng0);
    t4 = ((char*)((ng3)));
    t6 = (t0 + 2076);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 2);
    goto LAB19;

LAB23:    *((unsigned int *)t15) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(97, ng0);
    t30 = ((char*)((ng11)));
    t31 = (t0 + 2076);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 2);
    goto LAB27;

LAB29:    xsi_set_current_line(105, ng0);
    t4 = ((char*)((ng11)));
    t6 = (t0 + 2076);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 2);
    goto LAB31;

LAB35:    *((unsigned int *)t15) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(113, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 2076);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 2);
    goto LAB39;

}


extern void work_m_00000000004073391777_3991000243_init()
{
	static char *pe[] = {(void *)A29_0,(void *)A37_1,(void *)C45_2,(void *)C46_3,(void *)C48_4,(void *)C52_5,(void *)A56_6,(void *)A80_7};
	xsi_register_didat("work_m_00000000004073391777_3991000243", "isim/_tmp/work/m_00000000004073391777_3991000243.didat");
	xsi_register_executes(pe);
}
