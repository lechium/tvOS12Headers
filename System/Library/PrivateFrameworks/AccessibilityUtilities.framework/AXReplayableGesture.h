/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AXReplayableGesture : NSObject <NSSecureCoding> {

	NSArray* _allEvents;
	BOOL _arePointsDeviceRelative;

}
+(id)tapGestureForInterfaceOrientedPoint:(CGPoint)arg1 ;
+(BOOL)supportsSecureCoding;
-(unsigned long long)numberOfEvents;
-(id)fingerIdentifiersAtEventIndex:(unsigned long long)arg1 ;
-(double)timeAtEventIndex:(unsigned long long)arg1 ;
-(CGPoint)pointForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2 ;
-(double)forceForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2 ;
-(BOOL)arePointsDeviceRelative;
-(void)updateForLandscape:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

