#ifndef CODE_HPP
#define CODE_HPP

#include <stdio.h>

typedef enum
{
    CLOSED = 0,
    OPENED
} state_t;

typedef enum
{
    NONE = 0,
    OPEN_REQUEST,
    CLOSE_REQUEST
} event_t;

class StateMachine
{
public:
    StateMachine():m_state(CLOSED), m_lastEvent(NONE){};
    StateMachine(state_t state, event_t lastEvent) : m_state(state), m_lastEvent(lastEvent){};
    virtual ~StateMachine(){};
    bool ProcessEvent(event_t event)
    {
        bool success_ret = false;
        if (m_acceptEvent == true)
        {
            if ((m_state == CLOSED) && (m_incomingEvent == OPEN_REQUEST))
            {
                m_state = OPENED;
                printf("Opening successful.");
                success_ret = true;
            }
            else if ((m_state == OPENED) && (m_incomingEvent == CLOSE_REQUEST))
            {
                m_state = OPENED;
                printf("Closing successful.");
                success_ret = true;
            }
            else{
                printf("NOP!");
            }
        }
        return success_ret;
    }

private:
    state_t m_state;
    event_t m_incomingEvent;
    event_t m_lastEvent;
    bool m_acceptEvent = true;

protected:

};

#endif /* CODE_HPP */