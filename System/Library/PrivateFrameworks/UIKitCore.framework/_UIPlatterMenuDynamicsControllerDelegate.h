/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIPlatterMenuDynamicsControllerDelegate <NSObject>
@optional
-(void)translationDidUpdateForPlatterMenuDynamicsController:(id)arg1;

@required
-(CGPoint*)centerForPlatterWithMenuViewDismissed;
-(CGPoint*)centerForMenuDismissed;
-(CGPoint*)centerForPlatterWithMenuViewPresented;
-(double)minimumSpacingBetweenPlatterAndMenu;
-(CGPoint*)centerForMenuPresented;
-(void)platterMenuDynamicsControllerDidDismissWithController:(id)arg1;
-(id)leadingSwipeActionView;
-(id)trailingSwipeActionView;
-(CGPoint*)initialCenterForLeadingSwipeActionView;
-(CGPoint*)initialCenterForTrailingSwipeActionView;
-(void)platterMenuDynamicsController:(id)arg1 didMoveSwipeView:(id)arg2 toPosition:(CGPoint)arg3;

@end

