/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NWPBAgentClass : PBCodable <NSCopying> {

	NSString* _domain;
	NSString* _type;

}

@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) NSString * type;                //@synthesize type=_type - In the implementation block
-(BOOL)hasDomain;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasType;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSString *)domain;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

