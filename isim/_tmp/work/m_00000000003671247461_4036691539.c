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
static const char *ng0 = "D:/XC3S400AN/final/Sun07111128_all/InOutBuff.v";
static int ng1[] = {0, 0};
static int ng2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};



static void A16_0(char *t0)
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

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 2700);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(18, ng0);
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

LAB7:    xsi_set_current_line(29, ng0);

LAB10:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 740U);
    t3 = *((char **)t2);
    t2 = (t0 + 1492);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 24, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 828U);
    t3 = *((char **)t2);
    t2 = (t0 + 1584);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 192, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 916U);
    t3 = *((char **)t2);
    t2 = (t0 + 1676);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 4, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1004U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1092U);
    t3 = *((char **)t2);
    t2 = (t0 + 1860);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1180U);
    t3 = *((char **)t2);
    t2 = (t0 + 1952);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1180U);
    t3 = *((char **)t2);
    t2 = (t0 + 1952);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 1, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1268U);
    t3 = *((char **)t2);
    t2 = (t0 + 2044);
    xsi_vlogvar_generic_wait_assign_value(t2, t3, 2, 0, 0, 7, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(19, ng0);

LAB9:    xsi_set_current_line(20, ng0);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 1492);
    xsi_vlogvar_generic_wait_assign_value(t11, t10, 1, 0, 0, 24, 0LL);
    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1584);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 192, 0LL);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1676);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 4, 0LL);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1860);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1952);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 1, 0LL);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2044);
    xsi_vlogvar_generic_wait_assign_value(t3, t2, 1, 0, 0, 7, 0LL);
    goto LAB8;

}


extern void work_m_00000000003671247461_4036691539_init()
{
	static char *pe[] = {(void *)A16_0};
	xsi_register_didat("work_m_00000000003671247461_4036691539", "isim/_tmp/work/m_00000000003671247461_4036691539.didat");
	xsi_register_executes(pe);
}
