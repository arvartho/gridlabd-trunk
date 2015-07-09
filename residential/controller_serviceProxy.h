// This file generated by staff_codegen
// For more information please visit: http://code.google.com/p/staff/
// DO NOT EDIT

#ifndef _controller_serviceProxy_h_
#define _controller_serviceProxy_h_

#include <staff/client/ServiceClient.h>
#include "controller_service.h"

namespace energy
{
namespace Controller
{

//! Proxy for component service energy.Controller.controller_service
class controller_serviceProxy: public controller_service
{
public:
  controller_serviceProxy();
  virtual ~controller_serviceProxy();
  void Init(const std::string& sServiceUri, const std::string& sSessionId, const std::string& sInstanceId);
  void Deinit();
  virtual staff::ServiceClient* GetClient();
  double COpostsync(int control_mode, double base_setpoint);
  double COsync(double load, double demand, int pstate, double total, double target, double pAvg, double pStd, double base_setpoint, int control_mode, double market_current_frameclearing_price);
  double COinit(double market_init_price, int pstate, int market_period, int control_mode, double psetpoint, double base_setpoint, double heating_base_setpoint, double cooling_base_setpoint);
  int COpresync(double base_setpoint, double psetpoint, int control_mode);
private:
  mutable staff::ServiceClient m_tClient;
  std::string m_sServiceUri;
};

}
}

namespace staff
{
  class DataObject;
}

#endif

