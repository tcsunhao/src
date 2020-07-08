/*	$OpenBSD: usertc.c,v 1.2 2020/07/08 09:17:48 kettenis Exp $ */
/*
 * Copyright (c) 2020 Paul Irofti <paul@irofti.net>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include <sys/types.h>
#include <sys/timetc.h>

static inline u_int
rdtsc(void)
{
	uint32_t hi, lo;
	asm volatile("rdtsc" : "=a"(lo), "=d"(hi));
	return ((uint64_t)lo)|(((uint64_t)hi)<<32);
}

static int
tc_get_timecount(struct timekeep *tk, u_int *tc)
{
	switch (tk->tk_user) {
	case TC_TSC:
		*tc = rdtsc();
		return 0;
	}

	return -1;
}

int (*const _tc_get_timecount)(struct timekeep *, u_int *) = tc_get_timecount;
