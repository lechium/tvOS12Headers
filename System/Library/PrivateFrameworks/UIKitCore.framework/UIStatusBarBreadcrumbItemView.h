/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIStatusBarSystemNavigationItemView.h>

@class UISystemNavigationAction, NSString;

@interface UIStatusBarBreadcrumbItemView : UIStatusBarSystemNavigationItemView {

	UISystemNavigationAction* _systemNavigationAction;
	NSString* _destinationText;

}

@property (nonatomic,retain) UISystemNavigationAction * systemNavigationAction;              //@synthesize systemNavigationAction=_systemNavigationAction - In the implementation block
@property (nonatomic,retain) NSString * destinationText;                                     //@synthesize destinationText=_destinationText - In the implementation block
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(double)extraRightPadding;
-(void)setSystemNavigationAction:(UISystemNavigationAction *)arg1 ;
-(UISystemNavigationAction *)systemNavigationAction;
-(NSString *)destinationText;
-(void)setDestinationText:(NSString *)arg1 ;
-(id)shortenedTitleWithCompressionLevel:(int)arg1 ;
-(long long)labelLineBreakMode;
-(void)userDidActivateButton:(id)arg1 ;
@end
