/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImageView.h>

@class UIImage;

@interface UITabBarSwappableImageView : UIImageView {

	UIImage* _value;
	UIImage* _alternate;
	UIImage* _landscapeValue;
	UIImage* _landscapeAlternate;
	BOOL _showAlternate;
	BOOL _showLandscape;

}
-(void)setImage:(id)arg1 ;
-(void)showAlternateImage:(BOOL)arg1 ;
-(void)setCurrentImage;
-(id)initWithImage:(id)arg1 alternateImage:(id)arg2 landscapeImage:(id)arg3 landscapeAlternateImage:(id)arg4 ;
-(void)setAlternateImage:(id)arg1 ;
-(void)setLandscape:(BOOL)arg1 ;
@end

