/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UISwipeGestureRecognizer.h>

@class UIView;

@interface _AVDetachedSwipeGestureRecognizer : UISwipeGestureRecognizer {

	id _initialTarget;
	SEL _initialAction;
	UIView* _associatedView;

}

@property (nonatomic,__weak,readonly) id initialTarget;                   //@synthesize initialTarget=_initialTarget - In the implementation block
@property (nonatomic,readonly) SEL initialAction;                         //@synthesize initialAction=_initialAction - In the implementation block
@property (assign,nonatomic,__weak) UIView * associatedView;              //@synthesize associatedView=_associatedView - In the implementation block
-(id)initialTarget;
-(SEL)initialAction;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(id)view;
-(void)setState:(long long)arg1 ;
-(UIView *)associatedView;
-(void)setAssociatedView:(UIView *)arg1 ;
@end

