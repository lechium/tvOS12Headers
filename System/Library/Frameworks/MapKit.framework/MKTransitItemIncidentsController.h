/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTransitLineItem;
@class MKMapItem, NSArray, NSSet, NSMutableDictionary, NSDate;

@interface MKTransitItemIncidentsController : NSObject {

	MKMapItem* _mapItem;
	id<GEOTransitLineItem> _lineItem;
	NSArray* _validIncidents;
	NSArray* _lineFilteredValidIncidents;
	NSSet* _blockedIncidentEntities;
	NSMutableDictionary* _dominantIncidentForSequence;
	NSMutableDictionary* _systemHasIncidents;
	NSDate* _nextIncidentChangeDate;

}
+(id)sectionHeaderText;
-(id)initWithMapItem:(id)arg1 ;
-(id)initWithLineItem:(id)arg1 ;
-(void)_validateCacheForDate:(id)arg1 ;
-(void)resetCache;
-(id)validIncidentsAtDate:(id)arg1 filterToOnceIncidentPerLine:(BOOL)arg2 ;
-(id)blockedIncidentEntitiesAtDate:(id)arg1 ;
-(id)dominantIncidentForSequence:(id)arg1 atDate:(id)arg2 ;
-(BOOL)systemHasIncidents:(id)arg1 atDate:(id)arg2 ;
-(id)_validIncidentsAtDate:(id)arg1 filterToOnceIncidentPerLine:(BOOL)arg2 ;
-(id)_blockedIncidentEntitiesAtDate:(id)arg1 ;
-(id)_dominantIncidentForSequence:(id)arg1 atDate:(id)arg2 ;
@end

