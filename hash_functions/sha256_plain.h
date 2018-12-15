/* Sha256.h -- SHA-256 Hash
2013-01-18 : Igor Pavlov : Public domain */

#ifndef __CRYPTO_SHA256_H
#define __CRYPTO_SHA256_H

#include "7zTypes.h"

EXTERN_C_BEGIN

#define SHA256_DIGEST_LENGTH 32

typedef struct
{
  UInt32 state[8];
  UInt64 count;
  Byte buffer[64];
} SHA256_CTX;

void SHA256_Init_plain(SHA256_CTX *p);
void SHA256_Update_plain(SHA256_CTX *p, const void *data, size_t size);
void SHA256_Final_plain(SHA256_CTX *p, Byte *digest);

EXTERN_C_END

#endif
