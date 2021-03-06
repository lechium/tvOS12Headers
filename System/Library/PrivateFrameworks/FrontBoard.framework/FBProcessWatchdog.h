/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSProcessWatchdog.h>

@class FBProcessWatchdogEventContext;

@interface FBProcessWatchdog : FBSProcessWatchdog {

	long long _event;
	FBProcessWatchdogEventContext* _eventContext;

}

@property (nonatomic,readonly) long long event;                                                  //@synthesize event=_event - In the implementation block
@property (nonatomic,retain,readonly) FBProcessWatchdogEventContext * eventContext;              //@synthesize eventContext=_eventContext - In the implementation block
-(id)initWithProcess:(id)arg1 context:(id)arg2 policy:(id)arg3 ;
-(FBProcessWatchdogEventContext *)eventContext;
-(long long)event;
@end

