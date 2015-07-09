// This file generated by staff_codegen
// For more information please visit: http://code.google.com/p/staff/

#ifndef _microturbine_service_h_
#define _microturbine_service_h_

#include <staff/common/IService.h>

// *interface.targetNamespace: http://tempui.org/energy.Microturbine
// *interface.url: http://10.96.12.47:9090/axis2/services/staff.wsdl.Wsdl/get/energy.Microturbine/energy.Microturbine.microturbine_service.wsdl




namespace energy
{
namespace Microturbine
{

  //! microturbine_service service
  // *serviceUri: http://10.96.12.47:9090/axis2/services/energy.Microturbine.microturbine_service
  // *soapVersion: 1.1
  // *targetNamespace: http://tempui.org/energy.Microturbine
  class microturbine_service: public staff::IService
  {
  public:
    // *requestElement: microturbine_init
    // *responseElement: microturbine_initResult
    virtual double microturbine_init() = 0;

    // *requestElement: microturbine_presync
    // *responseElement: microturbine_presyncResult
    virtual int microturbine_presync(int t0, int t1) = 0;

    // *requestElement: microturbine_sync
    // *responseElement: microturbine_syncResult
    virtual double microturbine_sync(double CircuitA_V_Out_re, double CircuitA_V_Out_im, double CircuitB_V_Out_re, double CircuitB_V_Out_im, double CircuitC_V_Out_re, double CircuitC_V_Out_im, double LineA_V_Out_re, double LineA_V_Out_im, double LineB_V_Out_re, double LineB_V_Out_im, double LineC_V_Out_re, double LineC_V_Out_im) = 0;
  };

}
}

#endif // _microturbine_service_h_

