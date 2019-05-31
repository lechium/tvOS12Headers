/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ACDQueueDictionary : NSObject {

	NSMutableDictionary* _allQueuesByID;

}
-(BOOL)isQueueEmptyForKey:(id)arg1 ;
-(void)addObject:(id)arg1 toQueueForKey:(id)arg2 ;
-(id)dequeueFirstObjectInQueueForKey:(id)arg1 ;
-(id)firstObjectInQueueForKey:(id)arg1 ;
-(id)dequeueAllObjectsInQueueForKey:(id)arg1 ;
-(id)keyForRandomQueue;
-(id)init;
-(id)description;
-(BOOL)isEmpty;
@end
