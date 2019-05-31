/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@protocol SyncManagerProtocol;
@class NSDate, NSArray, NSPredicate, NSString, NSNumber;

@interface CHManager : CHSynchronizedLoggable {

	BOOL _showsTelephonyCalls;
	BOOL _showsFaceTimeVideoCalls;
	BOOL _showsFaceTimeAudioCalls;
	BOOL _generateSyncTransactions;
	BOOL _cacheIsDirty;
	BOOL _reCoalesce;
	unsigned _limitingCallTypes;
	NSDate* _limitingStartDate;
	NSDate* _limitingEndDate;
	NSArray* _limitingCallKinds;
	NSPredicate* _postFetchingPredicate;
	NSString* _coalescingStrategy;
	NSArray* _recentCalls;
	long long _numberOfUnseenMissedCalls;
	id<SyncManagerProtocol> _syncManager;
	NSArray* _uncoalescedRecentCalls;
	NSArray* _uncoalescedUnFilteredRecentCalls;
	NSNumber* _unreadCallCount;

}

@property (nonatomic,retain) NSArray * recentCalls;                                                           //@synthesize recentCalls=_recentCalls - In the implementation block
@property (assign) long long numberOfUnseenMissedCalls;                                                       //@synthesize numberOfUnseenMissedCalls=_numberOfUnseenMissedCalls - In the implementation block
@property (retain) id<SyncManagerProtocol> syncManager;                                                       //@synthesize syncManager=_syncManager - In the implementation block
@property (assign) BOOL cacheIsDirty;                                                                         //@synthesize cacheIsDirty=_cacheIsDirty - In the implementation block
@property (assign) BOOL reCoalesce;                                                                           //@synthesize reCoalesce=_reCoalesce - In the implementation block
@property (getter=uncoalescedRecentCallsSync,nonatomic,retain) NSArray * uncoalescedRecentCalls;              //@synthesize uncoalescedRecentCalls=_uncoalescedRecentCalls - In the implementation block
@property (retain) NSArray * uncoalescedUnFilteredRecentCalls;                                                //@synthesize uncoalescedUnFilteredRecentCalls=_uncoalescedUnFilteredRecentCalls - In the implementation block
@property (retain) NSNumber * unreadCallCount;                                                                //@synthesize unreadCallCount=_unreadCallCount - In the implementation block
@property (assign,nonatomic) BOOL showsFaceTimeVideoCalls;                                                    //@synthesize showsFaceTimeVideoCalls=_showsFaceTimeVideoCalls - In the implementation block
@property (assign,nonatomic) BOOL showsFaceTimeAudioCalls;                                                    //@synthesize showsFaceTimeAudioCalls=_showsFaceTimeAudioCalls - In the implementation block
@property (assign,nonatomic) BOOL showsTelephonyCalls;                                                        //@synthesize showsTelephonyCalls=_showsTelephonyCalls - In the implementation block
@property (assign) BOOL generateSyncTransactions;                                                             //@synthesize generateSyncTransactions=_generateSyncTransactions - In the implementation block
@property (assign,nonatomic) unsigned limitingCallTypes;                                                      //@synthesize limitingCallTypes=_limitingCallTypes - In the implementation block
@property (nonatomic,copy) NSDate * limitingStartDate;                                                        //@synthesize limitingStartDate=_limitingStartDate - In the implementation block
@property (nonatomic,copy) NSDate * limitingEndDate;                                                          //@synthesize limitingEndDate=_limitingEndDate - In the implementation block
@property (nonatomic,copy) NSArray * limitingCallKinds;                                                       //@synthesize limitingCallKinds=_limitingCallKinds - In the implementation block
@property (nonatomic,copy) NSPredicate * postFetchingPredicate;                                               //@synthesize postFetchingPredicate=_postFetchingPredicate - In the implementation block
@property (nonatomic,copy) NSString * coalescingStrategy;                                                     //@synthesize coalescingStrategy=_coalescingStrategy - In the implementation block
+(id)limitingCallKindsForCallType:(unsigned)arg1 ;
+(unsigned)CHCallStatusForCallWithDuration:(double)arg1 isOriginated:(BOOL)arg2 isAnswered:(BOOL)arg3 ;
-(NSArray *)recentCalls;
-(void)setCoalescingStrategy:(NSString *)arg1 ;
-(void)clearDatabase;
-(void)deleteCall:(id)arg1 ;
-(void)deleteTheseCalls:(id)arg1 ;
-(void)markAllCallsAsReadWithPredicate:(id)arg1 ;
-(id)recentCallsWithPredicate:(id)arg1 ;
-(NSString *)coalescingStrategy;
-(void)setRecentCalls:(NSArray *)arg1 ;
-(unsigned long long)countCallsWithPredicate:(id)arg1 ;
-(unsigned long long)fetchUnreadCallsCount;
-(void)setUnreadCallCount:(NSNumber *)arg1 ;
-(void)setLimitingCallKinds:(NSArray *)arg1 ;
-(NSNumber *)unreadCallCount;
-(void)registerForNotifications;
-(void)setLimitingCallTypesSync:(unsigned)arg1 ;
-(void)setDefaultInitValues;
-(void)setInitialLimitingCallKinds:(id)arg1 ;
-(void)setLimitingCallKindsSync:(id)arg1 ;
-(void)databaseChanged:(id)arg1 ;
-(void)addressBookChanged:(id)arg1 ;
-(void)currentLocaleChanged:(id)arg1 ;
-(void)setCacheIsDirty:(BOOL)arg1 ;
-(void)setReCoalesce:(BOOL)arg1 ;
-(id)fetchRecentCallsSyncWithCoalescing:(BOOL)arg1 ;
-(id)unCoalesceCall:(id)arg1 ;
-(id)coalesceCalls:(id)arg1 ;
-(id)applyPredicate:(id)arg1 toCalls:(id)arg2 ;
-(BOOL)cacheIsDirty;
-(id)getLimitsDictionary;
-(void)setUncoalescedUnFilteredRecentCalls:(NSArray *)arg1 ;
-(BOOL)reCoalesce;
-(NSArray *)uncoalescedUnFilteredRecentCalls;
-(id)uncoalescedRecentCallsSync;
-(unsigned long long)countCallsWithPredicateSync:(id)arg1 ;
-(BOOL)generateSyncTransactions;
-(void)deleteTheseCallsSync:(id)arg1 ;
-(void)deleteAllCallsSync;
-(id)latestRecentCallMatchingPredicate:(id)arg1 ;
-(id)initWithFetchingLimitsDictionary:(id)arg1 andCoalescingStrategy:(id)arg2 andPostFetchingPredicate:(id)arg3 withQueue:(id)arg4 ;
-(void)addToCallHistory:(id)arg1 ;
-(void)setOutgoingLocalParticipantUUID:(id)arg1 forRecentCallsMatchingPredicate:(id)arg2 ;
-(void)updateBytesOfDataUsedFor:(id)arg1 with:(id)arg2 ;
-(void)deleteCallsWithPredicate:(id)arg1 ;
-(void)deleteCallAtIndex:(unsigned long long)arg1 ;
-(void)deleteAllCalls;
-(void)setLimitingCallTypes:(unsigned)arg1 ;
-(void)setPostFetchingPredicate:(NSPredicate *)arg1 ;
-(void)setLimitingStartDate:(NSDate *)arg1 ;
-(void)setLimitingEndDate:(NSDate *)arg1 ;
-(void)setShowsFaceTimeVideoCalls:(BOOL)arg1 ;
-(void)setShowsFaceTimeAudioCalls:(BOOL)arg1 ;
-(BOOL)showsTelephonyCalls;
-(BOOL)showsFaceTimeVideoCalls;
-(BOOL)showsFaceTimeAudioCalls;
-(unsigned)limitingCallTypes;
-(NSDate *)limitingStartDate;
-(NSDate *)limitingEndDate;
-(NSArray *)limitingCallKinds;
-(NSPredicate *)postFetchingPredicate;
-(void)setShowsTelephonyCalls:(BOOL)arg1 ;
-(double)callTimersGetIncoming;
-(double)callTimersGetOutgoing;
-(double)callTimersGetLifetime;
-(void)callTimersReset;
-(void)addMultipleCallsToCallHistory:(id)arg1 ;
-(id)latestTelephonyCallMatchingNormalizedRemoteParticipantHandleValues:(id)arg1 ;
-(void)setGenerateSyncTransactions:(BOOL)arg1 ;
-(long long)numberOfUnseenMissedCalls;
-(void)setNumberOfUnseenMissedCalls:(long long)arg1 ;
-(void)setSyncManager:(id<SyncManagerProtocol>)arg1 ;
-(void)setUncoalescedRecentCalls:(NSArray *)arg1 ;
-(id<SyncManagerProtocol>)syncManager;
-(id)init;
-(void)dealloc;
-(void)flush;
@end

