/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface MFSparseMutable64IndexSet : NSObject <NSCopying, NSMutableCopying> {

	unsigned _count;
	unsigned _storageSize;
	unsigned _cursor;
	unsigned long long* _storage;

}
+(id)indexSet;
-(void)enumerateIndexesWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)_insertionPositionOfIndex:(unsigned long long)arg1 ;
-(void)_incrementStorageIfNecessaryForCount:(unsigned long long)arg1 ;
-(unsigned long long)_positionOfIndex:(unsigned long long)arg1 ;
-(void)_garbageCollectStorageIfNecessary;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexGreaterThanIndex:(unsigned long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)containsIndex:(unsigned long long)arg1 ;
-(unsigned long long)firstIndex;
-(void)addIndexes:(id)arg1 ;
-(void)removeIndex:(unsigned long long)arg1 ;
@end

