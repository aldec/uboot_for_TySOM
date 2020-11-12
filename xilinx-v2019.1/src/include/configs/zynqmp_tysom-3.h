/*
 * (C) Copyright 2016 Aldec, Inc.
 *
 * Configuration settings for the Aldec TySOM-3-ZU7 boards
 * See xilinx_zynqmp.h for ZynqMP common configs
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_ZYNQMP_TYSOM_3_H
#define __CONFIG_ZYNQMP_TYSOM_3_H

#define CONFIG_SYS_CLK_FREQ 50000000

#define CONFIG_ZYNQ_SDHCI0
#define CONFIG_ZYNQ_SDHCI1

#include <configs/xilinx_zynqmp.h>

#endif /* __CONFIG_ZYNQMP_TYSOM_3_H */
