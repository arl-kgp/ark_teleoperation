#include "subscribe_ark_commands.h"

Subscribe_ark_commands::Subscribe_ark_commands(Shared_Memory* shared_memory, threadGUI* t_gui)
{
    this->shared_memory = shared_memory;
    this->t_gui = t_gui;
    this->t_gui->gui->channel34->setYValue(1800);
    this->t_gui->gui->channel12->setYValue(1800);
}
