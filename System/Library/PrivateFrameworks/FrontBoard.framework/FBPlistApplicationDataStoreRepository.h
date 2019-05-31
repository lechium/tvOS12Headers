/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBApplicationDataStoreRepository.h>

@protocol FBApplicationDataStoreRepositoryDelegate, OS_dispatch_queue;
@class NSURL, NSMutableDictionary, NSObject, NSString;

@interface FBPlistApplicationDataStoreRepository : NSObject <FBApplicationDataStoreRepository> {

	NSURL* _storeURL;
	NSMutableDictionary* _state;
	BOOL _dirty;
	unsigned long long _batchCount;
	int _autoFlushDuration;
	id<FBApplicationDataStoreRepositoryDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _writeQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBApplicationDataStoreRepositoryReadingDelegate> delegate; 
-(BOOL)isDirty;
-(id)allObjectsForKeys:(id)arg1 ;
-(void)flushSynchronously;
-(id)applicationIdentifiersWithState;
-(id)objectForKey:(id)arg1 forApplication:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 ;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 ;
-(void)removeAllObjectsForApplication:(id)arg1 ;
-(id)_stateQueue_storeForIdentifier:(id)arg1 ;
-(id)_stateQueue_objectForKey:(id)arg1 forIdentifier:(id)arg2 ;
-(id)_stateQueue_objectsForKeys:(id)arg1 ;
-(BOOL)_isEligibleForSaving:(id)arg1 ;
-(id)_stateQueue_addStoreForIdentifierIfNecessary:(id)arg1 ;
-(void)_stateQueue_markDirty;
-(void)_stateQueue_removeStoreForIdentifier:(id)arg1 ;
-(void)_notifyDelegateOfChangeForKeys:(id)arg1 application:(id)arg2 ;
-(void)removeObjectsForKeys:(id)arg1 forApplication:(id)arg2 ;
-(void)_writeQueue_flushSynchronously;
-(void)_notifyDelegateOfStoreInvalidationForIdentifier:(id)arg1 ;
-(id)keysForApplication:(id)arg1 ;
-(BOOL)containsKey:(id)arg1 forApplication:(id)arg2 ;
-(void)beginBatchedUpdate;
-(void)endBatchedUpdate;
-(id)initWithStorePath:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBApplicationDataStoreRepositoryReadingDelegate>)arg1 ;
-(id<FBApplicationDataStoreRepositoryReadingDelegate>)delegate;
-(void)close;
-(id)location;
-(void)_load;
@end

