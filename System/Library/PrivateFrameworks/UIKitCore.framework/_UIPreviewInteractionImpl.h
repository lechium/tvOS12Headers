/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, UIPreviewInteraction;


@protocol _UIPreviewInteractionImpl <NSObject>
@property (assign,nonatomic,__weak) id<UIPreviewInteractionDelegate> delegate; 
@property (nonatomic,__weak,readonly) UIView * view; 
@property (nonatomic,retain) id<_UIPreviewInteractionTouchForceProviding> touchForceProvider; 
@property (assign,nonatomic,__weak) UIPreviewInteraction * previewInteraction; 
@required
-(void)setDelegate:(id)arg1;
-(UIView *)view;
-(id<UIPreviewInteractionDelegate>)delegate;
-(void)setPreviewInteraction:(id)arg1;
-(CGPoint*)locationInCoordinateSpace:(id)arg1;
-(void)cancelInteraction;
-(void)setTouchForceProvider:(id)arg1;
-(UIPreviewInteraction *)previewInteraction;
-(id)initWithView:(id)arg1 previewInteraction:(id)arg2;
-(id<_UIPreviewInteractionTouchForceProviding>)touchForceProvider;

@end
