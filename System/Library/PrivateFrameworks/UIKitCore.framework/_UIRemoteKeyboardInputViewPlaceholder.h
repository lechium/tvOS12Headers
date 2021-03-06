/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol _UIRemoteKeyboardInputViewPlaceholder
@property (assign,nonatomic) CGSize fixedSize; 
@property (retain,readonly) UIView * placeheldView; 
@property (nonatomic,retain) UIView * fallbackView; 
@property (nonatomic,retain) UIView * associatedView; 
@required
-(CGSize)fixedSize;
-(void)setFixedSize:(CGSize)arg1;
-(BOOL)refreshPlaceholder;
-(UIView *)placeheldView;
-(UIView *)fallbackView;
-(void)setFallbackView:(id)arg1;
-(UIView *)associatedView;
-(void)setAssociatedView:(id)arg1;

@end

