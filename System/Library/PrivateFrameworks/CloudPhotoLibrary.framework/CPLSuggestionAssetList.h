/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CPLSuggestionAssetList : PBCodable <NSCopying> {

	NSMutableArray* _assets;
	unsigned _version;
	SCD_Struct_CP3 _has;

}

@property (nonatomic,retain) NSMutableArray * assets;              //@synthesize assets=_assets - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                     //@synthesize version=_version - In the implementation block
+(Class)assetType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(id)assetAtIndex:(unsigned long long)arg1 ;
-(void)addAsset:(id)arg1 ;
-(NSMutableArray *)assets;
-(unsigned long long)assetsCount;
-(void)setAssets:(NSMutableArray *)arg1 ;
-(void)clearAssets;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

