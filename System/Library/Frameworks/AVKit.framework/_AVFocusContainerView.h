/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol _AVFocusContainerDelegate;
@interface _AVFocusContainerView : UIView {

	id<_AVFocusContainerDelegate> _focusContainerDelegate;

}

@property (assign,nonatomic,__weak) id<_AVFocusContainerDelegate> focusContainerDelegate;              //@synthesize focusContainerDelegate=_focusContainerDelegate - In the implementation block
-(id)_extraDescription;
-(id<_AVFocusContainerDelegate>)focusContainerDelegate;
-(void)setFocusContainerDelegate:(id<_AVFocusContainerDelegate>)arg1 ;
-(id)description;
-(id)debugDescription;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(BOOL)canBecomeFirstResponder;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
@end

