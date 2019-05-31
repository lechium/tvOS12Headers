/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PFLoggerBackend, OS_dispatch_queue;
#import <PhotoFoundation/PhotoFoundation-Structs.h>
@class NSObject, NSArray, NSString, NSDictionary, NSSet;

@interface PFLogger : NSObject {

	BOOL _shouldLogToCrashReporter;
	BOOL _backendAllowsConcurrentAccess;
	int _logLevel;
	NSObject*<PFLoggerBackend> _backend;
	NSArray* _tracedSubsystems;
	NSArray* _debuggedSubsystems;
	NSString* _facilityPrefix;
	NSDictionary* _options;
	NSObject*<OS_dispatch_queue> _backendAccessSerializationQueue;
	NSObject*<OS_dispatch_queue> _recordedSubsystemsQueue;
	NSSet* _recordedSubsystems;

}

@property (retain) NSString * facilityPrefix;                                                 //@synthesize facilityPrefix=_facilityPrefix - In the implementation block
@property (retain) NSDictionary * options;                                                    //@synthesize options=_options - In the implementation block
@property (retain) NSObject*<PFLoggerBackend> backend;                                        //@synthesize backend=_backend - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> backendAccessSerializationQueue;              //@synthesize backendAccessSerializationQueue=_backendAccessSerializationQueue - In the implementation block
@property (assign) BOOL backendAllowsConcurrentAccess;                                        //@synthesize backendAllowsConcurrentAccess=_backendAllowsConcurrentAccess - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> recordedSubsystemsQueue;                      //@synthesize recordedSubsystemsQueue=_recordedSubsystemsQueue - In the implementation block
@property (retain) NSSet * recordedSubsystems;                                                //@synthesize recordedSubsystems=_recordedSubsystems - In the implementation block
@property (assign) int logLevel;                                                              //@synthesize logLevel=_logLevel - In the implementation block
@property (assign) BOOL shouldLogToCrashReporter;                                             //@synthesize shouldLogToCrashReporter=_shouldLogToCrashReporter - In the implementation block
@property (retain) NSArray * tracedSubsystems;                                                //@synthesize tracedSubsystems=_tracedSubsystems - In the implementation block
@property (retain) NSArray * debuggedSubsystems;                                              //@synthesize debuggedSubsystems=_debuggedSubsystems - In the implementation block
+(id)defaultLogger;
+(int)defaultLoggerLogLevel;
+(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4 ;
+(void)flushDefaultLoggerIfPresent;
+(id)createDefaultLogger;
+(void)setDefaultLogger:(id)arg1 ;
+(id)backendsFromUserDefaultsWithLogLevel:(int)arg1 ;
+(id)loggerWithBackend:(id)arg1 logLevel:(int)arg2 options:(id)arg3 ;
+(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4 arguments:(char*)arg5 ;
+(void)logCrashReporterMessage:(id)arg1 fromCodeLocation:(SCD_Struct_PF5*)arg2 ;
+(void)setupCrashReporter;
+(void)recreateDefaultLogger;
+(BOOL)enabledForSubsystem:(id)arg1 level:(int)arg2 ;
+(void)logCrashReporterMessageFromCodeLocation:(SCD_Struct_PF5*)arg1 format:(id)arg2 ;
+(BOOL)traceEnabledForSubsystem:(id)arg1 ;
+(void)initialize;
-(void)setLogLevel:(int)arg1 ;
-(int)logLevel;
-(NSObject*<PFLoggerBackend>)backend;
-(void)setBackend:(NSObject*<PFLoggerBackend>)arg1 ;
-(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4 ;
-(void)processOptions;
-(id)initWithBackend:(id)arg1 logLevel:(int)arg2 options:(id)arg3 ;
-(void)setTracedSubsystems:(NSArray *)arg1 ;
-(void)setDebuggedSubsystems:(NSArray *)arg1 ;
-(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4 arguments:(char*)arg5 ;
-(NSArray *)tracedSubsystems;
-(NSArray *)debuggedSubsystems;
-(BOOL)enabledForSubsystem:(id)arg1 subsystems:(id)arg2 ;
-(void)_recordSubsystem:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)backendAccessSerializationQueue;
-(NSSet *)recordedSubsystems;
-(void)setRecordedSubsystems:(NSSet *)arg1 ;
-(BOOL)shouldLogToCrashReporter;
-(void)setShouldLogToCrashReporter:(BOOL)arg1 ;
-(NSString *)facilityPrefix;
-(void)setFacilityPrefix:(NSString *)arg1 ;
-(void)setBackendAccessSerializationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)backendAllowsConcurrentAccess;
-(void)setBackendAllowsConcurrentAccess:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)recordedSubsystemsQueue;
-(void)setRecordedSubsystemsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)description;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)flush;
@end
