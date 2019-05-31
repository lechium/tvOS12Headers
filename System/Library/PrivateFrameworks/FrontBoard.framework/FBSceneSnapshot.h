/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FrontBoard/FrontBoard-Structs.h>
@class FBScene, FBSceneSnapshotContext, XBDisplaySnapshot, UIImage;

@interface FBSceneSnapshot : NSObject {

	FBScene* _scene;
	FBSceneSnapshotContext* _context;
	XBDisplaySnapshot* _snapshot;

}

@property (nonatomic,readonly) FBSceneSnapshotContext * context;                 //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef IOSurface; 
@property (getter=isDataLoaded,nonatomic,readonly) BOOL dataLoaded; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) UIImage * UIImage; 
@property (nonatomic,readonly) IOSurfaceRef fallbackIOSurface; 
-(BOOL)capture;
-(UIImage *)UIImage;
-(id)_collectLayersToSnapshotFromScene:(id)arg1 withSnapshotContext:(id)arg2 rootContext:(id)arg3 ;
-(CGAffineTransform)_baseTransformForSnapshotContext:(id)arg1 rootContext:(id)arg2 ;
-(BOOL)isDataLoaded;
-(IOSurfaceRef)fallbackIOSurface;
-(id)initWithScene:(id)arg1 snapshotContext:(id)arg2 ;
-(CGImageRef)CGImage;
-(FBSceneSnapshotContext *)context;
-(IOSurfaceRef)IOSurface;
@end
