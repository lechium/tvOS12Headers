/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHChangeRequestHelper, NSString, PHRelationshipChangeRequestHelper, PHObjectPlaceholder, NSManagedObjectID;

@interface PHSuggestionChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {

	BOOL _clientEntitled;
	int _clientProcessID;
	PHChangeRequestHelper* _helper;
	NSString* _clientName;
	PHRelationshipChangeRequestHelper* _keyAssetsHelper;
	PHRelationshipChangeRequestHelper* _representativeAssetsHelper;

}

@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * keyAssetsHelper;                         //@synthesize keyAssetsHelper=_keyAssetsHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * representativeAssetsHelper;              //@synthesize representativeAssetsHelper=_representativeAssetsHelper - In the implementation block
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedSuggestion; 
@property (assign,nonatomic) unsigned short notificationState; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled;                                 //@synthesize clientEntitled=_clientEntitled - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                                                       //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) int clientProcessID;                                                         //@synthesize clientProcessID=_clientProcessID - In the implementation block
@property (getter=isNew,readonly) BOOL new; 
@property (nonatomic,readonly) PHChangeRequestHelper * helper;                                              //@synthesize helper=_helper - In the implementation block
@property (getter=isMutated,readonly) BOOL mutated; 
+(BOOL)canGenerateUUIDWithoutEntitlements;
+(id)creationRequestForSuggestionWithType:(unsigned short)arg1 subtype:(unsigned short)arg2 keyAssets:(id)arg3 representativeAssets:(id)arg4 creationDate:(id)arg5 relevantUntilDate:(id)arg6 version:(long long)arg7 ;
+(id)creationRequestForSuggestion;
+(void)deleteSuggestions:(id)arg1 ;
+(id)changeRequestForSuggestion:(id)arg1 ;
-(id)startDate;
-(id)endDate;
-(void)setCreationDate:(id)arg1 ;
-(id)creationDate;
-(void)setStartDate:(id)arg1 ;
-(void)setEndDate:(id)arg1 ;
-(void)setKeyAssets:(id)arg1 ;
-(void)setRepresentativeAssets:(id)arg1 ;
-(id)activationDate;
-(void)setActivationDate:(id)arg1 ;
-(id)relevantUntilDate;
-(void)setRelevantUntilDate:(id)arg1 ;
-(id)expungeDate;
-(void)setExpungeDate:(id)arg1 ;
-(id)actionData;
-(void)setActionData:(id)arg1 ;
-(id)featuresData;
-(void)setFeaturesData:(id)arg1 ;
-(NSString *)managedEntityName;
-(BOOL)isClientEntitled;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2 ;
-(int)clientProcessID;
-(id)initForNewObject;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1 ;
-(PHChangeRequestHelper *)helper;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)didMutate;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)isMutated;
-(PHObjectPlaceholder *)placeholderForCreatedSuggestion;
-(PHRelationshipChangeRequestHelper *)representativeAssetsHelper;
-(void)setStartAndEndDatesWithKeyAssets:(id)arg1 representativeAssets:(id)arg2 ;
-(void)_calculateAndSetExpungeDate;
-(PHRelationshipChangeRequestHelper *)keyAssetsHelper;
-(void)setActionProperties:(id)arg1 ;
-(void)setFeaturesProperties:(id)arg1 ;
-(void)markRetired;
-(void)markReactivated;
-(NSManagedObjectID *)objectID;
-(void)markDeclined;
-(void)setNotificationState:(unsigned short)arg1 ;
-(void)markAccepted;
-(void)markActive;
-(unsigned short)notificationState;
-(BOOL)isNew;
-(NSString *)clientName;
-(NSString *)uuid;
-(unsigned short)state;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(unsigned short)type;
-(void)setType:(unsigned short)arg1 ;
-(void)setState:(unsigned short)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(unsigned short)subtype;
-(void)setSubtype:(unsigned short)arg1 ;
@end

