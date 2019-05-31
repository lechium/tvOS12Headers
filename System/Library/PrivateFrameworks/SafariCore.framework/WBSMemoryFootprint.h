/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariCore/SafariCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, WBSMemoryFootprintMallocZone;

@interface WBSMemoryFootprint : NSObject <NSSecureCoding> {

	task_vm_info _vmInfo;
	NSArray* _zones;

}

@property (nonatomic,readonly) NSArray * zones;                                               //@synthesize zones=_zones - In the implementation block
@property (nonatomic,readonly) unsigned long long residentSize; 
@property (nonatomic,readonly) unsigned long long dirtySize; 
@property (nonatomic,readonly) WBSMemoryFootprintMallocZone * defaultMallocZone; 
+(BOOL)supportsSecureCoding;
+(id)new;
-(unsigned long long)residentSize;
-(unsigned long long)dirtySize;
-(WBSMemoryFootprintMallocZone *)defaultMallocZone;
-(NSArray *)zones;
-(id)initWithError:(id*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

