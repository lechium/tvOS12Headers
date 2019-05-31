/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLPMeta, NSMutableArray, NSData;

@interface CLPPassCollectionRequest : PBRequest <NSCopying> {

	CLPMeta* _meta;
	NSMutableArray* _passLocations;
	NSData* _signature;

}

@property (nonatomic,retain) CLPMeta * meta;                              //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * passLocations;              //@synthesize passLocations=_passLocations - In the implementation block
@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature;                          //@synthesize signature=_signature - In the implementation block
+(Class)passLocationType;
-(void)setMeta:(CLPMeta *)arg1 ;
-(CLPMeta *)meta;
-(void)addPassLocation:(id)arg1 ;
-(unsigned long long)passLocationsCount;
-(void)clearPassLocations;
-(id)passLocationAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)passLocations;
-(void)setPassLocations:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(NSData *)signature;
-(void)setSignature:(NSData *)arg1 ;
-(BOOL)hasSignature;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

