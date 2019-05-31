/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreResult.h>

@interface NSPersistentHistoryResult : NSPersistentStoreResult {

	id _aggregatedResult;
	long long _resultType;

}

@property (readonly) id result;                         //@synthesize aggregatedResult=_aggregatedResult - In the implementation block
@property (readonly) long long resultType;              //@synthesize resultType=_resultType - In the implementation block
-(id)initWithResultType:(long long)arg1 andResult:(id)arg2 ;
-(id)initWithSubresults:(id)arg1 ;
-(long long)resultType;
-(void)dealloc;
-(id)description;
-(id)result;
@end
