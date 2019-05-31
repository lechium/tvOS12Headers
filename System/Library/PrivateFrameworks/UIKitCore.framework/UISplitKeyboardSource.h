/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, UIViewController, UIInputViewSetPlacement;


@protocol UISplitKeyboardSource <_UIRemoteKeyboardViewSource,UIInputViewSetPlacementOwner>
@property (nonatomic,retain,readonly) UIView * view; 
@property (nonatomic,readonly) BOOL isChangingPlacement; 
@property (nonatomic,readonly) CGPoint positionConstraintConstant; 
@property (nonatomic,retain,readonly) UIViewController * _inputViewController; 
@property (nonatomic,retain,readonly) UIInputViewSetPlacement * placement; 
@property (nonatomic,retain,readonly) id<UIInputViewSetPlacementApplicator> applicator; 
@required
-(UIView *)view;
-(void)setInterfaceAutorotationDisabled:(BOOL)arg1;
-(UIInputViewSetPlacement *)placement;
-(UIViewController *)_inputViewController;
-(id<UIInputViewSetPlacementApplicator>)applicator;
-(id)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1;
-(BOOL)isChangingPlacement;
-(CGPoint)positionConstraintConstant;

@end

