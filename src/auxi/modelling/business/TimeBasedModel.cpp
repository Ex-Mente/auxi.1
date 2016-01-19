#include "TimeBasedModel.h"
#include <boost/lexical_cast.hpp>
#include <iostream>
#include <cmath>
#include <limits>



using namespace auxi::modelling::business;

TimeBasedModel::TimeBasedModel()
{
    //ctor
    initialize();
}

TimeBasedModel::TimeBasedModel(const TimeBasedModel& other)
{
    m_entityList = other.m_entityList;
    m_currency = other.m_currency;
    m_totalIntervalsToRun = other.m_totalIntervalsToRun;
    m_clock = other.m_clock;
}

TimeBasedModel::~TimeBasedModel()
{

}

std::vector<Entity*>& TimeBasedModel::GetEntityList() { return m_entityList; }
Units& TimeBasedModel::GetCurrency() { return m_currency; }
void TimeBasedModel::SetCurrency(Units& value) { m_currency = value; }
int TimeBasedModel::GetTotalIntervalsToRun() const { return m_totalIntervalsToRun; }
void TimeBasedModel::SetTotalIntervalsToRun(int value) { m_totalIntervalsToRun = value; }
Clock& TimeBasedModel::GetClock() { return m_clock; }


    
    
    
namespace auxi { namespace modelling { namespace business { 
    bool operator==(const TimeBasedModel& lhs, const TimeBasedModel& rhs)
    {
        return 1 == 1
	  && lhs.m_entityList == rhs.m_entityList
	  && lhs.m_currency == rhs.m_currency
	  && lhs.m_totalIntervalsToRun == rhs.m_totalIntervalsToRun
	  && lhs.m_clock == rhs.m_clock
	  ;
    }

    bool operator!=(const TimeBasedModel& lhs, const TimeBasedModel& rhs)
    {
        return 1 != 1
	  || lhs.m_entityList != rhs.m_entityList
	  || lhs.m_currency != rhs.m_currency
	  || lhs.m_totalIntervalsToRun != rhs.m_totalIntervalsToRun
	  || lhs.m_clock != rhs.m_clock
	;
    }

    std::ostream& operator<<(std::ostream& os, const TimeBasedModel& obj)
    {

        os << obj.GetName();
        return os;
    }
}
}
}