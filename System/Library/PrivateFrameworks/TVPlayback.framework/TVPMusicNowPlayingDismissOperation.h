/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class UIViewController;

@interface TVPMusicNowPlayingDismissOperation : NSOperation {

	BOOL _isAnimated;
	BOOL _isExecuting;
	BOOL _isFinished;
	UIViewController* _presentedViewController;

}

@property (nonatomic,readonly) UIViewController * presentedViewController;              //@synthesize presentedViewController=_presentedViewController - In the implementation block
-(id)initWithPresentedViewController:(id)arg1 animated:(BOOL)arg2 ;
-(UIViewController *)presentedViewController;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)_finish;
@end
