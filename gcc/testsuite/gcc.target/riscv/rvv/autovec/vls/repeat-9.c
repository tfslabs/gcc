/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh_zvl4096b -mabi=lp64d -O3 -mrvv-max-lmul=m8" } */

#include "def.h"

DEF_REPEAT (v4sf, float, 4, var0, var1, var0, var1)
DEF_REPEAT (v8sf, float, 8, var0, var1, var0, var1, var0, var1, var0, var1)
DEF_REPEAT (v16sf, float, 16, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1)
DEF_REPEAT (v32sf, float, 32, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
	    var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1)
DEF_REPEAT (v64sf, float, 64, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
	    var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
	    var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
	    var1)
DEF_REPEAT (v128sf, float, 128, var0, var1, var0, var1, var0, var1, var0,
	    var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
	    var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
	    var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
	    var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
	    var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
	    var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
	    var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1)
DEF_REPEAT (
  v256sf, float, 256, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1)
DEF_REPEAT (
  v512sf, float, 512, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1)
DEF_REPEAT (
  v1024sf, float, 1024, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1,
  var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0, var1, var0,
  var1)

/* { dg-final { scan-assembler-times {vmv\.v\.x} 9 } } */
/* { dg-final { scan-assembler-not {vfslide1down\.vf} } } */