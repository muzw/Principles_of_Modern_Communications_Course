/* Include files */

#include "plutoradioQPSKReceiverSimulinkExample_cgxe.h"
#include "m_Ub7GGzRGjzUCBR85QYKIZC.h"
#include "m_vHAnMVmLh1CgCfSUJQTdXF.h"
#include "m_n9qiS3NZi3czNDinGQRyrD.h"
#include "m_0c6M2Z1we8wWJZV74qc7u.h"

unsigned int cgxe_plutoradioQPSKReceiverSimulinkExample_method_dispatcher
  (SimStruct* S, int_T method, void* data)
{
  if (ssGetChecksum0(S) == 1776994513 &&
      ssGetChecksum1(S) == 228025440 &&
      ssGetChecksum2(S) == 2201190392 &&
      ssGetChecksum3(S) == 941130764) {
    method_dispatcher_Ub7GGzRGjzUCBR85QYKIZC(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3717111634 &&
      ssGetChecksum1(S) == 470570668 &&
      ssGetChecksum2(S) == 4197069618 &&
      ssGetChecksum3(S) == 3990427794) {
    method_dispatcher_vHAnMVmLh1CgCfSUJQTdXF(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 4140786925 &&
      ssGetChecksum1(S) == 3507626774 &&
      ssGetChecksum2(S) == 3563393237 &&
      ssGetChecksum3(S) == 1187127034) {
    method_dispatcher_n9qiS3NZi3czNDinGQRyrD(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 4220967490 &&
      ssGetChecksum1(S) == 4138185476 &&
      ssGetChecksum2(S) == 2218706996 &&
      ssGetChecksum3(S) == 2702297155) {
    method_dispatcher_0c6M2Z1we8wWJZV74qc7u(S, method, data);
    return 1;
  }

  return 0;
}
