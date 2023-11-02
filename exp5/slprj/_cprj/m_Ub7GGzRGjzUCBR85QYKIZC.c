/* Include files */

#include "modelInterface.h"
#include "m_Ub7GGzRGjzUCBR85QYKIZC.h"
#include <string.h>
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 147,   /* lineNo */
  "PreambleDetector",                  /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\PreambleDetector.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "Helper",                            /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\compiled\\+comm\\+internal\\Helper.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 11,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 22,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 29,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 162, /* lineNo */
  "PreambleDetector",                  /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\PreambleDetector.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 76,  /* lineNo */
  "validateattributes",                /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 31,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 37,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 45,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 235, /* lineNo */
  "PreambleDetector",                  /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\PreambleDetector.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 458, /* lineNo */
  "PreambleDetector",                  /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\PreambleDetector.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 460, /* lineNo */
  "PreambleDetector",                  /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\PreambleDetector.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 466, /* lineNo */
  "PreambleDetector",                  /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\PreambleDetector.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 277, /* lineNo */
  "filter",                            /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\filter.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 39,  /* lineNo */
  "find",                              /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 402, /* lineNo */
  "find",                              /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 43,  /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 14,    /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 1,   /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 458, /* lineNo */
  5,                                   /* colNo */
  "PreambleDetector",                  /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\comm\\comm\\+comm\\PreambleDetector.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 47,  /* lineNo */
  19,                                  /* colNo */
  "allOrAny",                          /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 34,  /* lineNo */
  19,                                  /* colNo */
  "filter",                            /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\datafun\\filter.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 81,  /* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 392, /* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 121, /* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtECInfo emlrtECI = { 1,     /* nDims */
  3,                                   /* lineNo */
  4,                                   /* colNo */
  "",                                  /* fName */
  ""                                   /* pName */
};

static emlrtECInfo b_emlrtECI = { 1,   /* nDims */
  3,                                   /* lineNo */
  8,                                   /* colNo */
  "",                                  /* fName */
  ""                                   /* pName */
};

static emlrtRSInfo v_emlrtRSI = { 3,   /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 14,  /* lineNo */
  "validatenonnegative",               /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 14,  /* lineNo */
  "validatefinite",                    /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 121, /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 392,/* lineNo */
  "find",                              /* fcnName */
  "D:\\software\\MATLAB\\R2020b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance, const emlrtStack *sp, real_T Threshold, emxArray_creal_T *u0);
static void PreambleDetector_set_Threshold(const emlrtStack *sp,
  comm_PreambleDetector *obj, real_T thr);
static void SystemCore_setup(const emlrtStack *sp, comm_PreambleDetector *obj,
  emxArray_creal_T *varargin_1);
static void SystemCore_checkTunablePropChange(const emlrtStack *sp,
  comm_PreambleDetector *obj);
static void mw__internal__call__reset(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance, const emlrtStack *sp, real_T Threshold);
static void mw__internal__call__step(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance, const emlrtStack *sp, real_T Threshold, emxArray_creal_T *u0,
  real_T b_y0_data[], int32_T y0_size[2], real_T b_y1_data[], int32_T y1_size[2]);
static void mw__internal__system___fcn(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance, const emlrtStack *sp, real_T varargin_3, emxArray_creal_T
  *varargin_6, real_T varargout_1_data[], int32_T varargout_1_size[1], real_T
  varargout_2_data[], int32_T varargout_2_size[1]);
static void SystemCore_step(const emlrtStack *sp, comm_PreambleDetector *obj,
  emxArray_creal_T *varargin_1, real_T varargout_1_data[], int32_T
  varargout_1_size[1], real_T varargout_2_data[], int32_T varargout_2_size[1]);
static void SystemCore_systemblock_prestep(comm_PreambleDetector *obj,
  emxArray_creal_T *varargin_1);
static boolean_T SystemCore_detectInputSizeChange(comm_PreambleDetector *obj,
  emxArray_creal_T *varargin_1);
static void PreambleDetector_stepImpl(const emlrtStack *sp,
  comm_PreambleDetector *obj, emxArray_creal_T *u, real_T idx_data[], int32_T
  idx_size[1], real_T xCor_data[], int32_T xCor_size[1]);
static void b_isfinite(emxArray_creal_T *x, boolean_T b_data[], int32_T b_size[1]);
static void b_isinf(emxArray_creal_T *x, boolean_T b_data[], int32_T b_size[1]);
static void b_isnan(emxArray_creal_T *x, boolean_T b_data[], int32_T b_size[1]);
static void stepSymbolInput(const emlrtStack *sp, emxArray_creal_T *u, creal_T
  currFilterStates[12], real_T threshold, real_T idx_data[], int32_T idx_size[1],
  real_T crossCorr_data[], int32_T crossCorr_size[1], creal_T newFilterStates[12]);
static boolean_T all(boolean_T x_data[], int32_T x_size[1]);
static void filter(emxArray_creal_T *x, creal_T zi[12], emxArray_creal_T *y,
                   creal_T zf[12]);
static void b_abs(emxArray_creal_T *x, real_T y_data[], int32_T y_size[1]);
static void findAll(const emlrtStack *sp, real_T crossCorr_data[], int32_T
                    crossCorr_size[1], real_T threshold, real_T idx_data[],
                    int32_T idx_size[1]);
static void eml_find(const emlrtStack *sp, boolean_T x_data[], int32_T x_size[1],
                     int32_T i_data[], int32_T i_size[1]);
static void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, int32_T
  indexSize[2]);
static const mxArray *emlrt_marshallOut(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance, const emlrtStack *sp);
static const mxArray *b_emlrt_marshallOut(const int32_T u[2]);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *moduleInstance);
static void emlrt_marshallIn(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance, const emlrtStack *sp, const mxArray *u);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_v, const
  char_T *identifier, int32_T y[2]);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, int32_T y[2]);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_sysobj,
  const char_T *identifier, comm_PreambleDetector *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, comm_PreambleDetector *y);
static int32_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, cell_wrap y[1]);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, uint32_T y[8]);
static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[12]);
static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier);
static void cgxe_mdl_set_sim_state(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance, const mxArray *st);
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, int32_T ret[2]);
static int32_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static boolean_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, uint32_T ret[8]);
static real_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[12]);
static void xaxpy(int32_T n, creal_T a, emxArray_creal_T *x, emxArray_creal_T *y,
                  int32_T iy0);
static void b_xaxpy(int32_T n, creal_T a, creal_T x[13], emxArray_creal_T *y,
                    int32_T iy0);
static void emxEnsureCapacity_creal_T(emxArray_creal_T *emxArray, int32_T
  oldNumel);
static void emxInit_creal_T(emxArray_creal_T **pEmxArray, int32_T numDimensions);
static void emxFree_creal_T(emxArray_creal_T **pEmxArray);
static void emxInit_creal_T1(emxArray_creal_T **pEmxArray, int32_T numDimensions);
static void emxEnsureCapacity_creal_T1(emxArray_creal_T *emxArray, int32_T
  oldNumel);
static void init_simulink_io_address(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emxArray_creal_T *u_tmp1;
  real_T *Threshold;
  int32_T i;
  int32_T loop_ub;
  init_simulink_io_address(moduleInstance);
  Threshold = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  emxInit_creal_T(&u_tmp1, 2);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  i = u_tmp1->size[0] * u_tmp1->size[1];
  u_tmp1->size[0] = (*moduleInstance->u0_sizes)[0];
  u_tmp1->size[1] = (*moduleInstance->u0_sizes)[1];
  emxEnsureCapacity_creal_T(u_tmp1, i);
  loop_ub = (*moduleInstance->u0_sizes)[0] * (*moduleInstance->u0_sizes)[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    u_tmp1->data[i].re = (*moduleInstance->u0_data)[i].re;
    u_tmp1->data[i].im = (*moduleInstance->u0_data)[i].im;
  }

  mw__internal__call__setup(moduleInstance, &st, *Threshold, u_tmp1);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
  emxFree_creal_T(&u_tmp1);
}

static void cgxe_mdl_initialize(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T *Threshold;
  Threshold = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrtLicenseCheckR2012b(&st, "communication_toolbox", 2);
  emlrtLicenseCheckR2012b(&st, "signal_blocks", 2);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st, *Threshold);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emxArray_creal_T *u_tmp1;
  real_T y_tmp1_data[6175];
  real_T *Threshold;
  int32_T y_tmp0_size[2];
  int32_T y_tmp1_size[2];
  int32_T i;
  int32_T loop_ub;
  Threshold = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  emxInit_creal_T(&u_tmp1, 2);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  cgxertCheckCurrentInputPortDimensions(moduleInstance->S,
    "comm.PreambleDetector", "stepImpl");
  i = u_tmp1->size[0] * u_tmp1->size[1];
  u_tmp1->size[0] = (*moduleInstance->u0_sizes)[0];
  u_tmp1->size[1] = (*moduleInstance->u0_sizes)[1];
  emxEnsureCapacity_creal_T(u_tmp1, i);
  loop_ub = (*moduleInstance->u0_sizes)[0] * (*moduleInstance->u0_sizes)[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    u_tmp1->data[i].re = (*moduleInstance->u0_data)[i].re;
    u_tmp1->data[i].im = (*moduleInstance->u0_data)[i].im;
  }

  mw__internal__call__step(moduleInstance, &st, *Threshold, u_tmp1,
    moduleInstance->y_tmp0_data, y_tmp0_size, y_tmp1_data, y_tmp1_size);
  cgxertSetCurrentOutputPortDimensions(moduleInstance->S, 0, 0, y_tmp0_size[0]);
  cgxertSetCurrentOutputPortDimensions(moduleInstance->S, 0, 1, 1);
  emxFree_creal_T(&u_tmp1);
  if (0 <= y_tmp0_size[0] - 1) {
    memcpy(&(*moduleInstance->y0_data)[0], &moduleInstance->y_tmp0_data[0],
           (uint32_T)(y_tmp0_size[0] * (int32_T)sizeof(real_T)));
  }

  cgxertSetCurrentOutputPortDimensions(moduleInstance->S, 1, 0, y_tmp1_size[0]);
  cgxertSetCurrentOutputPortDimensions(moduleInstance->S, 1, 1, 1);
  if (0 <= y_tmp1_size[0] - 1) {
    memcpy(&(*moduleInstance->y1_data)[0], &y_tmp1_data[0], (uint32_T)
           (y_tmp1_size[0] * (int32_T)sizeof(real_T)));
  }

  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__call__setup(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance, const emlrtStack *sp, real_T Threshold, emxArray_creal_T *u0)
{
  comm_PreambleDetector *obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_creal_T b_u0;
  int32_T c_u0[1];
  int32_T u0_idx_0;
  boolean_T flag;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    obj->isInitialized = 0;
    obj->TunablePropsChanged = false;
    obj->CacheInputSizes = false;
    e_st.site = &e_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
    st.site = &g_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &d_emlrtRSI;
    flag = (obj->isInitialized == 1);
    if (flag) {
      obj->TunablePropsChanged = true;
    }

    st.site = &g_emlrtRSI;
    PreambleDetector_set_Threshold(&st, &moduleInstance->sysobj, Threshold);
  }

  u0_idx_0 = u0->size[0];
  b_u0 = *u0;
  c_u0[0] = u0_idx_0;
  b_u0.size = &c_u0[0];
  b_u0.numDimensions = 1;
  st.site = &h_emlrtRSI;
  SystemCore_setup(&st, &moduleInstance->sysobj, &b_u0);
}

static void PreambleDetector_set_Threshold(const emlrtStack *sp,
  comm_PreambleDetector *obj, real_T thr)
{
  static const int32_T iv[2] = { 1, 21 };

  static const int32_T iv1[2] = { 1, 26 };

  static const int32_T iv2[2] = { 1, 46 };

  static const int32_T iv3[2] = { 1, 51 };

  static const int32_T iv4[2] = { 1, 9 };

  static const int32_T iv5[2] = { 1, 9 };

  static char_T i_u[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T f_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T e_u[26] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v',
    'e' };

  static char_T b_u[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T j_u[9] = { 'T', 'h', 'r', 'e', 's', 'h', 'o', 'l', 'd' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T g_u[51];
  char_T d_u[46];
  char_T c_u[26];
  char_T u[21];
  char_T h_u[9];
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &i_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &j_emlrtRSI;
  p = true;
  if (!((!muDoubleScalarIsInf(thr)) && (!muDoubleScalarIsNaN(thr)))) {
    p = false;
  }

  if (!p) {
    for (i = 0; i < 21; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 46; i++) {
      d_u[i] = f_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 9; i++) {
      h_u[i] = j_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&b_st, 9, m, &h_u[0]);
    emlrtAssign(&e_y, m);
    c_st.site = &x_emlrtRSI;
    error(&c_st, y, getString(&c_st, message(&c_st, c_y, e_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  b_st.site = &j_emlrtRSI;
  p = true;
  if (thr < 0.0) {
    p = false;
  }

  if (!p) {
    for (i = 0; i < 26; i++) {
      c_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 26, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 51; i++) {
      g_u[i] = i_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&b_st, 51, m, &g_u[0]);
    emlrtAssign(&d_y, m);
    for (i = 0; i < 9; i++) {
      h_u[i] = j_u[i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&b_st, 9, m, &h_u[0]);
    emlrtAssign(&f_y, m);
    c_st.site = &w_emlrtRSI;
    error(&c_st, b_y, getString(&c_st, message(&c_st, d_y, f_y, &b_emlrtMCI),
           &b_emlrtMCI), &b_emlrtMCI);
  }

  obj->Threshold = thr;
}

static void SystemCore_setup(const emlrtStack *sp, comm_PreambleDetector *obj,
  emxArray_creal_T *varargin_1)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  cell_wrap varSizes[1];
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[51];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  if (obj->isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 51, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 51, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(sp, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &e_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, c_y, &c_emlrtMCI),
           &c_emlrtMCI), &c_emlrtMCI);
  }

  obj->isInitialized = 1;
  st.site = &e_emlrtRSI;
  varSizes[0].f1[0] = (uint32_T)varargin_1->size[0];
  varSizes[0].f1[1] = 1U;
  for (i = 0; i < 6; i++) {
    varSizes[0].f1[i + 2] = 1U;
  }

  obj->inputVarSize[0] = varSizes[0];
  st.site = &e_emlrtRSI;
  obj->pThreshold = obj->Threshold;
  for (i = 0; i < 12; i++) {
    obj->pFilterStates[i].re = 0.0;
    obj->pFilterStates[i].im = 0.0;
  }

  st.site = &e_emlrtRSI;
  SystemCore_checkTunablePropChange(&st, obj);
  obj->TunablePropsChanged = false;
}

static void SystemCore_checkTunablePropChange(const emlrtStack *sp,
  comm_PreambleDetector *obj)
{
  static const int32_T iv[2] = { 1, 44 };

  static const int32_T iv1[2] = { 1, 44 };

  static char_T b_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[44];
  st.prev = sp;
  st.tls = sp->tls;
  if (obj->TunablePropsChanged) {
    for (i = 0; i < 44; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 44, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 44; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 44, m, &u[0]);
    emlrtAssign(&b_y, m);
    st.site = &e_emlrtRSI;
    error(&st, y, getString(&st, b_message(&st, b_y, &c_emlrtMCI), &c_emlrtMCI),
          &c_emlrtMCI);
  }
}

static void mw__internal__call__reset(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance, const emlrtStack *sp, real_T Threshold)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 44 };

  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 44 };

  static const int32_T iv4[2] = { 1, 5 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static char_T f_u[5] = { 'r', 'e', 's', 'e', 't' };

  comm_PreambleDetector *obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[45];
  char_T c_u[44];
  char_T e_u[5];
  boolean_T tunablePropChangedBeforeResetImpl;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    obj->isInitialized = 0;
    obj->TunablePropsChanged = false;
    obj->CacheInputSizes = false;
    e_st.site = &e_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
    st.site = &g_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &d_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (obj->isInitialized == 1);
    if (tunablePropChangedBeforeResetImpl) {
      obj->TunablePropsChanged = true;
    }

    st.site = &g_emlrtRSI;
    PreambleDetector_set_Threshold(&st, &moduleInstance->sysobj, Threshold);
  }

  st.site = &k_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 5; i++) {
      e_u[i] = f_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &e_u[0]);
    emlrtAssign(&e_y, m);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, c_y, e_y, &c_emlrtMCI),
           &c_emlrtMCI), &c_emlrtMCI);
  }

  tunablePropChangedBeforeResetImpl = obj->TunablePropsChanged;
  if (obj->isInitialized == 1) {
    b_st.site = &e_emlrtRSI;
    for (i = 0; i < 12; i++) {
      obj->pFilterStates[i].re = 0.0;
      obj->pFilterStates[i].im = 0.0;
    }
  }

  if ((int32_T)tunablePropChangedBeforeResetImpl != (int32_T)
      obj->TunablePropsChanged) {
    for (i = 0; i < 44; i++) {
      c_u[i] = d_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 44, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 44; i++) {
      c_u[i] = d_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&st, 44, m, &c_u[0]);
    emlrtAssign(&d_y, m);
    b_st.site = &e_emlrtRSI;
    error(&b_st, b_y, getString(&b_st, b_message(&b_st, d_y, &c_emlrtMCI),
           &c_emlrtMCI), &c_emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance, const emlrtStack *sp, real_T Threshold, emxArray_creal_T *u0,
  real_T b_y0_data[], int32_T y0_size[2], real_T b_y1_data[], int32_T y1_size[2])
{
  emlrtStack st;
  emxArray_creal_T b_u0;
  real_T c_y0_data[6175];
  real_T c_y1_data[6175];
  int32_T b_y0_size[1];
  int32_T b_y1_size[1];
  int32_T c_u0[1];
  int32_T u0_idx_0;
  st.prev = sp;
  st.tls = sp->tls;
  u0_idx_0 = u0->size[0];
  b_u0 = *u0;
  c_u0[0] = u0_idx_0;
  b_u0.size = &c_u0[0];
  b_u0.numDimensions = 1;
  st.site = &v_emlrtRSI;
  mw__internal__system___fcn(moduleInstance, &st, Threshold, &b_u0, c_y0_data,
    b_y0_size, c_y1_data, b_y1_size);
  emlrtDimSizeGeqCheckR2012b(6175, b_y0_size[0], &emlrtECI, sp);
  y0_size[0] = b_y0_size[0];
  y0_size[1] = 1;
  if (0 <= b_y0_size[0] - 1) {
    memcpy(&b_y0_data[0], &c_y0_data[0], (uint32_T)(b_y0_size[0] * (int32_T)
            sizeof(real_T)));
  }

  emlrtDimSizeGeqCheckR2012b(6175, b_y1_size[0], &b_emlrtECI, sp);
  y1_size[0] = b_y1_size[0];
  y1_size[1] = 1;
  if (0 <= b_y1_size[0] - 1) {
    memcpy(&b_y1_data[0], &c_y1_data[0], (uint32_T)(b_y1_size[0] * (int32_T)
            sizeof(real_T)));
  }
}

static void mw__internal__system___fcn(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance, const emlrtStack *sp, real_T varargin_3, emxArray_creal_T
  *varargin_6, real_T varargout_1_data[], int32_T varargout_1_size[1], real_T
  varargout_2_data[], int32_T varargout_2_size[1])
{
  comm_PreambleDetector *obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  boolean_T flag;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &emlrtRSI;
    c_st.site = &b_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    d_st.site = &c_emlrtRSI;
    obj->isInitialized = 0;
    obj->TunablePropsChanged = false;
    obj->CacheInputSizes = false;
    e_st.site = &e_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
    st.site = &g_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &d_emlrtRSI;
    flag = (obj->isInitialized == 1);
    if (flag) {
      obj->TunablePropsChanged = true;
    }

    st.site = &g_emlrtRSI;
    PreambleDetector_set_Threshold(&st, &moduleInstance->sysobj, varargin_3);
  }

  if (moduleInstance->sysobj.Threshold != varargin_3) {
    st.site = &l_emlrtRSI;
    obj = &moduleInstance->sysobj;
    b_st.site = &d_emlrtRSI;
    flag = (obj->isInitialized == 1);
    if (flag) {
      obj->TunablePropsChanged = true;
    }

    st.site = &l_emlrtRSI;
    PreambleDetector_set_Threshold(&st, &moduleInstance->sysobj, varargin_3);
  }

  st.site = &m_emlrtRSI;
  SystemCore_step(&st, &moduleInstance->sysobj, varargin_6, varargout_1_data,
                  varargout_1_size, varargout_2_data, varargout_2_size);
}

static void SystemCore_step(const emlrtStack *sp, comm_PreambleDetector *obj,
  emxArray_creal_T *varargin_1, real_T varargout_1_data[], int32_T
  varargout_1_size[1], real_T varargout_2_data[], int32_T varargout_2_size[1])
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[4] = { 's', 't', 'e', 'p' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[45];
  char_T c_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (obj->isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(sp, 4, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &e_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, c_y, &c_emlrtMCI),
           &c_emlrtMCI), &c_emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    st.site = &e_emlrtRSI;
    b_st.site = &e_emlrtRSI;
    SystemCore_setup(&b_st, obj, varargin_1);
    b_st.site = &e_emlrtRSI;
    for (i = 0; i < 12; i++) {
      obj->pFilterStates[i].re = 0.0;
      obj->pFilterStates[i].im = 0.0;
    }
  }

  st.site = &e_emlrtRSI;
  SystemCore_systemblock_prestep(obj, varargin_1);
  st.site = &e_emlrtRSI;
  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
    b_st.site = &e_emlrtRSI;
    obj->pThreshold = obj->Threshold;
  }

  st.site = &e_emlrtRSI;
  SystemCore_detectInputSizeChange(obj, varargin_1);
  st.site = &e_emlrtRSI;
  PreambleDetector_stepImpl(&st, obj, varargin_1, varargout_1_data,
    varargout_1_size, varargout_2_data, varargout_2_size);
  st.site = &e_emlrtRSI;
  SystemCore_checkTunablePropChange(&st, obj);
}

static void SystemCore_systemblock_prestep(comm_PreambleDetector *obj,
  emxArray_creal_T *varargin_1)
{
  cell_wrap varSizes[1];
  emlrtStack st;
  int32_T i;
  if (!obj->CacheInputSizes) {
    obj->CacheInputSizes = true;
    st.site = &e_emlrtRSI;
    varSizes[0].f1[0] = (uint32_T)varargin_1->size[0];
    varSizes[0].f1[1] = 1U;
    for (i = 0; i < 6; i++) {
      varSizes[0].f1[i + 2] = 1U;
    }

    obj->inputVarSize[0] = varSizes[0];
  }
}

static boolean_T SystemCore_detectInputSizeChange(comm_PreambleDetector *obj,
  emxArray_creal_T *varargin_1)
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

  return anyInputSizeChanged;
}

static void PreambleDetector_stepImpl(const emlrtStack *sp,
  comm_PreambleDetector *obj, emxArray_creal_T *u, real_T idx_data[], int32_T
  idx_size[1], real_T xCor_data[], int32_T xCor_size[1])
{
  emlrtStack st;
  creal_T b_obj[12];
  creal_T dcv[12];
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  if (u->size[0] == 0) {
    idx_size[0] = 0;
    xCor_size[0] = 0;
  } else {
    memcpy(&b_obj[0], &obj->pFilterStates[0], 12U * sizeof(creal_T));
    st.site = &n_emlrtRSI;
    stepSymbolInput(&st, u, b_obj, obj->pThreshold, idx_data, idx_size,
                    xCor_data, xCor_size, dcv);
    for (i = 0; i < 12; i++) {
      obj->pFilterStates[i].re = dcv[i].re;
      obj->pFilterStates[i].im = dcv[i].im;
    }
  }
}

static void b_isfinite(emxArray_creal_T *x, boolean_T b_data[], int32_T b_size[1])
{
  int32_T tmp_size[1];
  int32_T i;
  int32_T loop_ub;
  boolean_T tmp_data[6175];
  b_isinf(x, b_data, b_size);
  b_isnan(x, tmp_data, tmp_size);
  loop_ub = b_size[0];
  for (i = 0; i < loop_ub; i++) {
    b_data[i] = ((!b_data[i]) && (!tmp_data[i]));
  }
}

static void b_isinf(emxArray_creal_T *x, boolean_T b_data[], int32_T b_size[1])
{
  int32_T i;
  int32_T loop_ub;
  boolean_T tmp_data[6175];
  b_size[0] = x->size[0];
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_data[i] = muDoubleScalarIsInf(x->data[i].re);
  }

  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    tmp_data[i] = muDoubleScalarIsInf(x->data[i].im);
  }

  loop_ub = b_size[0];
  for (i = 0; i < loop_ub; i++) {
    b_data[i] = (b_data[i] || tmp_data[i]);
  }
}

static void b_isnan(emxArray_creal_T *x, boolean_T b_data[], int32_T b_size[1])
{
  int32_T i;
  int32_T loop_ub;
  boolean_T tmp_data[6175];
  b_size[0] = x->size[0];
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_data[i] = muDoubleScalarIsNaN(x->data[i].re);
  }

  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    tmp_data[i] = muDoubleScalarIsNaN(x->data[i].im);
  }

  loop_ub = b_size[0];
  for (i = 0; i < loop_ub; i++) {
    b_data[i] = (b_data[i] || tmp_data[i]);
  }
}

static void stepSymbolInput(const emlrtStack *sp, emxArray_creal_T *u, creal_T
  currFilterStates[12], real_T threshold, real_T idx_data[], int32_T idx_size[1],
  real_T crossCorr_data[], int32_T crossCorr_size[1], creal_T newFilterStates[12])
{
  static const int32_T iv[2] = { 1, 36 };

  static const int32_T iv1[2] = { 1, 36 };

  static char_T c_u[36] = { 'c', 'o', 'm', 'm', ':', 'P', 'r', 'e', 'a', 'm',
    'b', 'l', 'e', 'D', 'e', 't', 'e', 'c', 't', 'o', 'r', ':', 'I', 'n', 'p',
    'u', 't', 'N', 'o', 't', 'F', 'i', 'n', 'i', 't', 'e' };

  emlrtStack st;
  emxArray_creal_T *crossCorr1;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T tmp_size[1];
  int32_T i;
  char_T b_u[36];
  boolean_T tmp_data[6175];
  st.prev = sp;
  st.tls = sp->tls;
  b_isfinite(u, tmp_data, tmp_size);
  st.site = &o_emlrtRSI;
  if (!all(tmp_data, tmp_size)) {
    for (i = 0; i < 36; i++) {
      b_u[i] = c_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(sp, 36, m, &b_u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 36; i++) {
      b_u[i] = c_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 36, m, &b_u[0]);
    emlrtAssign(&b_y, m);
    st.site = &o_emlrtRSI;
    error(&st, y, getString(&st, b_message(&st, b_y, &d_emlrtMCI), &d_emlrtMCI),
          &d_emlrtMCI);
  }

  emxInit_creal_T1(&crossCorr1, 1);
  st.site = &p_emlrtRSI;
  filter(u, currFilterStates, crossCorr1, newFilterStates);
  b_abs(crossCorr1, crossCorr_data, crossCorr_size);
  st.site = &q_emlrtRSI;
  findAll(&st, crossCorr_data, crossCorr_size, threshold, idx_data, idx_size);
  emxFree_creal_T(&crossCorr1);
  if (idx_size[0] == 0) {
    idx_size[0] = 0;
  }
}

static boolean_T all(boolean_T x_data[], int32_T x_size[1])
{
  int32_T ix;
  boolean_T exitg1;
  boolean_T y;
  y = true;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= x_size[0])) {
    if (!x_data[ix]) {
      y = false;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

static void filter(emxArray_creal_T *x, creal_T zi[12], emxArray_creal_T *y,
                   creal_T zf[12])
{
  static creal_T b[13] = { { -0.70710678118654757,/* re */
      0.70710678118654757              /* im */
    }, { 0.70710678118654757,          /* re */
      -0.70710678118654757             /* im */
    }, { -0.70710678118654757,         /* re */
      0.70710678118654757              /* im */
    }, { 0.70710678118654757,          /* re */
      -0.70710678118654757             /* im */
    }, { -0.70710678118654757,         /* re */
      0.70710678118654757              /* im */
    }, { -0.70710678118654757,         /* re */
      0.70710678118654757              /* im */
    }, { 0.70710678118654757,          /* re */
      -0.70710678118654757             /* im */
    }, { 0.70710678118654757,          /* re */
      -0.70710678118654757             /* im */
    }, { -0.70710678118654757,         /* re */
      0.70710678118654757              /* im */
    }, { -0.70710678118654757,         /* re */
      0.70710678118654757              /* im */
    }, { -0.70710678118654757,         /* re */
      0.70710678118654757              /* im */
    }, { -0.70710678118654757,         /* re */
      0.70710678118654757              /* im */
    }, { -0.70710678118654757,         /* re */
      0.70710678118654757              /* im */
    } };

  emlrtStack st;
  creal_T b_x;
  real_T as_im;
  real_T as_re;
  int32_T b_j;
  int32_T boffset;
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T lb;
  int32_T naxpy;
  int32_T nx;
  boolean_T c_x;
  j = y->size[0];
  y->size[0] = x->size[0];
  emxEnsureCapacity_creal_T1(y, j);
  nx = x->size[0];
  for (i = 0; i < 12; i++) {
    zf[i].re = 0.0;
    zf[i].im = 0.0;
  }

  if (x->size[0] < 12) {
    i = x->size[0] - 1;
  } else {
    i = 11;
  }

  for (k = 0; k <= i; k++) {
    y->data[k].re = zi[k].re;
    y->data[k].im = zi[k].im;
  }

  for (k = i + 2; k <= nx; k++) {
    y->data[k - 1].re = 0.0;
    y->data[k - 1].im = 0.0;
  }

  if (x->size[0] >= 26) {
    for (k = 0; k < 13; k++) {
      i = nx - k;
      if (((b[k].re == 0.0) && (b[k].im == 0.0)) || (i <= 32)) {
        for (b_j = k + 1; b_j <= nx; b_j++) {
          as_re = b[k].re * x->data[(b_j - k) - 1].re - b[k].im * x->data[(b_j -
            k) - 1].im;
          as_im = b[k].re * x->data[(b_j - k) - 1].im + b[k].im * x->data[(b_j -
            k) - 1].re;
          y->data[b_j - 1].re += as_re;
          y->data[b_j - 1].im += as_im;
        }
      } else {
        b_x.re = b[k].re;
        b_x.im = b[k].im;
        st.site = &r_emlrtRSI;
        xaxpy(i, b_x, x, y, k + 1);
      }
    }
  } else {
    if (x->size[0] > 13) {
      i = x->size[0] - 14;
    } else {
      i = -1;
    }

    for (k = 0; k <= i; k++) {
      for (b_j = 0; b_j < 13; b_j++) {
        as_re = x->data[k].re * b[b_j].re - x->data[k].im * b[b_j].im;
        as_im = x->data[k].re * b[b_j].im + x->data[k].im * b[b_j].re;
        y->data[k + b_j].re += as_re;
        y->data[k + b_j].im += as_im;
      }
    }

    naxpy = (x->size[0] - i) - 1;
    for (k = i + 2; k <= nx; k++) {
      c_x = ((x->data[k - 1].re == 0.0) && (x->data[k - 1].im == 0.0));
      if (c_x || (naxpy <= 32)) {
        for (b_j = 0; b_j < naxpy; b_j++) {
          j = b_j - 1;
          as_re = x->data[k - 1].re * b[j + 1].re - x->data[k - 1].im * b[j + 1]
            .im;
          as_im = x->data[k - 1].re * b[j + 1].im + x->data[k - 1].im * b[j + 1]
            .re;
          y->data[k + j].re += as_re;
          y->data[k + j].im += as_im;
        }
      } else {
        b_x.re = x->data[k - 1].re;
        b_x.im = x->data[k - 1].im;
        b_xaxpy(naxpy, b_x, b, y, k);
      }

      naxpy--;
    }
  }

  if (x->size[0] < 12) {
    i = 11 - x->size[0];
    for (k = 0; k <= i; k++) {
      zf[k].re = zi[k + nx].re;
      zf[k].im = zi[k + nx].im;
    }
  }

  if (x->size[0] >= 13) {
    lb = x->size[0];
  } else {
    lb = 12;
  }

  j = x->size[0];
  for (k = lb - 12; k < j; k++) {
    boffset = nx - k;
    naxpy = 13 - (nx - k);
    as_re = x->data[k].re;
    as_im = x->data[k].im;
    c_x = ((x->data[k].re == 0.0) && (x->data[k].im == 0.0));
    if (c_x || (naxpy <= 32)) {
      for (b_j = 0; b_j < naxpy; b_j++) {
        zf[b_j].re += as_re * b[boffset + b_j].re - as_im * b[boffset + b_j].im;
        zf[b_j].im += as_re * b[boffset + b_j].im + as_im * b[boffset + b_j].re;
      }
    } else if (naxpy < 1) {
    } else {
      c_x = ((x->data[k].re == 0.0) && (x->data[k].im == 0.0));
      if (c_x) {
      } else {
        i = 0;
        for (b_j = 0; b_j < naxpy; b_j++) {
          zf[i].re += as_re * b[boffset].re - as_im * b[boffset].im;
          zf[i].im += as_re * b[boffset].im + as_im * b[boffset].re;
          boffset++;
          i++;
        }
      }
    }
  }
}

static void b_abs(emxArray_creal_T *x, real_T y_data[], int32_T y_size[1])
{
  int32_T k;
  int32_T nx;
  nx = x->size[0] - 1;
  y_size[0] = x->size[0];
  for (k = 0; k <= nx; k++) {
    y_data[k] = muDoubleScalarHypot(x->data[k].re, x->data[k].im);
  }
}

static void findAll(const emlrtStack *sp, real_T crossCorr_data[], int32_T
                    crossCorr_size[1], real_T threshold, real_T idx_data[],
                    int32_T idx_size[1])
{
  emlrtStack st;
  int32_T ii_data[6175];
  int32_T b_crossCorr_size[1];
  int32_T ii_size[1];
  int32_T i;
  int32_T loop_ub;
  boolean_T b_crossCorr_data[6175];
  st.prev = sp;
  st.tls = sp->tls;
  b_crossCorr_size[0] = crossCorr_size[0];
  loop_ub = crossCorr_size[0];
  for (i = 0; i < loop_ub; i++) {
    b_crossCorr_data[i] = (crossCorr_data[i] >= threshold);
  }

  st.site = &s_emlrtRSI;
  eml_find(&st, b_crossCorr_data, b_crossCorr_size, ii_data, ii_size);
  idx_size[0] = ii_size[0];
  loop_ub = ii_size[0];
  for (i = 0; i < loop_ub; i++) {
    idx_data[i] = (real_T)ii_data[i];
  }
}

static void eml_find(const emlrtStack *sp, boolean_T x_data[], int32_T x_size[1],
                     int32_T i_data[], int32_T i_size[1])
{
  static const int32_T iv1[2] = { 1, 30 };

  static const int32_T iv2[2] = { 1, 30 };

  static char_T b_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T iv[2];
  int32_T idx;
  int32_T ii;
  int32_T nx;
  char_T u[30];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  nx = x_size[0];
  idx = 0;
  i_size[0] = x_size[0];
  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii - 1 <= nx - 1)) {
    if (x_data[ii - 1]) {
      idx++;
      i_data[idx - 1] = ii;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }

  if (!(idx <= x_size[0])) {
    for (nx = 0; nx < 30; nx++) {
      u[nx] = b_u[nx];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(sp, 30, m, &u[0]);
    emlrtAssign(&y, m);
    for (nx = 0; nx < 30; nx++) {
      u[nx] = b_u[nx];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(sp, 30, m, &u[0]);
    emlrtAssign(&b_y, m);
    st.site = &ab_emlrtRSI;
    error(&st, y, getString(&st, b_message(&st, b_y, &h_emlrtMCI), &h_emlrtMCI),
          &h_emlrtMCI);
  }

  if (x_size[0] == 1) {
    if (idx == 0) {
      i_size[0] = 0;
    }
  } else {
    if (1 > idx) {
      idx = 0;
    }

    iv[0] = 1;
    iv[1] = idx;
    st.site = &t_emlrtRSI;
    indexShapeCheck(&st, x_size[0], iv);
    i_size[0] = idx;
  }
}

static void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, int32_T
  indexSize[2])
{
  static const int32_T iv[2] = { 1, 30 };

  static const int32_T iv1[2] = { 1, 30 };

  static char_T b_u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'V', 'e', 'c', 't', 'o', 'r', 'V',
    'e', 'c', 't', 'o', 'r' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[30];
  boolean_T c;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((matrixSize != 1) || (!(indexSize[1] != 1))) {
    c = false;
  } else {
    c = true;
  }

  st.site = &u_emlrtRSI;
  if (c) {
    for (i = 0; i < 30; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 30, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 30; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 30, m, &u[0]);
    emlrtAssign(&b_y, m);
    b_st.site = &y_emlrtRSI;
    error(&b_st, y, getString(&b_st, b_message(&b_st, b_y, &i_emlrtMCI),
           &i_emlrtMCI), &i_emlrtMCI);
  }
}

static const mxArray *emlrt_marshallOut(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv1[2] = { 1, 8 };

  static const int32_T iv2[1] = { 12 };

  static const char_T *sv[7] = { "isInitialized", "TunablePropsChanged",
    "inputVarSize", "CacheInputSizes", "Threshold", "pThreshold",
    "pFilterStates" };

  static const char_T *sv1[1] = { "f1" };

  cell_wrap c_u[1];
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
  const mxArray *m;
  const mxArray *y;
  creal_T f_u[12];
  real_T e_u;
  int32_T iv[1];
  int32_T i;
  int32_T u;
  uint32_T d_u[8];
  uint32_T *pData;
  boolean_T b_u;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(4, 1));
  emlrtSetCell(y, 0, b_emlrt_marshallOut(*moduleInstance->v));
  emlrtSetCell(y, 1, b_emlrt_marshallOut(*moduleInstance->b_v));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 7, sv));
  u = moduleInstance->sysobj.isInitialized;
  c_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = u;
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(b_y, 0, "isInitialized", c_y, 0);
  b_u = moduleInstance->sysobj.TunablePropsChanged;
  d_y = NULL;
  m = emlrtCreateLogicalScalar(b_u);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(b_y, 0, "TunablePropsChanged", d_y, 1);
  c_u[0] = moduleInstance->sysobj.inputVarSize[0];
  e_y = NULL;
  iv[0] = 1;
  emlrtAssign(&e_y, emlrtCreateStructArray(1, iv, 1, sv1));
  r = &c_u[0];
  for (u = 0; u < 8; u++) {
    d_u[u] = r->f1[u];
  }

  f_y = NULL;
  m = emlrtCreateNumericArray(2, &iv1[0], mxUINT32_CLASS, mxREAL);
  pData = (uint32_T *)emlrtMxGetData(m);
  u = 0;
  for (i = 0; i < 8; i++) {
    pData[u] = d_u[i];
    u++;
  }

  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(e_y, 0, "f1", f_y, 0);
  emlrtSetFieldR2017b(b_y, 0, "inputVarSize", e_y, 2);
  b_u = moduleInstance->sysobj.CacheInputSizes;
  g_y = NULL;
  m = emlrtCreateLogicalScalar(b_u);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(b_y, 0, "CacheInputSizes", g_y, 3);
  e_u = moduleInstance->sysobj.Threshold;
  h_y = NULL;
  m = emlrtCreateDoubleScalar(e_u);
  emlrtAssign(&h_y, m);
  emlrtSetFieldR2017b(b_y, 0, "Threshold", h_y, 4);
  e_u = moduleInstance->sysobj.pThreshold;
  i_y = NULL;
  m = emlrtCreateDoubleScalar(e_u);
  emlrtAssign(&i_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pThreshold", i_y, 5);
  memcpy(&f_u[0], &moduleInstance->sysobj.pFilterStates[0], 12U * sizeof(creal_T));
  j_y = NULL;
  m = emlrtCreateNumericArray(1, &iv2[0], mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m, &f_u[0], 8);
  emlrtAssign(&j_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pFilterStates", j_y, 6);
  emlrtSetCell(y, 2, b_y);
  k_y = NULL;
  m = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&k_y, m);
  emlrtSetCell(y, 3, k_y);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const int32_T u[2])
{
  static const int32_T iv[1] = { 2 };

  const mxArray *m;
  const mxArray *y;
  int32_T b_i;
  int32_T i;
  int32_T *pData;
  y = NULL;
  m = emlrtCreateNumericArray(1, &iv[0], mxINT32_CLASS, mxREAL);
  pData = (int32_T *)emlrtMxGetData(m);
  i = 0;
  for (b_i = 0; b_i < 2; b_i++) {
    pData[i] = u[b_i];
    i++;
  }

  emlrtAssign(&y, m);
  return y;
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *moduleInstance)
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

static void emlrt_marshallIn(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance, const emlrtStack *sp, const mxArray *u)
{
  emlrtMsgIdentifier thisId;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  thisId.fIdentifier = "v";
  b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, &thisId, u, 0)), "v",
                     *moduleInstance->v);
  thisId.fIdentifier = "v";
  b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, &thisId, u, 1)), "v",
                     *moduleInstance->b_v);
  thisId.fIdentifier = "sysobj";
  d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, &thisId, u, 2)), "sysobj",
                     &moduleInstance->sysobj);
  thisId.fIdentifier = "sysobj_not_empty";
  moduleInstance->sysobj_not_empty = l_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetCell(sp, &thisId, u, 3)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_v, const
  char_T *identifier, int32_T y[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  c_emlrt_marshallIn(sp, emlrtAlias(c_v), &thisId, y);
  emlrtDestroyArray(&c_v);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, int32_T y[2])
{
  m_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_sysobj,
  const char_T *identifier, comm_PreambleDetector *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  e_emlrt_marshallIn(sp, emlrtAlias(b_sysobj), &thisId, y);
  emlrtDestroyArray(&b_sysobj);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, comm_PreambleDetector *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[7] = { "isInitialized", "TunablePropsChanged",
    "inputVarSize", "CacheInputSizes", "Threshold", "pThreshold",
    "pFilterStates" };

  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 7, fieldNames, 0U, &dims);
  thisId.fIdentifier = "isInitialized";
  y->isInitialized = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 0, "isInitialized")), &thisId);
  thisId.fIdentifier = "TunablePropsChanged";
  y->TunablePropsChanged = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 1, "TunablePropsChanged")), &thisId);
  thisId.fIdentifier = "inputVarSize";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2,
    "inputVarSize")), &thisId, y->inputVarSize);
  thisId.fIdentifier = "CacheInputSizes";
  y->CacheInputSizes = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 3, "CacheInputSizes")), &thisId);
  thisId.fIdentifier = "Threshold";
  y->Threshold = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    4, "Threshold")), &thisId);
  thisId.fIdentifier = "pThreshold";
  y->pThreshold = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    5, "pThreshold")), &thisId);
  thisId.fIdentifier = "pFilterStates";
  k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 6,
    "pFilterStates")), &thisId, y->pFilterStates);
  emlrtDestroyArray(&u);
}

static int32_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, cell_wrap y[1])
{
  static const int32_T dims[1] = { 1 };

  static const char_T *fieldNames[1] = { "f1" };

  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 1, fieldNames, 1U, dims);
  thisId.fIdentifier = "f1";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "f1")),
                     &thisId, y[0].f1);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, uint32_T y[8])
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[12])
{
  r_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = g_emlrt_marshallIn(sp, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
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

static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "message", true, location);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, int32_T ret[2])
{
  static const int32_T dims[1] = { 2 };

  int32_T (*r)[2];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 1U, dims);
  r = (int32_T (*)[2])emlrtMxGetData(src);
  for (i = 0; i < 2; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static int32_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  int32_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 0U, &dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  boolean_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
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

static real_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[12])
{
  static const int32_T dims[1] = { 12 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", true, 1U, dims);
  emlrtImportArrayR2015b(sp, src, ret, 8, true);
  emlrtDestroyArray(&src);
}

static void xaxpy(int32_T n, creal_T a, emxArray_creal_T *x, emxArray_creal_T *y,
                  int32_T iy0)
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  n_t = (ptrdiff_t)n;
  incx_t = (ptrdiff_t)1;
  incy_t = (ptrdiff_t)1;
  zaxpy(&n_t, (real_T *)&a, (real_T *)&x->data[0], &incx_t, (real_T *)&y->
        data[iy0 - 1], &incy_t);
}

static void b_xaxpy(int32_T n, creal_T a, creal_T x[13], emxArray_creal_T *y,
                    int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if ((n < 1) || ((a.re == 0.0) && (a.im == 0.0))) {
  } else {
    ix = 0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y->data[iy].re += a.re * x[ix].re - a.im * x[ix].im;
      y->data[iy].im += a.re * x[ix].im + a.im * x[ix].re;
      ix++;
      iy++;
    }
  }
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

static void emxInit_creal_T1(emxArray_creal_T **pEmxArray, int32_T numDimensions)
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

static void emxEnsureCapacity_creal_T1(emxArray_creal_T *emxArray, int32_T
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

static void init_simulink_io_address(InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0_data = (creal_T (*)[6175])cgxertGetInputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->u0_sizes = (int32_T (*)[2])cgxertGetCurrentInputPortDimensions
    (moduleInstance->S, 0);
  moduleInstance->y0_data = (real_T (*)[6175])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->y0_sizes = (int32_T (*)[2])
    cgxertGetCurrentOutputPortDimensions(moduleInstance->S, 0);
  moduleInstance->y1_data = (real_T (*)[6175])cgxertGetOutputPortSignal
    (moduleInstance->S, 1);
  moduleInstance->y1_sizes = (int32_T (*)[2])
    cgxertGetCurrentOutputPortDimensions(moduleInstance->S, 1);
  moduleInstance->v = (int32_T (*)[2])cgxertGetDWork(moduleInstance->S, 0);
  moduleInstance->b_v = (int32_T (*)[2])cgxertGetDWork(moduleInstance->S, 1);
}

/* CGXE Glue Code */
static void mdlOutputs_Ub7GGzRGjzUCBR85QYKIZC(SimStruct *S, int_T tid)
{
  InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *moduleInstance =
    (InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_Ub7GGzRGjzUCBR85QYKIZC(SimStruct *S)
{
  InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *moduleInstance =
    (InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_Ub7GGzRGjzUCBR85QYKIZC(SimStruct *S, int_T tid)
{
  InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *moduleInstance =
    (InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_Ub7GGzRGjzUCBR85QYKIZC(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *moduleInstance =
    (InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_Ub7GGzRGjzUCBR85QYKIZC(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *moduleInstance =
    (InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_Ub7GGzRGjzUCBR85QYKIZC(SimStruct *S)
{
  InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *moduleInstance =
    (InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_Ub7GGzRGjzUCBR85QYKIZC(SimStruct *S)
{
  InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *moduleInstance =
    (InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_Ub7GGzRGjzUCBR85QYKIZC(SimStruct *S)
{
  InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *moduleInstance =
    (InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_Ub7GGzRGjzUCBR85QYKIZC(SimStruct *S)
{
  InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *moduleInstance =
    (InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC *)calloc(1, sizeof
    (InstanceStruct_Ub7GGzRGjzUCBR85QYKIZC));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_Ub7GGzRGjzUCBR85QYKIZC);
  ssSetmdlInitializeConditions(S, mdlInitialize_Ub7GGzRGjzUCBR85QYKIZC);
  ssSetmdlUpdate(S, mdlUpdate_Ub7GGzRGjzUCBR85QYKIZC);
  ssSetmdlTerminate(S, mdlTerminate_Ub7GGzRGjzUCBR85QYKIZC);
  ssSetmdlEnable(S, mdlEnable_Ub7GGzRGjzUCBR85QYKIZC);
  ssSetmdlDisable(S, mdlDisable_Ub7GGzRGjzUCBR85QYKIZC);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_Ub7GGzRGjzUCBR85QYKIZC(SimStruct *S)
{
}

void method_dispatcher_Ub7GGzRGjzUCBR85QYKIZC(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_Ub7GGzRGjzUCBR85QYKIZC(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_Ub7GGzRGjzUCBR85QYKIZC(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_Ub7GGzRGjzUCBR85QYKIZC(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_Ub7GGzRGjzUCBR85QYKIZC(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: Ub7GGzRGjzUCBR85QYKIZC.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_Ub7GGzRGjzUCBR85QYKIZC_BuildInfoUpdate(void)
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
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxArray * elem_15;
  mxArray * elem_16;
  mxArray * elem_17;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(1,4);
  elem_4 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_3,0,elem_4);
  elem_5 = mxCreateCellMatrix(1,1);
  elem_6 = mxCreateString("blas.h");
  mxSetCell(elem_5,0,elem_6);
  mxSetCell(elem_3,1,elem_5);
  elem_7 = mxCreateCellMatrix(1,1);
  elem_8 = mxCreateString("");
  mxSetCell(elem_7,0,elem_8);
  mxSetCell(elem_3,2,elem_7);
  elem_9 = mxCreateCellMatrix(1,1);
  elem_10 = mxCreateString("");
  mxSetCell(elem_9,0,elem_10);
  mxSetCell(elem_3,3,elem_9);
  mxSetCell(elem_1,1,elem_3);
  elem_11 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_11);
  elem_12 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_12);
  elem_13 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_13);
  elem_14 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_14);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_15 = mxCreateCellMatrix(1,1);
  elem_16 = mxCreateString("coder.internal.blas.BLASApi");
  mxSetCell(elem_15,0,elem_16);
  mxSetCell(mxBIArgs,1,elem_15);
  elem_17 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_17);
  return mxBIArgs;
}

mxArray *cgxe_Ub7GGzRGjzUCBR85QYKIZC_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("incompatibleVar");
  mxArray* incompatibleSymbol = mxCreateString("u_tmp1:  ");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
