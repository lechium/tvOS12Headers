/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/VKCustomFeatureDataSource.h>

@protocol MKCustomFeatureStoreDelegate;
@class MKQuadTrie, NSHashTable, GEOFeatureStyleAttributes, NSString;

@interface _MKCustomFeatureStore : NSObject <VKCustomFeatureDataSource> {

	MKQuadTrie* _annotationsTrie;
	NSHashTable* _observers;
	BOOL _isClusteringEnabled;
	GEOFeatureStyleAttributes* _clusterStyleAttributes;
	NSString* _annotationText;
	NSString* _annotationLocale;
	unsigned char _sceneID;
	unsigned char _sceneState;
	id<MKCustomFeatureStoreDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MKCustomFeatureStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isClusteringEnabled;                                    //@synthesize isClusteringEnabled=_isClusteringEnabled - In the implementation block
@property (nonatomic,copy) GEOFeatureStyleAttributes * clusterStyleAttributes;              //@synthesize clusterStyleAttributes=_clusterStyleAttributes - In the implementation block
@property (assign,nonatomic) unsigned char sceneID;                                         //@synthesize sceneID=_sceneID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)annotationsInMapRect:(SCD_Struct_MK1)arg1 ;
-(void)addAnnotations:(id)arg1 ;
-(void)removeAnnotations:(id)arg1 ;
-(BOOL)isClusteringEnabled;
-(GEOFeatureStyleAttributes *)clusterStyleAttributes;
-(void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3 ;
-(void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3 ;
-(unsigned char)sceneID;
-(unsigned char)sceneState;
-(id)initWithClustering:(BOOL)arg1 ;
-(void)showScene;
-(void)hideScene;
-(void)setClusterAnnotationText:(id)arg1 locale:(id)arg2 ;
-(void)setAnnotations:(id)arg1 ;
-(void)_clearAnnotations;
-(unsigned long long)annotationCount;
-(id)allAnnotations;
-(void)_setSceneState:(unsigned char)arg1 ;
-(void)setSceneID:(unsigned char)arg1 ;
-(void)setClusterStyleAttributes:(GEOFeatureStyleAttributes *)arg1 ;
-(void)_invalidateRect:(SCD_Struct_MK1)arg1 ;
-(id)init;
-(void)setDelegate:(id<MKCustomFeatureStoreDelegate>)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id<MKCustomFeatureStoreDelegate>)delegate;
-(void)addObserver:(id)arg1 ;
@end
