/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/AXReplayableGesture.h>

@interface AXPageTurningReplayableGesture : AXReplayableGesture {

	BOOL _isLeftToRightSwipe;
	BOOL _isLandscape;

}

@property (assign,nonatomic) BOOL isLeftToRightSwipe;              //@synthesize isLeftToRightSwipe=_isLeftToRightSwipe - In the implementation block
@property (assign,nonatomic) BOOL isLandscape;                     //@synthesize isLandscape=_isLandscape - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)numberOfEvents;
-(id)fingerIdentifiersAtEventIndex:(unsigned long long)arg1 ;
-(double)timeAtEventIndex:(unsigned long long)arg1 ;
-(CGPoint)pointForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2 ;
-(double)forceForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2 ;
-(BOOL)arePointsDeviceRelative;
-(void)updateForLandscape:(BOOL)arg1 ;
-(BOOL)isLeftToRightSwipe;
-(id)initForLeftToRightSwipe:(BOOL)arg1 ;
-(void)setIsLeftToRightSwipe:(BOOL)arg1 ;
-(void)setIsLandscape:(BOOL)arg1 ;
-(BOOL)isLandscape;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
