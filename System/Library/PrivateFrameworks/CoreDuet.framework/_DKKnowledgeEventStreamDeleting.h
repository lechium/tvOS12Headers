/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeEventStreamDeleting
@required
-(unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id*)arg2;
-(void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2;

@end

