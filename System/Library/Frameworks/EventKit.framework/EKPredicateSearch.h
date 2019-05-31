/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKCancellableRemoteOperation.h>

@class NSPredicate, EKEventStore, NSString;

@interface EKPredicateSearch : NSObject <EKCancellableRemoteOperation> {

	/*^block*/id _callback;
	Class _entityClass;
	NSPredicate* _predicate;
	EKEventStore* _store;
	id _cancellationToken;
	BOOL _finished;
	BOOL _isCancelled;
	int _retryCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3 ;
-(void)terminate;
-(id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3 ;
-(id)_createOSActivity;
-(void)_startActualWithCompletion:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
-(void)_fetchObjectIDsActualWithCompletion:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
-(void)_startProcessingWithCompletion:(/*^block*/id)arg1 synchronous:(BOOL)arg2 processor:(/*^block*/id)arg3 ;
-(void)_startActivityWithCompletion:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
-(void)_startFetchObjectIDsActivityWithCompletion:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
-(id)runSynchronously;
-(id)fetchObjectIDs;
-(id)startWithCompletion:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)disconnect;
@end

