/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface PSAppCellularManagementCache : NSObject {

	NSSet* _managedCellDataAppCache;

}

@property (retain) NSSet * managedCellDataAppCache;                      //@synthesize managedCellDataAppCache=_managedCellDataAppCache - In the implementation block
@property (nonatomic,readonly) BOOL hasManagedCellularData; 
+(id)sharedInstance;
-(id)initPrivate;
-(void)setManagedCellDataAppCache:(NSSet *)arg1 ;
-(NSSet *)managedCellDataAppCache;
-(id)managedAppBundleIDs;
-(id)managedCellDataAppBundleIDs;
-(BOOL)hasManagedCellularData;
-(BOOL)isManaged:(id)arg1 ;
-(id)init;
-(void)willEnterForeground;
@end

