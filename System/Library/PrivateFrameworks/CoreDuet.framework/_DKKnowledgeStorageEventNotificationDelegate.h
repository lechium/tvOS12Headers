/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeStorageEventNotificationDelegate
@optional
-(void)knowledgeStorage:(id)arg1 didHaveInsertsAndDeletesWithCount:(unsigned long long)arg2;
-(void)knowledgeStorage:(id)arg1 didInsertSyncedEvents:(id)arg2;
-(void)knowledgeStorage:(id)arg1 didDeleteSyncedEvents:(id)arg2;
-(void)knowledgeStorage:(id)arg1 didInsertEventsWithStreamNameCounts:(id)arg2;
-(void)knowledgeStorage:(id)arg1 didDeleteEventsWithStreamNameCounts:(id)arg2;
-(void)knowledgeStorage:(id)arg1 didInsertLocalEventsWithStreamNameCounts:(id)arg2;
-(void)knowledgeStorage:(id)arg1 didTombstoneEventsWithStreamNameCounts:(id)arg2;

@end
