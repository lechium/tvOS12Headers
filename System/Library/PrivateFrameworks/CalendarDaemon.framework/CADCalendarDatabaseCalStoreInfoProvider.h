/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CADCalStoreInfoProvider.h>

@protocol CADDatabaseProvider;
@interface CADCalendarDatabaseCalStoreInfoProvider : NSObject <CADCalStoreInfoProvider> {

	id<CADDatabaseProvider> _databaseProvider;

}

@property (nonatomic,__weak,readonly) id<CADDatabaseProvider> databaseProvider;              //@synthesize databaseProvider=_databaseProvider - In the implementation block
-(id)initWithDatabaseProvider:(id)arg1 ;
-(id<CADDatabaseProvider>)databaseProvider;
-(id)storeInfoList;
@end

