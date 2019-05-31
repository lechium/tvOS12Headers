/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKMultiPoint.h>
#import <libobjc.A.dylib/MKOverlay.h>

@class NSArray, NSString;

@interface MKPolygon : MKMultiPoint <MKOverlay> {

	CLLocationCoordinate2D _centroid;
	NSArray* _interiorPolygons;
	BOOL _isDefinitelyConvex;

}

@property (assign,nonatomic) BOOL _isDefinitelyConvex;                         //@synthesize isDefinitelyConvex=_isDefinitelyConvex - In the implementation block
@property (readonly) NSArray * interiorPolygons;                               //@synthesize interiorPolygons=_interiorPolygons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_MK1 boundingMapRect; 
+(id)polygonWithPoints:(const CGSize*)arg1 count:(unsigned long long)arg2 ;
+(id)polygonWithPoints:(const CGSize*)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3 ;
+(id)polygonWithCoordinates:(const CLLocationCoordinate2D*)arg1 count:(unsigned long long)arg2 ;
+(id)polygonWithCoordinates:(const CLLocationCoordinate2D*)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3 ;
+(id)polygonEnclosingMapPoints:(CGSize*)arg1 count:(unsigned long long)arg2 ;
+(id)_polygonWithMapRect:(SCD_Struct_MK1)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(BOOL)intersectsMapRect:(SCD_Struct_MK1)arg1 ;
-(SCD_Struct_MK1)boundingMapRect;
-(BOOL)_isDefinitelyConvex;
-(NSArray *)interiorPolygons;
-(void)set_isDefinitelyConvex:(BOOL)arg1 ;
@end

