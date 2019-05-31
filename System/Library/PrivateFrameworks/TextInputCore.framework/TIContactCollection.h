/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface TIContactCollection : NSObject {

	NSMutableArray* _contacts;
	long long _count;
	BOOL _sourceHasRelevancyScore;

}

@property (nonatomic,readonly) BOOL sourceHasRelevancyScore;              //@synthesize sourceHasRelevancyScore=_sourceHasRelevancyScore - In the implementation block
@property (nonatomic,readonly) long long count;                           //@synthesize count=_count - In the implementation block
-(void)addContact:(id)arg1 ;
-(id)initWithRelevanceScoreType:(BOOL)arg1 ;
-(void)enumerateContactsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)sourceHasRelevancyScore;
-(long long)count;
@end
