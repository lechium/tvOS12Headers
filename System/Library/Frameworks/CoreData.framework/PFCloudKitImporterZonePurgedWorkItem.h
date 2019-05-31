/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFCloudKitImporterWorkItem.h>

@class CKRecordZoneID;

@interface PFCloudKitImporterZonePurgedWorkItem : PFCloudKitImporterWorkItem {

	CKRecordZoneID* _purgedRecordZoneID;

}

@property (nonatomic,readonly) CKRecordZoneID * purgedRecordZoneID;              //@synthesize purgedRecordZoneID=_purgedRecordZoneID - In the implementation block
-(void)doWorkWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithPurgedRecordZoneID:(id)arg1 options:(id)arg2 metadata:(id)arg3 request:(id)arg4 ;
-(BOOL)wipeAllCloudDataAndPurgeHistoryToken:(BOOL)arg1 error:(id*)arg2 ;
-(CKRecordZoneID *)purgedRecordZoneID;
-(void)dealloc;
-(id)description;
@end

