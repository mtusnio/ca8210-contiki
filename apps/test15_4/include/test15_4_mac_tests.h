/******************************************************************************/
/******************************************************************************/
/****** Cascoda Ltd. 2014, CA-821X EVB Driver Code                       ******/
/******************************************************************************/
/******************************************************************************/
/****** MAC Tests Definitions/Declarations                               ******/
/******************************************************************************/
/******************************************************************************/
/****** Revision           Notes                                         ******/
/******************************************************************************/
/****** 1.0  19/07/14  WB  Release Baseline                              ******/
/******************************************************************************/
/******************************************************************************/
#include "dev/ca8210/cascoda/include/cascoda_types.h"

#ifndef TEST15_4_MAC_TESTS_H
#define TEST15_4_MAC_TESTS_H


/******************************************************************************/
/****** Global Variables for MAC Tests defined in test15_4_mac_tests.c   ******/
/******************************************************************************/
extern u8_t    MyChannel;
extern u8_t    MyDeviceNumber;
extern u16_t   MyShortAddress;
extern u16_t   MyPANId;
extern u8_t    MyIEEEAddress[8];
extern u16_t   DstShortAddress;
extern u8_t    DstIEEEAddress[8];


/******************************************************************************/
/****** Data from SetupAwaitAssoc() and SetupAwaitOrphan()               ******/
/******************************************************************************/
extern u8_t    AssocDeviceAddress[8];
extern u8_t    OrphanDeviceAddress[8];
extern u8_t    AllZeroes[8];
extern u16_t   StoredAssocShortAddress;
extern u8_t    StoredAssocStatus;
extern u16_t   StoredOrphanShortAddress;


/******************************************************************************/
/****** PIB Test Data                                                    ******/
/******************************************************************************/
extern SecSpec_t     Security;


/******************************************************************************/
/****** Function Declarations for test15_4_mac_tests.c                   ******/
/******************************************************************************/
u8_t InitialiseDevice( u8_t Channel, u16_t PANId, u16_t ShortAddress, u8_t *pExtAddress );
u8_t StartDevice( u8_t Length, u8_t *pBeacon );
void InitSecurity( void );
void PIBTest( void );
void SecPIBTest( void );
void OrphanScanTest( void );
void SimpleTxTest( u8_t TxOpt );
u8_t DataTest0( u8_t i, u8_t TxOpt, u16_t DestShort );
u8_t DataTest1( u8_t i, u8_t TxOpt, u16_t DestShort );
u8_t DataTest( u8_t NoOfRequests, u8_t TxOpt, u16_t DestShort, u8_t Type );
void ScanTest( void );
void AssocNonSleepyTest( void );
void AssocSleepyTest( void );
u8_t AssocTest( u8_t Attribute, u8_t Seconds );
void SetupAwaitAssoc( u8_t *pDeviceAddress, u16_t AssocShortAddress, u8_t Status );
void SetupAwaitOrphan( u8_t *pDeviceAddress, u16_t OrphanShortAddress );


#endif // TEST15_4_MAC_TESTS_H
