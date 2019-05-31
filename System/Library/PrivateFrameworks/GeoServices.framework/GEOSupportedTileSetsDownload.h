/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEODownloadMetadata, GEOSupportedTileSets;

@interface GEOSupportedTileSetsDownload : PBCodable <NSCopying> {

	GEODownloadMetadata* _metadata;
	GEOSupportedTileSets* _tileSets;

}

@property (nonatomic,retain) GEOSupportedTileSets * tileSets;              //@synthesize tileSets=_tileSets - In the implementation block
@property (nonatomic,retain) GEODownloadMetadata * metadata;               //@synthesize metadata=_metadata - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOSupportedTileSets *)tileSets;
-(void)setTileSets:(GEOSupportedTileSets *)arg1 ;
-(GEODownloadMetadata *)metadata;
-(void)setMetadata:(GEODownloadMetadata *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

