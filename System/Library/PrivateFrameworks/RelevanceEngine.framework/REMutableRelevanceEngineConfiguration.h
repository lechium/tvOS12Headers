/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceEngineConfiguration.h>

@class NSURL, REDataSourceLoader, RELocationManager, REFeatureSet, NSString;

@interface REMutableRelevanceEngineConfiguration : RERelevanceEngineConfiguration

@property (nonatomic,copy) NSURL * modelFileURL; 
@property (nonatomic,copy) NSURL * baseModelFileURL; 
@property (assign,nonatomic) BOOL allowsUpdatingModelFile; 
@property (nonatomic,copy) REDataSourceLoader * dataSourceLoader; 
@property (assign,nonatomic) unsigned long long trainingBehavior; 
@property (assign,nonatomic) unsigned long long modelStorageBehavior; 
@property (nonatomic,retain) RELocationManager * locationManager; 
@property (nonatomic,copy) REFeatureSet * primaryFeatures; 
@property (assign,nonatomic) BOOL wantsImmutableContent; 
@property (nonatomic,copy) NSString * preferenceDomain; 
@property (assign,nonatomic) BOOL allowsRemoteTraining; 
@property (assign,nonatomic) BOOL wantsBackup; 
@property (assign,nonatomic) BOOL ignoreDeviceLockState; 
+(id)defaultConfiguration;
-(void)removeSectionAtIndex:(unsigned long long)arg1 ;
-(void)setLocationManager:(RELocationManager *)arg1 ;
-(void)insertSectionWithDescriptor:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(long long)_indexOfSectionWithName:(id)arg1 ;
-(void)insertInteractionWithDescriptor:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(long long)_indexOfInteractionWithName:(id)arg1 ;
-(void)setModelFileURL:(NSURL *)arg1 ;
-(void)setBaseModelFileURL:(NSURL *)arg1 ;
-(void)setAllowsUpdatingModelFile:(BOOL)arg1 ;
-(void)setDataSourceLoader:(REDataSourceLoader *)arg1 ;
-(void)setTrainingBehavior:(unsigned long long)arg1 ;
-(void)setModelStorageBehavior:(unsigned long long)arg1 ;
-(void)addSectionWithDescriptor:(id)arg1 ;
-(void)removeSectionWithName:(id)arg1 ;
-(void)addInteractionWithDescriptor:(id)arg1 ;
-(void)removeInteractionAtIndex:(unsigned long long)arg1 ;
-(void)setPrimaryFeatures:(REFeatureSet *)arg1 ;
-(void)setWantsImmutableContent:(BOOL)arg1 ;
-(void)setPreferenceDomain:(NSString *)arg1 ;
-(void)setAllowsRemoteTraining:(BOOL)arg1 ;
-(void)setWantsBackup:(BOOL)arg1 ;
-(void)setIgnoreDeviceLockState:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

