/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface CMKAnimationDelegate : NSObject <CAAnimationDelegate> {

	/*^block*/id _completion;
	/*^block*/id _start;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id start;                                //@synthesize start=_start - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)start;
-(void)animationDidStart:(id)arg1 ;
-(void)setStart:(id)arg1 ;
@end

