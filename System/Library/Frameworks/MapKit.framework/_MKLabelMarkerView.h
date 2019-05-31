/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKAnnotationView.h>

@class MKMapView;

@interface _MKLabelMarkerView : MKAnnotationView {

	MKMapView* _mapView;

}

@property (assign,nonatomic,__weak) MKMapView * mapView;              //@synthesize mapView=_mapView - In the implementation block
+(BOOL)_followsTerrain;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(BOOL)shouldShowCallout;
-(BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg1 ;
-(void)_registerObserver;
-(void)_deregisterObserver;
-(void)_updateAnchorOffset;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setAnnotation:(id)arg1 ;
@end

