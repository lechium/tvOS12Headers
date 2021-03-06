/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@interface SCNBillboardConstraint : SCNConstraint {

	unsigned long long _freeAxes;
	BOOL _preserveScale;

}

@property (assign,nonatomic) unsigned long long freeAxes;              //@synthesize freeAxes=_freeAxes - In the implementation block
+(id)billboardConstraint;
+(BOOL)supportsSecureCoding;
-(void)setPreserveScale:(BOOL)arg1 ;
-(void)setFreeAxes:(unsigned long long)arg1 ;
-(unsigned long long)freeAxes;
-(BOOL)preserveScale;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

