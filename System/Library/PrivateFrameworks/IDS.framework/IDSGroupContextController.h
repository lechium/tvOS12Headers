/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSTransactionLogTaskHandlerDelegate.h>
#import <IDS/IDSGroupContextNotifyingObserverDelegate.h>

@protocol IDSGroupContextControllerDelegate, OS_dispatch_queue;
@class NSObject, CUTPromiseSeal, NSString;

@interface IDSGroupContextController : NSObject <IDSTransactionLogTaskHandlerDelegate, IDSGroupContextNotifyingObserverDelegate> {

	id<IDSGroupContextControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	CUTPromiseSeal* _seal;
	NSString* _serviceName;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) id<IDSGroupContextControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CUTPromiseSeal * seal;                                       //@synthesize seal=_seal - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                                      //@synthesize serviceName=_serviceName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)didCreateGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didCacheGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didReceiveDecryptionFailureForGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didReceiveRegistrationIdentityUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)_contentWithCompletion:(/*^block*/id)arg1 ;
-(void)groupContextWithCompletion:(/*^block*/id)arg1 ;
-(void)setSeal:(CUTPromiseSeal *)arg1 ;
-(void)qGroupContextWithDeviceIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)qSetupSeal;
-(void)taskHandler:(id)arg1 groupsWithGroupIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)taskHandler:(id)arg1 participantsWithDestinations:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)taskHandler:(id)arg1 messagesFromToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)taskHandler:(id)arg1 persistToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)persistedTokenForTaskHandler:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)taskHandler:(id)arg1 accountInfoForAliases:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(void)scheduleTransactionLogTask:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(CUTPromiseSeal *)seal;
-(void)dealloc;
-(void)setDelegate:(id<IDSGroupContextControllerDelegate>)arg1 ;
-(id<IDSGroupContextControllerDelegate>)delegate;
-(NSString *)serviceName;
-(NSObject*<OS_dispatch_queue>)queue;
@end

