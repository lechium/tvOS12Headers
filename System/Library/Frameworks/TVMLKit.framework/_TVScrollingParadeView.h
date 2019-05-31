/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol OS_dispatch_group;
@class NSObject, NSMutableArray, __TVImageLoaderQueue, NSArray, NSString;

@interface _TVScrollingParadeView : UIView <CAAnimationDelegate> {

	BOOL _animating;
	unsigned long long _additionalImageViewCount;
	NSObject*<OS_dispatch_group> _animationGroup;
	NSMutableArray* _imageViews;
	__TVImageLoaderQueue* _loaderQueue;
	BOOL _paused;
	NSArray* _imageProxies;

}

@property (nonatomic,copy) NSArray * imageProxies;                     //@synthesize imageProxies=_imageProxies - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;              //@synthesize paused=_paused - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)imageProxies;
-(void)setImageProxies:(NSArray *)arg1 ;
-(void)_addImageToAnimationContainer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isPaused;
-(void)_stopAnimations;
-(void)_startAnimations;
@end

