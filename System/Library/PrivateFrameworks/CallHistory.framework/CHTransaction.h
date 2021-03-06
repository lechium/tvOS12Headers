/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface CHTransaction : NSObject <NSSecureCoding> {

	unsigned long long _transactionType;
	NSData* _record;

}

@property (nonatomic,readonly) unsigned long long transactionType;              //@synthesize transactionType=_transactionType - In the implementation block
@property (nonatomic,readonly) NSData * record;                                 //@synthesize record=_record - In the implementation block
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2 ;
+(id)toString:(unsigned long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSData *)record;
-(id)initWithType:(unsigned long long)arg1 andRecord:(id)arg2 ;
-(BOOL)isEqualToTransaction:(id)arg1 ;
-(id)archivedDataWithError:(id*)arg1 ;
-(id)initWithString:(id)arg1 andRecord:(id)arg2 ;
-(unsigned long long)transactionType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end

