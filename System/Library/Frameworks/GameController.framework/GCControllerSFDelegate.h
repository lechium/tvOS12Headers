/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSUserActivityDelegate.h>

@class NSUserActivity, NSString;

@interface GCControllerSFDelegate : NSObject <NSUserActivityDelegate> {

	NSUserActivity* _activity;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startScan;
-(void)fireCompletionHandler;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)userActivityWasContinued:(id)arg1 ;
@end

