/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface _UIRefreshControlAnimationDelegate : NSObject <CAAnimationDelegate> {

	/*^block*/id block;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)delegateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
@end

