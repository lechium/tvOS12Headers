/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSValue;

@interface _UIBarBackButtonItemAppearanceStorage : NSObject {

	NSMutableDictionary* backgroundImages;
	NSMutableDictionary* miniBackgroundImages;
	NSValue* titlePositionOffset;
	NSValue* miniTitlePositionOffset;
	NSMutableDictionary* backgroundVerticalAdjustmentsForBarMetrics;

}

@property (nonatomic,retain) NSValue * titlePositionOffset; 
@property (nonatomic,retain) NSValue * miniTitlePositionOffset; 
-(double)backgroundVerticalAdjustmentForBarMetrics:(long long)arg1 ;
-(NSValue *)miniTitlePositionOffset;
-(NSValue *)titlePositionOffset;
-(id)anyBackgroundImage;
-(void)setBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)setMiniTitlePositionOffset:(NSValue *)arg1 ;
-(void)setTitlePositionOffset:(NSValue *)arg1 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(BOOL)arg3 ;
-(id)backgroundImageForState:(unsigned long long)arg1 isMini:(BOOL)arg2 ;
@end

