/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PXPlacesImageCache;


@protocol PXPlacesMapPipelineComponentProvider <NSObject>
@property (readonly) id<PXPlacesMapLayout> layout; 
@property (readonly) id<PXPlacesMapUpdatePlan> updatePlan; 
@property (readonly) id<PXPlacesMapRenderer> renderer; 
@property (readonly) id<PXPlacesMapSelectionHandler> selectionHandler; 
@property (retain) PXPlacesImageCache * imageCache; 
@required
-(PXPlacesImageCache *)imageCache;
-(void)setImageCache:(id)arg1;
-(id<PXPlacesMapRenderer>)renderer;
-(id<PXPlacesMapUpdatePlan>)updatePlan;
-(id<PXPlacesMapSelectionHandler>)selectionHandler;
-(id<PXPlacesMapLayout>)layout;

@end

