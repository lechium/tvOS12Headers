/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIAtomTextViewAtomLayout <NSObject>
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long selectionStyle; 
@property (nonatomic,readonly) CGRect selectionBounds; 
@property (nonatomic,readonly) long long baseWritingDirection; 
@optional
-(long long)baseWritingDirection;

@required
-(void)setEnabled:(BOOL)arg1;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
-(long long)selectionStyle;
-(void)setSelectionStyle:(long long)arg1;
-(void)setSelectionStyle:(long long)arg1 animated:(BOOL)arg2;
-(CGRect)selectionBounds;

@end

