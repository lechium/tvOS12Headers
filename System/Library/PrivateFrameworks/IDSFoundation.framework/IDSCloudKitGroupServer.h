/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, IDSCKDatabase;

@interface IDSCloudKitGroupServer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	IDSCKDatabase* _database;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) IDSCKDatabase * database;                        //@synthesize database=_database - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithDatabase:(id)arg1 queue:(id)arg2 ;
-(void)q_groupFromRecord:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveGroup:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchGroupWithID:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchGroupsWithStableGroupID:(id)arg1 inContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(IDSCKDatabase *)database;
-(void)setDatabase:(IDSCKDatabase *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end

