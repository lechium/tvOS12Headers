/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSTemporaryObjectID.h>

@class _NS128bitWrapper;

@interface _NSTemporaryObjectID2 : NSTemporaryObjectID {

	id _store;
	_NS128bitWrapper* _uuid128;

}
+(id)initWithEntity:(id)arg1 andUUIDString:(id)arg2 ;
-(id)persistentStore;
-(id)_storeIdentifier;
-(id)_referenceData;
-(void)_setPersistentStore:(id)arg1 ;
-(BOOL)_isPersistentStoreAlive;
-(void)finalize;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

