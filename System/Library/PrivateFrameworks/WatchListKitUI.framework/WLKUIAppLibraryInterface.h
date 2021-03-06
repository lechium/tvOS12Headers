/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/WLKUIAppLibraryInterface.h>
@class NSArray;


@protocol WLKUIAppLibraryInterface <JSExport>
@property (nonatomic,readonly) NSArray * subscribed; 
@property (nonatomic,readonly) NSArray * installed; 
@property (nonatomic,readonly) NSArray * test; 
@required
-(NSArray *)installed;
-(BOOL)isAppInstalled:(id)arg1;
-(NSArray *)subscribed;
-(NSArray *)test;
-(void)installAppForChannel:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4;
-(BOOL)isShowingInstaller;
-(void)presentPurchase:(id)arg1;

@end


@class NSArray, WLKUIAppInstallerViewController;

@interface WLKUIAppLibraryInterface : IKJSObject <WLKUIAppLibraryInterface> {

	WLKUIAppInstallerViewController* _installerViewController;

}

@property (nonatomic,readonly) NSArray * subscribed; 
@property (nonatomic,readonly) NSArray * installed; 
@property (nonatomic,readonly) NSArray * test; 
+(BOOL)_appInstallationAllowed;
-(NSArray *)installed;
-(BOOL)isAppInstalled:(id)arg1 ;
-(NSArray *)subscribed;
-(NSArray *)test;
-(id)_appDictionariesForProxies:(id)arg1 ;
-(void)_configureAppInstallerViewController:(id)arg1 withOptions:(id)arg2 ;
-(id)_appDictionaryForProxy:(id)arg1 ;
-(void)installAppForChannel:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 ;
-(BOOL)isShowingInstaller;
-(void)presentPurchase:(id)arg1 ;
-(id)_rootViewController;
@end

