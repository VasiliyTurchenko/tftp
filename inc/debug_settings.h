/**
  ******************************************************************************
  * @file    debug_settings.h
  * @author  turchenkov@gmail.com
  * @date    12-Mar-2018
  * @brief   debug defines for the project
  ******************************************************************************
  * @attention use at your own risk
  ******************************************************************************
  */ 

/* TFTP section */

#if (1)

#define	TFTP_STRESS_TEST
#define TFTP_ERR_STATS
#define	TFTP_STRESS_FILESIZE	( (uint32_t)32767998 )

#endif

#define	TFTP_DEBUG_PRINT

/* MQTT-SN PUB section */

//#define	MQTT_SN_PUB_DEBUG_PRINT

/* MQTT-SN SUB section */

#define	MQTT_SN_SUB_DEBUG_PRINT

/* CONF_FN sections */

#define CONF_FN_DEBUG_PRINT

/* NTP section */

#define _NTP_DEBUG_PRINT

/* JSON section */

//#define JSON_DEBUG_PRINT

/* DAQ section */

//#define DAQ_DEBUG_PRINT

/* ################################### E.O.F. ################################################### */
