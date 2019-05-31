/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNSNotificationRepositoryObserver.h>
#import <libobjc.A.dylib/UNSNotificationCategoryRepositoryObserver.h>
#import <libobjc.A.dylib/UNSNotificationTopicRepositoryObserver.h>
#import <libobjc.A.dylib/BBRemoteDataProvider.h>

@protocol OS_dispatch_queue;
@class BBSectionIcon, BSCFBundle, UNSNotificationSourceDescription, UNSApplicationLauncher, UNSDaemonLauncher, UNSNotificationRepository, UNSNotificationCategoryRepository, UNSNotificationTopicRepository, UNSAttachmentsService, BBDataProviderProxy, NSObject, NSMutableDictionary, BBSectionInfo, NSString;

@interface UNSDefaultDataProvider : NSObject <UNSNotificationRepositoryObserver, UNSNotificationCategoryRepositoryObserver, UNSNotificationTopicRepositoryObserver, BBRemoteDataProvider> {

	BBSectionIcon* _sectionIcon;
	BSCFBundle* _bundle;
	BOOL _suppressUserAuthorizationPrompt;
	UNSNotificationSourceDescription* _notificationSourceDescription;
	UNSApplicationLauncher* _appLauncher;
	UNSDaemonLauncher* _daemonLauncher;
	UNSNotificationRepository* _notificationRepository;
	UNSNotificationCategoryRepository* _categoryRepository;
	UNSNotificationTopicRepository* _topicRepository;
	UNSAttachmentsService* _attachmentsService;
	BBDataProviderProxy* _proxy;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _primaryAttachments;
	NSMutableDictionary* _primaryAttachmentMetadata;
	NSMutableDictionary* _categoryToParamSubType;
	BBSectionInfo* _sectionInfo;

}

@property (nonatomic,retain) BBDataProviderProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) BBSectionInfo * sectionInfo;              //@synthesize sectionInfo=_sectionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sectionIdentifier;
-(void)setSectionInfo:(BBSectionInfo *)arg1 ;
-(BBSectionInfo *)sectionInfo;
-(void)setProxy:(BBDataProviderProxy *)arg1 ;
-(void)notificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(void)setNotificationSourceDescription:(id)arg1 ;
-(id)_sectionIconForNotificationSourceDescription:(id)arg1 ;
-(id)_allCategories;
-(id)_localizeClientString:(id)arg1 inBundle:(id)arg2 ;
-(id)_topicForIdentifier:(id)arg1 ;
-(id)_defaultActionWithNotification:(id)arg1 ;
-(id)_categoryForIdentifier:(id)arg1 ;
-(id)_dismissActionForCategory:(id)arg1 ;
-(id)_silenceActionForCategory:(id)arg1 ;
-(id)_supplementaryActionsForForCategoryRecord:(id)arg1 ;
-(BOOL)_queue_supportsCriticalAlertsForSubsectionIDs:(id)arg1 ;
-(id)_pathForSoundName:(id)arg1 ;
-(void)_addAttachments:(id)arg1 toBulletinRequest:(id)arg2 ;
-(id)_queue_applicableSectionInfosForSubsectionIDs:(id)arg1 ;
-(BOOL)_isResourceValidForPath:(id)arg1 withContainerPath:(id)arg2 ;
-(id)_actionsFromActionRecords:(id)arg1 ;
-(id)_actionFromActionRecord:(id)arg1 ;
-(id)notificationRecords;
-(id)_queue_bulletinForNotification:(id)arg1 ;
-(id)_allBulletinsWithMaxCount:(unsigned long long)arg1 sinceDate:(id)arg2 ;
-(void)_handleBulletinActionResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_unarchiveNotificationFromData:(id)arg1 ;
-(void)_queue_notificationRepositoryDidPerformUpdates:(id)arg1 ;
-(void)_queue_modifyBulletinForNotification:(id)arg1 ;
-(void)_queue_addBulletinForNotification:(id)arg1 ;
-(void)_queue_withdrawBulletinForNotification:(id)arg1 ;
-(id)_sectionIconVariantForImageName:(id)arg1 bundlePath:(id)arg2 format:(long long)arg3 ;
-(void)categoryRepository:(id)arg1 didChangeCategoriesForBundleIdentifier:(id)arg2 ;
-(void)topicRepository:(id)arg1 didChangeTopicsForBundleIdentifier:(id)arg2 ;
-(id)initWithNotificationSourceDescription:(id)arg1 applicationLauncher:(id)arg2 daemonLauncher:(id)arg3 categoryRepository:(id)arg4 notificationRepository:(id)arg5 topicRepository:(id)arg6 attachmentsService:(id)arg7 queue:(id)arg8 ;
-(void)uninstall;
-(BOOL)_isPushDataProvider;
-(id)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(unsigned long long)arg1 lastClearedInfo:(id)arg2 ;
-(id)universalSectionIdentifier;
-(id)defaultSectionInfo;
-(id)sectionDisplayName;
-(id)sectionIcon;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(id)primaryAttachmentDataForRecordID:(id)arg1 ;
-(id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 ;
-(float)attachmentAspectRatioForRecordID:(id)arg1 ;
-(void)dataProviderDidLoad;
-(id)defaultSubsectionInfos;
-(id)displayNameForSubsectionID:(id)arg1 ;
-(void)handleBulletinActionResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)syncsBulletinDismissal;
-(void)dealloc;
-(void)invalidate;
-(id)sortDescriptors;
-(BBDataProviderProxy *)proxy;
@end

