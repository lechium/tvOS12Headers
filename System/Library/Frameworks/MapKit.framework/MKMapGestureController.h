/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKVariableDelayTapRecognizerDelegate.h>
#import <libobjc.A.dylib/_MKUserInteractionGestureRecognizerTouchObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MKMapGestureControllerDelegate;
@class MKBasicMapView, MKScaleView, MKCompassView, MKRotationFilter, MKVariableDelayTapRecognizer, UITapGestureRecognizer, UILongPressGestureRecognizer, UIPinchGestureRecognizer, UIPanGestureRecognizer, VKDynamicAnimation, VKCompoundAnimation, _MKUserInteractionGestureRecognizer, UIRotationGestureRecognizer, MKTiltGestureRecognizer, MKTwoFingerPanGestureRecognizer, _MKDirectionalPressGestureRecognizer, VKTimedAnimation, _MKShoulderPressGestureRecognizer, UIGestureRecognizer, NSString;

@interface MKMapGestureController : NSObject <MKVariableDelayTapRecognizerDelegate, _MKUserInteractionGestureRecognizerTouchObserver, UIGestureRecognizerDelegate> {

	MKBasicMapView* _mapView;
	id<MKMapGestureControllerDelegate> _delegate;
	MKScaleView* _scaleView;
	MKCompassView* _compassView;
	MKRotationFilter* _rotationFilter;
	BOOL _rotationSnappingEnabled;
	MKVariableDelayTapRecognizer* _doubleTapGestureRecognizer;
	UITapGestureRecognizer* _twoFingerTapGestureRecognizer;
	UILongPressGestureRecognizer* _twoFingerLongPressGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIPanGestureRecognizer* _verticalPanGestureRecognizer;
	double _lastScale;
	VKDynamicAnimation* _pinchDecelerationAnimation;
	VKCompoundAnimation* _panDecelerationAnimationGroup;
	long long _gestureCount;
	BOOL _panWithMomentum;
	_MKUserInteractionGestureRecognizer* _touchGestureRecognizer;
	UIRotationGestureRecognizer* _rotationGestureRecognizer;
	VKDynamicAnimation* _rotationDecelerationAnimation;
	MKTiltGestureRecognizer* _tiltGestureRecognizer;
	VKDynamicAnimation* _tiltDecelerationAnimation;
	BOOL _didStartLongPress;
	MKTwoFingerPanGestureRecognizer* _twoFingerPanGestureRecognizer;
	BOOL _isPanning;
	BOOL _isPinching;
	double _lastZoomPanTranslation;
	_MKDirectionalPressGestureRecognizer* _arrowGestureRecognizer;
	VKTimedAnimation* _arrowPanAnimation;
	CGPoint _arrowPanTranslationAmount;
	CGSize _arrowPanTranslationVelocity;
	double _arrowPanStartTimestamp;
	_MKShoulderPressGestureRecognizer* _gamepadLeftShoulderZoomGestureRecognizer;
	_MKShoulderPressGestureRecognizer* _gamepadRightShoulderZoomGestureRecognizer;
	VKTimedAnimation* _shoulderZoomAnimation;
	UIPanGestureRecognizer* _rightSidePanZoomGestureRecognizer;

}

@property (nonatomic,readonly) MKBasicMapView * mapView;                                                        //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic,__weak) id<MKMapGestureControllerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKScaleView * scaleView;                                                           //@synthesize scaleView=_scaleView - In the implementation block
@property (nonatomic,retain) MKCompassView * compassView;                                                       //@synthesize compassView=_compassView - In the implementation block
@property (nonatomic,retain) MKRotationFilter * rotationFilter;                                                 //@synthesize rotationFilter=_rotationFilter - In the implementation block
@property (assign,getter=isZoomEnabled,nonatomic) BOOL zoomEnabled; 
@property (assign,getter=isScrollEnabled,nonatomic) BOOL scrollEnabled; 
@property (assign,getter=isRotationEnabled,nonatomic) BOOL rotationEnabled; 
@property (assign,getter=isTiltEnabled,nonatomic) BOOL tiltEnabled; 
@property (assign,nonatomic) BOOL panWithMomentum;                                                              //@synthesize panWithMomentum=_panWithMomentum - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * doubleTapGestureRecognizer;                             //@synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * twoFingerTapGestureRecognizer;                          //@synthesize twoFingerTapGestureRecognizer=_twoFingerTapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * twoFingerLongPressGestureRecognizer;              //@synthesize twoFingerLongPressGestureRecognizer=_twoFingerLongPressGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPinchGestureRecognizer * pinchGestureRecognizer;                               //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;                                   //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIRotationGestureRecognizer * rotationGestureRecognizer;                         //@synthesize rotationGestureRecognizer=_rotationGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * verticalPanGestureRecognizer;                           //@synthesize verticalPanGestureRecognizer=_verticalPanGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * twoFingerPanGestureRecognizer;                          //@synthesize twoFingerPanGestureRecognizer=_twoFingerPanGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * rightSidePanZoomGestureRecognizer; 
@property (nonatomic,readonly) UIGestureRecognizer * gamepadLeftShoulderZoomGestureRecognizer; 
@property (nonatomic,readonly) UIGestureRecognizer * gamepadRightShoulderZoomGestureRecognizer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MKBasicMapView *)mapView;
-(double)variableDelayTapRecognizer:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3 ;
-(MKScaleView *)scaleView;
-(MKCompassView *)compassView;
-(void)gestureRecognizerTouchesBegan:(id)arg1 ;
-(void)gestureRecognizerTouchesEnded:(id)arg1 ;
-(void)gestureRecognizerTouchesCanceled:(id)arg1 ;
-(id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2 doubleTapTargetView:(id)arg3 ;
-(id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2 ;
-(UIGestureRecognizer *)rightSidePanZoomGestureRecognizer;
-(UIGestureRecognizer *)gamepadLeftShoulderZoomGestureRecognizer;
-(UIGestureRecognizer *)gamepadRightShoulderZoomGestureRecognizer;
-(BOOL)isRotationEnabled;
-(void)setRotationEnabled:(BOOL)arg1 ;
-(BOOL)isTiltEnabled;
-(void)setTiltEnabled:(BOOL)arg1 ;
-(void)setScaleView:(MKScaleView *)arg1 ;
-(void)setCompassView:(MKCompassView *)arg1 ;
-(void)stopDynamicAnimations;
-(void)beginGesturing;
-(void)endGesturing;
-(void)startUserInteractionFromExternalGesture;
-(void)stopUserInteractionFromExternalGesture;
-(void)_clearGesture:(id)arg1 ;
-(void)clearGestureRecognizersInFlight;
-(void)_handleStandardTilt:(id)arg1 ;
-(void)handleTilt:(id)arg1 ;
-(void)handleTwoFingerPan:(id)arg1 ;
-(void)handleRotation:(id)arg1 ;
-(void)_updateRotationGestureForState:(long long)arg1 focusPoint:(CGPoint)arg2 rotation:(double)arg3 velocity:(double)arg4 ;
-(void)handleDoubleTap:(id)arg1 ;
-(void)handleTwoFingerTap:(id)arg1 ;
-(void)handleTwoFingerLongPress:(id)arg1 ;
-(void)_handleArrowTap:(id)arg1 ;
-(void)_handleRightShoulder:(id)arg1 ;
-(void)handlePanZoom:(id)arg1 ;
-(CGPoint)_snapPointToDevicePixels:(CGPoint)arg1 ;
-(void)_handleStandardPan:(id)arg1 ;
-(UITapGestureRecognizer *)doubleTapGestureRecognizer;
-(UITapGestureRecognizer *)twoFingerTapGestureRecognizer;
-(UILongPressGestureRecognizer *)twoFingerLongPressGestureRecognizer;
-(UIRotationGestureRecognizer *)rotationGestureRecognizer;
-(MKRotationFilter *)rotationFilter;
-(void)setRotationFilter:(MKRotationFilter *)arg1 ;
-(BOOL)panWithMomentum;
-(void)setPanWithMomentum:(BOOL)arg1 ;
-(UIPanGestureRecognizer *)verticalPanGestureRecognizer;
-(UIPanGestureRecognizer *)twoFingerPanGestureRecognizer;
-(void)handleTouch:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MKMapGestureControllerDelegate>)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id<MKMapGestureControllerDelegate>)delegate;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(BOOL)isScrollEnabled;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(void)handlePan:(id)arg1 ;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(BOOL)isZoomEnabled;
@end

