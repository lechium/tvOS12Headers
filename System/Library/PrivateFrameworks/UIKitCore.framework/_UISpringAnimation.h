/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CASpringAnimation.h>

@class _UISpringAnimationDelegate;

@interface _UISpringAnimation : CASpringAnimation

@property (nonatomic,retain) _UISpringAnimationDelegate * delegate; 
+(double)defaultAnimationDuration;
+(void)setDefaultDamping:(double)arg1 ;
+(double)defaultDamping;
+(void)setDefaultStiffness:(double)arg1 ;
+(double)defaultStiffness;
+(id)springAnimationWithKeyPath:(id)arg1 toLayer:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 ;
-(id)init;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
@end
