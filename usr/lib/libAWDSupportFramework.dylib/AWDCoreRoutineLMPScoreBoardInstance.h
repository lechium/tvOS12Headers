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

@class NSString;

@interface AWDCoreRoutineLMPScoreBoardInstance : PBCodable <NSCopying> {

	int _corrects;
	int _incorrects;
	int _invalids;
	NSString* _keyword;
	int _unknowns;
	SCD_Struct_AW1 _has;

}

@property (nonatomic,readonly) BOOL hasKeyword; 
@property (nonatomic,retain) NSString * keyword;              //@synthesize keyword=_keyword - In the implementation block
@property (assign,nonatomic) BOOL hasCorrects; 
@property (assign,nonatomic) int corrects;                    //@synthesize corrects=_corrects - In the implementation block
@property (assign,nonatomic) BOOL hasIncorrects; 
@property (assign,nonatomic) int incorrects;                  //@synthesize incorrects=_incorrects - In the implementation block
@property (assign,nonatomic) BOOL hasUnknowns; 
@property (assign,nonatomic) int unknowns;                    //@synthesize unknowns=_unknowns - In the implementation block
@property (assign,nonatomic) BOOL hasInvalids; 
@property (assign,nonatomic) int invalids;                    //@synthesize invalids=_invalids - In the implementation block
-(void)setKeyword:(NSString *)arg1 ;
-(BOOL)hasKeyword;
-(void)setCorrects:(int)arg1 ;
-(void)setHasCorrects:(BOOL)arg1 ;
-(BOOL)hasCorrects;
-(void)setIncorrects:(int)arg1 ;
-(void)setHasIncorrects:(BOOL)arg1 ;
-(BOOL)hasIncorrects;
-(void)setUnknowns:(int)arg1 ;
-(void)setHasUnknowns:(BOOL)arg1 ;
-(BOOL)hasUnknowns;
-(void)setInvalids:(int)arg1 ;
-(void)setHasInvalids:(BOOL)arg1 ;
-(BOOL)hasInvalids;
-(NSString *)keyword;
-(int)corrects;
-(int)incorrects;
-(int)unknowns;
-(int)invalids;
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

