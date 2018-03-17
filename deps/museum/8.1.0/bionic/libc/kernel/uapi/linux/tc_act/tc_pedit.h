/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __LINUX_TC_PED_H
#define __LINUX_TC_PED_H
#include <museum/8.1.0/bionic/libc/linux/types.h>
#include <museum/8.1.0/bionic/libc/linux/pkt_cls.h>
#define TCA_ACT_PEDIT 7
enum {
  TCA_PEDIT_UNSPEC,
  TCA_PEDIT_TM,
  TCA_PEDIT_PARMS,
  TCA_PEDIT_PAD,
  __TCA_PEDIT_MAX
};
#define TCA_PEDIT_MAX (__TCA_PEDIT_MAX - 1)
struct tc_pedit_key {
  __u32 mask;
  __u32 val;
  __u32 off;
  __u32 at;
  __u32 offmask;
  __u32 shift;
};
struct tc_pedit_sel {
  tc_gen;
  unsigned char nkeys;
  unsigned char flags;
  struct tc_pedit_key keys[0];
};
#define tc_pedit tc_pedit_sel
#endif