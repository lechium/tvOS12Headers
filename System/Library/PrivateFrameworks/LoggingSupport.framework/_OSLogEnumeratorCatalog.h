/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <libobjc.A.dylib/_OSLogIndexTimeRangable.h>

@class _OSLogIndex, _OSLogChunkStore, NSString;

@interface _OSLogEnumeratorCatalog : NSObject <_OSLogIndexTimeRangable> {

	NSRange _chunkRange;
	_OSLogIndex* _index;
	catalog_s* _catalog;
	tracev3_chunk_s* _chunk;
	tracev3_chunk_s* _fileHeader;
	_OSLogChunkStore* _store;
	unsigned long long _ot;
	unsigned long long _et;

}

@property (nonatomic,readonly) const char* bootUUID; 
@property (nonatomic,readonly) catalog_s* catalog;                         //@synthesize catalog=_catalog - In the implementation block
@property (nonatomic,readonly) tracev3_chunk_s* fileHeader;                //@synthesize fileHeader=_fileHeader - In the implementation block
@property (nonatomic,readonly) tracev3_chunk_s* chunk;                     //@synthesize chunk=_chunk - In the implementation block
@property (nonatomic,__weak,readonly) _OSLogIndex * index;                 //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) unsigned long long oldestTime;              //@synthesize ot=_ot - In the implementation block
@property (nonatomic,readonly) unsigned long long endTime;                 //@synthesize et=_et - In the implementation block
@property (nonatomic,readonly) _OSLogChunkStore * store;                   //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)endTime;
-(tracev3_chunk_s*)chunk;
-(_OSLogChunkStore *)store;
-(const char*)bootUUID;
-(unsigned long long)oldestTime;
-(id)initWithStore:(id)arg1 index:(id)arg2 fileHeader:(tracev3_chunk_s*)arg3 range:(NSRange)arg4 chunk:(tracev3_chunk_s*)arg5 ;
-(void)enumerateSubchunksUsingBlock:(/*^block*/id)arg1 ;
-(tracev3_chunk_s*)fileHeader;
-(void)dealloc;
-(_OSLogIndex *)index;
-(catalog_s*)catalog;
-(void)unionWithRange:(NSRange)arg1 ;
@end

