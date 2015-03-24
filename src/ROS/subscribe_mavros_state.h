#ifndef SUBSCRIBE_MAVROS_STATE_H
#define SUBSCRIBE_MAVROS_STATE_H

#include <ros/ros.h>
#include <mavros/State.h>

#include "../shared_memory.h"

class Subscribe_mavros_state
{
public:
    Subscribe_mavros_state(Shared_Memory* shared_memory);
    void mavrosStateCb(const mavros::StateConstPtr &msg);

private:
    Shared_Memory* shared_memory;

    std::string mode;
    bool armed;
    bool guided;
};
#endif // SUBSCRIBE_MAVROS_STATE_H