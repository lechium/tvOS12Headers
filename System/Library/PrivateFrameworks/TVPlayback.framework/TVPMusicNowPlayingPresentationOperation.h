/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class UIViewController;

@interface TVPMusicNowPlayingPresentationOperation : NSOperation {

	BOOL _isExecuting;
	BOOL _isFinished;
	BOOL _animated;
	UIViewController* _presentingViewController;
	UIViewController* _presentedViewController;

}

@property (nonatomic,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * presentedViewController;               //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (getter=isAnimated,nonatomic,readonly) BOOL animated;                          //@synthesize animated=_animated - In the implementation block
-(id)initWithPresentingViewController:(id)arg1 presentedViewController:(id)arg2 animated:(BOOL)arg3 ;
-(UIViewController *)presentingViewController;
-(UIViewController *)presentedViewController;
-(void)start;
-(BOOL)isAnimated;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)_finish;
@end

