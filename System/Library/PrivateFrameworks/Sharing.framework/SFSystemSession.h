/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Sharing/Sharing-Structs.h>
@class SFSessionRequestInfo, SFSession, NSError, NSObject, SFDevice;

@interface SFSystemSession : NSObject {

	SFSessionRequestInfo* _currentRequest;
	BOOL _invalidateCalled;
	BOOL _pairVerifyDone;
	NSMutableArray* _requests;
	SFSession* _sfSession;
	int _state;
	BOOL _stateDone;
	NSError* _stateError;
	BOOL _allowUnencrypted;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SFDevice* _peerDevice;

}

@property (assign,nonatomic) BOOL allowUnencrypted;                                   //@synthesize allowUnencrypted=_allowUnencrypted - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
-(void)_runSFSessionStart;
-(BOOL)allowUnencrypted;
-(void)setAllowUnencrypted:(BOOL)arg1 ;
-(void)_runPairVerifyStart;
-(void)_processRequests;
-(void)_processRequestsWithError:(id)arg1 ;
-(void)getProfilesResponse:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)installProfileResponse:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)installProfileWithData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSystemInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)getProfilesWithCompletion:(/*^block*/id)arg1 ;
-(void)installProfileWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeProfileWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(SFDevice *)peerDevice;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(id)init;
-(void)invalidate;
-(void)_cleanup;
-(void)activate;
-(void)_run;
@end
