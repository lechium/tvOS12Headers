/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIContentSizeCategoryPreference.h>

@interface _UIContentSizeCategoryPreferenceSystem : UIContentSizeCategoryPreference {

	BOOL _observingNotification;
	BOOL _didCheckForPreferredContentSizeCategoryOverride;
	BOOL _applicationOverridesPreferredContentSizeCategory;

}
-(void)dealloc;
-(void)checkForChanges;
-(void)_updateContentSizeCategory:(id)arg1 postingNotification:(BOOL)arg2 ;
-(id)initAsSystem;
-(void)_readAndObservePreferences;
-(void)setPreferredContentSizeCategory:(id)arg1 ;
-(void)_updateContentSizeCategoryFromUserDefaultsPostingNotification:(BOOL)arg1 ;
-(void)_beginObservingPreferredContentSizeChangedNotification;
-(void)_endObservingPreferredContentSizeChangedNotification;
-(void)_postContentSizeCategoryDidChangeNotification;
@end
