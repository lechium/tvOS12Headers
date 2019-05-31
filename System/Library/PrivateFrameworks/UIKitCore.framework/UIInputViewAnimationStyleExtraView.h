/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView;

@interface UIInputViewAnimationStyleExtraView : NSObject {

	int _clipContainerType;
	int _alignment;
	UIView* _view;
	/*^block*/id _animation;

}

@property (assign,nonatomic) int clipContainerType;              //@synthesize clipContainerType=_clipContainerType - In the implementation block
@property (nonatomic,retain) UIView * view;                      //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) int alignment;                      //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,copy) id animation;                         //@synthesize animation=_animation - In the implementation block
+(id)extraView:(id)arg1 withAlignment:(int)arg2 animation:(/*^block*/id)arg3 onSnapshot:(BOOL)arg4 ;
-(int)alignment;
-(void)dealloc;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)setAlignment:(int)arg1 ;
-(void)setClipContainerType:(int)arg1 ;
-(void)setAnimation:(id)arg1 ;
-(int)clipContainerType;
-(id)animation;
@end

