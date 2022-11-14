#include "TEMPLATE_statemachine.hpp"

bool StateMachine::ProcessEvent(event_t event)
{
    bool success_ret = false;
    if (m_acceptEvent == true)
    {
        // TODO statemachine logic - for now: just change incoming event variable.
        m_incomingEvent = event;
        success_ret = true;
    }
    return success_ret;
}

event_t StateMachine::getIncomingEvent()
{
    return m_incomingEvent;
}