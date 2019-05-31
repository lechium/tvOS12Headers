/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIActivityExtensionItemDataProviding.h>
#import <UIKit/UIActivityExtensionItemDataReceiving.h>

@class _UIActivityResourceLoader, NSUUID, NSExtension, NSString, UIImage, UIViewController;

@interface UIActivity : NSObject <UIActivityExtensionItemDataProviding, UIActivityExtensionItemDataReceiving> {

	long long _defaultPriority;
	_UIActivityResourceLoader* _activityImageLoader;
	_UIActivityResourceLoader* _activitySettingsImageLoader;
	/*^block*/id _activityCompletionWithItemsHandler;
	/*^block*/id _didFinishPerformingActivityHandler;
	long long _maxPreviews;
	unsigned long long _indexInApplicationDefinedActivities;
	NSUUID* _activityUUID;

}

@property (nonatomic,readonly) NSExtension * applicationExtension; 
@property (nonatomic,copy) id activityCompletionWithItemsHandler;                                     //@synthesize activityCompletionWithItemsHandler=_activityCompletionWithItemsHandler - In the implementation block
@property (nonatomic,copy) id didFinishPerformingActivityHandler;                                     //@synthesize didFinishPerformingActivityHandler=_didFinishPerformingActivityHandler - In the implementation block
@property (assign,nonatomic) long long maxPreviews;                                                   //@synthesize maxPreviews=_maxPreviews - In the implementation block
@property (assign,nonatomic) unsigned long long indexInApplicationDefinedActivities;                  //@synthesize indexInApplicationDefinedActivities=_indexInApplicationDefinedActivities - In the implementation block
@property (nonatomic,readonly) _UIActivityResourceLoader * _activityImageLoader; 
@property (nonatomic,readonly) _UIActivityResourceLoader * _activitySettingsImageLoader; 
@property (nonatomic,readonly) id _backgroundPreheatBlock; 
@property (nonatomic,readonly) NSUUID * activityUUID;                                                 //@synthesize activityUUID=_activityUUID - In the implementation block
@property (nonatomic,readonly) NSString * activityType; 
@property (nonatomic,readonly) NSString * activityTitle; 
@property (nonatomic,readonly) UIImage * activityImage; 
@property (nonatomic,readonly) UIViewController * activityViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)streamActivitiesWithCompletion:(/*^block*/id)arg1 ;
+(id)preparedActivityExtensionItemDataForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2 ;
+(long long)activityCategory;
+(id)_activityImageForActionRepresentationImage:(id)arg1 ;
+(id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2 ;
+(Class)classForPreparingExtensionItemData;
+(unsigned long long)_xpcAttributes;
+(id)_imageByApplyingDefaultEffectsToImage:(id)arg1 activityCategory:(long long)arg2 ;
+(id)_defaultFallbackActivityType;
+(void)_performAfterActivityImageLoadingCompletes:(/*^block*/id)arg1 ;
+(id)_activityImageForApplicationBundleIdentifier:(id)arg1 ;
+(id)_activitySettingsImageForApplicationBundleIdentifier:(id)arg1 ;
+(id)_activityImageForBundleImageConfiguration:(id)arg1 ;
+(id)_activitySettingsImageForBundleImageConfiguration:(id)arg1 ;
-(id)init;
-(void)_cleanup;
-(CGSize)_thumbnailSize;
-(NSString *)activityType;
-(long long)maxPreviews;
-(NSExtension *)applicationExtension;
-(void)prepareWithActivityExtensionItemData:(id)arg1 ;
-(void)activityDidFinish:(BOOL)arg1 items:(id)arg2 error:(id)arg3 ;
-(void)_injectedJavaScriptResult:(id)arg1 ;
-(long long)_defaultSortGroup;
-(NSString *)activityTitle;
-(id)_activityImage;
-(id)_activitySettingsImage;
-(BOOL)_canBeExcludeWhenMatchingWithContext:(id)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isExecutedInProcess;
-(void)activityDidFinish:(BOOL)arg1 ;
-(id)_activityBundleImageConfiguration;
-(id)_embeddedActivityViewController;
-(void)_willPresentAsFormSheet;
-(UIViewController *)activityViewController;
-(void)performActivity;
-(id)_bundleIdentifierForActivityImageCreation;
-(BOOL)_appIsDocumentTypeOwner;
-(id)_backgroundPreheatBlock;
-(void)_willBePerformedOrPresented;
-(BOOL)_wantsThumbnailItemData;
-(BOOL)_wantsAttachmentURLItemData;
-(id)_activityTypeUsingFallbackActivityTypeIfNecessary;
-(_UIActivityResourceLoader *)_activitySettingsImageLoader;
-(_UIActivityResourceLoader *)_activityImageLoader;
-(NSUUID *)activityUUID;
-(unsigned long long)indexInApplicationDefinedActivities;
-(BOOL)_supportsOpenInPlace;
-(id)_beforeActivity;
-(UIImage *)activityImage;
-(BOOL)_activitySupportsPromiseURLs;
-(id)didFinishPerformingActivityHandler;
-(void)setDidFinishPerformingActivityHandler:(id)arg1 ;
-(id)_subjectForActivityItem:(id)arg1 ;
-(id)_dataTypeIdentifierForActivityItem:(id)arg1 ;
-(id)_thumbnailImageForActivityItem:(id)arg1 ;
-(id)_attachmentNameForActivityItem:(id)arg1 ;
-(void)_setActivityCompletionWithItemsHandler:(/*^block*/id)arg1 ;
-(id)activityCompletionWithItemsHandler;
-(void)setActivityCompletionWithItemsHandler:(id)arg1 ;
-(void)setMaxPreviews:(long long)arg1 ;
-(void)setIndexInApplicationDefinedActivities:(unsigned long long)arg1 ;
-(id)_activitySettingsBundleImageConfiguration;
-(id)_encodableActivitySettingsImageConfiguration;
-(id)_encodableActivityImageConfiguration;
@end
