/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>

@class RTDefaultsManager, RTDiagnostics, NSMutableDictionary, NSMutableArray;

@interface RTXPCActivityManager : RTService {

	BOOL _runningTask;
	RTDefaultsManager* _defaultsManager;
	RTDiagnostics* _diagnosgtics;
	NSMutableDictionary* _registrants;
	NSMutableArray* _pendingTasks;

}

@property (nonatomic,retain) RTDefaultsManager * defaultsManager;              //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTDiagnostics * diagnosgtics;                     //@synthesize diagnosgtics=_diagnosgtics - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registrants;                //@synthesize registrants=_registrants - In the implementation block
@property (assign,nonatomic) BOOL runningTask;                                 //@synthesize runningTask=_runningTask - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingTasks;                    //@synthesize pendingTasks=_pendingTasks - In the implementation block
+(void)xpcActivityUnregisterIdentifier:(const char*)arg1 ;
+(id)lastAttemptDateKeyForIdentifier:(id)arg1 ;
+(id)criteriaDictionaryWithCriteria:(id)arg1 ;
+(long long)xpcActivityGetStateActivity:(id)arg1 ;
+(id)xpcActivityCopyCriteriaActivity:(id)arg1 ;
+(void)xpcActivitySetCriteriaActivity:(id)arg1 criteria:(id)arg2 ;
+(BOOL)xpcActivitySetStateActivity:(id)arg1 state:(long long)arg2 ;
+(void)xpcActivityRegisterIdentifier:(const char*)arg1 criteria:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_setup;
-(id)initWithDefaultsManager:(id)arg1 diagnostics:(id)arg2 ;
-(RTDefaultsManager *)defaultsManager;
-(void)registerActivityWithIdentifier:(id)arg1 criteria:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)unregisterActivityWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(NSMutableDictionary *)registrants;
-(id)_lastAttemptDateForIdentifier:(id)arg1 ;
-(id)_registerRegistrant:(id)arg1 ;
-(NSMutableArray *)pendingTasks;
-(void)_scheduleNextTask;
-(void)_runRegistrantWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTDiagnostics *)diagnosgtics;
-(BOOL)runningTask;
-(BOOL)_takeSnapshotSinceDate:(id)arg1 description:(id)arg2 error:(id*)arg3 ;
-(void)_updateLastAttemptDateForIdentifier:(id)arg1 ;
-(void)setRunningTask:(BOOL)arg1 ;
-(void)runRegistrantWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_registerActivityWithIdentifier:(id)arg1 criteria:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_unregisterActivityWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setDiagnosgtics:(RTDiagnostics *)arg1 ;
-(void)setRegistrants:(NSMutableDictionary *)arg1 ;
-(void)setPendingTasks:(NSMutableArray *)arg1 ;
-(id)init;
@end

