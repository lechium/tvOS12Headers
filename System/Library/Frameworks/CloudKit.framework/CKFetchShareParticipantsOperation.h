/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableSet, NSMutableDictionary;

@interface CKFetchShareParticipantsOperation : CKOperation {

	/*^block*/id _shareParticipantFetchedBlock;
	/*^block*/id _fetchShareParticipantsCompletionBlock;
	NSArray* _userIdentityLookupInfos;
	NSMutableSet* _discoveredUserIdentities;
	NSMutableDictionary* _lookupErrors;

}

@property (nonatomic,retain) NSMutableSet * discoveredUserIdentities;              //@synthesize discoveredUserIdentities=_discoveredUserIdentities - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lookupErrors;                   //@synthesize lookupErrors=_lookupErrors - In the implementation block
@property (nonatomic,copy) NSArray * userIdentityLookupInfos;                      //@synthesize userIdentityLookupInfos=_userIdentityLookupInfos - In the implementation block
@property (nonatomic,copy) id shareParticipantFetchedBlock;                        //@synthesize shareParticipantFetchedBlock=_shareParticipantFetchedBlock - In the implementation block
@property (nonatomic,copy) id fetchShareParticipantsCompletionBlock;               //@synthesize fetchShareParticipantsCompletionBlock=_fetchShareParticipantsCompletionBlock - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)initWithUserIdentityLookupInfos:(id)arg1 ;
-(void)setFetchShareParticipantsCompletionBlock:(id)arg1 ;
-(id)fetchShareParticipantsCompletionBlock;
-(NSMutableSet *)discoveredUserIdentities;
-(NSMutableDictionary *)lookupErrors;
-(void)setDiscoveredUserIdentities:(NSMutableSet *)arg1 ;
-(void)setLookupErrors:(NSMutableDictionary *)arg1 ;
-(void)setShareParticipantFetchedBlock:(id)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)userIdentityLookupInfos;
-(void)setUserIdentityLookupInfos:(NSArray *)arg1 ;
-(id)shareParticipantFetchedBlock;
-(id)init;
@end

