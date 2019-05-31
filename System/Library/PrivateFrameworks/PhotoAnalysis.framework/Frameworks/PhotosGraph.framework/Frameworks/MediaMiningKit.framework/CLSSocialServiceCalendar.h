/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSSocialService.h>

@class CNContactStore, CNContact, CLSCalendarEventsCache, NSMutableSet;

@interface CLSSocialServiceCalendar : CLSSocialService {

	CNContactStore* _contactStore;
	CNContact* _meContact;
	CLSCalendarEventsCache* _calendarEventsCache;
	NSMutableSet* _prefetchedDateIntervals;

}
+(BOOL)shouldKeepEvent:(id)arg1 withClueCollection:(id)arg2 ;
+(BOOL)eventAtLocation:(id)arg1 withAttendeeNames:(id)arg2 matchesClueCollection:(id)arg3 ;
-(id)meContact;
-(id)initWithProxyAtURL:(id)arg1 andIntent:(unsigned long long)arg2 ;
-(id)eventFromProxyEvent:(id)arg1 ;
-(void)_enumerateEventsFromDate:(id)arg1 toDate:(id)arg2 fetchIfNeeded:(BOOL)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)_sortedAssetCollections:(id)arg1 containsEvent:(id)arg2 ;
-(BOOL)_hasAlreadyPrefetchedEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 ;
-(id)_fullNameWithContact:(id)arg1 ;
-(BOOL)_isCalendarRelevant:(id)arg1 ;
-(id)eventsForDates:(id)arg1 ;
-(void)enumerateEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)eventsForClueCollection:(id)arg1 ;
-(void)prefetchEventsFromUniversalDate:(id)arg1 toUniversalDate:(id)arg2 forAssetCollectionsSortedByStartDate:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)invalidateMemoryCaches;
@end

