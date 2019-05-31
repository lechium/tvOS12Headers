/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKDSystemAvailabilityWatcher.h>

@protocol OS_dispatch_queue;
@class NSOperationQueue, CKDServerConfiguration, NSMutableSet, NSMutableDictionary, NSObject, NSString;

@interface CKDServerConfigurationManager : NSObject <CKDSystemAvailabilityWatcher> {

	BOOL _shouldDropAllConfigurations;
	int _iCloudEnvNotifToken;
	NSOperationQueue* _configurationQueue;
	CKDServerConfiguration* _globalConfiguration;
	NSMutableSet* _globalConfigurationOps;
	NSOperationQueue* _containerSpecificInfoQueue;
	NSMutableDictionary* _containerSpecificInfos;
	NSMutableDictionary* _containerSpecificInfoOperations;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,retain) NSOperationQueue * configurationQueue;                              //@synthesize configurationQueue=_configurationQueue - In the implementation block
@property (nonatomic,retain) CKDServerConfiguration * globalConfiguration;                       //@synthesize globalConfiguration=_globalConfiguration - In the implementation block
@property (nonatomic,retain) NSMutableSet * globalConfigurationOps;                              //@synthesize globalConfigurationOps=_globalConfigurationOps - In the implementation block
@property (nonatomic,retain) NSOperationQueue * containerSpecificInfoQueue;                      //@synthesize containerSpecificInfoQueue=_containerSpecificInfoQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * containerSpecificInfos;                       //@synthesize containerSpecificInfos=_containerSpecificInfos - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * containerSpecificInfoOperations;              //@synthesize containerSpecificInfoOperations=_containerSpecificInfoOperations - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                         //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (assign,nonatomic) int iCloudEnvNotifToken;                                            //@synthesize iCloudEnvNotifToken=_iCloudEnvNotifToken - In the implementation block
@property (assign,nonatomic) BOOL shouldDropAllConfigurations;                                   //@synthesize shouldDropAllConfigurations=_shouldDropAllConfigurations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)setGlobalConfiguration:(CKDServerConfiguration *)arg1 ;
-(id)CKStatusReportArray;
-(void)expireGlobalConfiguration;
-(void)expireConfigurationForContext:(id)arg1 ;
-(void)systemAvailabilityChanged:(unsigned long long)arg1 ;
-(void)configurationForOperation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)containerInfoForOperation:(id)arg1 requireUserIDs:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(CKDServerConfiguration *)globalConfiguration;
-(BOOL)shouldDropAllConfigurations;
-(void)_reallyDropAllConfigurations;
-(void)_behaviorOptionsChanged:(id)arg1 ;
-(void)_dropAllConfigurations;
-(NSMutableSet *)globalConfigurationOps;
-(NSOperationQueue *)configurationQueue;
-(id)_uniqueStringForContainerAndAccount:(id)arg1 ;
-(NSMutableDictionary *)containerSpecificInfoOperations;
-(NSOperationQueue *)containerSpecificInfoQueue;
-(NSMutableDictionary *)containerSpecificInfos;
-(void)_fetchGlobalConfigForOperation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchContainerSpecificInfoForOperation:(id)arg1 requireUserIDs:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setShouldDropAllConfigurations:(BOOL)arg1 ;
-(void)_writeOutiCloudHostnames:(id)arg1 ;
-(void)setConfigurationQueue:(NSOperationQueue *)arg1 ;
-(void)setGlobalConfigurationOps:(NSMutableSet *)arg1 ;
-(void)setContainerSpecificInfoQueue:(NSOperationQueue *)arg1 ;
-(void)setContainerSpecificInfos:(NSMutableDictionary *)arg1 ;
-(void)setContainerSpecificInfoOperations:(NSMutableDictionary *)arg1 ;
-(int)iCloudEnvNotifToken;
-(void)setICloudEnvNotifToken:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)dealloc;
@end

