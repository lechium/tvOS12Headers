/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/_GEOTileDBWriteOperation.h>

@class NSData, NSString;

@interface _GEOTileDBAddTileOperation : NSObject <_GEOTileDBWriteOperation> {

	GEOTileKey _key;
	unsigned _tileSet;
	NSData* _data;
	NSString* _ETag;
	unsigned char _reason;

}

@property (readonly) GEOTileKey* key; 
@property (readonly) unsigned char reason;                          //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long sizeInBytes; 
-(unsigned long long)sizeInBytes;
-(void)performWithDB:(id)arg1 ;
-(BOOL)canIncreaseDataSizeInDB;
-(BOOL)isSupercededByOperation:(id)arg1 ;
-(id)dataForKey:(const GEOTileKey*)arg1 ETag:(id*)arg2 originalLoadReason:(unsigned char*)arg3 isKnownNotToExist:(BOOL*)arg4 ;
-(id)initWithTileKey:(const GEOTileKey*)arg1 tileSet:(unsigned)arg2 data:(id)arg3 ETag:(id)arg4 reason:(unsigned char)arg5 ;
-(unsigned char)reason;
-(GEOTileKey*)key;
@end

