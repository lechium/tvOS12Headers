/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _DKSyncDeletedEventIDs : NSObject {

	NSMutableDictionary* _deletedEventIDsBySourceDeviceID;

}
-(void)addDeletedEventID:(id)arg1 forSourceDeviceID:(id)arg2 ;
-(id)sourceDeviceIDs;
-(id)deletedEventIDsForSourceDeviceID:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
@end
