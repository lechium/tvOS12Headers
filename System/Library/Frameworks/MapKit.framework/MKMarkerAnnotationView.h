/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationView.h>

@class UIImageView, _MKBezierPathView, UILabel, UIView, GEOFeatureStyleAttributes, UIColor, NSString, UIImage;

@interface MKMarkerAnnotationView : MKAnnotationView {

	UIImageView* _shadowView;
	_MKBezierPathView* _markerView;
	UIImageView* _glyphImageView;
	UILabel* _glyphLabel;
	_MKBezierPathView* _selectedMarkerView;
	UIImageView* _selectedGlyphImageView;
	UILabel* _selectedGlyphLabel;
	_MKBezierPathView* _selectedDotView;
	UIView* _contentMaskView;
	GEOFeatureStyleAttributes* _customStyleAttributes;
	BOOL _animatesWhenAdded;
	long long _titleVisibility;
	long long _subtitleVisibility;
	UIColor* _markerTintColor;
	UIColor* _glyphTintColor;
	NSString* _glyphText;
	UIImage* _glyphImage;
	UIImage* _selectedGlyphImage;
	UIColor* _markerStrokeTintColor;
	double _markerStrokeWidth;

}

@property (nonatomic,copy) UIColor * markerStrokeTintColor;                                                                                //@synthesize markerStrokeTintColor=_markerStrokeTintColor - In the implementation block
@property (assign,nonatomic) double markerStrokeWidth;                                                                                     //@synthesize markerStrokeWidth=_markerStrokeWidth - In the implementation block
@property (nonatomic,retain) UIView * selectedContentView; 
@property (setter=_setStyleAttributes:,getter=_styleAttributes,nonatomic,retain) GEOFeatureStyleAttributes * styleAttributes;              //@synthesize customStyleAttributes=_customStyleAttributes - In the implementation block
@property (assign,nonatomic) long long titleVisibility;                                                                                    //@synthesize titleVisibility=_titleVisibility - In the implementation block
@property (assign,nonatomic) long long subtitleVisibility;                                                                                 //@synthesize subtitleVisibility=_subtitleVisibility - In the implementation block
@property (nonatomic,copy) UIColor * markerTintColor;                                                                                      //@synthesize markerTintColor=_markerTintColor - In the implementation block
@property (nonatomic,copy) UIColor * glyphTintColor;                                                                                       //@synthesize glyphTintColor=_glyphTintColor - In the implementation block
@property (nonatomic,copy) NSString * glyphText;                                                                                           //@synthesize glyphText=_glyphText - In the implementation block
@property (nonatomic,copy) UIImage * glyphImage;                                                                                           //@synthesize glyphImage=_glyphImage - In the implementation block
@property (nonatomic,copy) UIImage * selectedGlyphImage;                                                                                   //@synthesize selectedGlyphImage=_selectedGlyphImage - In the implementation block
@property (assign,nonatomic) BOOL animatesWhenAdded;                                                                                       //@synthesize animatesWhenAdded=_animatesWhenAdded - In the implementation block
+(float)_defaultDisplayPriority;
-(id)_styleAttributes;
-(UIImage *)glyphImage;
-(BOOL)_hasDataRequiringCallout;
-(BOOL)canShowCallout;
-(void)setMarkerTintColor:(UIColor *)arg1 ;
-(void)_setStyleAttributes:(id)arg1 ;
-(id)_effectiveMarkerTintColorForState:(long long)arg1 ;
-(double)_effectiveShadowAlphaForState:(long long)arg1 ;
-(void)setMarkerStrokeTintColor:(UIColor *)arg1 ;
-(void)setMarkerStrokeWidth:(double)arg1 ;
-(void)setSelectedContentView:(UIView *)arg1 ;
-(UIView *)selectedContentView;
-(double)_effectiveMarkerStrokeWidthForState:(long long)arg1 ;
-(id)_effectiveMarkerStrokeTintColorForState:(long long)arg1 ;
-(void)setGlyphTintColor:(UIColor *)arg1 ;
-(id)_effectiveGlyphTintColorForState:(long long)arg1 ;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(void)setSelectedGlyphImage:(UIImage *)arg1 ;
-(id)_effectiveGlyphImageForState:(long long)arg1 isSystemProvided:(BOOL*)arg2 ;
-(void)setGlyphText:(NSString *)arg1 ;
-(id)_effectiveGlyphText;
-(void)_updateContentForState:(long long)arg1 ;
-(void)_updateContentForState:(long long)arg1 forceUpdate:(BOOL)arg2 ;
-(long long)_currentMarkerState;
-(void)_unhideForDisplay;
-(void)_configureViewsForState:(long long)arg1 usesCallout:(BOOL)arg2 ;
-(long long)_stateForIsSelected:(BOOL)arg1 ;
-(void)_didDragWithVelocity:(CGPoint)arg1 ;
-(void)_setupNormalViewsIfNeeded;
-(void)_setupSelectedViewsIfNeededUsesCallout:(BOOL)arg1 ;
-(void)_configureAnimated:(BOOL)arg1 fromState:(long long)arg2 toState:(long long)arg3 ;
-(void)setDragState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldDeselectWhenDragged;
-(BOOL)isProvidingCustomFeature;
-(id)_effectiveTitleIsCollidable:(BOOL*)arg1 ;
-(id)_effectiveSubtitlesIsCollidable:(BOOL*)arg1 ;
-(void)configureCustomFeature:(id)arg1 ;
-(long long)titleVisibility;
-(void)setTitleVisibility:(long long)arg1 ;
-(long long)subtitleVisibility;
-(void)setSubtitleVisibility:(long long)arg1 ;
-(UIColor *)markerTintColor;
-(UIColor *)glyphTintColor;
-(NSString *)glyphText;
-(UIImage *)selectedGlyphImage;
-(BOOL)animatesWhenAdded;
-(void)setAnimatesWhenAdded:(BOOL)arg1 ;
-(UIColor *)markerStrokeTintColor;
-(double)markerStrokeWidth;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)prepareForReuse;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)prepareForDisplay;
-(void)_setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setAnnotation:(id)arg1 ;
-(void)prepareForSnapshotting;
@end

