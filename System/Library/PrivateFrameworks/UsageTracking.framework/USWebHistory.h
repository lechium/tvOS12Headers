/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeDeleting_DKKnowledgeQuerying;
@interface USWebHistory : NSObject {

	id<_DKKnowledgeDeleting><_DKKnowledgeQuerying> _eventStorage;

}

@property (readonly) id<_DKKnowledgeDeleting><_DKKnowledgeQuerying> eventStorage;              //@synthesize eventStorage=_eventStorage - In the implementation block
-(id)init;
-(id<_DKKnowledgeDeleting><_DKKnowledgeQuerying>)eventStorage;
-(void)deleteHistoryForURL:(id)arg1 webApplication:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteHistoryForDomain:(id)arg1 webApplication:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteHistoryDuringInterval:(id)arg1 webApplication:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteAllHistoryForApplication:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithEventStorage:(id)arg1 ;
-(void)_deleteEventsWithPredicate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

