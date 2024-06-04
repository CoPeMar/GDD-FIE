/*
 * emu_tc_programming.cpp
 *
 *  Created on: Jan 13, 2017
 *      Author: user
 */

#include <public/emu_hw_timecode_drv_v1.h>
#include <public/emu_sc_channel_drv_v1.h>
#include <public/emu_gss_v1.h>


#define FT_UAH_EXP_SERV_129_0002

//TODO


#ifdef FT_UAH_EXP_SERV_129_0001


EmuGSS_TCProgram129_2 prog_FT_0001_step_0(UNITIME_AFTER_POWER_ON + 15,
					"FT_UAH_EXP_SERV_129_00XX step 0, Set Kp", 0.2, 0.2);

EmuGSS_TCProgram129_1 prog_FT_0001_step_1(UNITIME_AFTER_POWER_ON + 20,
					"FT_UAH_EXP_SERV_129_00XX step 1, Set Command Vx and Vy "
					, 3.2, 5.4);



#endif

#ifdef FT_UAH_EXP_SERV_129_0002


EmuGSS_TCProgram3_5 prog_FT_0002_step_0(UNITIME_AFTER_POWER_ON + 2,
					"FT_UAH_EXP_SERV_129_0002 step 0, enable reporting SID 10"
					,10);

EmuGSS_TCProgram3_6 prog_FT_0002_step_1(UNITIME_AFTER_POWER_ON + 3,
					"FT_UAH_EXP_SERV_129_0002 step 1, disable reporting SID 0"
					,0);

EmuGSS_TCProgram129_2 prog_FT_0002_step_2(UNITIME_AFTER_POWER_ON + 15,
					"FT_UAH_EXP_SERV_129_0002 step 2, Set Kp", 0.2, 0.2);

EmuGSS_TCProgram129_1 prog_FT_0002_step_3(UNITIME_AFTER_POWER_ON + 20,
					"FT_UAH_EXP_SERV_129_0002 step 3, Set Command Vx and Vy "
					, 10, 0);



#endif



