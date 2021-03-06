/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSLayoutConstraint.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSNumber;

@interface _UISystemBaselineConstraint : NSLayoutConstraint <NSCoding> {

	NSNumber* _spacingMultiplier;

}

@property (nonatomic,retain) NSNumber * spacingMultiplier;              //@synthesize spacingMultiplier=_spacingMultiplier - In the implementation block
+(id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 withSystemSpacingMultipliedBy:(double)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSpacingMultiplier:(NSNumber *)arg1 ;
-(NSNumber *)spacingMultiplier;
@end

