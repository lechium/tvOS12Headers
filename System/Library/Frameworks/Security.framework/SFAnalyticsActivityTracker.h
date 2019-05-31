/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSNumber;

@interface SFAnalyticsActivityTracker : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _name;
	Class _clientClass;
	NSNumber* _measurement;
	unsigned long long _start;
	BOOL _canceled;

}
-(id)initWithName:(id)arg1 clientClass:(Class)arg2 ;
-(void)performAction:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)cancel;
-(void)start;
@end

