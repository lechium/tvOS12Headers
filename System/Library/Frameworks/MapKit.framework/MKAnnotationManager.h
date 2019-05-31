/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKAnnotationMarkerContainer, MKAnnotationManagerDelegate, MKAnnotation;
#import <MapKit/MapKit-Structs.h>
@class NSTimer, MKQuadTrie, NSHashTable, NSMutableSet, NSMapTable, NSMutableDictionary, MKAnnotationView, NSArray;

@interface MKAnnotationManager : NSObject {

	id<MKAnnotationMarkerContainer> _container;
	id<MKAnnotationManagerDelegate> _delegate;
	BOOL _annotationRepresentationsAreAddedImmediately;
	NSTimer* _updateVisibleTimer;
	MKQuadTrie* _annotations;
	NSHashTable* _visibleAnnotations;
	NSMutableSet* _pendingAnnotations;
	NSMutableSet* _disallowAnimationAnnotations;
	NSMutableSet* _invalidCoordinateAnnotations;
	id<MKAnnotation> _selectedAnnotation;
	id<MKAnnotation> _draggedAnnotation;
	NSMapTable* _annotationsToRepresentations;
	NSMutableSet* _annotationRepresentations;
	NSMapTable* _reusableAnnotationRepresentations;
	NSMutableSet* _pendingRemovalAnnotationRepresentations;
	NSMutableDictionary* _registeredIdentifierToRepresentationClasses;
	NSHashTable* _allClusterAnnotations;
	BOOL _isChangingCoordinate;
	BOOL _isDeferringContainerSelection;
	BOOL _deferredContainerSelectionAnimated;
	MKAnnotationView* _userLocationView;

}

@property (assign,nonatomic,__weak) id<MKAnnotationMarkerContainer> container;                                      //@synthesize container=_container - In the implementation block
@property (assign,nonatomic,__weak) id<MKAnnotationManagerDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL annotationRepresentationsAreAddedImmediately;                                     //@synthesize annotationRepresentationsAreAddedImmediately=_annotationRepresentationsAreAddedImmediately - In the implementation block
@property (assign,nonatomic,__weak) id<MKAnnotation> draggedAnnotation;                                             //@synthesize draggedAnnotation=_draggedAnnotation - In the implementation block
@property (nonatomic,__weak,readonly) id<MKAnnotationRepresentation> selectedAnnotationRepresentation; 
@property (nonatomic,readonly) NSArray * annotationRepresentations; 
@property (nonatomic,readonly) NSArray * annotations; 
-(NSArray *)annotations;
-(id)annotationsInMapRect:(SCD_Struct_MK1)arg1 ;
-(void)selectAnnotation:(id)arg1 animated:(BOOL)arg2 ;
-(void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2 ;
-(void)addAnnotations:(id)arg1 ;
-(void)removeAnnotation:(id)arg1 ;
-(void)removeAnnotations:(id)arg1 ;
-(void)_setupUpdateVisibleAnnotationsTimer;
-(void)_addAnnotation:(id)arg1 updateVisible:(BOOL)arg2 ;
-(void)addAnnotation:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(id)addRepresentationForAnnotation:(id)arg1 ;
-(void)_removeAnnotation:(id)arg1 updateVisible:(BOOL)arg2 removeFromContainer:(BOOL)arg3 ;
-(void)removeAnnotation:(id)arg1 updateVisible:(BOOL)arg2 ;
-(void)replaceAnnotation:(id)arg1 withAnnotation:(id)arg2 ;
-(void)addRepresentationsForAnnotations:(id)arg1 ;
-(id)dequeueReusableAnnotationRepresentationWithIdentifier:(id)arg1 ;
-(void)registerClass:(Class)arg1 forRepresentationReuseIdentifier:(id)arg2 ;
-(BOOL)containsAnnotation:(id)arg1 ;
-(void)showAnnotationsInMapRect:(SCD_Struct_MK1)arg1 ;
-(void)updateVisibleAnnotations;
-(NSArray *)annotationRepresentations;
-(void)_annotationDidChangeState:(id)arg1 animated:(BOOL)arg2 ;
-(id<MKAnnotationRepresentation>)selectedAnnotationRepresentation;
-(id)representationForAnnotation:(id)arg1 ;
-(BOOL)annotationIsInternal:(id)arg1 ;
-(id)newInternalAnnotationRepresentationForInternalAnnotation:(id)arg1 ;
-(void)configureAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2 ;
-(void)configureDefaultAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2 ;
-(id)_addRepresentationForAnnotation:(id)arg1 ;
-(void)cleanUpAnnotationRepresentationForRemoval:(id)arg1 ;
-(void)_removeRepresentationForAnnotation:(id)arg1 fromCull:(BOOL)arg2 ;
-(BOOL)annotationRepresentationsAreAddedImmediately;
-(void)setAnnotationRepresentationsAreAddedImmediately:(BOOL)arg1 ;
-(id<MKAnnotation>)draggedAnnotation;
-(void)setDraggedAnnotation:(id<MKAnnotation>)arg1 ;
-(void)addAnnotation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<MKAnnotationManagerDelegate>)arg1 ;
-(id<MKAnnotationManagerDelegate>)delegate;
-(id<MKAnnotationMarkerContainer>)container;
-(void)setContainer:(id<MKAnnotationMarkerContainer>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

