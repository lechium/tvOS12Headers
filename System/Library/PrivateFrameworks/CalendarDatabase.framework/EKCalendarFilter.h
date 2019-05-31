/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDatabase/CalendarDatabase-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSString;

@interface EKCalendarFilter : NSObject <NSCopying> {

	opaque_pthread_mutex_t _lock;
	NSMutableSet* _calendarUIDs;
	CalDatabase* _database;
	NSString* _searchTerm;
	int _entityType;

}

@property (nonatomic,copy) NSString * searchTerm;              //@synthesize searchTerm=_searchTerm - In the implementation block
+(void)_addCalendarWithUID:(id)arg1 toSet:(id)arg2 database:(CalDatabase*)arg3 ;
+(void)_addCalendarUIDsFromPrefs:(id)arg1 toSet:(id)arg2 database:(CalDatabase*)arg3 ;
+(void)_addCalendarsForStoreWithUID:(id)arg1 toSet:(id)arg2 database:(CalDatabase*)arg3 ;
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(id)initWithDatabase:(CalDatabase*)arg1 entityType:(int)arg2 calendarUIDs:(id)arg3 ;
-(id)_generateUIDSetToFilterAllCalendars;
-(id)_generateUIDSetToShowCalendars:(id)arg1 ;
-(id)_generateUIDSetToShowCalendarUIDs:(id)arg1 ;
-(id)_generateUIDSetToFilterCalendars:(id)arg1 ;
-(id)_UIDSetWithCalendars:(id)arg1 ;
-(BOOL)_isFilteringAllWhileLocked;
-(BOOL)isShowingAll;
-(id)_addFilterToQuery:(id)arg1 creator:(/*function pointer*/void*)arg2 userInfo:(void*)arg3 ;
-(id)_UIDAntiSetWithCalendars:(id)arg1 ;
-(id)initWithDatabase:(CalDatabase*)arg1 entityType:(int)arg2 ;
-(id)initFilteringAllWithDatabase:(CalDatabase*)arg1 ;
-(id)initWithDatabase:(CalDatabase*)arg1 showingCalendars:(id)arg2 ;
-(id)initWithDatabase:(CalDatabase*)arg1 showingCalendarsWithUIDs:(id)arg2 ;
-(id)initWithDatabase:(CalDatabase*)arg1 entityType:(int)arg2 showingCalendarsWithUIDs:(id)arg3 ;
-(id)initWithDatabase:(CalDatabase*)arg1 entityType:(int)arg2 filteringCalendars:(id)arg3 ;
-(id)initWithDatabase:(CalDatabase*)arg1 entityType:(int)arg2 filteringCalendarsWithUIDs:(id)arg3 ;
-(BOOL)isFilteringAll;
-(id)filteredCalendars;
-(id)visibleCalendarsWithOptions:(int)arg1 ;
-(int)visibleCalendarCountWithOptions:(int)arg1 ;
-(BOOL)isCalendarUIDVisible:(id)arg1 ;
-(void)removeCalendarWithUID:(id)arg1 ;
-(id)filterQueryForQueryString:(id)arg1 creator:(/*function pointer*/void*)arg2 userInfo:(void*)arg3 ;
-(id)filterQueryForKey:(id)arg1 prefix:(id)arg2 whereClause:(id)arg3 creator:(/*function pointer*/void*)arg4 userInfo:(void*)arg5 ;
-(id)calendarIDClauseForQueryWithVariableName:(id)arg1 ;
-(id)initWithDatabase:(CalDatabase*)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)validate;
@end
