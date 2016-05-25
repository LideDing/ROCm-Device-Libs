

// explicit rounding support                                ftz   round    args
extern __attribute__((const)) float  __builtin_hsail_faddf (bool, int, float, float);
extern __attribute__((const)) double __builtin_hsail_fadd  (bool, int, double, double);
extern __attribute__((const)) half   __builtin_hsail_faddh (bool, int, half, half);
extern __attribute__((const)) float  __builtin_hsail_fsubf (bool, int, float, float);
extern __attribute__((const)) double __builtin_hsail_fsub  (bool, int, double, double);
extern __attribute__((const)) half   __builtin_hsail_fsubh (bool, int, half, half);
extern __attribute__((const)) float  __builtin_hsail_fmulf (bool, int, float, float);
extern __attribute__((const)) double __builtin_hsail_fmul  (bool, int, double, double);
extern __attribute__((const)) half   __builtin_hsail_fmulh (bool, int, half, half);
extern __attribute__((const)) float  __builtin_hsail_fdivf (bool, int, float, float);
extern __attribute__((const)) double __builtin_hsail_fdiv  (bool, int, double, double);
extern __attribute__((const)) half   __builtin_hsail_fdivh (bool, int, half, half);
extern __attribute__((const)) float  __builtin_hsail_ffmaf (bool, int, float, float, float);
extern __attribute__((const)) double __builtin_hsail_ffma  (bool, int, double, double, double);
extern __attribute__((const)) half   __builtin_hsail_ffmah (bool, int, half, half, half);
extern __attribute__((const)) float  __builtin_hsail_fsqrtf(bool, int, float);
extern __attribute__((const)) double __builtin_hsail_fsqrt (bool, int, double);
extern __attribute__((const)) half   __builtin_hsail_fsqrth(bool, int, half);

extern __attribute__((const)) float __hsail_abs_f32(float);
extern __attribute__((const)) double __hsail_abs_f64(double);
extern __attribute__((const)) half __hsail_abs_f16(half);
extern __attribute__((pure)) uint __hsail_activelanecount_u32_b1(bool);
extern __attribute__((pure)) uint __hsail_activelanecount_wavewidth_u32_b1(bool);
extern __attribute__((pure)) uint __hsail_activelaneid_u32(void);
extern __attribute__((pure)) uint __hsail_activelaneshuffle_b32(uint src, uint lid, uint ival, bool useival);
extern __attribute__((pure)) ulong __hsail_activelaneshuffle_b64(ulong src, uint lid, ulong ival, bool useival);
extern __attribute__((pure)) uint __hsail_activelaneshuffle_wavewidth_b32(uint src, uint lid, uint ival, bool useival);
extern __attribute__((pure)) ulong __hsail_activelaneshuffle_wavewidth_b64(ulong src, uint lid, ulong ival, bool useival);
extern void __hsail_barrier(void);
extern __attribute__((const)) uint __hsail_bfe(uint,uint,uint);
extern __attribute__((const)) uint __hsail_bfm(uint,uint);
extern __attribute__((const)) uint __hsail_bitalign_b32(uint, uint, uint);
extern __attribute__((const)) uint __hsail_bitselect_u32(uint, uint, uint);
extern __attribute__((const)) ulong __hsail_bitselect_u64(ulong, ulong, ulong);
extern __attribute__((const)) uint __hsail_bytealign_b32(uint, uint, uint);
extern __attribute__((const)) float __hsail_ceil_f32(float);
extern __attribute__((const)) double __hsail_ceil_f64(double);
extern __attribute__((const)) half __hsail_ceil_f16(half);
extern __attribute__((const)) int __hsail_class_f32(float, int);
extern __attribute__((const)) int __hsail_class_f64(double, int);
extern __attribute__((const)) int  __hsail_class_f16(half, int);
extern __attribute__((const)) float __hsail_copysign_f32(float, float);
extern __attribute__((const)) double __hsail_copysign_f64(double, double);
extern __attribute__((const)) half __hsail_copysign_f16(half, half);
extern __attribute__((const)) uint __hsail_currentworkgroup_size(uint);
extern __attribute__((const)) int __hsail_firstbit_u32(uint);
extern __attribute__((const)) int __hsail_firstbit_u32(uint);
extern __attribute__((const)) float __hsail_floor_f32(float);
extern __attribute__((const)) double __hsail_floor_f64(double);
extern __attribute__((const)) half __hsail_floor_f16(half);
extern __attribute__((const)) float __hsail_fma_f32(float, float, float);
extern __attribute__((const)) double __hsail_fma_f64(double, double, double);
extern __attribute__((const)) float __hsail_fraction_f32(float);
extern __attribute__((const)) double __hsail_fraction_f64(double);
extern __attribute__((const)) half __hsail_fraction_f16(half);
extern __attribute__((const)) float __hsail_ftz_f32(float);
extern ulong __hsail_get_clock(void);
extern __attribute__((const)) uint __hsail_get_global_id(uint);
extern __attribute__((const)) uint __hsail_get_global_size(uint);
extern __attribute__((const)) uint __hsail_get_group_id(uint);
extern __attribute__((const)) uint __hsail_get_lane_id(void);
extern __attribute__((const)) uint __hsail_get_local_id(uint);
extern __attribute__((const)) uint __hsail_get_num_groups(uint);
extern __attribute__((const)) uint __hsail_get_work_dim(void);
extern __attribute__((const)) int __hsail_ibfe(int,uint,uint);
extern __attribute__((const)) int __hsail_lastbit_u32(uint);
extern __attribute__((const)) uint __hsail_ld_kernarg_u32(uint);
extern __attribute__((const)) ulong __hsail_ld_kernarg_u64(uint);
extern __attribute__((const)) uint __hsail_lerp_u8x4(uint,uint,uint);
extern __attribute__((const)) int __hsail_mad24_s32(int, int, int);
extern __attribute__((const)) uint __hsail_mad24_u32(uint, uint, uint);
extern __attribute__((const)) uint __hsail_mad_u32(uint, uint, uint);
extern __attribute__((const)) float __hsail_max_f32(float, float);
extern __attribute__((const)) double __hsail_max_f64(double, double);
extern __attribute__((const)) half __hsail_max_f16(half, half);
extern __attribute__((const)) int __hsail_max_s32(int, int);
extern __attribute__((const)) long __hsail_max_s64(long, long);
extern __attribute__((const)) uint __hsail_max_u32(uint, uint);
extern __attribute__((const)) ulong __hsail_max_u64(ulong, ulong);
extern void __hsail_memfence(uint mo, uint ms);
extern __attribute__((const)) float __hsail_min_f32(float, float);
extern __attribute__((const)) double __hsail_min_f64(double, double);
extern __attribute__((const)) half __hsail_min_f16(half, half);
extern __attribute__((const)) int __hsail_min_s32(int, int);
extern __attribute__((const)) long __hsail_min_s64(long, long);
extern __attribute__((const)) uint __hsail_min_u32(uint, int);
extern __attribute__((const)) ulong __hsail_min_u64(ulong, ulong);
extern __attribute__((const)) ulong __hsail_mqsad(ulong,uint,ulong);
extern __attribute__((const)) uint __hsail_msad(uint,uint,uint);
extern __attribute__((const)) int __hsail_mul24_s32(int, int);
extern __attribute__((const)) uint __hsail_mul24_u32(uint, uint);
extern __attribute__((const)) double __hsail_mul_f64(double,double);
extern __attribute__((const)) int __hsail_mulhi_s32(int, int);
extern __attribute__((const)) long __hsail_mulhi_s64(long, long);
extern __attribute__((const)) uint __hsail_mulhi_u32(uint, uint);
extern __attribute__((const)) ulong __hsail_mulhi_u64(ulong, ulong);
extern __attribute__((const)) float __hsail_ncos_f32(float);
extern __attribute__((const)) float __hsail_nexp2_f32(float);
extern __attribute__((const)) float __hsail_nfma_f32(float, float, float);
extern __attribute__((const)) half __hsail_nfma_f16(half, half, half);
extern __attribute__((const)) double __hsail_nfma_f64(double, double, double);
extern __attribute__((const)) float __hsail_nlog2_f32(float);
extern __attribute__((const)) float __hsail_nrcp_f32(float);
extern __attribute__((const)) double __hsail_nrcp_f64(double);
extern __attribute__((const)) half __hsail_nrcp_f16(half);
extern __attribute__((const)) float __hsail_nrsqrt_f32(float);
extern __attribute__((const)) double __hsail_nrsqrt_f64(double);
extern __attribute__((const)) half __hsail_nrsqrt_f16(half);
extern __attribute__((const)) float __hsail_nsin_f32(float);
extern __attribute__((const)) float __hsail_nsqrt_f32(float);
extern __attribute__((const)) double __hsail_nsqrt_f64(double);
extern __attribute__((const)) half __hsail_nsqrt_f16(half);
extern __attribute__((const)) uint __hsail_packcvt_u8x4_f32(float,float,float,float);
extern __attribute__((const)) int __hsail_popcount_u32_b32(int);
extern __attribute__((const)) ulong __hsail_qsad(ulong,uint,ulong);
extern __attribute__((const)) float __hsail_round_f32(float);
extern __attribute__((const)) double __hsail_round_f64(double);
extern __attribute__((const)) half __hsail_round_f16(half);
extern __attribute__((const)) uint __hsail_sad_u32_u8x4(uint,uint,uint);
extern __attribute__((const)) uint __hsail_sadd(uint,uint,uint);
extern __attribute__((const)) uint __hsail_sadhi_u16x2_u8x4(uint,uint,uint);
extern __attribute__((const)) uint __hsail_sadw(uint,uint,uint);
extern __attribute__((const)) double __hsail_sqrt_f64(double);
extern __attribute__((const)) float __hsail_trunc_f32(float);
extern __attribute__((const)) double __hsail_trunc_f64(double);
extern __attribute__((const)) half __hsail_trunc_f16(half);
extern __attribute__((const)) float __hsail_unpackcvt_f32_u8x4(uint,uint);
extern void __hsail_wavebarrier(void);
extern __attribute__((const)) uint __hsail_workgroup_size(uint);
extern __attribute__((const)) uint __hsail_workitemid_flat(void);
extern __attribute__((const)) uint __hsail_workitemid_flatabs(void);
