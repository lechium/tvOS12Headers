/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_MKPlaceItem.h>

@class MKMapItem, CNContact, NSString, EKCalendarItem;

@interface _MKContactPlaceItem : NSObject <_MKPlaceItem> {

	MKMapItem* _mapItem;
	CNContact* _contact;
	unsigned long long _options;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,readonly) BOOL isIntermediateMapItem; 
@property (nonatomic,readonly) EKCalendarItem * calendarItem; 
@property (nonatomic,readonly) CNContact * contact; 
@property (nonatomic,readonly) BOOL isContactPersisted; 
@property (nonatomic,readonly) BOOL hasContactOnly; 
@property (nonatomic,readonly) unsigned long long options; 
+(id)placeItemWithMapItem:(id)arg1 contact:(id)arg2 options:(unsigned long long)arg3 ;
-(MKMapItem *)mapItem;
-(BOOL)isIntermediateMapItem;
-(EKCalendarItem *)calendarItem;
-(BOOL)isContactPersisted;
-(BOOL)hasContactOnly;
-(CNContact *)contact;
-(NSString *)name;
-(unsigned long long)options;
@end

