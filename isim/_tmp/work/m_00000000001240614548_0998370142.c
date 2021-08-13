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
static const char *ng0 = "D:/XC3S400AN/final/Sun07111128_all/V_count.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {36, 0};
static int ng4[] = {71, 0};



static void A12_0(char *t0)
{
    char t12[8];
    char t13[8];
    char t17[8];
    char t29[8];
    char t45[8];
    char t53[8];
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
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;

LAB0:    t1 = (t0 + 1444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 1624);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);

LAB5:    xsi_set_current_line(14, ng0);
    t3 = (t0 + 652U);
    t4 = *((char **)t3);
    t3 = (t4 + 4U);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(20, ng0);

LAB10:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 876);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = ((char*)((ng2)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t4, 12, t10, 32);
    t11 = (t0 + 876);
    xsi_vlogvar_generic_wait_assign_value(t11, t12, 2, 0, 0, 12, 0LL);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 876);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = ((char*)((ng3)));
    t11 = ((char*)((ng2)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t10, 32, t11, 32);
    memset(t13, 0, 8);
    t14 = (t13 + 4U);
    t15 = (t4 + 4U);
    t16 = (t12 + 4U);
    if (*((unsigned int *)t15) != 0)
        goto LAB12;

LAB11:    if (*((unsigned int *)t16) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t4) < *((unsigned int *)t12))
        goto LAB13;

LAB14:    memset(t17, 0, 8);
    t18 = (t17 + 4U);
    t19 = (t13 + 4U);
    t5 = *((unsigned int *)t19);
    t6 = (~(t5));
    t7 = *((unsigned int *)t13);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t19) != 0)
        goto LAB18;

LAB19:    t20 = (t17 + 4U);
    t21 = *((unsigned int *)t17);
    t22 = (!(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB20;

LAB21:    memcpy(t53, t17, 8);

LAB22:    t81 = (t53 + 4U);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t53);
    t85 = (t84 & t83);
    t86 = (t85 != 0);
    if (t86 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 968);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t10 = ((char*)((ng2)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t4, 7, t10, 32);
    t11 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t11, t12, 2, 0, 0, 7, 0LL);

LAB36:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(15, ng0);

LAB9:    xsi_set_current_line(16, ng0);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 876);
    xsi_vlogvar_generic_wait_assign_value(t11, t10, 1, 0, 0, 12, 0LL);
    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 7, 0LL);
    goto LAB8;

LAB12:    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB16:    *((unsigned int *)t17) = 1;
    goto LAB19;

LAB18:    *((unsigned int *)t17) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB19;

LAB20:    t25 = (t0 + 968);
    t26 = (t25 + 32U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng4)));
    memset(t29, 0, 8);
    t30 = (t29 + 4U);
    t31 = (t27 + 4U);
    t32 = (t28 + 4U);
    t33 = *((unsigned int *)t27);
    t34 = *((unsigned int *)t28);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB26;

LAB23:    if (t42 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t29) = 1;

LAB26:    memset(t45, 0, 8);
    t46 = (t45 + 4U);
    t47 = (t29 + 4U);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t29);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t47) != 0)
        goto LAB29;

LAB30:    t54 = *((unsigned int *)t17);
    t55 = *((unsigned int *)t45);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = (t17 + 4U);
    t58 = (t45 + 4U);
    t59 = (t53 + 4U);
    t60 = *((unsigned int *)t57);
    t61 = *((unsigned int *)t58);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB22;

LAB25:    *((unsigned int *)t29) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t45) = 1;
    goto LAB30;

LAB29:    *((unsigned int *)t45) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB30;

LAB31:    t65 = *((unsigned int *)t53);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t53) = (t65 | t66);
    t67 = (t17 + 4U);
    t68 = (t45 + 4U);
    t69 = *((unsigned int *)t67);
    t70 = (~(t69));
    t71 = *((unsigned int *)t17);
    t72 = (t71 & t70);
    t73 = *((unsigned int *)t68);
    t74 = (~(t73));
    t75 = *((unsigned int *)t45);
    t76 = (t75 & t74);
    t77 = (~(t72));
    t78 = (~(t76));
    t79 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t79 & t77);
    t80 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t80 & t78);
    goto LAB33;

LAB34:    xsi_set_current_line(24, ng0);
    t87 = ((char*)((ng1)));
    t88 = (t0 + 968);
    xsi_vlogvar_generic_wait_assign_value(t88, t87, 1, 0, 0, 7, 0LL);
    goto LAB36;

}


extern void work_m_00000000001240614548_0998370142_init()
{
	static char *pe[] = {(void *)A12_0};
	xsi_register_didat("work_m_00000000001240614548_0998370142", "isim/_tmp/work/m_00000000001240614548_0998370142.didat");
	xsi_register_executes(pe);
}
