/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PHAJobWorkInfoReader : NSObject {

	NSMutableArray* _workInfosQueue;
	unsigned long long _fetchLimit;

}

@property (assign,nonatomic) unsigned long long fetchLimit;                //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long queueCount; 
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(unsigned long long)fetchLimit;
-(id)workInfoWithCount:(unsigned long long)arg1 fetchBlock:(/*^block*/id)arg2 ;
-(unsigned long long)queueCount;
-(id)init;
@end
