/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXLoggingSubsystem : NSObject {

	BOOL _ignoreLogging;

}

@property (assign,nonatomic) BOOL ignoreLogging; 
+(double)threshold;
+(void)initializeSubsytem;
+(id)_errorWithMessage:(id)arg1 underlyingError:(id)arg2 ;
+(id)subsystems;
+(id)wrapError:(id)arg1 description:(id)arg2 ;
+(BOOL)shouldIncludeBacktraceInLogs;
+(BOOL)shouldIncludeFileLineAndFunctionInLogs;
+(BOOL)shouldProcessMessageForLogs;
+(int)defaultLogLevel;
+(BOOL)willLog;
+(BOOL)willLogInfo;
+(BOOL)willLogDebug;
+(id)errorWithDescription:(id)arg1 ;
+(id)identifier;
+(void)initialize;
+(id)sharedInstance;
-(BOOL)ignoreLogging;
-(void)setIgnoreLogging:(BOOL)arg1 ;
@end

