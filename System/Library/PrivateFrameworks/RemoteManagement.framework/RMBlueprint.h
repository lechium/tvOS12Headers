/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMUniquedManagedObject.h>
#import <libobjc.A.dylib/RMUniquelySerializableManagedObject.h>

@class NSString, NSData, NSDate, NSSet, RMBlueprintSchedule, RMBlueprintUsageLimit, RMCoreOrganization;

@interface RMBlueprint : RMUniquedManagedObject <RMUniquelySerializableManagedObject>

@property (assign,nonatomic) BOOL isDirty; 
@property (assign,nonatomic) BOOL isTombstoned; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSData * versionVector; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,copy) NSDate * expiration; 
@property (nonatomic,retain) NSSet * users; 
@property (nonatomic,retain) RMBlueprintSchedule * schedule; 
@property (nonatomic,retain) RMBlueprintUsageLimit * usageLimit; 
@property (assign,nonatomic) BOOL invertUsageLimit; 
@property (nonatomic,retain) NSSet * configurations; 
@property (nonatomic,retain) RMCoreOrganization * organization; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ;
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchRequestMatchingExpiredBlueprints;
+(id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 ;
+(id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 fromOrganization:(id)arg3 ;
+(id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 withIdentifier:(id)arg3 ;
+(id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 withIdentifier:(id)arg3 fromOrganization:(id)arg4 ;
+(id)fetchResultsRequestsForChangesToBlueprints;
+(id)fetchResultsRequestsForChangesToBlueprintsForUserWithDSID:(id)arg1 ;
-(void)delete;
-(void)tombstone;
-(id)computeUniqueIdentifier;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)declarationsWithError:(id*)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

