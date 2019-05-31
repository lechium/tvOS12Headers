/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheShareGroup, CKShare, NSArray;

@interface HMDBackingStoreCacheUpdateShareGroupOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheShareGroup* _record;
	CKShare* _share;
	NSArray* _users;

}

@property (nonatomic,retain) HMDBackingStoreCacheShareGroup * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) CKShare * share;                                      //@synthesize share=_share - In the implementation block
@property (nonatomic,retain) NSArray * users;                                      //@synthesize users=_users - In the implementation block
-(HMDBackingStoreCacheShareGroup *)record;
-(NSArray *)users;
-(id)mainReturningError;
-(void)setRecord:(HMDBackingStoreCacheShareGroup *)arg1 ;
-(CKShare *)share;
-(id)initWithShareGroup:(id)arg1 share:(id)arg2 users:(id)arg3 resultBlock:(/*^block*/id)arg4 ;
-(void)setShare:(CKShare *)arg1 ;
-(void)setUsers:(NSArray *)arg1 ;
@end
