/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface AFUISiriPPTManager : NSObject {

	BOOL _runningPPT;
	NSString* _currentTestName;
	NSDictionary* _testOptions;

}

@property (nonatomic,readonly) BOOL runningPPT;                              //@synthesize runningPPT=_runningPPT - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentTestName;              //@synthesize currentTestName=_currentTestName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * testOptions;              //@synthesize testOptions=_testOptions - In the implementation block
+(id)sharedManager;
-(NSString *)currentTestName;
-(void)setRunningPPT:(BOOL)arg1 withTestName:(id)arg2 testOptions:(id)arg3 ;
-(void)setRunningPPT:(BOOL)arg1 withTestName:(id)arg2 ;
-(BOOL)isRunningTestName:(id)arg1 ;
-(BOOL)runningPPT;
-(NSDictionary *)testOptions;
-(void)reset;
@end

