/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKStackingViewController.h>

@class MKMapItem, NSMutableDictionary;

@interface MKLayoutCardViewController : MKStackingViewController {

	MKMapItem* _mapItem;
	NSMutableDictionary* _cacheVC;
	NSMutableDictionary* _cacheModuleType;

}

@property (nonatomic,retain) NSMutableDictionary * cacheVC;                      //@synthesize cacheVC=_cacheVC - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cacheModuleType;              //@synthesize cacheModuleType=_cacheModuleType - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                //@synthesize mapItem=_mapItem - In the implementation block
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(BOOL)isTransitItem;
-(BOOL)isLayoutDynamic;
-(id)_layoutModuleForMapItem;
-(void)_createModuleLayout:(id)arg1 ;
-(UIViewController*)_cachedViewControllerForModule:(int)arg1 ;
-(UIViewController*)_createViewControllerForModule:(id)arg1 ;
-(NSMutableDictionary *)cacheVC;
-(void)setCacheVC:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cacheModuleType;
-(void)setCacheModuleType:(NSMutableDictionary *)arg1 ;
@end
