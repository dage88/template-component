#ifndef TEMPLATE_STATEMACHINE_HPP
#define TEMPLATE_STATEMACHINE_HPP

#include "template_types.hpp"

class StateMachine
{
public:
    StateMachine():m_state(STATE_UNINITIALIZED), m_lastEvent(EVENT_NONE){};
    StateMachine(state_t state, event_t lastEvent) : m_state(state), m_lastEvent(lastEvent){};
    virtual ~StateMachine(){};
    
    virtual bool ProcessEvent(event_t event);

private:
    state_t m_state;
    event_t m_incomingEvent;
    event_t m_lastEvent;
    bool m_acceptEvent = true;

protected:

};

bool StateMachine::ProcessEvent(event_t event)
{
    bool success_ret = false;
    if (m_acceptEvent == true)
    {
        //TODO statemachine logic
        success_ret = true;
    }
    return success_ret;
}
#endif /* TEMPLATE_STATEMACHINE_HPP */