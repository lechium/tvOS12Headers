/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATPError : PBCodable <NSCopying> {

	long long _domainCode;
	int _code;
	NSString* _domain;
	NSString* _errorDescription;
	SCD_Struct_AT3 _has;

}

@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                        //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasDomainCode; 
@property (assign,nonatomic) long long domainCode;                     //@synthesize domainCode=_domainCode - In the implementation block
@property (assign,nonatomic) BOOL hasCode; 
@property (assign,nonatomic) int code;                                 //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription;              //@synthesize errorDescription=_errorDescription - In the implementation block
-(void)setCode:(int)arg1 ;
-(void)setHasCode:(BOOL)arg1 ;
-(BOOL)hasCode;
-(BOOL)hasDomain;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)setDomainCode:(long long)arg1 ;
-(void)setHasDomainCode:(BOOL)arg1 ;
-(BOOL)hasDomainCode;
-(long long)domainCode;
-(NSString *)errorDescription;
-(BOOL)hasErrorDescription;
-(void)setErrorDescription:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(int)code;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

