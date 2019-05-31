/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRDiffBase.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSDictionary, NRPBDeviceDiff;

@interface NRDeviceDiff : NRDiffBase <NSFastEnumeration> {

	NSDictionary* _diffPropertyDiffs;

}

@property (nonatomic,readonly) NSDictionary * diffPropertyDiffs;              //@synthesize diffPropertyDiffs=_diffPropertyDiffs - In the implementation block
@property (nonatomic,readonly) NRPBDeviceDiff * protobuf; 
+(BOOL)supportsSecureCoding;
-(id)initWithProtobuf:(id)arg1 ;
-(void)_createIndex;
-(id)initWithDiffPropertyDiffs:(id)arg1 ;
-(id)allPropertyNames;
-(id)diffPropertyDiffForName:(id)arg1 ;
-(NSDictionary *)diffPropertyDiffs;
-(NRPBDeviceDiff *)protobuf;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR8*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

