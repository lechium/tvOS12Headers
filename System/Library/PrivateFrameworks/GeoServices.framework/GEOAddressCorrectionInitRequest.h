/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOAddressCorrectionInitRequest : PBRequest <NSCopying> {

	NSString* _personID;
	NSString* _token;
	BOOL _supportsMultipleAddresses;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSString * token;                               //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) BOOL hasPersonID; 
@property (nonatomic,retain) NSString * personID;                            //@synthesize personID=_personID - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsMultipleAddresses; 
@property (assign,nonatomic) BOOL supportsMultipleAddresses;                 //@synthesize supportsMultipleAddresses=_supportsMultipleAddresses - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)hasToken;
-(void)setPersonID:(NSString *)arg1 ;
-(BOOL)hasPersonID;
-(void)setSupportsMultipleAddresses:(BOOL)arg1 ;
-(void)setHasSupportsMultipleAddresses:(BOOL)arg1 ;
-(BOOL)hasSupportsMultipleAddresses;
-(NSString *)personID;
-(BOOL)supportsMultipleAddresses;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
@end

