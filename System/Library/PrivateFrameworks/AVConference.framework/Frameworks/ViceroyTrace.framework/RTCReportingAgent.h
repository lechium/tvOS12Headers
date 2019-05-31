/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViceroyTrace/ViceroyTrace-Structs.h>
#import <libobjc.A.dylib/VCAggregatorDelegate.h>
#import <libobjc.A.dylib/RTCReportingMessageSentNotifier.h>

@protocol OS_dispatch_queue;
@class RTCReporting, NSObject, NSArray, VCAggregator, NSMutableDictionary, NSString;

@interface RTCReportingAgent : NSObject <VCAggregatorDelegate, RTCReportingMessageSentNotifier> {

	unsigned _callID;
	RTCReporting* _reportingObject;
	void* _symptomReporter;
	NSObject*<OS_dispatch_queue> _reportingQueue;
	NSArray* _backends;
	VCAggregator* _aggregator;
	int _clientType;
	int _nextUnassignedReportingModuleID;
	NSMutableDictionary* _userInfoMap;
	BOOL _forceDisableABC;

}

@property (retain) RTCReporting * reportingObject;                             //@synthesize reportingObject=_reportingObject - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> reportingQueue;              //@synthesize reportingQueue=_reportingQueue - In the implementation block
@property (copy) NSArray * backends;                                           //@synthesize backends=_backends - In the implementation block
@property (retain) VCAggregator * aggregator;                                  //@synthesize aggregator=_aggregator - In the implementation block
@property (assign) int clientType;                                             //@synthesize clientType=_clientType - In the implementation block
@property (readonly) int nextUnassignedReportingModuleID; 
@property (readonly) NSMutableDictionary * userInfoMap;                        //@synthesize userInfoMap=_userInfoMap - In the implementation block
@property (getter=isABCForceDisabled) BOOL forceDisableABC;                    //@synthesize forceDisableABC=_forceDisableABC - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setClientType:(int)arg1 ;
-(int)clientType;
-(void)report:(id)arg1 segmentDirection:(int)arg2 ;
-(void)reportQR:(id)arg1 ;
-(void)initAdaptiveLearningWithParameters:(id)arg1 ;
-(id)deriveFromParentHierarchyToken:(id)arg1 ;
-(void)sendAggregatedCallReport;
-(void)sendAggregatedSessionReport;
-(void)didSendMessageForReportingClient:(id)arg1 event:(id)arg2 ;
-(int)nextUnassignedReportingModuleID;
-(id)initWithCallID:(unsigned)arg1 clientType:(int)arg2 parentHierarchyToken:(id)arg3 ;
-(void)releaseReportingObject;
-(void)reportingSymptom:(unsigned)arg1 withOptionalDict:(CFDictionaryRef)arg2 ;
-(void)reportingSetReportCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
-(RTCReporting *)reportingObject;
-(void)setReportingObject:(RTCReporting *)arg1 ;
-(NSObject*<OS_dispatch_queue>)reportingQueue;
-(void)setAggregator:(VCAggregator *)arg1 ;
-(NSMutableDictionary *)userInfoMap;
-(BOOL)isABCForceDisabled;
-(void)setForceDisableABC:(BOOL)arg1 ;
-(int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2 ;
-(VCAggregator *)aggregator;
-(NSArray *)backends;
-(void)setBackends:(NSArray *)arg1 ;
-(void)dealloc;
@end

