/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <Foundation/NSOperation.h>

@class NSPredicate;

@interface _CADFetchCalendarItemsWithPredicateOperation : NSOperation {

	NSPredicate* _predicate;
	int _entityType;
	CalDatabase* _database;
	int _fetchIdentifier;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) int fetchIdentifier;              //@synthesize fetchIdentifier=_fetchIdentifier - In the implementation block
-(id)initWithPredicate:(id)arg1 entityType:(int)arg2 database:(CalDatabase*)arg3 fetchIdentifier:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)fetchIdentifier;
-(void)dealloc;
-(void)cancel;
-(void)main;
@end

