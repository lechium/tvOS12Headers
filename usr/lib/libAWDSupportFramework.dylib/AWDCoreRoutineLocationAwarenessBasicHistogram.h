/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineLocationAwarenessBasicHistogram : PBCodable <NSCopying> {

	SCD_Struct_AW14* _counts;

}

@property (nonatomic,readonly) unsigned long long countsCount; 
@property (nonatomic,readonly) int* counts; 
-(unsigned long long)countsCount;
-(void)clearCounts;
-(int)countAtIndex:(unsigned long long)arg1 ;
-(void)addCount:(int)arg1 ;
-(int*)counts;
-(void)setCounts:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

