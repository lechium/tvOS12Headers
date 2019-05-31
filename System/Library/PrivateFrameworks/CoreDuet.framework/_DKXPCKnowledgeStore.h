/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKKnowledgeQuerying.h>
#import <libobjc.A.dylib/_DKKnowledgeSaving.h>
#import <libobjc.A.dylib/_DKKnowledgeDeleting.h>
#import <libobjc.A.dylib/_DKKnowledgeEventStreamDeleting.h>
#import <libobjc.A.dylib/_DKKnowledgeSynchronizing.h>

@class NSXPCConnection;

@interface _DKXPCKnowledgeStore : NSObject <_DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSynchronizing> {

	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)XPCKnowledgeStore;
+(id)XPCUserKnowledgeStore;
-(unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveObjects:(id)arg1 error:(id*)arg2 ;
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
-(id)saveObjects:(id)arg1 synchronous:(BOOL)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)deleteObjects:(id)arg1 synchronous:(BOOL)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(unsigned long long)deleteAllEventsInEventStream:(id)arg1 synchronous:(BOOL)arg2 error:(id*)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 synchronous:(BOOL)arg2 error:(id*)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(id)executeQuery:(id)arg1 synchronous:(BOOL)arg2 error:(id*)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(BOOL)confirmConnectionWithError:(id*)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)executeQuery:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteObjects:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithMachServiceName:(id)arg1 ;
@end
