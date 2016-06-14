/******************************************************************************/
/******************************************************************************/
/****** Cascoda Ltd. 2014, CA-821X EVB Driver Code                       ******/
/******************************************************************************/
/******************************************************************************/
/****** EvaBoard Management Entity (EVBME) Definitions/Declarations      ******/
/******************************************************************************/
/******************************************************************************/
/****** Revision           Notes                                         ******/
/******************************************************************************/
/****** 1.0  19/07/14  WB  Release Baseline                              ******/
/******************************************************************************/
/******************************************************************************/
#include "dev/ca8210/cascoda/include/cascoda_types.h"

#ifndef TEST15_4_MAC_EVBME_H
#define TEST15_4_MAC_EVBME_H


/******************************************************************************/
/****** EVBME Command ID Codes                                           ******/
/******************************************************************************/
#define EVBME_PIB_TEST_REQUEST          (0x86)
#define EVBME_SCAN_TEST_REQUEST         (0x87)
#define EVBME_SECPIB_TEST_REQUEST       (0x88)
#define EVBME_FFD_INIT_REQUEST          (0x89)
#define EVBME_FFD_START_REQUEST         (0x8A)
#define EVBME_DATA_TEST_REQUEST         (0x8B)
#define EVBME_RFD_ASSOCIATE_REQUEST     (0x8C)
#define EVBME_FFD_AWAIT_ASSOC_REQUEST   (0x8D)
#define EVBME_FFD_AWAIT_ORPHAN_REQUEST  (0x8E)


/******************************************************************************/
/****** EVBME API Functions                                              ******/
/******************************************************************************/
void TEST15_4_MAC_UpStreamDispatch(void);
void TEST15_4_MAC_DownStreamDispatch(void);


#endif // TEST15_4_MAC_EVBME_H
