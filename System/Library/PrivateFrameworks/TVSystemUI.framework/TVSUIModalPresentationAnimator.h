/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface TVSUIModalPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _presenting;

}

@property (getter=isPresenting,nonatomic,readonly) BOOL presenting;              //@synthesize presenting=_presenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_alphaAnimationFactory;
+(id)_transformAnimationFactory;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)initForPresenting:(BOOL)arg1 ;
-(BOOL)isPresenting;
@end

