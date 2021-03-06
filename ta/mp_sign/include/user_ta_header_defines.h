/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright 2021 NXP
 */

#ifndef USER_TA_HEADER_DEFINES_H
#define USER_TA_HEADER_DEFINES_H

#include <ta_manufacturing_protection.h>

#define TA_UUID TA_MANUFACTURING_PROTECTION_UUID

#define TA_FLAGS      (TA_FLAG_MULTI_SESSION | TA_FLAG_EXEC_DDR)
#define TA_STACK_SIZE (2 * 1024)
#define TA_DATA_SIZE  (32 * 1024)

#endif /* USER_TA_HEADER_DEFINES_H */
