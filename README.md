A few implementations of hash functions written in C, C++ or Assembly that are optimized, dependency free, and/or have very permissive licenses.

- md5_plain.c and md5_plain.h were pulled in from OpenBSD ([md5.c](https://github.com/openbsd/src/blob/2f7c17dc487c24a3b8b19d81470c8a5cbc302ce6/sys/crypto/md5.c), [md5.h](https://github.com/openbsd/src/blob/de2d0d0b4cbe6369522bc554bb84ec764c7eb996/sys/crypto/md5.h)). Public domain from Colin Plumb and other contributors.
- sha256_plain.c, sha256_plain.h, 7zTypes.h, CpuArch.c, CpuArch.h, Precomp.h, RotateDefs.h were pulled in from 7zip/LZMA 18.05. Public domain from Igor Pavlov with some based on public domain code from Wei Dai's Crypto++ library. Yes, I brought in many files for this SHA256 implementation.
