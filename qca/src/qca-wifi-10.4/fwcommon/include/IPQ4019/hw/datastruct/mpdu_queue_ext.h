// Copyright (c) 2013 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _MPDU_QUEUE_EXT_H_
#define _MPDU_QUEUE_EXT_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0-18	struct mpdu_queue_ext_common queue_ext_common_part;
//	19-23	struct mpdu_queue_ext_retry queue_ext_full_retry_part;
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_MPDU_QUEUE_EXT 24

struct mpdu_queue_ext {
    struct            mpdu_queue_ext_common                       queue_ext_common_part;
    struct            mpdu_queue_ext_retry                       queue_ext_full_retry_part;
};

/*

struct mpdu_queue_ext_common queue_ext_common_part
			
			The common portion of the MPDU queue extension data
			structure.

struct mpdu_queue_ext_retry queue_ext_full_retry_part
			
			The full detailed retry portion of the MPDU queue
			extension data structure.
*/

#define MPDU_QUEUE_EXT_0_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_OFFSET 0x00000000
#define MPDU_QUEUE_EXT_0_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_LSB 0
#define MPDU_QUEUE_EXT_0_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_1_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_OFFSET 0x00000004
#define MPDU_QUEUE_EXT_1_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_LSB 0
#define MPDU_QUEUE_EXT_1_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_2_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_OFFSET 0x00000008
#define MPDU_QUEUE_EXT_2_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_LSB 0
#define MPDU_QUEUE_EXT_2_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_3_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_OFFSET 0x0000000c
#define MPDU_QUEUE_EXT_3_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_LSB 0
#define MPDU_QUEUE_EXT_3_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_4_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_OFFSET 0x00000010
#define MPDU_QUEUE_EXT_4_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_LSB 0
#define MPDU_QUEUE_EXT_4_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_5_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_OFFSET 0x00000014
#define MPDU_QUEUE_EXT_5_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_LSB 0
#define MPDU_QUEUE_EXT_5_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_6_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_OFFSET 0x00000018
#define MPDU_QUEUE_EXT_6_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_LSB 0
#define MPDU_QUEUE_EXT_6_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_7_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_OFFSET 0x0000001c
#define MPDU_QUEUE_EXT_7_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_LSB 0
#define MPDU_QUEUE_EXT_7_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_8_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_OFFSET 0x00000020
#define MPDU_QUEUE_EXT_8_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_LSB 0
#define MPDU_QUEUE_EXT_8_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_9_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_OFFSET 0x00000024
#define MPDU_QUEUE_EXT_9_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_LSB 0
#define MPDU_QUEUE_EXT_9_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_10_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_OFFSET 0x00000028
#define MPDU_QUEUE_EXT_10_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_LSB 0
#define MPDU_QUEUE_EXT_10_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_11_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_OFFSET 0x0000002c
#define MPDU_QUEUE_EXT_11_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_LSB 0
#define MPDU_QUEUE_EXT_11_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_12_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_OFFSET 0x00000030
#define MPDU_QUEUE_EXT_12_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_LSB 0
#define MPDU_QUEUE_EXT_12_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_13_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_OFFSET 0x00000034
#define MPDU_QUEUE_EXT_13_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_LSB 0
#define MPDU_QUEUE_EXT_13_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_14_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_OFFSET 0x00000038
#define MPDU_QUEUE_EXT_14_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_LSB 0
#define MPDU_QUEUE_EXT_14_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_15_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_OFFSET 0x0000003c
#define MPDU_QUEUE_EXT_15_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_LSB 0
#define MPDU_QUEUE_EXT_15_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_16_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_OFFSET 0x00000040
#define MPDU_QUEUE_EXT_16_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_LSB 0
#define MPDU_QUEUE_EXT_16_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_17_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_OFFSET 0x00000044
#define MPDU_QUEUE_EXT_17_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_LSB 0
#define MPDU_QUEUE_EXT_17_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_18_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_OFFSET 0x00000048
#define MPDU_QUEUE_EXT_18_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_LSB 0
#define MPDU_QUEUE_EXT_18_MPDU_QUEUE_EXT_COMMON_QUEUE_EXT_COMMON_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_19_MPDU_QUEUE_EXT_RETRY_QUEUE_EXT_FULL_RETRY_PART_OFFSET 0x0000004c
#define MPDU_QUEUE_EXT_19_MPDU_QUEUE_EXT_RETRY_QUEUE_EXT_FULL_RETRY_PART_LSB 0
#define MPDU_QUEUE_EXT_19_MPDU_QUEUE_EXT_RETRY_QUEUE_EXT_FULL_RETRY_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_20_MPDU_QUEUE_EXT_RETRY_QUEUE_EXT_FULL_RETRY_PART_OFFSET 0x00000050
#define MPDU_QUEUE_EXT_20_MPDU_QUEUE_EXT_RETRY_QUEUE_EXT_FULL_RETRY_PART_LSB 0
#define MPDU_QUEUE_EXT_20_MPDU_QUEUE_EXT_RETRY_QUEUE_EXT_FULL_RETRY_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_21_MPDU_QUEUE_EXT_RETRY_QUEUE_EXT_FULL_RETRY_PART_OFFSET 0x00000054
#define MPDU_QUEUE_EXT_21_MPDU_QUEUE_EXT_RETRY_QUEUE_EXT_FULL_RETRY_PART_LSB 0
#define MPDU_QUEUE_EXT_21_MPDU_QUEUE_EXT_RETRY_QUEUE_EXT_FULL_RETRY_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_22_MPDU_QUEUE_EXT_RETRY_QUEUE_EXT_FULL_RETRY_PART_OFFSET 0x00000058
#define MPDU_QUEUE_EXT_22_MPDU_QUEUE_EXT_RETRY_QUEUE_EXT_FULL_RETRY_PART_LSB 0
#define MPDU_QUEUE_EXT_22_MPDU_QUEUE_EXT_RETRY_QUEUE_EXT_FULL_RETRY_PART_MASK 0xffffffff
#define MPDU_QUEUE_EXT_23_MPDU_QUEUE_EXT_RETRY_QUEUE_EXT_FULL_RETRY_PART_OFFSET 0x0000005c
#define MPDU_QUEUE_EXT_23_MPDU_QUEUE_EXT_RETRY_QUEUE_EXT_FULL_RETRY_PART_LSB 0
#define MPDU_QUEUE_EXT_23_MPDU_QUEUE_EXT_RETRY_QUEUE_EXT_FULL_RETRY_PART_MASK 0xffffffff


#endif // _MPDU_QUEUE_EXT_H_
