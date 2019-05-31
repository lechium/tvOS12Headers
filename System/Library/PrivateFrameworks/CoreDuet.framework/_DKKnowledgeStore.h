/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKKnowledgeSaving.h>
#import <libobjc.A.dylib/_DKKnowledgeDeleting.h>
#import <libobjc.A.dylib/_DKKnowledgeQuerying.h>

@protocol _DKKnowledgeQuerying_DKKnowledgeSaving_DKKnowledgeDeleting_DKKnowledgeEventStreamDeleting, OS_dispatch_queue;
@class NSObject, _DKRateLimitPolicyEnforcer, _DKPrivacyPolicyEnforcer;

@interface _DKKnowledgeStore : NSObject <_DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying> {

	NSObject*<_DKKnowledgeQuerying>*<_DKKnowledgeSaving>*<_DKKnowledgeDeleting>*<_DKKnowledgeEventStreamDeleting> _knowledgeStoreHandle;
	_DKRateLimitPolicyEnforcer* _rateLimitEnforcer;
	_DKPrivacyPolicyEnforcer* _privacyEnforcer;
	NSObject*<OS_dispatch_queue> _defaultQueue;

}

@property (nonatomic,retain) NSObject*<_DKKnowledgeQuerying>*<_DKKnowledgeSaving>*<_DKKnowledgeDeleting>*<_DKKnowledgeEventStreamDeleting> knowledgeStoreHandle;              //@synthesize knowledgeStoreHandle=_knowledgeStoreHandle - In the implementation block
@property (readonly) _DKRateLimitPolicyEnforcer * rateLimitEnforcer;                                                                                                          //@synthesize rateLimitEnforcer=_rateLimitEnforcer - In the implementation block
@property (readonly) _DKPrivacyPolicyEnforcer * privacyEnforcer;                                                                                                              //@synthesize privacyEnforcer=_privacyEnforcer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> defaultQueue;                                                                                                                 //@synthesize defaultQueue=_defaultQueue - In the implementation block
+(id)knowledgeStoreWithDirectReadOnlyAccessWithXPCStore:(id)arg1 storeDirectory:(id)arg2 ;
+(id)_knowledgeStoreWithStoreDirectory:(id)arg1 readOnly:(BOOL)arg2 ;
+(id)userKnowledgeStore;
+(id)userKnowledgeStoreWithDirectReadOnlyAccess;
+(id)knowledgeStoreWithDirectReadWriteAccess;
+(id)knowledgeStore;
+(id)knowledgeStoreWithDirectReadOnlyAccess;
-(NSObject*<OS_dispatch_queue>)defaultQueue;
-(unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveObjects:(id)arg1 error:(id*)arg2 ;
-(id)initWithKnowledgeStoreHandle:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)setKnowledgeStoreHandle:(NSObject*<_DKKnowledgeQuerying>*<_DKKnowledgeSaving>*<_DKKnowledgeDeleting>*<_DKKnowledgeEventStreamDeleting>)arg1 ;
-(id)_sanitizeObjectsBeforeSaving:(id)arg1 ;
-(NSObject*<_DKKnowledgeQuerying>*<_DKKnowledgeSaving>*<_DKKnowledgeDeleting>*<_DKKnowledgeEventStreamDeleting>)knowledgeStoreHandle;
-(void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 ;
-(void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)synchronizeWithError:(id*)arg1 ;
-(BOOL)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 error:(id*)arg3 ;
-(void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 responseQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)deleteRemoteState:(id*)arg1 ;
-(id)sourceDeviceIdentityFromObject:(id)arg1 error:(id*)arg2 ;
-(id)sourceDeviceIdentityWithError:(id*)arg1 ;
-(id)knowledgeSynchronizingHandleWithError:(id*)arg1 ;
-(_DKRateLimitPolicyEnforcer *)rateLimitEnforcer;
-(_DKPrivacyPolicyEnforcer *)privacyEnforcer;
-(void)setDefaultQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)executeQuery:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteObjects:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)init;
@end
