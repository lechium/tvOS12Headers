/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIMotionEffectAcceleratedOutputRange : NSObject <NSCoding, NSCopying> {

	UIOffset _referenceOffset;
	CGPoint _referenceAcceleration;
	CGPoint _acceleration;

}

@property (nonatomic,readonly) CGPoint acceleration;              //@synthesize acceleration=_acceleration - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(void)setAcceleration:(CGPoint)arg1 fixingOutputForViewerOffset:(UIOffset)arg2 ;
-(UIOffset)acceleratedOutputForViewerOffset:(UIOffset)arg1 accelerationBoostFactor:(CGPoint)arg2 ;
-(CGPoint)acceleration;
@end
