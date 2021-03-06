/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSOrientationObserverClientDelegate.h>

@protocol OS_dispatch_queue;
@class FBSOrientationObserverClient, NSObject, NSString;

@interface FBSOrientationObserver : NSObject <FBSOrientationObserverClientDelegate> {

	FBSOrientationObserverClient* _client;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callback_queue;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activeInterfaceOrientationWithCompletion:(/*^block*/id)arg1 ;
-(void)client:(id)arg1 handleOrientationUpdate:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)invalidate;
-(long long)activeInterfaceOrientation;
@end

