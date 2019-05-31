/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject, NSMutableDictionary;

@interface GEOTileLoaderUsage : NSObject {

	NSObject*<OS_dispatch_queue> _usageIsolation;
	NSMutableDictionary* _usageDictionary;

}
-(void)startUsageTileWithKey:(const GEOTileKey*)arg1 ;
-(void)decodedTileWithKey:(const GEOTileKey*)arg1 withStartTime:(double)arg2 andTileSize:(unsigned long long)arg3 ;
-(void)finishedUsageForTileWithKey:(const GEOTileKey*)arg1 withUserInfo:(id)arg2 reason:(unsigned char)arg3 ;
-(void)removeUsageForTileKey:(const GEOTileKey*)arg1 ;
-(id)init;
-(void)cleanUp;
@end

