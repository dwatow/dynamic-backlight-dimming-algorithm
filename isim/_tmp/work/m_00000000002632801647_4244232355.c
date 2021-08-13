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
static unsigned int ng0[] = {0U, 0U};
static unsigned int ng1[] = {255U, 0U};
static unsigned int ng2[] = {1U, 0U};
static const char *ng3 = "D:/XC3S400AN/final/Sun07111128_all/WhiteAndBlack.v";
static int ng4[] = {0, 0};



static void C16_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t8[8];
    char t12[8];
    char t29[8];
    char t45[8];
    char t53[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
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
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;

LAB0:    t1 = (t0 + 1792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 740U);
    t5 = *((char **)t2);
    t2 = (t0 + 1004U);
    t7 = *((char **)t2);
    t2 = ((char*)((ng0)));
    xsi_vlogtype_concat(t6, 10, 10, 2U, t2, 2, t7, 8);
    memset(t8, 0, 8);
    t9 = (t8 + 4U);
    t10 = (t5 + 4U);
    t11 = (t6 + 4U);
    if (*((unsigned int *)t10) != 0)
        goto LAB5;

LAB4:    if (*((unsigned int *)t11) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB6;

LAB7:    memset(t12, 0, 8);
    t13 = (t12 + 4U);
    t14 = (t8 + 4U);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t8);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB12:    t20 = (t12 + 4U);
    t21 = *((unsigned int *)t12);
    t22 = (!(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB13;

LAB14:    memcpy(t53, t12, 8);

LAB15:    memset(t4, 0, 8);
    t81 = (t4 + 4U);
    t82 = (t53 + 4U);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t53);
    t86 = (t85 & t84);
    t87 = (t86 & 1U);
    if (t87 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t82) != 0)
        goto LAB29;

LAB30:    t88 = (t4 + 4U);
    t89 = *((unsigned int *)t4);
    t90 = *((unsigned int *)t88);
    t91 = (t89 || t90);
    if (t91 > 0)
        goto LAB31;

LAB32:    t93 = *((unsigned int *)t4);
    t94 = (~(t93));
    t95 = *((unsigned int *)t88);
    t96 = (t94 || t95);
    if (t96 > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t88) > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t4) > 0)
        goto LAB37;

LAB38:    memcpy(t3, t97, 8);

LAB39:    t98 = (t0 + 2152);
    t99 = (t98 + 32U);
    t100 = *((char **)t99);
    t101 = (t100 + 40U);
    t102 = *((char **)t101);
    t103 = (t102 + 4U);
    t104 = 1U;
    t105 = t104;
    t106 = (t3 + 4U);
    t107 = *((unsigned int *)t3);
    t104 = (t104 & t107);
    t108 = *((unsigned int *)t106);
    t105 = (t105 & t108);
    t109 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t109 & 4294967294U);
    t110 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t110 | t104);
    t111 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t111 & 4294967294U);
    t112 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t112 | t105);
    xsi_driver_vfirst_trans(t98, 0, 0);
    t113 = (t0 + 2100);
    *((int *)t113) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t12) = 1;
    goto LAB12;

LAB11:    *((unsigned int *)t12) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB12;

LAB13:    t25 = (t0 + 1316);
    t26 = (t25 + 32U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng1)));
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
        goto LAB19;

LAB16:    if (t42 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t29) = 1;

LAB19:    memset(t45, 0, 8);
    t46 = (t45 + 4U);
    t47 = (t29 + 4U);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t29);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t47) != 0)
        goto LAB22;

LAB23:    t54 = *((unsigned int *)t12);
    t55 = *((unsigned int *)t45);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = (t12 + 4U);
    t58 = (t45 + 4U);
    t59 = (t53 + 4U);
    t60 = *((unsigned int *)t57);
    t61 = *((unsigned int *)t58);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB15;

LAB18:    *((unsigned int *)t29) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB19;

LAB20:    *((unsigned int *)t45) = 1;
    goto LAB23;

LAB22:    *((unsigned int *)t45) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB23;

LAB24:    t65 = *((unsigned int *)t53);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t53) = (t65 | t66);
    t67 = (t12 + 4U);
    t68 = (t45 + 4U);
    t69 = *((unsigned int *)t67);
    t70 = (~(t69));
    t71 = *((unsigned int *)t12);
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
    goto LAB26;

LAB27:    *((unsigned int *)t4) = 1;
    goto LAB30;

LAB29:    *((unsigned int *)t4) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB30;

LAB31:    t92 = ((char*)((ng2)));
    goto LAB32;

LAB33:    t97 = ((char*)((ng0)));
    goto LAB34;

LAB35:    xsi_vlog_unsigned_bit_combine(t3, 1, t92, 1, t97, 1);
    goto LAB39;

LAB37:    memcpy(t3, t92, 8);
    goto LAB39;

}

static void A19_1(char *t0)
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 1920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng3);
    t2 = (t0 + 2108);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng3);

LAB5:    xsi_set_current_line(21, ng3);
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

LAB11:    xsi_set_current_line(26, ng3);

LAB14:    xsi_set_current_line(27, ng3);
    t2 = (t0 + 828U);
    t4 = *((char **)t2);
    t2 = (t4 + 4U);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(35, ng3);
    t2 = (t0 + 1316);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 1316);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 8, 0LL);

LAB17:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(22, ng3);

LAB13:    xsi_set_current_line(23, ng3);
    t18 = ((char*)((ng4)));
    t19 = (t0 + 1316);
    xsi_vlogvar_generic_wait_assign_value(t19, t18, 1, 0, 0, 8, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(28, ng3);
    t5 = (t0 + 916U);
    t6 = *((char **)t5);
    t5 = (t6 + 4U);
    t13 = *((unsigned int *)t5);
    t14 = (~(t13));
    t15 = *((unsigned int *)t6);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(31, ng3);

LAB34:    xsi_set_current_line(32, ng3);
    t2 = (t0 + 1316);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t0 + 1316);
    xsi_vlogvar_generic_wait_assign_value(t6, t5, 2, 0, 0, 8, 0LL);

LAB20:    goto LAB17;

LAB18:    xsi_set_current_line(29, ng3);
    t12 = (t0 + 1092U);
    t18 = *((char **)t12);
    memset(t20, 0, 8);
    t12 = (t20 + 4U);
    t19 = (t18 + 4U);
    t21 = *((unsigned int *)t19);
    t22 = (~(t21));
    t23 = *((unsigned int *)t18);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t19) != 0)
        goto LAB23;

LAB24:    t26 = (t20 + 4U);
    t27 = *((unsigned int *)t20);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB25;

LAB26:    t31 = *((unsigned int *)t20);
    t32 = (~(t31));
    t33 = *((unsigned int *)t26);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t26) > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t20) > 0)
        goto LAB31;

LAB32:    memcpy(t3, t35, 8);

LAB33:    t36 = (t0 + 1316);
    xsi_vlogvar_generic_wait_assign_value(t36, t3, 2, 0, 0, 8, 0LL);
    goto LAB20;

LAB21:    *((unsigned int *)t20) = 1;
    goto LAB24;

LAB23:    *((unsigned int *)t20) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB24;

LAB25:    t30 = ((char*)((ng1)));
    goto LAB26;

LAB27:    t35 = ((char*)((ng0)));
    goto LAB28;

LAB29:    xsi_vlog_unsigned_bit_combine(t3, 8, t30, 8, t35, 8);
    goto LAB33;

LAB31:    memcpy(t3, t30, 8);
    goto LAB33;

}


extern void work_m_00000000002632801647_4244232355_init()
{
	static char *pe[] = {(void *)C16_0,(void *)A19_1};
	xsi_register_didat("work_m_00000000002632801647_4244232355", "isim/_tmp/work/m_00000000002632801647_4244232355.didat");
	xsi_register_executes(pe);
}
