/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/WLKUISettingsInterface.h>

@protocol WLKUISettingsInterface <JSExport>
@required
-(BOOL)privateModeEnabled;
-(BOOL)sportsScoreSpoilersAllowed;
-(id)consentedBrands;
-(id)deniedBrands;
-(unsigned long long)privacyFlowContentVersion;
-(void)forceUpdateWithCallback:(id)arg1;
-(id)settings;

@end


@interface WLKUISettingsInterface : IKJSObject <WLKUISettingsInterface>
-(void)_handleSettingsDidChange:(id)arg1 ;
-(BOOL)privateModeEnabled;
-(BOOL)sportsScoreSpoilersAllowed;
-(id)consentedBrands;
-(id)deniedBrands;
-(unsigned long long)privacyFlowContentVersion;
-(void)forceUpdateWithCallback:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(void)dealloc;
-(id)settings;
@end

