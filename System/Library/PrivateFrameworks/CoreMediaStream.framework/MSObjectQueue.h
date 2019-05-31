/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreMediaStream/CoreMediaStream-Structs.h>
@interface MSObjectQueue : NSObject {

	sqlite3Ref _db;
	CFDictionaryRef _statements;

}

@property (readonly) long long count; 
-(void)appendObjectWrappers:(id)arg1 ;
-(id)allObjectWrappersMaxCount:(long long)arg1 ;
-(void)removeObjectWrappersFromQueue:(id)arg1 ;
-(id)smallestObjectWrappersTargetTotalSize:(long long)arg1 maxCount:(long long)arg2 ;
-(id)objectWrappersWithZeroSizeMaxCount:(long long)arg1 ;
-(id)allObjectWrappersOrderedByDescendingErrorCountMaxCount:(long long)arg1 ;
-(void)commitErrorCountsForObjectWrappers:(id)arg1 ;
-(void)commitObjectsWrappers:(id)arg1 ;
-(sqlite3_stmtRef)_statementLabel:(id)arg1 query:(const char*)arg2 ;
-(id)_objectWrapperFromQueueQuery:(sqlite3_stmtRef)arg1 outSize:(long long*)arg2 ;
-(void)removeAllObjectWrappersFromQueue;
-(void)dealloc;
-(long long)count;
-(id)initWithPath:(id)arg1 ;
@end

