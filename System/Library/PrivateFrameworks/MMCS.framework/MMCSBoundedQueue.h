/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MMCS/MMCS-Structs.h>
@class NSMutableArray;

@interface MMCSBoundedQueue : NSObject {

	BOOL _isValid;
	unsigned long long _bytesUpperBound;
	unsigned long long _bytesErrorLevel;
	NSMutableArray* _entries;
	dispatch_semaphore_sRef _boundsExceeded;

}

@property (nonatomic,retain) NSMutableArray * entries;                            //@synthesize entries=_entries - In the implementation block
@property (assign,nonatomic) dispatch_semaphore_sRef boundsExceeded;              //@synthesize boundsExceeded=_boundsExceeded - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesUpperBound;                //@synthesize bytesUpperBound=_bytesUpperBound - In the implementation block
@property (assign,nonatomic) unsigned long long bytesErrorLevel;                  //@synthesize bytesErrorLevel=_bytesErrorLevel - In the implementation block
@property (nonatomic,readonly) BOOL isValid;                                      //@synthesize isValid=_isValid - In the implementation block
-(void)addData:(id)arg1 ;
-(unsigned long long)_sync_aggregateByteCount;
-(BOOL)_sync_isFull;
-(id)initWithUpperBound:(unsigned long long)arg1 ;
-(void)removeNextDataWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)bytesUpperBound;
-(unsigned long long)bytesErrorLevel;
-(void)setBytesErrorLevel:(unsigned long long)arg1 ;
-(dispatch_semaphore_sRef)boundsExceeded;
-(void)setBoundsExceeded:(dispatch_semaphore_sRef)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)setEntries:(NSMutableArray *)arg1 ;
-(NSMutableArray *)entries;
-(BOOL)isValid;
@end

