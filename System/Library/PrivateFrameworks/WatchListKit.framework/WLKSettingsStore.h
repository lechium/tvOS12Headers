/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSNumber, NSMutableArray, NSUserDefaults, NSXPCConnection, NSDate;

@interface WLKSettingsStore : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _readWriteQueue;
	BOOL _privateModeEnabled;
	BOOL _sportsScoreSpoilersAllowed;
	NSString* _pushToken;
	NSString* _accountID;
	NSNumber* _optedInVal;
	BOOL _optedIn;
	BOOL _migratediOS;
	BOOL _migratedtvOS;
	NSMutableArray* _apps;
	NSUserDefaults* _defaultsAccessor;
	int _didChangeNotificationToken;
	NSXPCConnection* _connection;
	BOOL _hasOutstandingChanges;
	int _ignoreChangesCount;
	NSDate* _lastSyncDate;
	NSDate* _lastSyncToCloudDate;

}

@property (assign) int ignoreChangesCount;                                     //@synthesize ignoreChangesCount=_ignoreChangesCount - In the implementation block
@property (assign) BOOL hasOutstandingChanges;                                 //@synthesize hasOutstandingChanges=_hasOutstandingChanges - In the implementation block
@property (assign,nonatomic) BOOL privateModeEnabled; 
@property (assign,nonatomic) BOOL sportsScoreSpoilersAllowed; 
@property (assign,nonatomic) BOOL optedIn; 
@property (nonatomic,copy) NSNumber * optedInVal;                              //@synthesize optedInVal=_optedInVal - In the implementation block
@property (assign,nonatomic) BOOL migratediOS; 
@property (assign,nonatomic) BOOL migratedtvOS; 
@property (nonatomic,copy) NSString * pushToken; 
@property (nonatomic,copy,readonly) NSDate * lastSyncDate;                     //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastSyncToCloudDate;              //@synthesize lastSyncToCloudDate=_lastSyncToCloudDate - In the implementation block
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)sharedSettings;
-(void)_writeToDisk;
-(id)_dictionaryRepresentation;
-(id)_connection;
-(void)setPushToken:(NSString *)arg1 ;
-(NSDate *)lastSyncDate;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(void)_readFromDisk;
-(id)_dictionaryOnDisk;
-(void)_writeToDisk:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dictionaryOnDisk:(/*^block*/id)arg1 ;
-(id)_supportPath;
-(void)synchronize:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)migratedtvOS;
-(BOOL)migratediOS;
-(void)_removeWatchListApp:(id)arg1 ;
-(void)setMigratedtvOS:(BOOL)arg1 ;
-(void)setMigratediOS:(BOOL)arg1 ;
-(void)setLastSyncToCloudDate:(NSDate *)arg1 ;
-(id)_dictionaryRepresentationDataOnly;
-(void)_accountStoreChangedNotification:(id)arg1 ;
-(id)_appsForChannelID:(id)arg1 ;
-(void)_attemptCullingOfObsoleteApp:(id)arg1 ;
-(void)_tickleKVO;
-(int)ignoreChangesCount;
-(void)setHasOutstandingChanges:(BOOL)arg1 ;
-(void)setName:(id)arg1 forChannelID:(id)arg2 externalID:(id)arg3 ;
-(void)setIgnoreChangesCount:(int)arg1 ;
-(BOOL)hasOutstandingChanges;
-(id)watchListAppsFiltered;
-(void)setPrivateModeEnabled:(BOOL)arg1 ;
-(void)setSportsScoreSpoilersAllowed:(BOOL)arg1 ;
-(void)_updateDisplayNamesForUI:(/*^block*/id)arg1 ;
-(void)setOptedInVal:(NSNumber *)arg1 ;
-(NSDate *)lastSyncToCloudDate;
-(NSString *)pushToken;
-(void)beginIgnoringChanges;
-(void)setStatus:(unsigned long long)arg1 forChannelID:(id)arg2 externalID:(id)arg3 ;
-(void)endIgnoringChanges;
-(void)setOptedIn:(BOOL)arg1 ;
-(id)settingsForChannelID:(id)arg1 externalID:(id)arg2 ;
-(NSNumber *)optedInVal;
-(BOOL)privateModeEnabled;
-(BOOL)sportsScoreSpoilersAllowed;
-(void)forceUpdateWithCompletion:(/*^block*/id)arg1 ;
-(id)watchListApps;
-(id)consentedBrands;
-(id)deniedBrands;
-(void)refresh;
-(BOOL)synchronize:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)optedIn;
@end

