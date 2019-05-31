/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol HMSymptomsHandlerDelegate;
@class HMFUnfairLock, NSUUID, _HMContext, NSHashTable, HMMutableArray, NSSet, NSString;

@interface HMSymptomsHandler : NSObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMObjectMerge> {

	HMFUnfairLock* _lock;
	NSUUID* _sfDeviceIdentifier;
	NSUUID* _uniqueIdentifier;
	id<HMSymptomsHandlerDelegate> _delegate;
	_HMContext* _context;
	NSHashTable* _fixSessions;
	NSUUID* _uuid;
	HMMutableArray* _currentSymptoms;

}

@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSHashTable * fixSessions;                                       //@synthesize fixSessions=_fixSessions - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) HMMutableArray * currentSymptoms;                              //@synthesize currentSymptoms=_currentSymptoms - In the implementation block
@property (setter=setSFDeviceIdentifier:,copy) NSUUID * sfDeviceIdentifier;                   //@synthesize sfDeviceIdentifier=_sfDeviceIdentifier - In the implementation block
@property (copy,readonly) NSSet * symptoms; 
@property (__weak) id<HMSymptomsHandlerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL canInitiateFix; 
@property (readonly) long long fixState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)__configureWithContext:(id)arg1 ;
-(void)_handleSymptomsUpdated:(id)arg1 ;
-(void)_handleSFDeviceIdentifierUpdated:(id)arg1 ;
-(void)_addFixSession:(id)arg1 ;
-(id)_findAndRemoveFixSessionsForSymptom:(id)arg1 ;
-(void)_callSymptomsUpdatedDelegate:(id)arg1 ;
-(void)setSFDeviceIdentifier:(id)arg1 ;
-(void)_callFixSessionAvailabilityUpdatedDelegate;
-(NSHashTable *)fixSessions;
-(BOOL)canInitiateFix;
-(long long)fixState;
-(void)initiateFixWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFixSessions:(NSHashTable *)arg1 ;
-(id)newFixSessionForSymptom:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)logIdentifier;
-(HMMutableArray *)currentSymptoms;
-(void)registerForMessages;
-(NSSet *)symptoms;
-(NSUUID *)sfDeviceIdentifier;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)setDelegate:(id<HMSymptomsHandlerDelegate>)arg1 ;
-(id<HMSymptomsHandlerDelegate>)delegate;
-(void)setContext:(_HMContext *)arg1 ;
-(_HMContext *)context;
-(NSUUID *)uniqueIdentifier;
-(id)initWithUUID:(id)arg1 ;
@end

