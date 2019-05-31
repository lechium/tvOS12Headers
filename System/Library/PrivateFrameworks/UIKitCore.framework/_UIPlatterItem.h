/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDynamicItem.h>

@class UIView, NSString, UIBezierPath;

@interface _UIPlatterItem : NSObject <UIDynamicItem> {

	UIView* _heldView;

}

@property (__weak,readonly) UIView * heldView;                                      //@synthesize heldView=_heldView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
-(CGRect)bounds;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(CGAffineTransform)transform;
-(CGPoint)center;
-(id)initWithView:(id)arg1 ;
-(UIView *)heldView;
@end
