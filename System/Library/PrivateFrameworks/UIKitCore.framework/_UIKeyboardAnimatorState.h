/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol _UIKeyboardAnimatorState <NSObject>
@property (nonatomic,retain,readonly) UIView * animatingView; 
@property (assign,nonatomic) BOOL inputViewsHidden; 
@property (nonatomic,readonly) CGRect startFrame; 
@property (nonatomic,readonly) CGRect endFrame; 
@required
-(CGRect)endFrame;
-(CGRect)startFrame;
-(void)setInputViewsHidden:(BOOL)arg1;
-(UIView *)animatingView;
-(BOOL)inputViewsHidden;

@end

