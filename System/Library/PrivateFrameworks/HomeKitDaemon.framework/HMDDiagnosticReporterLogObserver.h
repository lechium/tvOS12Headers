/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDLogEventObserver.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, SDRDiagnosticReporter, NSString;

@interface HMDDiagnosticReporterLogObserver : HMFObject <HMDLogEventObserver, HMFLogging> {

	NSObject*<OS_dispatch_queue> _clientQueue;
	SDRDiagnosticReporter* _reporter;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) SDRDiagnosticReporter * reporter;                                //@synthesize reporter=_reporter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)supportedEventTypes;
+(BOOL)shouldSubmitEvent:(id)arg1 ;
+(id)typeForEvent:(id)arg1 ;
+(id)subTypeForEvent:(id)arg1 ;
+(id)sharedObserver;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)dispatcher:(id)arg1 didReceiveEvent:(id)arg2 ;
-(SDRDiagnosticReporter *)reporter;
-(id)init;
-(void)stop;
-(void)start;
@end

