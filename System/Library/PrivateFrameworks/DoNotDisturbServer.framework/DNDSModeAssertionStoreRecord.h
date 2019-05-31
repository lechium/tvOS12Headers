/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/DNDSBackingStoreRecord.h>
#import <libobjc.A.dylib/DNDSSyncRecord.h>

@class NSNumber, NSArray, NSString;

@interface DNDSModeAssertionStoreRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord, DNDSSyncRecord> {

	NSNumber* _storeLastCompleteInvalidationTimestamp;
	NSArray* _storeAssertionRecords;

}

@property (nonatomic,copy,readonly) NSNumber * storeLastCompleteInvalidationTimestamp;              //@synthesize storeLastCompleteInvalidationTimestamp=_storeLastCompleteInvalidationTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSArray * storeAssertionRecords;                                //@synthesize storeAssertionRecords=_storeAssertionRecords - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)migrateDictionaryRepresentations:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3 ;
+(id)backingStoreWithFileURL:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)_initWithRecord:(id)arg1 ;
-(NSArray *)storeAssertionRecords;
-(NSNumber *)storeLastCompleteInvalidationTimestamp;
-(id)initWithSyncDictionaryRepresentation:(id)arg1 ;
-(id)syncDictionaryRepresentation;
-(id)_initWithStoreLastCompleteInvalidationTimestamp:(id)arg1 storeAssertionRecords:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

