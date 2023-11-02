/* Include files */

#include "modelInterface.h"
#include "m_vHAnMVmLh1CgCfSUJQTdXF.h"
#include <string.h>
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 68,    /* lineNo */
  "FrameSynchronizer",                 /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "Propagates",                        /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\Propagates.p"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 1,   /* lineNo */
  "CustomIcon",                        /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\matlab\\system\\+matlab\\+system\\+mixin\\CustomIcon.p"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 9,   /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 25,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 27,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 32,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 104, /* lineNo */
  "FrameSynchronizer",                 /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 106, /* lineNo */
  "FrameSynchronizer",                 /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 109, /* lineNo */
  "FrameSynchronizer",                 /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 76,  /* lineNo */
  "validateattributes",                /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 137, /* lineNo */
  "FrameSynchronizer",                 /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 365, /* lineNo */
  "FrameSynchronizer",                 /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 38,  /* lineNo */
  "minOrMax",                          /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 353, /* lineNo */
  "FrameSynchronizer",                 /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 354, /* lineNo */
  "FrameSynchronizer",                 /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 29,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 1,   /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\coder\\coder\\+coder\\+internal\\matlabCodegenHandle.p"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 26,  /* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 360,   /* lineNo */
  40,                                  /* colNo */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  360,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  361,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  5,                                   /* iLast */
  309,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 309, /* lineNo */
  43,                                  /* colNo */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = { 290, /* lineNo */
  29,                                  /* colNo */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m"/* pName */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  280,                                 /* lineNo */
  17,                                  /* colNo */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m"/* pName */
};

static emlrtDCInfo c_emlrtDCI = { 280, /* lineNo */
  29,                                  /* colNo */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  28065,                               /* iLast */
  280,                                 /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  283,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  5,                                   /* iLast */
  293,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 293, /* lineNo */
  28,                                  /* colNo */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  293,                                 /* lineNo */
  57,                                  /* colNo */
  "",                                  /* aName */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 342, /* lineNo */
  39,                                  /* colNo */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 1,   /* iFirst */
  5,                                   /* iLast */
  342,                                 /* lineNo */
  39,                                  /* colNo */
  "",                                  /* aName */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { 1,   /* iFirst */
  5,                                   /* iLast */
  330,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 330, /* lineNo */
  46,                                  /* colNo */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { 1,   /* iFirst */
  5,                                   /* iLast */
  332,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 332, /* lineNo */
  46,                                  /* colNo */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { 1,   /* iFirst */
  5,                                   /* iLast */
  337,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 337, /* lineNo */
  33,                                  /* colNo */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { 1,   /* iFirst */
  28065,                               /* iLast */
  339,                                 /* lineNo */
  65,                                  /* colNo */
  "",                                  /* aName */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 339, /* lineNo */
  65,                                  /* colNo */
  "FrameSynchronizer",                 /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\+internal\\+examples\\FrameSynchronizer.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRSInfo v_emlrtRSI = { 14,  /* lineNo */
  "validatefinite",                    /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance);
static void mw__internal__system__init__fcn
  (InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const emlrtStack *sp, emxArray_creal_T *u0, int32_T u1_size[2],
  int32_T u2_size[2]);
static comm_internal_examples_FrameSynchronizer
  *FrameSynchronizer_FrameSynchronizer(comm_internal_examples_FrameSynchronizer *
  obj);
static void SystemCore_setup(const emlrtStack *sp,
  comm_internal_examples_FrameSynchronizer *obj, emxArray_creal_T *varargin_1,
  int32_T varargin_2_size[1], int32_T varargin_3_size[1]);
static void mw__internal__call__reset(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const emlrtStack *sp, emxArray_creal_T *u0, real_T b_u1_data[],
  int32_T u1_size[2], real_T b_u2_data[], int32_T u2_size[2], creal_T c_y0[5613],
  boolean_T *c_y1);
static void SystemCore_step(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const emlrtStack *sp,
  comm_internal_examples_FrameSynchronizer *obj, emxArray_creal_T *varargin_1,
  real_T varargin_2_data[], int32_T varargin_2_size[1], real_T
  b_varargin_3_data[], int32_T varargin_3_size[1], creal_T varargout_1[5613],
  boolean_T *varargout_2);
static void SystemCore_systemblock_prestep(const emlrtStack *sp,
  comm_internal_examples_FrameSynchronizer *obj, emxArray_creal_T *varargin_1,
  real_T varargin_2_data[], int32_T varargin_2_size[1], real_T
  b_varargin_3_data[], int32_T varargin_3_size[1]);
static void FrameSynchronizer_validateInputsImpl(const emlrtStack *sp,
  emxArray_creal_T *varargin_1, real_T varargin_2_data[], int32_T
  varargin_2_size[1], real_T b_varargin_3_data[], int32_T varargin_3_size[1]);
static boolean_T all(real_T a_data[], int32_T a_size[1]);
static boolean_T SystemCore_detectInputSizeChange
  (comm_internal_examples_FrameSynchronizer *obj, emxArray_creal_T *varargin_1,
   int32_T varargin_2_size[1], int32_T varargin_3_size[1]);
static void FrameSynchronizer_stepImpl(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const emlrtStack *sp,
  comm_internal_examples_FrameSynchronizer *obj, emxArray_creal_T *varargin_1,
  real_T varargin_2_data[], int32_T varargin_2_size[1], real_T
  b_varargin_3_data[], int32_T varargin_3_size[1], creal_T y[5613], boolean_T
  *validFrm);
static void maximum(real_T x_data[], int32_T x_size[1], real_T *ex, int32_T *idx);
static void FrameSynchronizer_stepBitInput(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const emlrtStack *sp,
  comm_internal_examples_FrameSynchronizer *obj, emxArray_creal_T *x, real_T
  idx_data[], int32_T idx_size[1], creal_T y[5613], boolean_T *validFrm);
static void FrameSynchronizer_setBuffer(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const emlrtStack *sp,
  comm_internal_examples_FrameSynchronizer *obj, emxArray_creal_T *x, real_T
  preambleEndIdx_data[], int32_T preambleEndIdx_size[1]);
static void b_mod(real_T x_data[], int32_T x_size[2], real_T r_data[], int32_T
                  r_size[2]);
static real_T floatmod(real_T x);
static real_T c_mod(real_T x);
static void FrameSynchronizer_getBuffer(const emlrtStack *sp,
  comm_internal_examples_FrameSynchronizer *obj, creal_T y[5613], boolean_T
  *validFrm);
static void d_mod(real_T x[5613], real_T r[5613]);
static const mxArray *emlrt_marshallOut(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const emlrtStack *sp);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *moduleInstance);
static void emlrt_marshallIn(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const emlrtStack *sp, const mxArray *b_u);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_sysobj,
  const char_T *identifier, comm_internal_examples_FrameSynchronizer *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, comm_internal_examples_FrameSynchronizer *y);
static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u,
  const emlrtMsgIdentifier *parentId);
static int32_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u,
  const emlrtMsgIdentifier *parentId);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, cell_wrap y[3]);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, uint32_T y[8]);
static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, creal_T y[28065]);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, real_T y[5]);
static boolean_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier);
static void cgxe_mdl_set_sim_state(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const mxArray *st);
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location);
static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static int32_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, uint32_T ret[8]);
static real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[28065]);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[5]);
static void emxEnsureCapacity_creal_T(emxArray_creal_T *emxArray, int32_T
  oldNumel);
static void emxInit_creal_T(emxArray_creal_T **pEmxArray, int32_T numDimensions);
static void emxFree_creal_T(emxArray_creal_T **pEmxArray);
static void init_simulink_io_address(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emxArray_creal_T *u_tmp0;
  real_T b_u_tmp1_data[6175];
  real_T b_u_tmp2_data[6175];
  int32_T u_tmp1_size[2];
  int32_T u_tmp2_size[2];
  int32_T i;
  int32_T loop_ub;
  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  emxInit_creal_T(&u_tmp0, 2);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  i = u_tmp0->size[0] * u_tmp0->size[1];
  u_tmp0->size[0] = (*moduleInstance->u0_sizes)[0];
  u_tmp0->size[1] = (*moduleInstance->u0_sizes)[1];
  emxEnsureCapacity_creal_T(u_tmp0, i);
  loop_ub = (*moduleInstance->u0_sizes)[0] * (*moduleInstance->u0_sizes)[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    u_tmp0->data[i].re = (*moduleInstance->u0_data)[i].re;
    u_tmp0->data[i].im = (*moduleInstance->u0_data)[i].im;
  }

  u_tmp1_size[0] = (*moduleInstance->u1_sizes)[0];
  u_tmp1_size[1] = (*moduleInstance->u1_sizes)[1];
  loop_ub = (*moduleInstance->u1_sizes)[0] * (*moduleInstance->u1_sizes)[1] - 1;
  if (0 <= loop_ub) {
    memcpy(&b_u_tmp1_data[0], &(*moduleInstance->u1_data)[0], (uint32_T)
           ((loop_ub + 1) * (int32_T)sizeof(real_T)));
  }

  u_tmp2_size[0] = (*moduleInstance->u2_sizes)[0];
  u_tmp2_size[1] = (*moduleInstance->u2_sizes)[1];
  loop_ub = (*moduleInstance->u2_sizes)[0] * (*moduleInstance->u2_sizes)[1] - 1;
  if (0 <= loop_ub) {
    memcpy(&b_u_tmp2_data[0], &(*moduleInstance->u2_data)[0], (uint32_T)
           ((loop_ub + 1) * (int32_T)sizeof(real_T)));
  }

  mw__internal__call__setup(moduleInstance, &st, u_tmp0, u_tmp1_size,
    u_tmp2_size);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
  emxFree_creal_T(&u_tmp0);
}

static void cgxe_mdl_initialize(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrtLicenseCheckR2012b(&st, "communication_toolbox", 2);
  emlrtLicenseCheckR2012b(&st, "signal_blocks", 2);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emxArray_creal_T *u_tmp0;
  int32_T u_tmp1_size[2];
  int32_T u_tmp2_size[2];
  int32_T i;
  int32_T loop_ub;
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  emxInit_creal_T(&u_tmp0, 2);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  cgxertCheckCurrentInputPortDimensions(moduleInstance->S,
    "comm.internal.examples.FrameSynchronizer", "stepImpl");
  i = u_tmp0->size[0] * u_tmp0->size[1];
  u_tmp0->size[0] = (*moduleInstance->u0_sizes)[0];
  u_tmp0->size[1] = (*moduleInstance->u0_sizes)[1];
  emxEnsureCapacity_creal_T(u_tmp0, i);
  loop_ub = (*moduleInstance->u0_sizes)[0] * (*moduleInstance->u0_sizes)[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    u_tmp0->data[i].re = (*moduleInstance->u0_data)[i].re;
    u_tmp0->data[i].im = (*moduleInstance->u0_data)[i].im;
  }

  u_tmp1_size[0] = (*moduleInstance->u1_sizes)[0];
  u_tmp1_size[1] = (*moduleInstance->u1_sizes)[1];
  loop_ub = (*moduleInstance->u1_sizes)[0] * (*moduleInstance->u1_sizes)[1] - 1;
  if (0 <= loop_ub) {
    memcpy(&moduleInstance->u_tmp1_data[0], &(*moduleInstance->u1_data)[0],
           (uint32_T)((loop_ub + 1) * (int32_T)sizeof(real_T)));
  }

  u_tmp2_size[0] = (*moduleInstance->u2_sizes)[0];
  u_tmp2_size[1] = (*moduleInstance->u2_sizes)[1];
  loop_ub = (*moduleInstance->u2_sizes)[0] * (*moduleInstance->u2_sizes)[1] - 1;
  if (0 <= loop_ub) {
    memcpy(&moduleInstance->u_tmp2_data[0], &(*moduleInstance->u2_data)[0],
           (uint32_T)((loop_ub + 1) * (int32_T)sizeof(real_T)));
  }

  mw__internal__call__step(moduleInstance, &st, u_tmp0,
    moduleInstance->u_tmp1_data, u_tmp1_size, moduleInstance->u_tmp2_data,
    u_tmp2_size, *moduleInstance->b_y0, moduleInstance->b_y1);
  emxFree_creal_T(&u_tmp0);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__terminate__fcn(moduleInstance);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__system__init__fcn
  (InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *moduleInstance)
{
  moduleInstance->sysobj.matlabCodegenIsDeleted = true;
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *moduleInstance)
{
  comm_internal_examples_FrameSynchronizer *obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  st.site = NULL;
  obj = &moduleInstance->sysobj;
  if (!moduleInstance->sysobj.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.matlabCodegenIsDeleted = true;
    b_st.site = &u_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
      d_st.site = &d_emlrtRSI;
    }
  }
}

static void mw__internal__call__setup(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const emlrtStack *sp, emxArray_creal_T *u0, int32_T u1_size[2],
  int32_T u2_size[2])
{
  emlrtStack st;
  emxArray_creal_T b_u0;
  int32_T c_u0[1];
  int32_T u1[1];
  int32_T u2[1];
  int32_T u0_idx_0;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &g_emlrtRSI;
    FrameSynchronizer_FrameSynchronizer(&moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  u0_idx_0 = u0->size[0];
  u1[0] = u1_size[0];
  u2[0] = u2_size[0];
  b_u0 = *u0;
  c_u0[0] = u0_idx_0;
  b_u0.size = &c_u0[0];
  b_u0.numDimensions = 1;
  st.site = &h_emlrtRSI;
  SystemCore_setup(&st, &moduleInstance->sysobj, &b_u0, u1, u2);
}

static comm_internal_examples_FrameSynchronizer
  *FrameSynchronizer_FrameSynchronizer(comm_internal_examples_FrameSynchronizer *
  obj)
{
  comm_internal_examples_FrameSynchronizer *b_obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  b_obj = obj;
  st.site = &emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  b_obj->isInitialized = 0;
  b_obj->CacheInputSizes = false;
  c_st.site = &d_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &e_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &f_emlrtRSI;
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void SystemCore_setup(const emlrtStack *sp,
  comm_internal_examples_FrameSynchronizer *obj, emxArray_creal_T *varargin_1,
  int32_T varargin_2_size[1], int32_T varargin_3_size[1])
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T c_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T e_u[5] = { 's', 'e', 't', 'u', 'p' };

  cell_wrap varSizes[3];
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[51];
  char_T d_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  obj->isSetupComplete = false;
  if (obj->isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 51, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(sp, 5, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &d_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, c_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  obj->isInitialized = 1;
  st.site = &d_emlrtRSI;
  varSizes[0].f1[0] = (uint32_T)varargin_1->size[0];
  varSizes[0].f1[1] = 1U;
  varSizes[1].f1[0] = (uint32_T)varargin_2_size[0];
  varSizes[1].f1[1] = 1U;
  varSizes[2].f1[0] = (uint32_T)varargin_3_size[0];
  varSizes[2].f1[1] = 1U;
  for (i = 0; i < 6; i++) {
    varSizes[0].f1[i + 2] = 1U;
    varSizes[1].f1[i + 2] = 1U;
    varSizes[2].f1[i + 2] = 1U;
  }

  for (i = 0; i < 3; i++) {
    obj->inputVarSize[i] = varSizes[i];
  }

  st.site = &d_emlrtRSI;
  for (i = 0; i < 28065; i++) {
    obj->pBuffer[i].re = 0.0;
    obj->pBuffer[i].im = 0.0;
  }

  obj->pPrbLenOffset = 12.0;
  obj->isSetupComplete = true;
}

static void mw__internal__call__reset(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T e_u[5] = { 'r', 'e', 's', 'e', 't' };

  comm_internal_examples_FrameSynchronizer *obj;
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[45];
  char_T d_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &g_emlrtRSI;
    FrameSynchronizer_FrameSynchronizer(&moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &i_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized == 1) {
    b_st.site = &d_emlrtRSI;
    obj->pNBuffer = 0.0;
    obj->pBufferStartIdx = 0.0;
    obj->pBufferEndIdx = 0.0;
    for (i = 0; i < 5; i++) {
      obj->pPrbIdxBuffer[i] = 0.0;
    }

    obj->pNPrbIdxBuffer = 0.0;
    obj->pPrbIdxBufferStartIdx = 1.0;
  }
}

static void mw__internal__call__step(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const emlrtStack *sp, emxArray_creal_T *u0, real_T b_u1_data[],
  int32_T u1_size[2], real_T b_u2_data[], int32_T u2_size[2], creal_T c_y0[5613],
  boolean_T *c_y1)
{
  emlrtStack st;
  emxArray_creal_T b_u0;
  int32_T c_u0[1];
  int32_T u1[1];
  int32_T u2[1];
  int32_T u0_idx_0;
  boolean_T b;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &g_emlrtRSI;
    FrameSynchronizer_FrameSynchronizer(&moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  u0_idx_0 = u0->size[0];
  u1[0] = u1_size[0];
  u2[0] = u2_size[0];
  b_u0 = *u0;
  c_u0[0] = u0_idx_0;
  b_u0.size = &c_u0[0];
  b_u0.numDimensions = 1;
  st.site = &j_emlrtRSI;
  SystemCore_step(moduleInstance, &st, &moduleInstance->sysobj, &b_u0, b_u1_data,
                  u1, b_u2_data, u2, c_y0, &b);
  *c_y1 = b;
}

static void SystemCore_step(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const emlrtStack *sp,
  comm_internal_examples_FrameSynchronizer *obj, emxArray_creal_T *varargin_1,
  real_T varargin_2_data[], int32_T varargin_2_size[1], real_T
  b_varargin_3_data[], int32_T varargin_3_size[1], creal_T varargout_1[5613],
  boolean_T *varargout_2)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T c_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T e_u[4] = { 's', 't', 'e', 'p' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T b_u[45];
  char_T d_u[4];
  boolean_T anyInputSizeChanged;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (obj->isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 45, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 45, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      d_u[i] = e_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(sp, 4, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &d_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, c_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    st.site = &d_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    SystemCore_setup(&b_st, obj, varargin_1, varargin_2_size, varargin_3_size);
    b_st.site = &d_emlrtRSI;
    obj->pNBuffer = 0.0;
    obj->pBufferStartIdx = 0.0;
    obj->pBufferEndIdx = 0.0;
    for (i = 0; i < 5; i++) {
      obj->pPrbIdxBuffer[i] = 0.0;
    }

    obj->pNPrbIdxBuffer = 0.0;
    obj->pPrbIdxBufferStartIdx = 1.0;
  }

  st.site = &d_emlrtRSI;
  SystemCore_systemblock_prestep(&st, obj, varargin_1, varargin_2_data,
    varargin_2_size, b_varargin_3_data, varargin_3_size);
  st.site = &d_emlrtRSI;
  anyInputSizeChanged = SystemCore_detectInputSizeChange(obj, varargin_1,
    varargin_2_size, varargin_3_size);
  if (anyInputSizeChanged) {
    st.site = &d_emlrtRSI;
    FrameSynchronizer_validateInputsImpl(&st, varargin_1, varargin_2_data,
      varargin_2_size, b_varargin_3_data, varargin_3_size);
  }

  st.site = &d_emlrtRSI;
  FrameSynchronizer_stepImpl(moduleInstance, &st, obj, varargin_1,
    varargin_2_data, varargin_2_size, b_varargin_3_data, varargin_3_size,
    varargout_1, &anyInputSizeChanged);
  *varargout_2 = anyInputSizeChanged;
}

static void SystemCore_systemblock_prestep(const emlrtStack *sp,
  comm_internal_examples_FrameSynchronizer *obj, emxArray_creal_T *varargin_1,
  real_T varargin_2_data[], int32_T varargin_2_size[1], real_T
  b_varargin_3_data[], int32_T varargin_3_size[1])
{
  cell_wrap varSizes[3];
  emlrtStack st;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  if (!obj->CacheInputSizes) {
    obj->CacheInputSizes = true;
    st.site = &d_emlrtRSI;
    varSizes[0].f1[0] = (uint32_T)varargin_1->size[0];
    varSizes[0].f1[1] = 1U;
    varSizes[1].f1[0] = (uint32_T)varargin_2_size[0];
    varSizes[1].f1[1] = 1U;
    varSizes[2].f1[0] = (uint32_T)varargin_3_size[0];
    varSizes[2].f1[1] = 1U;
    for (i = 0; i < 6; i++) {
      varSizes[0].f1[i + 2] = 1U;
      varSizes[1].f1[i + 2] = 1U;
      varSizes[2].f1[i + 2] = 1U;
    }

    for (i = 0; i < 3; i++) {
      obj->inputVarSize[i] = varSizes[i];
    }

    st.site = &d_emlrtRSI;
    FrameSynchronizer_validateInputsImpl(&st, varargin_1, varargin_2_data,
      varargin_2_size, b_varargin_3_data, varargin_3_size);
  }
}

static void FrameSynchronizer_validateInputsImpl(const emlrtStack *sp,
  emxArray_creal_T *varargin_1, real_T varargin_2_data[], int32_T
  varargin_2_size[1], real_T b_varargin_3_data[], int32_T varargin_3_size[1])
{
  static const int32_T iv[2] = { 1, 68 };

  static const int32_T iv1[2] = { 1, 68 };

  static const int32_T iv2[2] = { 1, 46 };

  static const int32_T iv3[2] = { 1, 79 };

  static const int32_T iv4[2] = { 1, 46 };

  static const int32_T iv5[2] = { 1, 5 };

  static const int32_T iv6[2] = { 1, 46 };

  static const int32_T iv7[2] = { 1, 5 };

  static const int32_T iv8[2] = { 1, 16 };

  static char_T g_u[79] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'o', 'm',
    'm', ':', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', ':', 'e', 'x', 'a', 'm',
    'p', 'l', 'e', 's', ':', 'F', 'r', 'a', 'm', 'e', 'S', 'y', 'n', 'c', 'h',
    'r', 'o', 'n', 'i', 'z', 'e', 'r', ':', 'D', 'e', 't', 'e', 'c', 't', 'i',
    'o', 'n', ' ', 'M', 'e', 't', 'r', 'i', 'c', ':', 'e', 'x', 'p', 'e', 'c',
    't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c_u[68] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'o', 'm',
    'm', ':', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', ':', 'e', 'x', 'a', 'm',
    'p', 'l', 'e', 's', ':', 'F', 'r', 'a', 'm', 'e', 'S', 'y', 'n', 'c', 'h',
    'r', 'o', 'n', 'i', 'z', 'e', 'r', ':', 'I', 'n', 'p', 'u', 't', ':', 'e',
    'x', 'p', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T d_u[68] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'o', 'm',
    'm', ':', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', ':', 'e', 'x', 'a', 'm',
    'p', 'l', 'e', 's', ':', 'F', 'r', 'a', 'm', 'e', 'S', 'y', 'n', 'c', 'h',
    'r', 'o', 'n', 'i', 'z', 'e', 'r', ':', 'I', 'n', 'd', 'e', 'x', ':', 'e',
    'x', 'p', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T h_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T m_u[16] = { 'D', 'e', 't', 'e', 'c', 't', 'i', 'o', 'n', ' ',
    'M', 'e', 't', 'r', 'i', 'c' };

  static char_T j_u[5] = { 'I', 'n', 'p', 'u', 't' };

  static char_T k_u[5] = { 'I', 'n', 'd', 'e', 'x' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *m;
  const mxArray *y;
  int32_T k;
  char_T f_u[79];
  char_T b_u[68];
  char_T e_u[46];
  char_T l_u[16];
  char_T i_u[5];
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &k_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &n_emlrtRSI;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= varargin_1->size[0] - 1)) {
    if ((!muDoubleScalarIsInf(varargin_1->data[k].re)) && (!muDoubleScalarIsInf
         (varargin_1->data[k].im)) && ((!muDoubleScalarIsNaN(varargin_1->data[k]
           .re)) && (!muDoubleScalarIsNaN(varargin_1->data[k].im)))) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (!p) {
    memcpy(&b_u[0], &c_u[0], 68U * sizeof(char_T));
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 68, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (k = 0; k < 46; k++) {
      e_u[k] = h_u[k];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &e_u[0]);
    emlrtAssign(&c_y, m);
    for (k = 0; k < 5; k++) {
      i_u[k] = j_u[k];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&b_st, 5, m, &i_u[0]);
    emlrtAssign(&f_y, m);
    c_st.site = &v_emlrtRSI;
    error(&c_st, y, getString(&c_st, message(&c_st, c_y, f_y, &b_emlrtMCI),
           &b_emlrtMCI), &b_emlrtMCI);
  }

  st.site = &l_emlrtRSI;
  b_st.site = &n_emlrtRSI;
  if (!all(varargin_2_data, varargin_2_size)) {
    memcpy(&b_u[0], &d_u[0], 68U * sizeof(char_T));
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 68, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    for (k = 0; k < 46; k++) {
      e_u[k] = h_u[k];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &e_u[0]);
    emlrtAssign(&e_y, m);
    for (k = 0; k < 5; k++) {
      i_u[k] = k_u[k];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&b_st, 5, m, &i_u[0]);
    emlrtAssign(&h_y, m);
    c_st.site = &v_emlrtRSI;
    error(&c_st, b_y, getString(&c_st, message(&c_st, e_y, h_y, &b_emlrtMCI),
           &b_emlrtMCI), &b_emlrtMCI);
  }

  st.site = &m_emlrtRSI;
  b_st.site = &n_emlrtRSI;
  if (!all(b_varargin_3_data, varargin_3_size)) {
    memcpy(&f_u[0], &g_u[0], 79U * sizeof(char_T));
    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&b_st, 79, m, &f_u[0]);
    emlrtAssign(&d_y, m);
    for (k = 0; k < 46; k++) {
      e_u[k] = h_u[k];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &e_u[0]);
    emlrtAssign(&g_y, m);
    for (k = 0; k < 16; k++) {
      l_u[k] = m_u[k];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&b_st, 16, m, &l_u[0]);
    emlrtAssign(&i_y, m);
    c_st.site = &v_emlrtRSI;
    error(&c_st, d_y, getString(&c_st, message(&c_st, g_y, i_y, &b_emlrtMCI),
           &b_emlrtMCI), &b_emlrtMCI);
  }
}

static boolean_T all(real_T a_data[], int32_T a_size[1])
{
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= a_size[0] - 1)) {
    if ((!muDoubleScalarIsInf(a_data[k])) && (!muDoubleScalarIsNaN(a_data[k])))
    {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  return p;
}

static boolean_T SystemCore_detectInputSizeChange
  (comm_internal_examples_FrameSynchronizer *obj, emxArray_creal_T *varargin_1,
   int32_T varargin_2_size[1], int32_T varargin_3_size[1])
{
  int32_T k;
  int16_T inSize[8];
  boolean_T anyInputSizeChanged;
  boolean_T exitg1;
  anyInputSizeChanged = false;
  inSize[0] = (int16_T)varargin_1->size[0];
  inSize[1] = 1;
  for (k = 0; k < 6; k++) {
    inSize[k + 2] = 1;
  }

  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (obj->inputVarSize[0].f1[k] != (uint32_T)inSize[k]) {
      anyInputSizeChanged = true;
      for (k = 0; k < 8; k++) {
        obj->inputVarSize[0].f1[k] = (uint32_T)inSize[k];
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  inSize[0] = (int16_T)varargin_2_size[0];
  inSize[1] = 1;
  for (k = 0; k < 6; k++) {
    inSize[k + 2] = 1;
  }

  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (obj->inputVarSize[1].f1[k] != (uint32_T)inSize[k]) {
      anyInputSizeChanged = true;
      for (k = 0; k < 8; k++) {
        obj->inputVarSize[1].f1[k] = (uint32_T)inSize[k];
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  inSize[0] = (int16_T)varargin_3_size[0];
  inSize[1] = 1;
  for (k = 0; k < 6; k++) {
    inSize[k + 2] = 1;
  }

  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (obj->inputVarSize[2].f1[k] != (uint32_T)inSize[k]) {
      anyInputSizeChanged = true;
      for (k = 0; k < 8; k++) {
        obj->inputVarSize[2].f1[k] = (uint32_T)inSize[k];
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  return anyInputSizeChanged;
}

static void FrameSynchronizer_stepImpl(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const emlrtStack *sp,
  comm_internal_examples_FrameSynchronizer *obj, emxArray_creal_T *varargin_1,
  real_T varargin_2_data[], int32_T varargin_2_size[1], real_T
  b_varargin_3_data[], int32_T varargin_3_size[1], creal_T y[5613], boolean_T
  *validFrm)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T bestIdx_data[1];
  real_T ex;
  int32_T b_varargin_3_size[1];
  int32_T bestIdx_size[1];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  boolean_T b;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &o_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (varargin_2_size[0] != 0) {
    loop_ub = varargin_2_size[0];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int32_T)emlrtIntegerCheckR2012b(varargin_2_data[i], &emlrtDCI, &st);
      emlrtDynamicBoundsCheckR2012b(i1, 1, varargin_3_size[0], &emlrtBCI, &st);
    }

    b_varargin_3_size[0] = varargin_2_size[0];
    loop_ub = varargin_2_size[0];
    for (i = 0; i < loop_ub; i++) {
      moduleInstance->varargin_3_data[i] = b_varargin_3_data[(int32_T)
        varargin_2_data[i] - 1];
    }

    b_st.site = &q_emlrtRSI;
    maximum(moduleInstance->varargin_3_data, b_varargin_3_size, &ex, &loop_ub);
    bestIdx_size[0] = 1;
    bestIdx_data[0] = varargin_2_data[emlrtDynamicBoundsCheckR2012b(loop_ub, 1,
      varargin_2_size[0], &b_emlrtBCI, &st) - 1];
  } else {
    bestIdx_size[0] = 0;
  }

  b_st.site = &p_emlrtRSI;
  FrameSynchronizer_stepBitInput(moduleInstance, &b_st, obj, varargin_1,
    bestIdx_data, bestIdx_size, y, &b);
  *validFrm = b;
}

static void maximum(real_T x_data[], int32_T x_size[1], real_T *ex, int32_T *idx)
{
  int32_T b_idx;
  int32_T k;
  int32_T n;
  boolean_T exitg1;
  n = x_size[0];
  if (x_size[0] <= 2) {
    if (x_size[0] == 1) {
      *ex = x_data[0];
      *idx = 1;
    } else if ((x_data[0] < x_data[1]) || (muDoubleScalarIsNaN(x_data[0]) &&
                (!muDoubleScalarIsNaN(x_data[1])))) {
      *ex = x_data[1];
      *idx = 2;
    } else {
      *ex = x_data[0];
      *idx = 1;
    }
  } else {
    if (!muDoubleScalarIsNaN(x_data[0])) {
      *idx = 1;
    } else {
      *idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= x_size[0])) {
        if (!muDoubleScalarIsNaN(x_data[k - 1])) {
          *idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (*idx == 0) {
      *ex = x_data[0];
      *idx = 1;
    } else {
      *ex = x_data[*idx - 1];
      b_idx = *idx;
      for (k = *idx + 1; k <= n; k++) {
        if (*ex < x_data[k - 1]) {
          *ex = x_data[k - 1];
          b_idx = k;
        }
      }

      *idx = b_idx;
    }
  }
}

static void FrameSynchronizer_stepBitInput(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const emlrtStack *sp,
  comm_internal_examples_FrameSynchronizer *obj, emxArray_creal_T *x, real_T
  idx_data[], int32_T idx_size[1], creal_T y[5613], boolean_T *validFrm)
{
  emlrtStack st;
  boolean_T b;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &r_emlrtRSI;
  FrameSynchronizer_setBuffer(moduleInstance, &st, obj, x, idx_data, idx_size);
  st.site = &s_emlrtRSI;
  FrameSynchronizer_getBuffer(&st, obj, y, &b);
  *validFrm = b;
}

static void FrameSynchronizer_setBuffer(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const emlrtStack *sp,
  comm_internal_examples_FrameSynchronizer *obj, emxArray_creal_T *x, real_T
  preambleEndIdx_data[], int32_T preambleEndIdx_size[1])
{
  real_T b_linearIdx_data[6175];
  real_T linearIdx_data[6175];
  real_T linIdx;
  real_T oldNBuffer;
  real_T prbStartIdx;
  int32_T circularIdx_size[2];
  int32_T linearIdx_size[2];
  int32_T iv[1];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int16_T tmp_data[6175];
  if (x->size[0] != 0) {
    i = x->size[0];
    circularIdx_size[1] = (int32_T)((real_T)i - 1.0) + 1;
    loop_ub = (int32_T)((real_T)i - 1.0);
    for (i = 0; i <= loop_ub; i++) {
      moduleInstance->circularIdx_data[i] = (real_T)i + 1.0;
    }

    loop_ub = circularIdx_size[1] - 1;
    prbStartIdx = obj->pBufferStartIdx + obj->pNBuffer;
    for (i = 0; i <= loop_ub; i++) {
      linearIdx_data[i] = prbStartIdx + moduleInstance->circularIdx_data[i];
    }

    linearIdx_size[0] = 1;
    linearIdx_size[1] = circularIdx_size[1];
    loop_ub = circularIdx_size[1];
    for (i = 0; i < loop_ub; i++) {
      b_linearIdx_data[i] = linearIdx_data[i] - 1.0;
    }

    b_mod(b_linearIdx_data, linearIdx_size, moduleInstance->circularIdx_data,
          circularIdx_size);
    loop_ub = circularIdx_size[0] * circularIdx_size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      moduleInstance->circularIdx_data[i]++;
    }

    loop_ub = circularIdx_size[1];
    for (i = 0; i < loop_ub; i++) {
      i1 = (int16_T)emlrtIntegerCheckR2012b(moduleInstance->circularIdx_data[i],
        &c_emlrtDCI, sp);
      tmp_data[i] = (int16_T)((int16_T)emlrtDynamicBoundsCheckR2012b(i1, 1,
        28065, &d_emlrtBCI, sp) - 1);
    }

    iv[0] = circularIdx_size[1];
    emlrtSubAssignSizeCheckR2012b(iv, 1, *(int32_T (*)[1])x->size, 1, &emlrtECI,
      sp);
    loop_ub = x->size[0];
    for (i = 0; i < loop_ub; i++) {
      obj->pBuffer[tmp_data[i]].re = x->data[i].re;
      obj->pBuffer[tmp_data[i]].im = x->data[i].im;
    }

    oldNBuffer = obj->pNBuffer;
    obj->pNBuffer += (real_T)x->size[0];
    obj->pBufferEndIdx = moduleInstance->
      circularIdx_data[emlrtDynamicBoundsCheckR2012b(circularIdx_size[1], 1,
      circularIdx_size[1], &e_emlrtBCI, sp) - 1];
    if (obj->pNBuffer > 28065.0) {
      obj->pNBuffer = 28065.0;
      obj->pBufferStartIdx = moduleInstance->
        circularIdx_data[emlrtDynamicBoundsCheckR2012b(circularIdx_size[1], 1,
        circularIdx_size[1], &f_emlrtBCI, sp) - 1];
      prbStartIdx = obj->pNPrbIdxBuffer;
      i = (int32_T)(((-1.0 - prbStartIdx) + 1.0) / -1.0);
      emlrtForLoopVectorCheckR2012b(prbStartIdx, -1.0, 1.0, mxDOUBLE_CLASS, i,
        &emlrtRTEI, sp);
      for (loop_ub = 0; loop_ub < i; loop_ub++) {
        linIdx = (obj->pPrbIdxBufferStartIdx - 1.0) + (prbStartIdx + -(real_T)
          loop_ub);
        linIdx = c_mod(linIdx - 1.0) + 1.0;
        i1 = (int32_T)emlrtIntegerCheckR2012b(linIdx, &d_emlrtDCI, sp);
        if (obj->pPrbIdxBuffer[emlrtDynamicBoundsCheckR2012b(i1, 1, 5,
             &g_emlrtBCI, sp) - 1] <= moduleInstance->
            circularIdx_data[emlrtDynamicBoundsCheckR2012b(circularIdx_size[1],
             1, circularIdx_size[1], &h_emlrtBCI, sp) - 1]) {
          obj->pPrbIdxBuffer[(int32_T)linIdx - 1] = 0.0;
          obj->pNPrbIdxBuffer--;
        }
      }
    }

    if (preambleEndIdx_size[0] != 0) {
      prbStartIdx = preambleEndIdx_data[0] - obj->pPrbLenOffset;
      prbStartIdx += obj->pBufferStartIdx + oldNBuffer;
      if (prbStartIdx > 0.0) {
        linIdx = obj->pPrbIdxBufferStartIdx + obj->pNPrbIdxBuffer;
        linIdx = c_mod(linIdx - 1.0) + 1.0;
        i = (int32_T)emlrtIntegerCheckR2012b(linIdx, &b_emlrtDCI, sp);
        obj->pPrbIdxBuffer[emlrtDynamicBoundsCheckR2012b(i, 1, 5, &c_emlrtBCI,
          sp) - 1] = floatmod(prbStartIdx - 1.0) + 1.0;
        obj->pNPrbIdxBuffer++;
        if (obj->pNPrbIdxBuffer > 5.0) {
          obj->pNPrbIdxBuffer = 5.0;
          obj->pPrbIdxBufferStartIdx = c_mod(linIdx) + 1.0;
        }
      }
    }
  }
}

static void b_mod(real_T x_data[], int32_T x_size[2], real_T r_data[], int32_T
                  r_size[2])
{
  real_T z1_data[6175];
  int32_T k;
  int32_T nx;
  if (0 <= (int16_T)x_size[1] - 1) {
    memcpy(&z1_data[0], &r_data[0], (uint32_T)((int16_T)x_size[1] * (int32_T)
            sizeof(real_T)));
  }

  nx = (int16_T)x_size[1] - 1;
  for (k = 0; k <= nx; k++) {
    z1_data[k] = floatmod(x_data[k]);
  }

  r_size[0] = 1;
  r_size[1] = (int16_T)x_size[1];
  if (0 <= (int16_T)x_size[1] - 1) {
    memcpy(&r_data[0], &z1_data[0], (uint32_T)((int16_T)x_size[1] * (int32_T)
            sizeof(real_T)));
  }
}

static real_T floatmod(real_T x)
{
  real_T r;
  if (muDoubleScalarIsNaN(x) || muDoubleScalarIsInf(x)) {
    r = rtNaN;
  } else if (x == 0.0) {
    r = 0.0;
  } else {
    r = muDoubleScalarRem(x, 28065.0);
    if (r == 0.0) {
      r = 0.0;
    } else {
      if (x < 0.0) {
        r += 28065.0;
      }
    }
  }

  return r;
}

static real_T c_mod(real_T x)
{
  real_T r;
  if (muDoubleScalarIsNaN(x) || muDoubleScalarIsInf(x)) {
    r = rtNaN;
  } else if (x == 0.0) {
    r = 0.0;
  } else {
    r = muDoubleScalarRem(x, 5.0);
    if (r == 0.0) {
      r = 0.0;
    } else {
      if (x < 0.0) {
        r += 5.0;
      }
    }
  }

  return r;
}

static void FrameSynchronizer_getBuffer(const emlrtStack *sp,
  comm_internal_examples_FrameSynchronizer *obj, creal_T y[5613], boolean_T
  *validFrm)
{
  real_T b_linearIdx[5613];
  real_T linearIdx[5613];
  real_T b_obj;
  real_T nValid;
  int32_T b_i;
  int32_T i;
  for (i = 0; i < 5613; i++) {
    y[i].re = 0.0;
    y[i].im = 0.0;
  }

  *validFrm = false;
  if (obj->pNPrbIdxBuffer > 0.0) {
    b_i = (int32_T)emlrtIntegerCheckR2012b(obj->pPrbIdxBufferStartIdx,
      &f_emlrtDCI, sp);
    nValid = (obj->pBufferEndIdx - obj->
              pPrbIdxBuffer[emlrtDynamicBoundsCheckR2012b(b_i, 1, 5, &j_emlrtBCI,
               sp) - 1]) + 1.0;
    if (nValid < 1.0) {
      b_i = (int32_T)emlrtIntegerCheckR2012b(obj->pPrbIdxBufferStartIdx,
        &g_emlrtDCI, sp);
      nValid = obj->pNBuffer - ((obj->
        pPrbIdxBuffer[emlrtDynamicBoundsCheckR2012b(b_i, 1, 5, &k_emlrtBCI, sp)
        - 1] - obj->pBufferStartIdx) - 1.0);
    }

    if (nValid >= 5613.0) {
      nValid = obj->pNBuffer - nValid;
      b_i = (int32_T)emlrtIntegerCheckR2012b(obj->pPrbIdxBufferStartIdx,
        &h_emlrtDCI, sp);
      b_obj = obj->pPrbIdxBuffer[emlrtDynamicBoundsCheckR2012b(b_i, 1, 5,
        &l_emlrtBCI, sp) - 1];
      for (b_i = 0; b_i < 5613; b_i++) {
        b_linearIdx[b_i] = (b_obj + (real_T)b_i) - 1.0;
      }

      d_mod(b_linearIdx, linearIdx);
      for (b_i = 0; b_i < 5613; b_i++) {
        linearIdx[b_i]++;
      }

      for (b_i = 0; b_i < 5613; b_i++) {
        i = (int32_T)emlrtIntegerCheckR2012b(linearIdx[b_i], &i_emlrtDCI, sp);
        y[b_i].re = obj->pBuffer[emlrtDynamicBoundsCheckR2012b(i, 1, 28065,
          &m_emlrtBCI, sp) - 1].re;
        i = (int32_T)emlrtIntegerCheckR2012b(linearIdx[b_i], &i_emlrtDCI, sp);
        y[b_i].im = obj->pBuffer[emlrtDynamicBoundsCheckR2012b(i, 1, 28065,
          &m_emlrtBCI, sp) - 1].im;
      }

      *validFrm = true;
      b_i = (int32_T)emlrtIntegerCheckR2012b(obj->pPrbIdxBufferStartIdx,
        &e_emlrtDCI, sp);
      obj->pPrbIdxBuffer[emlrtDynamicBoundsCheckR2012b(b_i, 1, 5, &i_emlrtBCI,
        sp) - 1] = 0.0;
      obj->pNPrbIdxBuffer--;
      obj->pPrbIdxBufferStartIdx = c_mod(obj->pPrbIdxBufferStartIdx) + 1.0;
      obj->pBufferStartIdx = linearIdx[5612];
      obj->pNBuffer = (obj->pNBuffer - 5613.0) - nValid;
    }
  }
}

static void d_mod(real_T x[5613], real_T r[5613])
{
  int32_T k;
  for (k = 0; k < 5613; k++) {
    r[k] = floatmod(x[k]);
  }
}

static const mxArray *emlrt_marshallOut(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv1[2] = { 1, 8 };

  static const int32_T iv2[1] = { 28065 };

  static const int32_T iv3[1] = { 5 };

  static const char_T *sv[13] = { "matlabCodegenIsDeleted", "isInitialized",
    "isSetupComplete", "inputVarSize", "CacheInputSizes", "pPrbLenOffset",
    "pBuffer", "pNBuffer", "pBufferStartIdx", "pBufferEndIdx", "pPrbIdxBuffer",
    "pNPrbIdxBuffer", "pPrbIdxBufferStartIdx" };

  static const char_T *sv1[1] = { "f1" };

  cell_wrap d_u[3];
  const cell_wrap *r;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *m_y;
  const mxArray *n_y;
  const mxArray *o_y;
  const mxArray *p_y;
  const mxArray *q_y;
  const mxArray *y;
  real_T g_u[5];
  real_T f_u;
  real_T *b_pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T c_u;
  int32_T i;
  uint32_T e_u[8];
  uint32_T *pData;
  boolean_T b_u;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 13, sv));
  b_u = moduleInstance->sysobj.matlabCodegenIsDeleted;
  c_y = NULL;
  m = emlrtCreateLogicalScalar(b_u);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(b_y, 0, "matlabCodegenIsDeleted", c_y, 0);
  c_u = moduleInstance->sysobj.isInitialized;
  d_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = c_u;
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(b_y, 0, "isInitialized", d_y, 1);
  b_u = moduleInstance->sysobj.isSetupComplete;
  e_y = NULL;
  m = emlrtCreateLogicalScalar(b_u);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(b_y, 0, "isSetupComplete", e_y, 2);
  memcpy(&d_u[0], &moduleInstance->sysobj.inputVarSize[0], 3U * sizeof(cell_wrap));
  f_y = NULL;
  for (c_u = 0; c_u < 2; c_u++) {
    iv[c_u] = (c_u << 1) + 1;
  }

  emlrtAssign(&f_y, emlrtCreateStructArray(2, iv, 1, sv1));
  for (c_u = 0; c_u < 3; c_u++) {
    r = &d_u[c_u];
    for (i = 0; i < 8; i++) {
      e_u[i] = r->f1[i];
    }

    h_y = NULL;
    m = emlrtCreateNumericArray(2, &iv1[0], mxUINT32_CLASS, mxREAL);
    pData = (uint32_T *)emlrtMxGetData(m);
    i = 0;
    for (b_i = 0; b_i < 8; b_i++) {
      pData[i] = e_u[b_i];
      i++;
    }

    emlrtAssign(&h_y, m);
    emlrtSetFieldR2017b(f_y, c_u, "f1", h_y, 0);
  }

  emlrtSetFieldR2017b(b_y, 0, "inputVarSize", f_y, 3);
  b_u = moduleInstance->sysobj.CacheInputSizes;
  g_y = NULL;
  m = emlrtCreateLogicalScalar(b_u);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(b_y, 0, "CacheInputSizes", g_y, 4);
  f_u = moduleInstance->sysobj.pPrbLenOffset;
  i_y = NULL;
  m = emlrtCreateDoubleScalar(f_u);
  emlrtAssign(&i_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pPrbLenOffset", i_y, 5);
  memcpy(&moduleInstance->u[0], &moduleInstance->sysobj.pBuffer[0], 28065U *
         sizeof(creal_T));
  j_y = NULL;
  m = emlrtCreateNumericArray(1, &iv2[0], mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m, &moduleInstance->u[0], 8);
  emlrtAssign(&j_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pBuffer", j_y, 6);
  f_u = moduleInstance->sysobj.pNBuffer;
  k_y = NULL;
  m = emlrtCreateDoubleScalar(f_u);
  emlrtAssign(&k_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pNBuffer", k_y, 7);
  f_u = moduleInstance->sysobj.pBufferStartIdx;
  l_y = NULL;
  m = emlrtCreateDoubleScalar(f_u);
  emlrtAssign(&l_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pBufferStartIdx", l_y, 8);
  f_u = moduleInstance->sysobj.pBufferEndIdx;
  m_y = NULL;
  m = emlrtCreateDoubleScalar(f_u);
  emlrtAssign(&m_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pBufferEndIdx", m_y, 9);
  for (b_i = 0; b_i < 5; b_i++) {
    g_u[b_i] = moduleInstance->sysobj.pPrbIdxBuffer[b_i];
  }

  n_y = NULL;
  m = emlrtCreateNumericArray(1, &iv3[0], mxDOUBLE_CLASS, mxREAL);
  b_pData = emlrtMxGetPr(m);
  c_u = 0;
  for (b_i = 0; b_i < 5; b_i++) {
    b_pData[c_u] = g_u[b_i];
    c_u++;
  }

  emlrtAssign(&n_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pPrbIdxBuffer", n_y, 10);
  f_u = moduleInstance->sysobj.pNPrbIdxBuffer;
  o_y = NULL;
  m = emlrtCreateDoubleScalar(f_u);
  emlrtAssign(&o_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pNPrbIdxBuffer", o_y, 11);
  f_u = moduleInstance->sysobj.pPrbIdxBufferStartIdx;
  p_y = NULL;
  m = emlrtCreateDoubleScalar(f_u);
  emlrtAssign(&p_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pPrbIdxBufferStartIdx", p_y, 12);
  emlrtSetCell(y, 0, b_y);
  q_y = NULL;
  m = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&q_y, m);
  emlrtSetCell(y, 1, q_y);
  return y;
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *moduleInstance)
{
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *st;
  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  st = NULL;
  emlrtAssign(&st, emlrt_marshallOut(moduleInstance, &b_st));
  return st;
}

static void emlrt_marshallIn(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const emlrtStack *sp, const mxArray *b_u)
{
  emlrtMsgIdentifier thisId;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  thisId.fIdentifier = "sysobj";
  b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, &thisId, b_u, 0)), "sysobj",
                     &moduleInstance->sysobj);
  thisId.fIdentifier = "sysobj_not_empty";
  moduleInstance->sysobj_not_empty = k_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetCell(sp, &thisId, b_u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&b_u);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_sysobj,
  const char_T *identifier, comm_internal_examples_FrameSynchronizer *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  c_emlrt_marshallIn(sp, emlrtAlias(b_sysobj), &thisId, y);
  emlrtDestroyArray(&b_sysobj);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, comm_internal_examples_FrameSynchronizer *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[13] = { "matlabCodegenIsDeleted",
    "isInitialized", "isSetupComplete", "inputVarSize", "CacheInputSizes",
    "pPrbLenOffset", "pBuffer", "pNBuffer", "pBufferStartIdx", "pBufferEndIdx",
    "pPrbIdxBuffer", "pNPrbIdxBuffer", "pPrbIdxBufferStartIdx" };

  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, b_u, 13, fieldNames, 0U, &dims);
  thisId.fIdentifier = "matlabCodegenIsDeleted";
  y->matlabCodegenIsDeleted = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 0, "matlabCodegenIsDeleted")), &thisId);
  thisId.fIdentifier = "isInitialized";
  y->isInitialized = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 1, "isInitialized")), &thisId);
  thisId.fIdentifier = "isSetupComplete";
  y->isSetupComplete = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 2, "isSetupComplete")), &thisId);
  thisId.fIdentifier = "inputVarSize";
  f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 3,
    "inputVarSize")), &thisId, y->inputVarSize);
  thisId.fIdentifier = "CacheInputSizes";
  y->CacheInputSizes = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 4, "CacheInputSizes")), &thisId);
  thisId.fIdentifier = "pPrbLenOffset";
  y->pPrbLenOffset = h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 5, "pPrbLenOffset")), &thisId);
  thisId.fIdentifier = "pBuffer";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 6, "pBuffer")),
                     &thisId, y->pBuffer);
  thisId.fIdentifier = "pNBuffer";
  y->pNBuffer = h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0,
    7, "pNBuffer")), &thisId);
  thisId.fIdentifier = "pBufferStartIdx";
  y->pBufferStartIdx = h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 8, "pBufferStartIdx")), &thisId);
  thisId.fIdentifier = "pBufferEndIdx";
  y->pBufferEndIdx = h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 9, "pBufferEndIdx")), &thisId);
  thisId.fIdentifier = "pPrbIdxBuffer";
  j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, 0, 10,
    "pPrbIdxBuffer")), &thisId, y->pPrbIdxBuffer);
  thisId.fIdentifier = "pNPrbIdxBuffer";
  y->pNPrbIdxBuffer = h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    b_u, 0, 11, "pNPrbIdxBuffer")), &thisId);
  thisId.fIdentifier = "pPrbIdxBufferStartIdx";
  y->pPrbIdxBufferStartIdx = h_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, b_u, 0, 12, "pPrbIdxBufferStartIdx")), &thisId);
  emlrtDestroyArray(&b_u);
}

static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = l_emlrt_marshallIn(sp, emlrtAlias(b_u), parentId);
  emlrtDestroyArray(&b_u);
  return y;
}

static int32_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u,
  const emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = m_emlrt_marshallIn(sp, emlrtAlias(b_u), parentId);
  emlrtDestroyArray(&b_u);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, cell_wrap y[3])
{
  static const int32_T dims[2] = { 1, 3 };

  static const char_T *fieldNames[1] = { "f1" };

  emlrtMsgIdentifier thisId;
  int32_T i;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, b_u, 1, fieldNames, 2U, dims);
  for (i = 0; i < 3; i++) {
    thisId.fIdentifier = "f1";
    g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, b_u, i, 0, "f1")),
                       &thisId, y[i].f1);
  }

  emlrtDestroyArray(&b_u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, uint32_T y[8])
{
  n_emlrt_marshallIn(sp, emlrtAlias(b_u), parentId, y);
  emlrtDestroyArray(&b_u);
}

static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = o_emlrt_marshallIn(sp, emlrtAlias(b_u), parentId);
  emlrtDestroyArray(&b_u);
  return y;
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, creal_T y[28065])
{
  p_emlrt_marshallIn(sp, emlrtAlias(b_u), parentId, y);
  emlrtDestroyArray(&b_u);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_u, const
  emlrtMsgIdentifier *parentId, real_T y[5])
{
  q_emlrt_marshallIn(sp, emlrtAlias(b_u), parentId, y);
  emlrtDestroyArray(&b_u);
}

static boolean_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance, const mxArray *st)
{
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrt_marshallIn(moduleInstance, &b_st, emlrtAlias(st));
  emlrtDestroyArray(&st);
}

static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "getString", true,
    location);
}

static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", true, location);
}

static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  boolean_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static int32_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  int32_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 0U, &dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, uint32_T ret[8])
{
  static const int32_T dims[2] = { 1, 8 };

  int32_T i;
  uint32_T (*r)[8];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "uint32", false, 2U, dims);
  r = (uint32_T (*)[8])emlrtMxGetData(src);
  for (i = 0; i < 8; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[28065])
{
  static const int32_T dims[1] = { 28065 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", true, 1U, dims);
  emlrtImportArrayR2015b(sp, src, ret, 8, true);
  emlrtDestroyArray(&src);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[5])
{
  static const int32_T dims[1] = { 5 };

  real_T (*r)[5];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  r = (real_T (*)[5])emlrtMxGetData(src);
  for (i = 0; i < 5; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void emxEnsureCapacity_creal_T(emxArray_creal_T *emxArray, int32_T
  oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(creal_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(creal_T) * (uint32_T)oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (creal_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxInit_creal_T(emxArray_creal_T **pEmxArray, int32_T numDimensions)
{
  emxArray_creal_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_creal_T *)emlrtMallocMex(sizeof(emxArray_creal_T));
  emxArray = *pEmxArray;
  emxArray->data = (creal_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxFree_creal_T(emxArray_creal_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_creal_T *)NULL) {
    if (((*pEmxArray)->data != (creal_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_creal_T *)NULL;
  }
}

static void init_simulink_io_address(InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0_data = (creal_T (*)[6175])cgxertGetInputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->u0_sizes = (int32_T (*)[2])cgxertGetCurrentInputPortDimensions
    (moduleInstance->S, 0);
  moduleInstance->u1_data = (real_T (*)[6175])cgxertGetInputPortSignal
    (moduleInstance->S, 1);
  moduleInstance->u1_sizes = (int32_T (*)[2])cgxertGetCurrentInputPortDimensions
    (moduleInstance->S, 1);
  moduleInstance->u2_data = (real_T (*)[6175])cgxertGetInputPortSignal
    (moduleInstance->S, 2);
  moduleInstance->u2_sizes = (int32_T (*)[2])cgxertGetCurrentInputPortDimensions
    (moduleInstance->S, 2);
  moduleInstance->b_y0 = (creal_T (*)[5613])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y1 = (boolean_T *)cgxertGetOutputPortSignal
    (moduleInstance->S, 1);
}

/* CGXE Glue Code */
static void mdlOutputs_vHAnMVmLh1CgCfSUJQTdXF(SimStruct *S, int_T tid)
{
  InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *moduleInstance =
    (InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_vHAnMVmLh1CgCfSUJQTdXF(SimStruct *S)
{
  InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *moduleInstance =
    (InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_vHAnMVmLh1CgCfSUJQTdXF(SimStruct *S, int_T tid)
{
  InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *moduleInstance =
    (InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_vHAnMVmLh1CgCfSUJQTdXF(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *moduleInstance =
    (InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_vHAnMVmLh1CgCfSUJQTdXF(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *moduleInstance =
    (InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_vHAnMVmLh1CgCfSUJQTdXF(SimStruct *S)
{
  InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *moduleInstance =
    (InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_vHAnMVmLh1CgCfSUJQTdXF(SimStruct *S)
{
  InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *moduleInstance =
    (InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_vHAnMVmLh1CgCfSUJQTdXF(SimStruct *S)
{
  InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *moduleInstance =
    (InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_vHAnMVmLh1CgCfSUJQTdXF(SimStruct *S)
{
  InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *moduleInstance =
    (InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF *)calloc(1, sizeof
    (InstanceStruct_vHAnMVmLh1CgCfSUJQTdXF));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_vHAnMVmLh1CgCfSUJQTdXF);
  ssSetmdlInitializeConditions(S, mdlInitialize_vHAnMVmLh1CgCfSUJQTdXF);
  ssSetmdlUpdate(S, mdlUpdate_vHAnMVmLh1CgCfSUJQTdXF);
  ssSetmdlTerminate(S, mdlTerminate_vHAnMVmLh1CgCfSUJQTdXF);
  ssSetmdlEnable(S, mdlEnable_vHAnMVmLh1CgCfSUJQTdXF);
  ssSetmdlDisable(S, mdlDisable_vHAnMVmLh1CgCfSUJQTdXF);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_vHAnMVmLh1CgCfSUJQTdXF(SimStruct *S)
{
}

void method_dispatcher_vHAnMVmLh1CgCfSUJQTdXF(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_vHAnMVmLh1CgCfSUJQTdXF(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_vHAnMVmLh1CgCfSUJQTdXF(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_vHAnMVmLh1CgCfSUJQTdXF(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_vHAnMVmLh1CgCfSUJQTdXF(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: vHAnMVmLh1CgCfSUJQTdXF.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_vHAnMVmLh1CgCfSUJQTdXF_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  double * pointer;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,1,elem_3);
  elem_4 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_4);
  elem_5 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_5);
  elem_6 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_6);
  elem_7 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_7);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_8 = mxCreateDoubleMatrix(0,0, mxREAL);
  pointer = mxGetPr(elem_8);
  mxSetCell(mxBIArgs,1,elem_8);
  elem_9 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_9);
  return mxBIArgs;
}

mxArray *cgxe_vHAnMVmLh1CgCfSUJQTdXF_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("incompatibleVar");
  mxArray* incompatibleSymbol = mxCreateString("u_tmp0:  ");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
