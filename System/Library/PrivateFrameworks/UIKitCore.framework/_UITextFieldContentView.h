/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UITextTiledLayerDelegate.h>

@protocol _UITextFieldContentViewContextProvider;
@class NSMutableSet, NSArray, NSString;

@interface _UITextFieldContentView : UIView <_UITextTiledLayerDelegate> {

	id<_UITextFieldContentViewContextProvider> _provider;
	NSMutableSet* _ghostedRanges;
	NSArray* _maskedRects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(id)layer;
-(void)setNeedsLayout;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithContentContextProvider:(id)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)addGhostedRange:(NSRange)arg1 ;
-(void)removeAllGhostedRanges;
-(id)_textTiledLayer:(id)arg1 maskedRectsInRect:(CGRect)arg2 ;
@end

