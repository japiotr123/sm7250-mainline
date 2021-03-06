/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright 2016-2020 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 */

/************************************
 ** This is an auto-generated file **
 **       DO NOT EDIT BELOW        **
 ************************************/

#ifndef ASIC_REG_ARC_FARM_KDMA_CTX_AXUSER_MASKS_H_
#define ASIC_REG_ARC_FARM_KDMA_CTX_AXUSER_MASKS_H_

/*
 *****************************************
 *   ARC_FARM_KDMA_CTX_AXUSER
 *   (Prototype: AXUSER)
 *****************************************
 */

/* ARC_FARM_KDMA_CTX_AXUSER_HB_ASID */
#define ARC_FARM_KDMA_CTX_AXUSER_HB_ASID_WR_SHIFT 0
#define ARC_FARM_KDMA_CTX_AXUSER_HB_ASID_WR_MASK 0x3FF
#define ARC_FARM_KDMA_CTX_AXUSER_HB_ASID_RD_SHIFT 16
#define ARC_FARM_KDMA_CTX_AXUSER_HB_ASID_RD_MASK 0x3FF0000

/* ARC_FARM_KDMA_CTX_AXUSER_HB_MMU_BP */
#define ARC_FARM_KDMA_CTX_AXUSER_HB_MMU_BP_WR_SHIFT 0
#define ARC_FARM_KDMA_CTX_AXUSER_HB_MMU_BP_WR_MASK 0x1
#define ARC_FARM_KDMA_CTX_AXUSER_HB_MMU_BP_RD_SHIFT 4
#define ARC_FARM_KDMA_CTX_AXUSER_HB_MMU_BP_RD_MASK 0x10

/* ARC_FARM_KDMA_CTX_AXUSER_HB_STRONG_ORDER */
#define ARC_FARM_KDMA_CTX_AXUSER_HB_STRONG_ORDER_WR_SHIFT 0
#define ARC_FARM_KDMA_CTX_AXUSER_HB_STRONG_ORDER_WR_MASK 0x1
#define ARC_FARM_KDMA_CTX_AXUSER_HB_STRONG_ORDER_RD_SHIFT 4
#define ARC_FARM_KDMA_CTX_AXUSER_HB_STRONG_ORDER_RD_MASK 0x10

/* ARC_FARM_KDMA_CTX_AXUSER_HB_NO_SNOOP */
#define ARC_FARM_KDMA_CTX_AXUSER_HB_NO_SNOOP_WR_SHIFT 0
#define ARC_FARM_KDMA_CTX_AXUSER_HB_NO_SNOOP_WR_MASK 0x1
#define ARC_FARM_KDMA_CTX_AXUSER_HB_NO_SNOOP_RD_SHIFT 4
#define ARC_FARM_KDMA_CTX_AXUSER_HB_NO_SNOOP_RD_MASK 0x10

/* ARC_FARM_KDMA_CTX_AXUSER_HB_WR_REDUCTION */
#define ARC_FARM_KDMA_CTX_AXUSER_HB_WR_REDUCTION_IND_SHIFT 0
#define ARC_FARM_KDMA_CTX_AXUSER_HB_WR_REDUCTION_IND_MASK 0x1
#define ARC_FARM_KDMA_CTX_AXUSER_HB_WR_REDUCTION_DTYPE_SHIFT 4
#define ARC_FARM_KDMA_CTX_AXUSER_HB_WR_REDUCTION_DTYPE_MASK 0xF0
#define ARC_FARM_KDMA_CTX_AXUSER_HB_WR_REDUCTION_OP_SHIFT 8
#define ARC_FARM_KDMA_CTX_AXUSER_HB_WR_REDUCTION_OP_MASK 0x300
#define ARC_FARM_KDMA_CTX_AXUSER_HB_WR_REDUCTION_ROUND_SHIFT 12
#define ARC_FARM_KDMA_CTX_AXUSER_HB_WR_REDUCTION_ROUND_MASK 0x3000
#define ARC_FARM_KDMA_CTX_AXUSER_HB_WR_REDUCTION_MAX_SHIFT 16
#define ARC_FARM_KDMA_CTX_AXUSER_HB_WR_REDUCTION_MAX_MASK 0x10000

/* ARC_FARM_KDMA_CTX_AXUSER_HB_RD_ATOMIC */
#define ARC_FARM_KDMA_CTX_AXUSER_HB_RD_ATOMIC_IND_SHIFT 0
#define ARC_FARM_KDMA_CTX_AXUSER_HB_RD_ATOMIC_IND_MASK 0x3
#define ARC_FARM_KDMA_CTX_AXUSER_HB_RD_ATOMIC_ADDITION_SIZE_SHIFT 4
#define ARC_FARM_KDMA_CTX_AXUSER_HB_RD_ATOMIC_ADDITION_SIZE_MASK 0xFF0
#define ARC_FARM_KDMA_CTX_AXUSER_HB_RD_ATOMIC_MSB_MASK_SHIFT 12
#define ARC_FARM_KDMA_CTX_AXUSER_HB_RD_ATOMIC_MSB_MASK_MASK 0x1F000

/* ARC_FARM_KDMA_CTX_AXUSER_HB_QOS */
#define ARC_FARM_KDMA_CTX_AXUSER_HB_QOS_WR_SHIFT 0
#define ARC_FARM_KDMA_CTX_AXUSER_HB_QOS_WR_MASK 0xF
#define ARC_FARM_KDMA_CTX_AXUSER_HB_QOS_RD_SHIFT 4
#define ARC_FARM_KDMA_CTX_AXUSER_HB_QOS_RD_MASK 0x70

/* ARC_FARM_KDMA_CTX_AXUSER_HB_RSVD */
#define ARC_FARM_KDMA_CTX_AXUSER_HB_RSVD_WR_BIT_27_SHIFT 0
#define ARC_FARM_KDMA_CTX_AXUSER_HB_RSVD_WR_BIT_27_MASK 0x1
#define ARC_FARM_KDMA_CTX_AXUSER_HB_RSVD_WR_BIT_28_SHIFT 1
#define ARC_FARM_KDMA_CTX_AXUSER_HB_RSVD_WR_BIT_28_MASK 0x2
#define ARC_FARM_KDMA_CTX_AXUSER_HB_RSVD_WR_BIT_30_SHIFT 2
#define ARC_FARM_KDMA_CTX_AXUSER_HB_RSVD_WR_BIT_30_MASK 0x4
#define ARC_FARM_KDMA_CTX_AXUSER_HB_RSVD_WR_BIT_31_SHIFT 3
#define ARC_FARM_KDMA_CTX_AXUSER_HB_RSVD_WR_BIT_31_MASK 0x8

/* ARC_FARM_KDMA_CTX_AXUSER_HB_EMEM_CPAGE */
#define ARC_FARM_KDMA_CTX_AXUSER_HB_EMEM_CPAGE_WR_SHIFT 0
#define ARC_FARM_KDMA_CTX_AXUSER_HB_EMEM_CPAGE_WR_MASK 0x1
#define ARC_FARM_KDMA_CTX_AXUSER_HB_EMEM_CPAGE_RD_SHIFT 4
#define ARC_FARM_KDMA_CTX_AXUSER_HB_EMEM_CPAGE_RD_MASK 0x10

/* ARC_FARM_KDMA_CTX_AXUSER_HB_CORE */
#define ARC_FARM_KDMA_CTX_AXUSER_HB_CORE_WR_SHIFT 0
#define ARC_FARM_KDMA_CTX_AXUSER_HB_CORE_WR_MASK 0x1
#define ARC_FARM_KDMA_CTX_AXUSER_HB_CORE_RD_SHIFT 4
#define ARC_FARM_KDMA_CTX_AXUSER_HB_CORE_RD_MASK 0x10

/* ARC_FARM_KDMA_CTX_AXUSER_E2E_COORD */
#define ARC_FARM_KDMA_CTX_AXUSER_E2E_COORD_X_SHIFT 0
#define ARC_FARM_KDMA_CTX_AXUSER_E2E_COORD_X_MASK 0x1F
#define ARC_FARM_KDMA_CTX_AXUSER_E2E_COORD_Y_SHIFT 8
#define ARC_FARM_KDMA_CTX_AXUSER_E2E_COORD_Y_MASK 0xF00

/* ARC_FARM_KDMA_CTX_AXUSER_HB_WR_OVRD_LO */
#define ARC_FARM_KDMA_CTX_AXUSER_HB_WR_OVRD_LO_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_AXUSER_HB_WR_OVRD_LO_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_AXUSER_HB_WR_OVRD_HI */
#define ARC_FARM_KDMA_CTX_AXUSER_HB_WR_OVRD_HI_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_AXUSER_HB_WR_OVRD_HI_VAL_MASK 0x3FF

/* ARC_FARM_KDMA_CTX_AXUSER_HB_RD_OVRD_LO */
#define ARC_FARM_KDMA_CTX_AXUSER_HB_RD_OVRD_LO_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_AXUSER_HB_RD_OVRD_LO_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_AXUSER_HB_RD_OVRD_HI */
#define ARC_FARM_KDMA_CTX_AXUSER_HB_RD_OVRD_HI_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_AXUSER_HB_RD_OVRD_HI_VAL_MASK 0x3FF

/* ARC_FARM_KDMA_CTX_AXUSER_LB_COORD */
#define ARC_FARM_KDMA_CTX_AXUSER_LB_COORD_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_AXUSER_LB_COORD_VAL_MASK 0x3FF

/* ARC_FARM_KDMA_CTX_AXUSER_LB_LOCK */
#define ARC_FARM_KDMA_CTX_AXUSER_LB_LOCK_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_AXUSER_LB_LOCK_VAL_MASK 0x1

/* ARC_FARM_KDMA_CTX_AXUSER_LB_RSVD */
#define ARC_FARM_KDMA_CTX_AXUSER_LB_RSVD_BIT_21_11_SHIFT 0
#define ARC_FARM_KDMA_CTX_AXUSER_LB_RSVD_BIT_21_11_MASK 0x7FF
#define ARC_FARM_KDMA_CTX_AXUSER_LB_RSVD_BIT_22_SHIFT 12
#define ARC_FARM_KDMA_CTX_AXUSER_LB_RSVD_BIT_22_MASK 0x1000

/* ARC_FARM_KDMA_CTX_AXUSER_LB_OVRD */
#define ARC_FARM_KDMA_CTX_AXUSER_LB_OVRD_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_AXUSER_LB_OVRD_VAL_MASK 0xFFFFFFFF

#endif /* ASIC_REG_ARC_FARM_KDMA_CTX_AXUSER_MASKS_H_ */
