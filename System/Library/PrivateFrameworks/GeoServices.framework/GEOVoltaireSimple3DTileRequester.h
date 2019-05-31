/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOSimpleTileRequester.h>
#import <libobjc.A.dylib/GEOSimpleTileRequesterSubclass.h>

@interface GEOVoltaireSimple3DTileRequester : GEOSimpleTileRequester <GEOSimpleTileRequesterSubclass>
+(unsigned char)tileProviderIdentifier;
-(unsigned)tileEditionForKey:(const GEOTileKey*)arg1 ;
-(BOOL)useProxyAuthForTileKey:(const GEOTileKey*)arg1 ;
-(id)urlForTileKey:(const GEOTileKey*)arg1 ;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(id)_baseURLStringForTileKey:(const GEOTileKey*)arg1 ;
-(unsigned char)_authTypeForTileKey:(const GEOTileKey*)arg1 ;
@end

