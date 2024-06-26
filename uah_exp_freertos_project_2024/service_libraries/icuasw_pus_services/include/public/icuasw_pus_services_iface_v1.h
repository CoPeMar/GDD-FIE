#ifndef PUBLIC__ICUASW_PUS_SERVICES_IFACE_V1_H
#define PUBLIC__ICUASW_PUS_SERVICES_IFACE_V1_H

#include <public/cdtmlist_iface_v1.h>

#include "public/config.h"
#include "public/basic_types.h"
#include "public/serialize.h"
#include "public/cdtchandler_iface_v1.h"
#include "public/cdtmhandler.h"
#include "public/cdeventlist_iface_v1.h"


#define DATAPOOL_PARAMNumber 64
typedef uint16_t sysdatapool_element_t;

class SystemDataPool{

	friend class PUSService3;
	friend class PUSService12;
	friend class PUSService20;
	friend class PUSService129;

private:

	static sysdatapool_element_t sParamCurrentValue[DATAPOOL_PARAMNumber];

	static void Init();

	static void SetFromInt16(int index, int16_t Value);

};


#include "../icuasw_pus_services/icuasw_pus_service1.h"
#include "../icuasw_pus_services/icuasw_pus_service2.h"
#include "../icuasw_pus_services/icuasw_pus_service3.h"
#include "../icuasw_pus_services/icuasw_pus_service5.h"
#include "../icuasw_pus_services/icuasw_pus_service9.h"
#include "../icuasw_pus_services/icuasw_pus_service12.h"
#include "../icuasw_pus_services/icuasw_pus_service17.h"
#include "../icuasw_pus_services/icuasw_pus_service19.h"
#include "../icuasw_pus_services/icuasw_pus_service20.h"
#include "../icuasw_pus_services/icuasw_pus_service128.h"
#include "../icuasw_pus_services/icuasw_pus_service129.h"

class PUSPrioTCExecutor {

public:
	static void ExecTC(CDTCHandler &tc_handler, CDTMList &tm_list,
			CDEventList &eventList);
};

class PUS_HK_FDIR_TCExecutor {

public:
	static void ExecTC(CDTCHandler &tc_handler, CDTMList &tm_list,
			CDEventList &eventList);
};

class PUS_BKGTCExecutor{

public:

	static void ExecTC(CDTCHandler &tc_handler, CDTMList &tm_list,
			CDEventList &eventList);

};

class PUS_GuidanceTCExecutor{

public:

	static void ExecTC(CDTCHandler &tc_handler, CDTMList &tm_list,
			CDEventList &eventList);

};



/*PROTECTED REGION END*/



#endif // PUBLIC__CONSOLE_DRV_IFACE_V1_H
