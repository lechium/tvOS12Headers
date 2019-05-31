/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPDSecureBackupDelegate.h>
#import <libobjc.A.dylib/CDPDCircleDelegate.h>

@protocol CDPStateUIProviderInternal;
@class CDPContext, CDPDPCSController, CDPDCircleController, CDPDSecureBackupController;

@interface CDPDStateMachine : NSObject <CDPDSecureBackupDelegate, CDPDCircleDelegate> {

	CDPContext* _context;
	id<CDPStateUIProviderInternal> _uiProvider;
	CDPDPCSController* _pcsController;
	CDPDCircleController* _circleController;
	CDPDSecureBackupController* _secureBackupController;
	BOOL _attemptedCDPEnable;

}

@property (nonatomic,retain) CDPDSecureBackupController * secureBackupController;              //@synthesize secureBackupController=_secureBackupController - In the implementation block
@property (nonatomic,retain) CDPDCircleController * circleController;                          //@synthesize circleController=_circleController - In the implementation block
@property (nonatomic,retain) CDPDPCSController * pcsController;                                //@synthesize pcsController=_pcsController - In the implementation block
@property (nonatomic,retain) CDPContext * context;                                             //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<CDPStateUIProviderInternal> uiProvider;                        //@synthesize uiProvider=_uiProvider - In the implementation block
@property (assign,nonatomic) BOOL attemptedCDPEnable;                                          //@synthesize attemptedCDPEnable=_attemptedCDPEnable - In the implementation block
-(CDPDCircleController *)circleController;
-(void)setCircleController:(CDPDCircleController *)arg1 ;
-(CDPDSecureBackupController *)secureBackupController;
-(void)setSecureBackupController:(CDPDSecureBackupController *)arg1 ;
-(id<CDPStateUIProviderInternal>)uiProvider;
-(id)contextForController:(id)arg1 ;
-(void)circleController:(id)arg1 secureBackupRecordsArePresentWithCompletion:(/*^block*/id)arg2 ;
-(id)secureChannelContextForController:(id)arg1 ;
-(void)shouldPerformRepairWithCompletion:(/*^block*/id)arg1 ;
-(id)circlePeerIDForSecureBackupController:(id)arg1 ;
-(BOOL)synchronizeCircleViewsForSecureBackupContext:(id)arg1 ;
-(void)promptForAdoptionOfMultipleICSCWithCompletion:(/*^block*/id)arg1 ;
-(void)promptForLocalSecretWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_enrollOrDisableCDPAfterEnabledStateVerified:(/*^block*/id)arg1 ;
-(void)_handleiCDPStatusCheckError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_attemptCDPEnable:(/*^block*/id)arg1 ;
-(void)_handlePreflightError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_preflightAccountStateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleJoinResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleRecoveryResetRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)_recoverSecureBackupWithCircleJoinResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_disableCloudDataProtectionWithCompletion:(/*^block*/id)arg1 ;
-(void)_enableSecureBackupWithCircleJoinResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resetAccountCDPStateWithCompletion:(/*^block*/id)arg1 ;
-(id)_predicateForRecordUpgradeCheckIgnoringBottled;
-(void)_confirmCDPEligibilityWithCompletion:(/*^block*/id)arg1 ;
-(void)_refreshAndAuthenticateWithContext:(id)arg1 ;
-(void)_authenticatedShouldPerformRepairWithCompletion:(/*^block*/id)arg1 ;
-(void)_authenticatedRepairCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_performInteractivelyAuthenticatedRepair:(/*^block*/id)arg1 ;
-(void)_enableKVSForAccount:(id)arg1 store:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldAllowCDPEnrollment;
-(void)_attemptBackupRecoveryWithLocalSecret:(id)arg1 type:(unsigned long long)arg2 useCachedSecret:(BOOL)arg3 circleJoinResult:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_handleInteractiveRecoveryFlowWithCircleJoinResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_attemptBackupRecoveryByPromptingForRemoteSecretWithLocalSecret:(id)arg1 localSecretType:(unsigned long long)arg2 useCachedSecret:(BOOL)arg3 circleJoinResult:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_postRecoveryEnableSecureBackupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_predicateForRecordUpgradeCheck;
-(CDPDPCSController *)pcsController;
-(void)setPcsController:(CDPDPCSController *)arg1 ;
-(BOOL)attemptedCDPEnable;
-(void)setAttemptedCDPEnable:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 uiProvider:(id)arg2 ;
-(void)repairCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(void)setUiProvider:(id<CDPStateUIProviderInternal>)arg1 ;
-(void)handleCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setContext:(CDPContext *)arg1 ;
-(CDPContext *)context;
@end

