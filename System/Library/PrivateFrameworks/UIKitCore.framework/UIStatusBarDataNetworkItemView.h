/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarItemView.h>

@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView {

	int _dataNetworkType;
	int _wifiStrengthRaw;
	int _wifiStrengthBars;
	BOOL _wifiLinkWarning;
	BOOL _enableRSSI;
	BOOL _showRSSI;

}
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)accessibilityHUDRepresentation;
-(id)contentsImage;
-(double)extraRightPadding;
-(double)extraLeftPadding;
-(BOOL)_updateWithData:(SCD_Struct_UI86*)arg1 networkType:(int)arg2 ;
-(id)_stringForRSSI;
-(id)_dataNetworkImage;
-(id)_dataNetworkImageName;
-(double)maximumOverlap;
@end
