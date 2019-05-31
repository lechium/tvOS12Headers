/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:57 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/IKAppContextInspectorDelegate.h>
#import <libobjc.A.dylib/IKAppDeviceConfig.h>
#import <TVMLKit/_TVAppNavigationControllerDelegate.h>

@protocol TVApplicationControllerDelegate, UITraitEnvironment;
@class IKAppContext, _TVMLKitApplication, IKAppDataStorage, NSXPCListener, NSDictionary, NSDate, _TVAppNavigationController, _TVApplicationInspector, UIWindow, TVApplicationControllerContext, UINavigationController, UIViewController, UIView, NSString;

@interface TVApplicationController : NSObject <IKAppContextInspectorDelegate, IKAppDeviceConfig, _TVAppNavigationControllerDelegate> {

	IKAppContext* _appContext;
	_TVMLKitApplication* _application;
	IKAppDataStorage* _appLocalStorage;
	NSXPCListener* _serviceListener;
	NSDictionary* _openURLResumeOptions;
	NSDictionary* _openURLReloadOptions;
	BOOL _suspended;
	BOOL _reloadInProgress;
	BOOL _reloadOnResume;
	double _reloadOnResumeMinInterval;
	NSDate* _reloadOnResumeBackgroundedDate;
	BOOL _doLaunchOpenURLHandling;
	NSDictionary* _launchOpenURLOptions;
	BOOL _popViewControllerOnBackground;
	_TVAppNavigationController* _navigationController;
	IKAppContext* _headlessAppContext;
	_TVMLKitApplication* _headlessApplication;
	BOOL _openURLLaunchedOverSiri;
	_TVApplicationInspector* _applicationInspector;
	UIWindow* _window;
	TVApplicationControllerContext* _context;
	id<TVApplicationControllerDelegate> _delegate;
	id<UITraitEnvironment> _keyTraitEnvironment;

}

@property (nonatomic,readonly) UINavigationController * _currentNavigationController; 
@property (nonatomic,readonly) UIViewController * rootViewController; 
@property (assign,nonatomic,__weak) UIView * viewServiceKeyView; 
@property (assign,nonatomic,__weak) id<UITraitEnvironment> keyTraitEnvironment;                    //@synthesize keyTraitEnvironment=_keyTraitEnvironment - In the implementation block
@property (nonatomic,readonly) UIWindow * window;                                                  //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) TVApplicationControllerContext * context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,__weak,readonly) id<TVApplicationControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UINavigationController * navigationController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_jsLaunchOptionsWithApplicationOptions:(id)arg1 ;
+(BOOL)_shouldLaunchHeadlessWithURL:(id)arg1 ;
+(void)initialize;
-(CGSize)screenSize;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(id)initWithContext:(id)arg1 window:(id)arg2 delegate:(id)arg3 ;
-(UINavigationController *)_currentNavigationController;
-(id)activeDocument;
-(id<UITraitEnvironment>)keyTraitEnvironment;
-(id)_appContext;
-(id)_externalPlayer;
-(void)_launchAppInHeadlessMode;
-(void)_launchApp;
-(BOOL)_useDefaultScreenSaverProvider;
-(void)_applicationWillTerminateNotification:(id)arg1 ;
-(void)_openURLControllerDidDisplay:(id)arg1 ;
-(void)applicationDidResume:(id)arg1 ;
-(void)_openURLOnAppLaunchControllerDidDisplay:(id)arg1 ;
-(void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2 options:(id)arg3 ;
-(BOOL)_hasReloadOnResumeMinIntervalPassed;
-(void)_reloadControllerDidDisplay:(id)arg1 ;
-(id)systemLanguage;
-(void)setKeyTraitEnvironment:(id<UITraitEnvironment>)arg1 ;
-(BOOL)_shouldReloadOnResume;
-(void)_openURLControllerHandler:(BOOL)arg1 ;
-(id)deviceConfigForContext:(id)arg1 ;
-(id)navigationControllerForContext:(id)arg1 ;
-(id)modalControllerForContext:(id)arg1 ;
-(id)objectForPlayer:(id)arg1 ;
-(id)objectForPlaylist:(id)arg1 ;
-(id)objectForMediaItem:(id)arg1 ;
-(void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(BOOL)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(void)appContext:(id)arg1 didStartWithOptions:(id)arg2 ;
-(void)appContext:(id)arg1 didFailWithError:(id)arg2 ;
-(void)appContext:(id)arg1 didStopWithOptions:(id)arg2 ;
-(void)appContext:(id)arg1 didChangeInspectElementMode:(BOOL)arg2 ;
-(BOOL)appContext:(id)arg1 highlightViewsForElements:(id)arg2 contentColor:(id)arg3 paddingColor:(id)arg4 borderColor:(id)arg5 marginColor:(id)arg6 ;
-(BOOL)appContext:(id)arg1 highlightViewForElement:(id)arg2 contentColor:(id)arg3 paddingColor:(id)arg4 borderColor:(id)arg5 marginColor:(id)arg6 ;
-(BOOL)cancelHighlightViewForAppContext:(id)arg1 ;
-(unsigned long long)preferredVideoFormat;
-(unsigned long long)preferredVideoPreviewFormat;
-(BOOL)isTimeZoneSet;
-(id)storeFrontCountryCode;
-(BOOL)openURL:(id)arg1 options:(id)arg2 ;
-(BOOL)jsOpenURL:(id)arg1 options:(id)arg2 ;
-(void)evaluateInJavaScriptContext:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(UIView *)viewServiceKeyView;
-(void)setViewServiceKeyView:(UIView *)arg1 ;
-(id)init;
-(void)dealloc;
-(UIWindow *)window;
-(id<TVApplicationControllerDelegate>)delegate;
-(TVApplicationControllerContext *)context;
-(UIViewController *)rootViewController;
-(void)stop;
-(UINavigationController *)navigationController;
-(id)timeZone;
-(void)applicationWillSuspend:(id)arg1 ;
-(void)reload;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
@end

