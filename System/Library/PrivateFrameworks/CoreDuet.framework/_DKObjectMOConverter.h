/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface _DKObjectMOConverter : NSObject {

	BOOL _readMetadata;
	BOOL _deduplicateValues;
	NSCache* _cache;

}

@property (retain) NSCache * cache;                     //@synthesize cache=_cache - In the implementation block
@property (assign) BOOL readMetadata;                   //@synthesize readMetadata=_readMetadata - In the implementation block
@property (assign) BOOL deduplicateValues;              //@synthesize deduplicateValues=_deduplicateValues - In the implementation block
-(void)setReadMetadata:(BOOL)arg1 ;
-(void)setDeduplicateValues:(BOOL)arg1 ;
-(id)insertObject:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)objectsFromManagedObjects:(id)arg1 ;
-(BOOL)copyObject:(id)arg1 intoManagedObject:(id)arg2 ;
-(id)dataIntervalsFromManagedObjects:(id)arg1 ;
-(BOOL)deduplicateValues;
-(BOOL)readMetadata;
-(id)init;
-(void)setCache:(NSCache *)arg1 ;
-(NSCache *)cache;
@end

