/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface VUIMediaEntitiesFetchControllerResult : NSObject {

	long long _fetchReason;
	NSArray* _fetchResponses;
	NSArray* _fetchResponseChanges;

}

@property (assign,nonatomic) long long fetchReason;                     //@synthesize fetchReason=_fetchReason - In the implementation block
@property (nonatomic,copy) NSArray * fetchResponses;                    //@synthesize fetchResponses=_fetchResponses - In the implementation block
@property (nonatomic,copy) NSArray * fetchResponseChanges;              //@synthesize fetchResponseChanges=_fetchResponseChanges - In the implementation block
-(NSArray *)fetchResponses;
-(void)setFetchResponses:(NSArray *)arg1 ;
-(id)init;
-(id)description;
-(long long)fetchReason;
-(NSArray *)fetchResponseChanges;
-(void)setFetchResponseChanges:(NSArray *)arg1 ;
-(id)initWithFetchReason:(long long)arg1 fetchResponses:(id)arg2 ;
-(void)setFetchReason:(long long)arg1 ;
@end
