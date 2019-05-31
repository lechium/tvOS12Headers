/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSDictionary;

@interface CKEvent : NSObject {

	NSString* _identifier;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDictionary* _metadata;

}

@property (nonatomic,retain,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) NSDate * startDate;                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain,readonly) NSDate * endDate;                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(id)previous;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSDictionary *)metadata;
-(id)next;
-(id)initWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4 ;
-(id)initWithEntity:(id)arg1 error:(id*)arg2 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
@end

