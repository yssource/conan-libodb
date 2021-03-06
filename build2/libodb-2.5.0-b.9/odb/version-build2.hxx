// file      : odb/version-build2.hxx.in
// copyright : Copyright (c) 2005-2018 Code Synthesis Tools CC
// license   : GNU GPL v2; see accompanying LICENSE file

#ifndef LIBODB_VERSION // Note: using the version macro itself.

// For the ODB compiler (temporary).
//
#define ODB_VERSION     20459

// Note: using build2 standard versioning scheme. The numeric version format
// is AAABBBCCCDDDE where:
//
// AAA - major version number
// BBB - minor version number
// CCC - bugfix version number
// DDD - alpha / beta (DDD + 500) version number
// E   - final (0) / snapshot (1)
//
// When DDDE is not 0, 1 is subtracted from AAABBBCCC. For example:
//
// Version      AAABBBCCCDDDE
//
// 0.1.0        0000010000000
// 0.1.2        0000010010000
// 1.2.3        0010020030000
// 2.2.0-a.1    0020019990010
// 3.0.0-b.2    0029999995020
// 2.2.0-a.1.z  0020019990011
//
#define LIBODB_VERSION       20049995090ULL
#define LIBODB_VERSION_STR   "2.5.0-b.9"
#define LIBODB_VERSION_ID    "2.5.0-b.9"

#define LIBODB_VERSION_MAJOR 2
#define LIBODB_VERSION_MINOR 5
#define LIBODB_VERSION_PATCH 0

#define LIBODB_PRE_RELEASE   true

#define LIBODB_SNAPSHOT      0ULL
#define LIBODB_SNAPSHOT_ID   ""

#endif // LIBODB_VERSION
