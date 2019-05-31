/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface GEOCacheUsageMonitor_TileCacheData : NSObject {

	unsigned _count;
	unsigned _byteCount;
	NSMutableDictionary* _errorsDict;

}

@property (assign,nonatomic) unsigned count;                  //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned byteCount;              //@synthesize byteCount=_byteCount - In the implementation block
@property (nonatomic,readonly) NSArray * errors; 
-(NSArray *)errors;
-(BOOL)wouldWrapWithByteCount:(unsigned)arg1 ;
-(void)addErrorWithDomain:(id)arg1 code:(long long)arg2 ;
-(unsigned)byteCount;
-(void)setByteCount:(unsigned)arg1 ;
-(id)init;
-(unsigned)count;
-(void)setCount:(unsigned)arg1 ;
@end
