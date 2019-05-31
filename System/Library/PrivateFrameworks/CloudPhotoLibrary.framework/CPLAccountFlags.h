/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CPLAccountFlags : PBCodable <NSCopying> {

	long long _version;
	int _reason;
	BOOL _defaultHEVC;
	SCD_Struct_CP4 _has;

}

@property (assign,nonatomic) BOOL hasDefaultHEVC; 
@property (assign,nonatomic) BOOL defaultHEVC;                 //@synthesize defaultHEVC=_defaultHEVC - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                       //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) long long version;                //@synthesize version=_version - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)setDefaultHEVC:(BOOL)arg1 ;
-(void)setHasDefaultHEVC:(BOOL)arg1 ;
-(BOOL)hasDefaultHEVC;
-(BOOL)defaultHEVC;
-(BOOL)hasReason;
-(void)setReason:(int)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(id)reasonAsString:(int)arg1 ;
-(int)StringAsReason:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)reason;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

