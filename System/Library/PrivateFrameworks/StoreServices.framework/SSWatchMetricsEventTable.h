/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSEventsTableBase.h>

@interface SSWatchMetricsEventTable : SSEventsTableBase
+(id)databasePath;
-(BOOL)_setupDatabase;
-(BOOL)_migrateToVersion1;
-(BOOL)_migrateToVersion2;
-(BOOL)_migrateToVersion3;
-(BOOL)_migrateToVersion4;
-(BOOL)_migrateToVersion5;
-(BOOL)_migrateToVersion6;
-(BOOL)_migrateToVersion7;
@end

