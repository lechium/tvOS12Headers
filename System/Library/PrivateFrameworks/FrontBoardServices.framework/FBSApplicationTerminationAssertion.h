/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BKSTerminationAssertion, NSObject, NSString;

@interface FBSApplicationTerminationAssertion : NSObject {

	BKSTerminationAssertion* _assertion;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _bundleID;
	NSString* _reason;
	long long _assertionState;

}

@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,copy,readonly) NSString * reason; 
@property (nonatomic,readonly) long long assertionState; 
+(id)_queue;
-(long long)assertionState;
-(id)initWithBundleID:(id)arg1 reason:(id)arg2 acquisitionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)description;
-(NSString *)reason;
-(void)invalidate;
-(NSString *)bundleID;
@end

