/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BKSHIDEventDescriptor.h>

@interface BKSHIDEventBiometricDescriptor : BKSHIDEventDescriptor {

	unsigned _biometricEventType;

}

@property (nonatomic,readonly) unsigned biometricEventType;              //@synthesize biometricEventType=_biometricEventType - In the implementation block
+(id)descriptorWithBiometricEventType:(unsigned)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)describes:(id)arg1 ;
-(id)initWithBiometricEventType:(unsigned)arg1 ;
-(unsigned)biometricEventType;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end

