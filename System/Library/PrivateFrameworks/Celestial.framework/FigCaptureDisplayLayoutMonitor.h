/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSMutableArray, FBSDisplayLayoutMonitor;

@interface FigCaptureDisplayLayoutMonitor : NSObject {

	OpaqueFigSimpleMutexRef _layoutObserversLock;
	NSMutableArray* _layoutObservers;
	OpaqueFigSimpleMutexRef _appsLock;
	NSMutableArray* _fullScreenApps;
	NSMutableArray* _nonFullScreenApps;
	int _globalLayoutState;
	FBSDisplayLayoutMonitor* _layoutMonitor;

}

@property (getter=isOnHomeScreen,nonatomic,readonly) BOOL onHomeScreen; 
@property (getter=isOnLockScreen,nonatomic,readonly) BOOL onLockScreen; 
+(id)sharedDisplayLayoutMonitor;
+(int)_openFrontBoardServicesFramework;
-(BOOL)isOnHomeScreen;
-(void)removeLayoutObserver:(id)arg1 ;
-(void)addLayoutObserver:(id)arg1 ;
-(void)_updateCurrentLayout:(id)arg1 ;
-(void)_updateObserversWithForegroundApps:(id)arg1 layoutState:(int)arg2 ;
-(BOOL)isOnLockScreen;
-(id)init;
-(void)dealloc;
@end

