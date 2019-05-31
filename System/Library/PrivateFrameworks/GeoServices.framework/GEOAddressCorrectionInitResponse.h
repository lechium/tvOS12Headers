/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, GEOLocation;

@interface GEOAddressCorrectionInitResponse : PBCodable <NSCopying> {

	NSMutableArray* _address;
	NSString* _addressID;
	GEOLocation* _addressLocation;
	unsigned _numberOfVisitsBucketSize;
	int _statusCode;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode;                                 //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressLocation; 
@property (nonatomic,retain) GEOLocation * addressLocation;                  //@synthesize addressLocation=_addressLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressID; 
@property (nonatomic,retain) NSString * addressID;                           //@synthesize addressID=_addressID - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfVisitsBucketSize; 
@property (assign,nonatomic) unsigned numberOfVisitsBucketSize;              //@synthesize numberOfVisitsBucketSize=_numberOfVisitsBucketSize - In the implementation block
@property (nonatomic,retain) NSMutableArray * address;                       //@synthesize address=_address - In the implementation block
+(Class)addressType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setAddress:(NSMutableArray *)arg1 ;
-(NSMutableArray *)address;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(BOOL)hasStatusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(int)StringAsStatusCode:(id)arg1 ;
-(void)setAddressID:(NSString *)arg1 ;
-(BOOL)hasAddressID;
-(NSString *)addressID;
-(void)addAddress:(id)arg1 ;
-(void)setAddressLocation:(GEOLocation *)arg1 ;
-(unsigned long long)addressCount;
-(void)clearAddress;
-(id)addressAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAddressLocation;
-(unsigned)numberOfVisitsBucketSize;
-(void)setNumberOfVisitsBucketSize:(unsigned)arg1 ;
-(void)setHasNumberOfVisitsBucketSize:(BOOL)arg1 ;
-(BOOL)hasNumberOfVisitsBucketSize;
-(GEOLocation *)addressLocation;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)statusCode;
@end

