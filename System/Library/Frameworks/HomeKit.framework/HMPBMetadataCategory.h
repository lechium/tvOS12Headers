/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HMPBMetadataCategory : PBCodable <NSCopying> {

	NSString* _desc;
	int _number;
	NSString* _type;
	SCD_Struct_HM1 _has;

}

@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasDesc; 
@property (nonatomic,retain) NSString * desc;              //@synthesize desc=_desc - In the implementation block
@property (assign,nonatomic) BOOL hasNumber; 
@property (assign,nonatomic) int number;                   //@synthesize number=_number - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasType;
-(int)number;
-(void)setNumber:(int)arg1 ;
-(BOOL)hasDesc;
-(void)setHasNumber:(BOOL)arg1 ;
-(BOOL)hasNumber;
-(NSString *)desc;
-(void)setDesc:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

