/*	$OpenBSD: md5.h,v 1.3 2014/11/16 17:39:09 tedu Exp $	*/

/*
 * This code implements the MD5 message-digest algorithm.
 * The algorithm is due to Ron Rivest.  This code was
 * written by Colin Plumb in 1993, no copyright is claimed.
 * This code is in the public domain; do with it what you wish.
 *
 * Equivalent code is available from RSA Data Security, Inc.
 * This code has been tested against that, and is equivalent,
 * except that you don't need to include two pages of legalese
 * with every copy.
 */

#ifndef _MD5_PLAIN_H_
#define _MD5_PLAIN_H_

#include <stdint.h>

#define	MD5_BLOCK_LENGTH		64
#define	MD5_DIGEST_LENGTH		16

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MD5Context {
	uint32_t state[4];			/* state */
	uint64_t count;			/* number of bits, mod 2^64 */
	uint8_t buffer[MD5_BLOCK_LENGTH];	/* input buffer */
} MD5_CTX;

void	 MD5_Init_plain(MD5_CTX *);
void	 MD5_Update_plain(MD5_CTX *, const void *, size_t);
		//__attribute__((__bounded__(__string__,2,3)));
void	 MD5_Final_plain(MD5_CTX *, uint8_t [MD5_DIGEST_LENGTH]);
		//__attribute__((__bounded__(__minbytes__,2,MD5_DIGEST_LENGTH)));
void	 MD5_Transform_plain(uint32_t [4], const uint8_t [MD5_BLOCK_LENGTH]);
		//__attribute__((__bounded__(__minbytes__,1,4)))
		//__attribute__((__bounded__(__minbytes__,2,MD5_BLOCK_LENGTH)));

#ifdef __cplusplus
}
#endif

#endif /* _MD5_PLAIN_H_ */
