/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSDate;

@interface NSPersistentHistoryChangeRequestToken : NSObject <NSSecureCoding> {

	NSDictionary* _token;
	NSDate* _date;
	long long _resultType;
	BOOL _delete;
	BOOL _transactionFromToken;
	unsigned long long _fetchLimit;
	unsigned long long _fetchBatchSize;

}

@property (nonatomic,retain,readonly) NSDictionary * token;                    //@synthesize token=_token - In the implementation block
@property (nonatomic,retain,readonly) NSDate * date;                           //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long resultType;                           //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) BOOL delete;                                    //@synthesize delete=_delete - In the implementation block
@property (nonatomic,readonly) BOOL transactionFromToken;                      //@synthesize transactionFromToken=_transactionFromToken - In the implementation block
@property (nonatomic,readonly) unsigned long long fetchLimit;                  //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long fetchBatchSize;              //@synthesize fetchBatchSize=_fetchBatchSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initForRequest:(id)arg1 ;
-(BOOL)transactionFromToken;
-(long long)resultType;
-(BOOL)delete;
-(unsigned long long)fetchBatchSize;
-(unsigned long long)fetchLimit;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSDictionary *)token;
@end
