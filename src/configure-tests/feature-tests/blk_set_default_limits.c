// SPDX-License-Identifier: GPL-2.0-only

/*
 * Copyright (C) 2015 Datto Inc.
 */

#include "includes.h"

static inline void dummy(void){
	struct queue_limits *l = NULL;
	blk_set_default_limits(l);
}
