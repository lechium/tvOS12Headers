/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKAnnotationManagerDelegate <NSObject>
@optional
-(void)annotationManager:(id)arg1 willDeselectAnnotationRepresentation:(id)arg2;
-(BOOL)annotationManager:(id)arg1 shouldAnimateDeselectionOfAnnotation:(id)arg2 forSelectionOfAnnotation:(id)arg3;
-(BOOL)annotationManager:(id)arg1 canSelectAnnotationRepresentation:(id)arg2;

@required
-(void)annotationManager:(id)arg1 didAddAnnotationRepresentations:(id)arg2;
-(void)annotationManager:(id)arg1 didRemoveAnnotationRepresentations:(id)arg2;
-(id)annotationManager:(id)arg1 representationForAnnotation:(id)arg2;
-(void)annotationManager:(id)arg1 didSelectAnnotationRepresentation:(id)arg2;
-(void)annotationManager:(id)arg1 didDeselectAnnotationRepresentation:(id)arg2;

@end

