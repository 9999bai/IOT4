#pragma once

#include "myHelper/myHelper.h"
#include "Control/Control.h"
#include "Mediator/Mediator.h"

class ModbusTcpControl : public  Control
{
public:
    ModbusTcpControl(const std::vector<iot_gateway>& v_gateway);
    ~ModbusTcpControl();

    void ControlFunc(const iot_data_item &item, const std::vector<controlmediator>& v_controlmediator);

private:
    void controlModbusTCP(int gateway_id, const std::string &value, const iot_device &t_device, iot_template &templat, const iot_sub_template &sub_templat, const std::vector<controlmediator>& v_controlmediator);

};