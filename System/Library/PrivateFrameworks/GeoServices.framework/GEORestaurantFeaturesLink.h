/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDRestaurantReservationLink, NSMapTable, NSArray;

@interface GEORestaurantFeaturesLink : NSObject {

	GEOPDRestaurantReservationLink* _restaurantReservationLink;
	NSMapTable* _attributionMap;

}

@property (nonatomic,retain) GEOPDRestaurantReservationLink * restaurantReservationLink;              //@synthesize restaurantReservationLink=_restaurantReservationLink - In the implementation block
@property (nonatomic,readonly) BOOL hasFeatures; 
@property (nonatomic,readonly) NSArray * featureProviders; 
@property (nonatomic,readonly) NSArray * featureTypes; 
-(GEOPDRestaurantReservationLink *)restaurantReservationLink;
-(id)applicationsForVendorID:(id)arg1 ;
-(id)initWithRestaurantReservationLink:(id)arg1 attributionMap:(id)arg2 ;
-(BOOL)hasFeatures;
-(NSArray *)featureProviders;
-(id)displayNameForVendorID:(id)arg1 ;
-(unsigned long long)extensionModeForVendorID:(id)arg1 ;
-(NSArray *)featureTypes;
-(void)setRestaurantReservationLink:(GEOPDRestaurantReservationLink *)arg1 ;
@end
