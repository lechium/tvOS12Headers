/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSMutableArray, NSLock, NSError, NSString;

@interface GKUpdateGroup : NSObject {

	NSObject*<OS_dispatch_queue> _targetQueue;
	NSMutableArray* _notifiers;
	NSObject*<OS_dispatch_group> _dispatchGroup;
	NSLock* _lock;
	NSError* _error;
	NSString* _name;

}

@property (retain) NSLock * lock;                                     //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableArray * notifiers;              //@synthesize notifiers=_notifiers - In the implementation block
@property (retain) NSError * error;                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long updateCount; 
+(id)updateGroupWithName:(id)arg1 ;
+(id)updateGroupForTargetQueue:(id)arg1 ;
+(id)updateGroupWithName:(id)arg1 taregetQueue:(id)arg2 ;
+(id)updateGroup;
-(long long)updateCount;
-(void)wait;
-(void)join:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 targetQueue:(id)arg2 ;
-(NSMutableArray *)notifiers;
-(void)joinApplyUpdatesAndDo:(/*^block*/id)arg1 ;
-(void)joinAndApplyUpdates;
-(void)cancelUpdates;
-(void)setNotifiers:(NSMutableArray *)arg1 ;
-(void)applyUpdates;
-(void)performOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setLock:(NSLock *)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)perform:(/*^block*/id)arg1 ;
-(NSLock *)lock;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

