/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCNView, SCNNode;

@interface SCNEventHandler : NSObject {

	SCNView* _view;
	BOOL _enableFreeCamera;
	BOOL _autoSwitchToFreeCamera;

}

@property (readonly) SCNView * view; 
@property (assign) BOOL enableFreeCamera; 
@property (assign) BOOL autoSwitchToFreeCamera; 
@property (readonly) SCNNode * freeCamera; 
-(void)sceneDidChange;
-(void)cameraDidChange;
-(BOOL)enableFreeCamera;
-(BOOL)autoSwitchToFreeCamera;
-(void)setAutoSwitchToFreeCamera:(BOOL)arg1 ;
-(void)sceneWillChange;
-(void)viewWillDrawAtTime:(double)arg1 ;
-(void)viewDidDrawAtTime:(double)arg1 ;
-(void)cameraWillChange;
-(BOOL)wantsRedraw;
-(void)activateFreeCamera;
-(void)setEnableFreeCamera:(BOOL)arg1 ;
-(SCNNode *)freeCamera;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(SCNView *)view;
-(void)setView:(SCNView *)arg1 ;
-(id)gestureRecognizers;
@end

