/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NRDevicePropertyDiff, NRPBDevicePropertyDiffType;

@interface NRDevicePropertyDiffType : NSObject <NSCopying, NSSecureCoding> {

	NRDevicePropertyDiff* _diff;
	unsigned long long _changeType;

}

@property (nonatomic,readonly) NRDevicePropertyDiff * diff;                        //@synthesize diff=_diff - In the implementation block
@property (nonatomic,readonly) unsigned long long changeType;                      //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) NRPBDevicePropertyDiffType * protobuf; 
+(BOOL)supportsSecureCoding;
-(NRDevicePropertyDiff *)diff;
-(id)initWithProtobuf:(id)arg1 ;
-(unsigned long long)changeType;
-(id)initWithDiff:(id)arg1 andChangeType:(unsigned long long)arg2 ;
-(NRPBDevicePropertyDiffType *)protobuf;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
