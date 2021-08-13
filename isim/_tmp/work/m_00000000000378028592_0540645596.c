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
static const char *ng0 = "D:/XC3S400AN/final/Sun07111128_all/GiveSingalok.v";
static unsigned int ng1[] = {65793U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {2199, 0};
static int ng4[] = {1124, 0};
static int ng5[] = {0, 0};
static int ng6[] = {1, 0};



static void A53_0(char *t0)
{
    char t15[8];
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
    char *t13;
    char *t14;
    char *t16;

LAB0:    t1 = (t0 + 3776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4084);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 2156U);
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

LAB10:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t0 + 2380);
    xsi_vlogvar_generic_wait_assign_value(t10, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2932);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t0 + 2472);
    xsi_vlogvar_generic_wait_assign_value(t10, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t0 + 2564);
    xsi_vlogvar_generic_wait_assign_value(t10, t4, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t4 + 4U);
    t5 = *((unsigned int *)t10);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(74, ng0);

LAB15:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3116);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t0 + 3116);
    xsi_vlogvar_generic_wait_assign_value(t10, t4, 2, 0, 0, 24, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2656);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 2, 0, 0, 24, 0LL);

LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(56, ng0);

LAB9:    xsi_set_current_line(57, ng0);
    t10 = (t0 + 1804U);
    t11 = *((char **)t10);
    t10 = (t0 + 2380);
    xsi_vlogvar_generic_wait_assign_value(t10, t11, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1892U);
    t3 = *((char **)t2);
    t2 = (t0 + 2472);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1980U);
    t3 = *((char **)t2);
    t2 = (t0 + 2564);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2068U);
    t3 = *((char **)t2);
    t2 = (t0 + 2656);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 24, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(69, ng0);

LAB14:    xsi_set_current_line(70, ng0);
    t11 = (t0 + 3116);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 24, t13, 24, t14, 24);
    t16 = (t0 + 3116);
    xsi_vlogvar_generic_wait_assign_value(t16, t15, 2, 0, 0, 24, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3116);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t0 + 2656);
    xsi_vlogvar_generic_wait_assign_value(t10, t4, 2, 0, 0, 24, 0LL);
    goto LAB13;

}

static void A81_1(char *t0)
{
    char t12[8];
    char t13[8];
    char t32[8];
    char t40[8];
    char t56[8];
    char t64[8];
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
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;

LAB0:    t1 = (t0 + 3904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4092);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(82, ng0);

LAB5:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 1716U);
    t4 = *((char **)t3);
    t3 = (t4 + 4U);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(95, ng0);

LAB10:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = ((char*)((ng6)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t4, 12, t10, 32);
    t11 = (t0 + 3208);
    xsi_vlogvar_generic_wait_assign_value(t11, t12, 2, 0, 0, 12, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t0 + 324);
    t11 = *((char **)t10);
    t10 = ((char*)((ng6)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_minus(t12, 32, t11, 32, t10, 32);
    memset(t13, 0, 8);
    t14 = (t13 + 4U);
    t15 = (t4 + 4U);
    t16 = (t12 + 4U);
    t5 = *((unsigned int *)t4);
    t6 = *((unsigned int *)t12);
    t7 = (t5 ^ t6);
    t8 = *((unsigned int *)t15);
    t9 = *((unsigned int *)t16);
    t17 = (t8 ^ t9);
    t18 = (t7 | t17);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB14;

LAB11:    if (t21 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB14:    t24 = (t13 + 4U);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t0 + 324);
    t11 = *((char **)t10);
    t10 = (t0 + 400);
    t14 = *((char **)t10);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t11, 32, t14, 32);
    t10 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t12, 32, t10, 32);
    memset(t32, 0, 8);
    t15 = (t32 + 4U);
    t16 = (t4 + 4U);
    t24 = (t13 + 4U);
    t5 = *((unsigned int *)t4);
    t6 = *((unsigned int *)t13);
    t7 = (t5 ^ t6);
    t8 = *((unsigned int *)t16);
    t9 = *((unsigned int *)t24);
    t17 = (t8 ^ t9);
    t18 = (t7 | t17);
    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t24);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB51;

LAB48:    if (t21 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t32) = 1;

LAB51:    t30 = (t32 + 4U);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t32);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB52;

LAB53:
LAB54:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t0 + 628);
    t11 = *((char **)t10);
    t10 = ((char*)((ng6)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_minus(t12, 32, t11, 32, t10, 32);
    memset(t13, 0, 8);
    t14 = (t13 + 4U);
    t15 = (t4 + 4U);
    t16 = (t12 + 4U);
    t5 = *((unsigned int *)t4);
    t6 = *((unsigned int *)t12);
    t7 = (t5 ^ t6);
    t8 = *((unsigned int *)t15);
    t9 = *((unsigned int *)t16);
    t17 = (t8 ^ t9);
    t18 = (t7 | t17);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB58;

LAB55:    if (t21 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t13) = 1;

LAB58:    memset(t32, 0, 8);
    t24 = (t32 + 4U);
    t30 = (t13 + 4U);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t30) != 0)
        goto LAB61;

LAB62:    t31 = (t32 + 4U);
    t34 = *((unsigned int *)t32);
    t35 = *((unsigned int *)t31);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB63;

LAB64:    memcpy(t64, t32, 8);

LAB65:    t96 = (t64 + 4U);
    t97 = *((unsigned int *)t96);
    t98 = (~(t97));
    t99 = *((unsigned int *)t64);
    t100 = (t99 & t98);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB77;

LAB78:
LAB79:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t0 + 704);
    t11 = *((char **)t10);
    t10 = ((char*)((ng6)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_minus(t12, 32, t11, 32, t10, 32);
    memset(t13, 0, 8);
    t14 = (t13 + 4U);
    t15 = (t4 + 4U);
    t16 = (t12 + 4U);
    t5 = *((unsigned int *)t4);
    t6 = *((unsigned int *)t12);
    t7 = (t5 ^ t6);
    t8 = *((unsigned int *)t15);
    t9 = *((unsigned int *)t16);
    t17 = (t8 ^ t9);
    t18 = (t7 | t17);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB83;

LAB80:    if (t21 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t13) = 1;

LAB83:    t24 = (t13 + 4U);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB84;

LAB85:
LAB86:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(84, ng0);

LAB9:    xsi_set_current_line(85, ng0);
    t10 = ((char*)((ng3)));
    t11 = (t0 + 3208);
    xsi_vlogvar_generic_wait_assign_value(t11, t10, 1, 0, 0, 12, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3300);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 11, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2748);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2840);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2932);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3024);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 1, 0LL);
    goto LAB8;

LAB13:    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(100, ng0);

LAB18:    xsi_set_current_line(101, ng0);
    t30 = ((char*)((ng5)));
    t31 = (t0 + 2932);
    xsi_vlogvar_generic_wait_assign_value(t31, t30, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3300);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = ((char*)((ng6)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t4, 11, t10, 32);
    t11 = (t0 + 3300);
    xsi_vlogvar_generic_wait_assign_value(t11, t12, 2, 0, 0, 11, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3300);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t0 + 856);
    t11 = *((char **)t10);
    t10 = ((char*)((ng6)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_minus(t12, 32, t11, 32, t10, 32);
    memset(t13, 0, 8);
    t14 = (t13 + 4U);
    t15 = (t4 + 4U);
    t16 = (t12 + 4U);
    t5 = *((unsigned int *)t4);
    t6 = *((unsigned int *)t12);
    t7 = (t5 ^ t6);
    t8 = *((unsigned int *)t15);
    t9 = *((unsigned int *)t16);
    t17 = (t8 ^ t9);
    t18 = (t7 | t17);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB22;

LAB19:    if (t21 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB22:    t24 = (t13 + 4U);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3300);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t0 + 856);
    t11 = *((char **)t10);
    t10 = (t0 + 932);
    t14 = *((char **)t10);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t11, 32, t14, 32);
    t10 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t12, 32, t10, 32);
    memset(t32, 0, 8);
    t15 = (t32 + 4U);
    t16 = (t4 + 4U);
    t24 = (t13 + 4U);
    t5 = *((unsigned int *)t4);
    t6 = *((unsigned int *)t13);
    t7 = (t5 ^ t6);
    t8 = *((unsigned int *)t16);
    t9 = *((unsigned int *)t24);
    t17 = (t8 ^ t9);
    t18 = (t7 | t17);
    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t24);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB29;

LAB26:    if (t21 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t32) = 1;

LAB29:    t30 = (t32 + 4U);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t32);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB30;

LAB31:
LAB32:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3300);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t0 + 1160);
    t11 = *((char **)t10);
    t10 = ((char*)((ng6)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_minus(t12, 32, t11, 32, t10, 32);
    memset(t13, 0, 8);
    t14 = (t13 + 4U);
    t15 = (t4 + 4U);
    t16 = (t12 + 4U);
    t5 = *((unsigned int *)t4);
    t6 = *((unsigned int *)t12);
    t7 = (t5 ^ t6);
    t8 = *((unsigned int *)t15);
    t9 = *((unsigned int *)t16);
    t17 = (t8 ^ t9);
    t18 = (t7 | t17);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB36;

LAB33:    if (t21 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t13) = 1;

LAB36:    t24 = (t13 + 4U);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3300);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = (t0 + 1236);
    t11 = *((char **)t10);
    t10 = ((char*)((ng6)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_minus(t12, 32, t11, 32, t10, 32);
    memset(t13, 0, 8);
    t14 = (t13 + 4U);
    t15 = (t4 + 4U);
    t16 = (t12 + 4U);
    t5 = *((unsigned int *)t4);
    t6 = *((unsigned int *)t12);
    t7 = (t5 ^ t6);
    t8 = *((unsigned int *)t15);
    t9 = *((unsigned int *)t16);
    t17 = (t8 ^ t9);
    t18 = (t7 | t17);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB43;

LAB40:    if (t21 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t13) = 1;

LAB43:    t24 = (t13 + 4U);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t13);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB44;

LAB45:
LAB46:    goto LAB17;

LAB21:    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(106, ng0);
    t30 = ((char*)((ng6)));
    t31 = (t0 + 3024);
    xsi_vlogvar_generic_wait_assign_value(t31, t30, 1, 0, 0, 1, 0LL);
    goto LAB25;

LAB28:    *((unsigned int *)t32) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(109, ng0);
    t31 = ((char*)((ng5)));
    t33 = (t0 + 3024);
    xsi_vlogvar_generic_wait_assign_value(t33, t31, 1, 0, 0, 1, 0LL);
    goto LAB32;

LAB35:    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(112, ng0);
    t30 = ((char*)((ng6)));
    t31 = (t0 + 2748);
    xsi_vlogvar_generic_wait_assign_value(t31, t30, 1, 0, 0, 1, 0LL);
    goto LAB39;

LAB42:    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(115, ng0);

LAB47:    xsi_set_current_line(116, ng0);
    t30 = ((char*)((ng5)));
    t31 = (t0 + 3300);
    xsi_vlogvar_generic_wait_assign_value(t31, t30, 1, 0, 0, 11, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2748);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 1, 0LL);
    goto LAB46;

LAB50:    *((unsigned int *)t32) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(123, ng0);
    t31 = ((char*)((ng6)));
    t33 = (t0 + 2932);
    xsi_vlogvar_generic_wait_assign_value(t33, t31, 1, 0, 0, 1, 0LL);
    goto LAB54;

LAB57:    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t32) = 1;
    goto LAB62;

LAB61:    *((unsigned int *)t32) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB62;

LAB63:    t33 = (t0 + 2748);
    t37 = (t33 + 32U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng6)));
    memset(t40, 0, 8);
    t41 = (t40 + 4U);
    t42 = (t38 + 4U);
    t43 = (t39 + 4U);
    t44 = *((unsigned int *)t38);
    t45 = *((unsigned int *)t39);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t42);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB69;

LAB66:    if (t53 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t40) = 1;

LAB69:    memset(t56, 0, 8);
    t57 = (t56 + 4U);
    t58 = (t40 + 4U);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t40);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t58) != 0)
        goto LAB72;

LAB73:    t65 = *((unsigned int *)t32);
    t66 = *((unsigned int *)t56);
    t67 = (t65 & t66);
    *((unsigned int *)t64) = t67;
    t68 = (t32 + 4U);
    t69 = (t56 + 4U);
    t70 = (t64 + 4U);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB74;

LAB75:
LAB76:    goto LAB65;

LAB68:    *((unsigned int *)t40) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB69;

LAB70:    *((unsigned int *)t56) = 1;
    goto LAB73;

LAB72:    *((unsigned int *)t56) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB73;

LAB74:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t76 | t77);
    t78 = (t32 + 4U);
    t79 = (t56 + 4U);
    t80 = *((unsigned int *)t32);
    t81 = (~(t80));
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t56);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (~(t86));
    t88 = (t81 & t83);
    t89 = (t85 & t87);
    t90 = (~(t88));
    t91 = (~(t89));
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    t93 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t93 & t91);
    t94 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t94 & t90);
    t95 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t95 & t91);
    goto LAB76;

LAB77:    xsi_set_current_line(126, ng0);
    t102 = ((char*)((ng6)));
    t103 = (t0 + 2840);
    xsi_vlogvar_generic_wait_assign_value(t103, t102, 1, 0, 0, 1, 0LL);
    goto LAB79;

LAB82:    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB83;

LAB84:    xsi_set_current_line(129, ng0);

LAB87:    xsi_set_current_line(130, ng0);
    t30 = ((char*)((ng5)));
    t31 = (t0 + 3208);
    xsi_vlogvar_generic_wait_assign_value(t31, t30, 1, 0, 0, 12, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2840);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 1, 0LL);
    goto LAB86;

}


extern void work_m_00000000000378028592_0540645596_init()
{
	static char *pe[] = {(void *)A53_0,(void *)A81_1};
	xsi_register_didat("work_m_00000000000378028592_0540645596", "isim/_tmp/work/m_00000000000378028592_0540645596.didat");
	xsi_register_executes(pe);
}
