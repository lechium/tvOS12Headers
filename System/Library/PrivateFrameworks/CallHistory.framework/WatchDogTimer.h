/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHLogger.h>

@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface WatchDogTimer : CHLogger {

	NSString* _name;
	NSObject*<OS_dispatch_source> _timer;

}
-(id)initWithQueue:(id)arg1 withName:(id)arg2 withTimeout:(double)arg3 withCallback:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)cancel;
@end

