/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBSceneLayerHostView.h>
#import <libobjc.A.dylib/FBSceneMonitorDelegate.h>

@protocol FBSceneHostView;
@class FBScene, FBSceneMonitor, FBSceneHostManager, NSString, UIView;

@interface FBExternalSceneLayerHostView : FBSceneLayerHostView <FBSceneMonitorDelegate> {

	FBScene* _parentScene;
	FBScene* _targetScene;
	FBSceneMonitor* _monitor;
	FBSceneHostManager* _hostManager;
	NSString* _requester;
	NSString* _targetSceneID;
	UIView*<FBSceneHostView> _hostView;

}

@property (nonatomic,readonly) FBScene * targetScene;               //@synthesize targetScene=_targetScene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSceneLayer:(id)arg1 parentScene:(id)arg2 ;
-(void)sceneMonitor:(id)arg1 pairingStatusDidChangeForExternalSceneIDs:(id)arg2 ;
-(void)_updateHostingState;
-(void)_updateTargetScene;
-(FBScene *)targetScene;
-(void)dealloc;
@end

