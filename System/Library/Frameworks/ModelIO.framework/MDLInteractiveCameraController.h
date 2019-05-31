/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ModelIO/ModelIO-Structs.h>
@class MDLStereoscopicCamera;

@interface MDLInteractiveCameraController : NSObject {

	 _lookAt;
	 _clickPoint;
	 _dragVector;
	float _pitch;
	float _yaw;
	MDLAABB _framingBounds;
	float _targetElevation;
	float _tumbleSpeed;
	float _zoomSpeed;
	float _trackSpeed;
	float _targetDistance;
	float _zoom;
	MDLStereoscopicCamera* _camera;
	 _dragPoint;
	unsigned long long _mode;
	 _viewSize;
	 _trackVector;

}

@property (nonatomic,copy) MDLStereoscopicCamera * camera;              //@synthesize camera=_camera - In the implementation block
@property (assign,nonatomic)  clickPoint; 
@property (assign,nonatomic)  dragPoint;                                //@synthesize dragPoint=_dragPoint - In the implementation block
@property (assign,nonatomic)  trackVector;                              //@synthesize trackVector=_trackVector - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                   //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) float tumbleSpeed;                         //@synthesize tumbleSpeed=_tumbleSpeed - In the implementation block
@property (assign,nonatomic) float zoomSpeed;                           //@synthesize zoomSpeed=_zoomSpeed - In the implementation block
@property (assign,nonatomic) float trackSpeed;                          //@synthesize trackSpeed=_trackSpeed - In the implementation block
@property (assign,nonatomic)  targetPosition; 
@property (assign,nonatomic) float targetDistance;                      //@synthesize targetDistance=_targetDistance - In the implementation block
@property (assign,nonatomic)  position; 
@property (assign,nonatomic) MDLAABBRef framingBounds; 
@property (assign,nonatomic)  viewSize;                                 //@synthesize viewSize=_viewSize - In the implementation block
@property (assign,nonatomic) float zoom;                                //@synthesize zoom=_zoom - In the implementation block
-(void)setCamera:(MDLStereoscopicCamera *)arg1 ;
-(MDLStereoscopicCamera *)camera;
-(void)frameObject;
-(void)setFramingBounds:(MDLAABBRef)arg1 ;
-(void)frameBounds;
-(MDLAABBRef)framingBounds;
-(void)setClickPoint:;
-()clickPoint;
-(void)mouseMotionX:(float)arg1 Y:(float)arg2 ;
-()dragPoint;
-(void)setDragPoint:;
-()trackVector;
-(void)setTrackVector:;
-(float)tumbleSpeed;
-(void)setTumbleSpeed:(float)arg1 ;
-(float)zoomSpeed;
-(void)setZoomSpeed:(float)arg1 ;
-(float)trackSpeed;
-(void)setTrackSpeed:(float)arg1 ;
-(float)targetDistance;
-(void)setTargetDistance:(float)arg1 ;
-()targetPosition;
-(void)setTargetPosition:;
-(id)init;
-(void)setZoom:(float)arg1 ;
-(float)zoom;
-(void)setPosition:;
-()position;
-(unsigned long long)mode;
-(void)setMode:(unsigned long long)arg1 ;
-()viewSize;
-(void)setViewSize:;
-(void)update:(float)arg1 ;
@end

