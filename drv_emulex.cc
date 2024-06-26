/*
 * Copyright (C) Internet Systems Consortium, Inc. ("ISC")
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * See the COPYRIGHT file distributed with this work for additional
 * information regarding copyright ownership.
 */

#include "parser.h"

static RegexParser emulex_be2net (
	{ "be2net" },
	RegexParser::total_nomatch(),
	{ "^(rx|tx)q(\\d+): \\1_(bytes|pkts)$", { 1, 3, 2 } }
);
